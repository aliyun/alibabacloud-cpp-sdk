// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKCUSTOMIZEDKAFKACONNECTORPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKCUSTOMIZEDKAFKACONNECTORPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParametersConnectorParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorPackageUrl, connectorPackageUrl_);
      DARABONBA_PTR_TO_JSON(ConnectorParameters, connectorParameters_);
      DARABONBA_ANY_TO_JSON(WorkerParameters, workerParameters_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorPackageUrl, connectorPackageUrl_);
      DARABONBA_PTR_FROM_JSON(ConnectorParameters, connectorParameters_);
      DARABONBA_ANY_FROM_JSON(WorkerParameters, workerParameters_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters &&) = default ;
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
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters& setConnectorPackageUrl(string connectorPackageUrl) { DARABONBA_PTR_SET_VALUE(connectorPackageUrl_, connectorPackageUrl) };


    // connectorParameters Field Functions 
    bool hasConnectorParameters() const { return this->connectorParameters_ != nullptr;};
    void deleteConnectorParameters() { this->connectorParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParametersConnectorParameters & connectorParameters() const { DARABONBA_PTR_GET_CONST(connectorParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParametersConnectorParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParametersConnectorParameters connectorParameters() { DARABONBA_PTR_GET(connectorParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParametersConnectorParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters& setConnectorParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParametersConnectorParameters & connectorParameters) { DARABONBA_PTR_SET_VALUE(connectorParameters_, connectorParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters& setConnectorParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParametersConnectorParameters && connectorParameters) { DARABONBA_PTR_SET_RVALUE(connectorParameters_, connectorParameters) };


    // workerParameters Field Functions 
    bool hasWorkerParameters() const { return this->workerParameters_ != nullptr;};
    void deleteWorkerParameters() { this->workerParameters_ = nullptr;};
    inline     const Darabonba::Json & workerParameters() const { DARABONBA_GET(workerParameters_) };
    Darabonba::Json & workerParameters() { DARABONBA_GET(workerParameters_) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters& setWorkerParameters(const Darabonba::Json & workerParameters) { DARABONBA_SET_VALUE(workerParameters_, workerParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters& setWorkerParameters(Darabonba::Json & workerParameters) { DARABONBA_SET_RVALUE(workerParameters_, workerParameters) };


  protected:
    std::shared_ptr<string> connectorPackageUrl_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParametersConnectorParameters> connectorParameters_ = nullptr;
    Darabonba::Json workerParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
