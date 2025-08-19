// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTSOURCEPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_EVENTSOURCEPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SourceDTSParameters.hpp>
#include <alibabacloud/models/SourceKafkaParameters.hpp>
#include <alibabacloud/models/SourceMNSParameters.hpp>
#include <alibabacloud/models/SourceMQTTParameters.hpp>
#include <alibabacloud/models/SourceRabbitMQParameters.hpp>
#include <alibabacloud/models/SourceRocketMQParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class EventSourceParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventSourceParameters& obj) { 
      DARABONBA_PTR_TO_JSON(sourceDTSParameters, sourceDTSParameters_);
      DARABONBA_PTR_TO_JSON(sourceKafkaParameters, sourceKafkaParameters_);
      DARABONBA_PTR_TO_JSON(sourceMNSParameters, sourceMNSParameters_);
      DARABONBA_PTR_TO_JSON(sourceMQTTParameters, sourceMQTTParameters_);
      DARABONBA_PTR_TO_JSON(sourceRabbitMQParameters, sourceRabbitMQParameters_);
      DARABONBA_PTR_TO_JSON(sourceRocketMQParameters, sourceRocketMQParameters_);
    };
    friend void from_json(const Darabonba::Json& j, EventSourceParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(sourceDTSParameters, sourceDTSParameters_);
      DARABONBA_PTR_FROM_JSON(sourceKafkaParameters, sourceKafkaParameters_);
      DARABONBA_PTR_FROM_JSON(sourceMNSParameters, sourceMNSParameters_);
      DARABONBA_PTR_FROM_JSON(sourceMQTTParameters, sourceMQTTParameters_);
      DARABONBA_PTR_FROM_JSON(sourceRabbitMQParameters, sourceRabbitMQParameters_);
      DARABONBA_PTR_FROM_JSON(sourceRocketMQParameters, sourceRocketMQParameters_);
    };
    EventSourceParameters() = default ;
    EventSourceParameters(const EventSourceParameters &) = default ;
    EventSourceParameters(EventSourceParameters &&) = default ;
    EventSourceParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventSourceParameters() = default ;
    EventSourceParameters& operator=(const EventSourceParameters &) = default ;
    EventSourceParameters& operator=(EventSourceParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceDTSParameters_ != nullptr
        && this->sourceKafkaParameters_ != nullptr && this->sourceMNSParameters_ != nullptr && this->sourceMQTTParameters_ != nullptr && this->sourceRabbitMQParameters_ != nullptr && this->sourceRocketMQParameters_ != nullptr; };
    // sourceDTSParameters Field Functions 
    bool hasSourceDTSParameters() const { return this->sourceDTSParameters_ != nullptr;};
    void deleteSourceDTSParameters() { this->sourceDTSParameters_ = nullptr;};
    inline const SourceDTSParameters & sourceDTSParameters() const { DARABONBA_PTR_GET_CONST(sourceDTSParameters_, SourceDTSParameters) };
    inline SourceDTSParameters sourceDTSParameters() { DARABONBA_PTR_GET(sourceDTSParameters_, SourceDTSParameters) };
    inline EventSourceParameters& setSourceDTSParameters(const SourceDTSParameters & sourceDTSParameters) { DARABONBA_PTR_SET_VALUE(sourceDTSParameters_, sourceDTSParameters) };
    inline EventSourceParameters& setSourceDTSParameters(SourceDTSParameters && sourceDTSParameters) { DARABONBA_PTR_SET_RVALUE(sourceDTSParameters_, sourceDTSParameters) };


    // sourceKafkaParameters Field Functions 
    bool hasSourceKafkaParameters() const { return this->sourceKafkaParameters_ != nullptr;};
    void deleteSourceKafkaParameters() { this->sourceKafkaParameters_ = nullptr;};
    inline const SourceKafkaParameters & sourceKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceKafkaParameters_, SourceKafkaParameters) };
    inline SourceKafkaParameters sourceKafkaParameters() { DARABONBA_PTR_GET(sourceKafkaParameters_, SourceKafkaParameters) };
    inline EventSourceParameters& setSourceKafkaParameters(const SourceKafkaParameters & sourceKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceKafkaParameters_, sourceKafkaParameters) };
    inline EventSourceParameters& setSourceKafkaParameters(SourceKafkaParameters && sourceKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceKafkaParameters_, sourceKafkaParameters) };


    // sourceMNSParameters Field Functions 
    bool hasSourceMNSParameters() const { return this->sourceMNSParameters_ != nullptr;};
    void deleteSourceMNSParameters() { this->sourceMNSParameters_ = nullptr;};
    inline const SourceMNSParameters & sourceMNSParameters() const { DARABONBA_PTR_GET_CONST(sourceMNSParameters_, SourceMNSParameters) };
    inline SourceMNSParameters sourceMNSParameters() { DARABONBA_PTR_GET(sourceMNSParameters_, SourceMNSParameters) };
    inline EventSourceParameters& setSourceMNSParameters(const SourceMNSParameters & sourceMNSParameters) { DARABONBA_PTR_SET_VALUE(sourceMNSParameters_, sourceMNSParameters) };
    inline EventSourceParameters& setSourceMNSParameters(SourceMNSParameters && sourceMNSParameters) { DARABONBA_PTR_SET_RVALUE(sourceMNSParameters_, sourceMNSParameters) };


    // sourceMQTTParameters Field Functions 
    bool hasSourceMQTTParameters() const { return this->sourceMQTTParameters_ != nullptr;};
    void deleteSourceMQTTParameters() { this->sourceMQTTParameters_ = nullptr;};
    inline const SourceMQTTParameters & sourceMQTTParameters() const { DARABONBA_PTR_GET_CONST(sourceMQTTParameters_, SourceMQTTParameters) };
    inline SourceMQTTParameters sourceMQTTParameters() { DARABONBA_PTR_GET(sourceMQTTParameters_, SourceMQTTParameters) };
    inline EventSourceParameters& setSourceMQTTParameters(const SourceMQTTParameters & sourceMQTTParameters) { DARABONBA_PTR_SET_VALUE(sourceMQTTParameters_, sourceMQTTParameters) };
    inline EventSourceParameters& setSourceMQTTParameters(SourceMQTTParameters && sourceMQTTParameters) { DARABONBA_PTR_SET_RVALUE(sourceMQTTParameters_, sourceMQTTParameters) };


    // sourceRabbitMQParameters Field Functions 
    bool hasSourceRabbitMQParameters() const { return this->sourceRabbitMQParameters_ != nullptr;};
    void deleteSourceRabbitMQParameters() { this->sourceRabbitMQParameters_ = nullptr;};
    inline const SourceRabbitMQParameters & sourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRabbitMQParameters_, SourceRabbitMQParameters) };
    inline SourceRabbitMQParameters sourceRabbitMQParameters() { DARABONBA_PTR_GET(sourceRabbitMQParameters_, SourceRabbitMQParameters) };
    inline EventSourceParameters& setSourceRabbitMQParameters(const SourceRabbitMQParameters & sourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };
    inline EventSourceParameters& setSourceRabbitMQParameters(SourceRabbitMQParameters && sourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };


    // sourceRocketMQParameters Field Functions 
    bool hasSourceRocketMQParameters() const { return this->sourceRocketMQParameters_ != nullptr;};
    void deleteSourceRocketMQParameters() { this->sourceRocketMQParameters_ = nullptr;};
    inline const SourceRocketMQParameters & sourceRocketMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRocketMQParameters_, SourceRocketMQParameters) };
    inline SourceRocketMQParameters sourceRocketMQParameters() { DARABONBA_PTR_GET(sourceRocketMQParameters_, SourceRocketMQParameters) };
    inline EventSourceParameters& setSourceRocketMQParameters(const SourceRocketMQParameters & sourceRocketMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };
    inline EventSourceParameters& setSourceRocketMQParameters(SourceRocketMQParameters && sourceRocketMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };


  protected:
    std::shared_ptr<SourceDTSParameters> sourceDTSParameters_ = nullptr;
    std::shared_ptr<SourceKafkaParameters> sourceKafkaParameters_ = nullptr;
    std::shared_ptr<SourceMNSParameters> sourceMNSParameters_ = nullptr;
    std::shared_ptr<SourceMQTTParameters> sourceMQTTParameters_ = nullptr;
    std::shared_ptr<SourceRabbitMQParameters> sourceRabbitMQParameters_ = nullptr;
    std::shared_ptr<SourceRocketMQParameters> sourceRocketMQParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
