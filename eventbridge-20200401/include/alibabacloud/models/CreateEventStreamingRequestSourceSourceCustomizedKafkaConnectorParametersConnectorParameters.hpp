// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSOURCESOURCECUSTOMIZEDKAFKACONNECTORPARAMETERSCONNECTORPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSOURCESOURCECUSTOMIZEDKAFKACONNECTORPARAMETERSCONNECTORPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters& obj) { 
      DARABONBA_ANY_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters& obj) { 
      DARABONBA_ANY_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters() = default ;
    CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters(const CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters &) = default ;
    CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters(CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters &&) = default ;
    CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters() = default ;
    CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters& operator=(const CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters &) = default ;
    CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters& operator=(CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->name_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline     const Darabonba::Json & config() const { DARABONBA_GET(config_) };
    Darabonba::Json & config() { DARABONBA_GET(config_) };
    inline CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
    inline CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters& setConfig(Darabonba::Json & config) { DARABONBA_SET_RVALUE(config_, config) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    Darabonba::Json config_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
