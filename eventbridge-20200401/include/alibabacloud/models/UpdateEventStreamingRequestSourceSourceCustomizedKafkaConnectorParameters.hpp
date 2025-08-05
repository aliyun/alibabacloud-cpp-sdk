// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSOURCESOURCECUSTOMIZEDKAFKACONNECTORPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSOURCESOURCECUSTOMIZEDKAFKACONNECTORPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorPackageUrl, connectorPackageUrl_);
      DARABONBA_PTR_TO_JSON(ConnectorParameters, connectorParameters_);
      DARABONBA_ANY_TO_JSON(WorkerParameters, workerParameters_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorPackageUrl, connectorPackageUrl_);
      DARABONBA_PTR_FROM_JSON(ConnectorParameters, connectorParameters_);
      DARABONBA_ANY_FROM_JSON(WorkerParameters, workerParameters_);
    };
    UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters() = default ;
    UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters(const UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters &) = default ;
    UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters(UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters &&) = default ;
    UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters() = default ;
    UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters& operator=(const UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters &) = default ;
    UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters& operator=(UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectorPackageUrl_ != nullptr
        && this->connectorParameters_ != nullptr && this->workerParameters_ != nullptr; };
    // connectorPackageUrl Field Functions 
    bool hasConnectorPackageUrl() const { return this->connectorPackageUrl_ != nullptr;};
    void deleteConnectorPackageUrl() { this->connectorPackageUrl_ = nullptr;};
    inline string connectorPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(connectorPackageUrl_, "") };
    inline UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters& setConnectorPackageUrl(string connectorPackageUrl) { DARABONBA_PTR_SET_VALUE(connectorPackageUrl_, connectorPackageUrl) };


    // connectorParameters Field Functions 
    bool hasConnectorParameters() const { return this->connectorParameters_ != nullptr;};
    void deleteConnectorParameters() { this->connectorParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters & connectorParameters() const { DARABONBA_PTR_GET_CONST(connectorParameters_, Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters) };
    inline Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters connectorParameters() { DARABONBA_PTR_GET(connectorParameters_, Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters) };
    inline UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters& setConnectorParameters(const Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters & connectorParameters) { DARABONBA_PTR_SET_VALUE(connectorParameters_, connectorParameters) };
    inline UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters& setConnectorParameters(Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters && connectorParameters) { DARABONBA_PTR_SET_RVALUE(connectorParameters_, connectorParameters) };


    // workerParameters Field Functions 
    bool hasWorkerParameters() const { return this->workerParameters_ != nullptr;};
    void deleteWorkerParameters() { this->workerParameters_ = nullptr;};
    inline     const Darabonba::Json & workerParameters() const { DARABONBA_GET(workerParameters_) };
    Darabonba::Json & workerParameters() { DARABONBA_GET(workerParameters_) };
    inline UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters& setWorkerParameters(const Darabonba::Json & workerParameters) { DARABONBA_SET_VALUE(workerParameters_, workerParameters) };
    inline UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters& setWorkerParameters(Darabonba::Json & workerParameters) { DARABONBA_SET_RVALUE(workerParameters_, workerParameters) };


  protected:
    std::shared_ptr<string> connectorPackageUrl_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParametersConnectorParameters> connectorParameters_ = nullptr;
    Darabonba::Json workerParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
