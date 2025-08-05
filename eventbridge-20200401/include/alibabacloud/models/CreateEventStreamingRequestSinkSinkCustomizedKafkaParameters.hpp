// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKCUSTOMIZEDKAFKAPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKCUSTOMIZEDKAFKAPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters() = default ;
    CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters(const CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters &) = default ;
    CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters(CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters &&) = default ;
    CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters() = default ;
    CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters& operator=(const CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters &) = default ;
    CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters& operator=(CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
