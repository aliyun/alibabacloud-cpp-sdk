// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSOURCESOURCEMQTTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSOURCESOURCEMQTTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters& obj) { 
      DARABONBA_PTR_TO_JSON(BodyDataType, bodyDataType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyDataType, bodyDataType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters(const ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters(ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters &&) = default ;
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
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters& setBodyDataType(string bodyDataType) { DARABONBA_PTR_SET_VALUE(bodyDataType_, bodyDataType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


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
