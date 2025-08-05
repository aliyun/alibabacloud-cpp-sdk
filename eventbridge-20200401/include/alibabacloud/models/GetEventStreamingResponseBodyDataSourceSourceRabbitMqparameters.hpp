// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASOURCESOURCERABBITMQPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASOURCESOURCERABBITMQPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VirtualHostName, virtualHostName_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VirtualHostName, virtualHostName_);
    };
    GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters() = default ;
    GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters(const GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters &) = default ;
    GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters(GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters &&) = default ;
    GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters() = default ;
    GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters& operator=(const GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters &) = default ;
    GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters& operator=(GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->queueName_ != nullptr && this->regionId_ != nullptr && this->virtualHostName_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // virtualHostName Field Functions 
    bool hasVirtualHostName() const { return this->virtualHostName_ != nullptr;};
    void deleteVirtualHostName() { this->virtualHostName_ = nullptr;};
    inline string virtualHostName() const { DARABONBA_PTR_GET_DEFAULT(virtualHostName_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters& setVirtualHostName(string virtualHostName) { DARABONBA_PTR_SET_VALUE(virtualHostName_, virtualHostName) };


  protected:
    // The ID of the Message Queue for RabbitMQ instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the queue in the Message Queue for RabbitMQ instance.
    std::shared_ptr<string> queueName_ = nullptr;
    // The region ID of the Message Queue for RabbitMQ instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The vhost name of the Message Queue for RabbitMQ instance.
    std::shared_ptr<string> virtualHostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
