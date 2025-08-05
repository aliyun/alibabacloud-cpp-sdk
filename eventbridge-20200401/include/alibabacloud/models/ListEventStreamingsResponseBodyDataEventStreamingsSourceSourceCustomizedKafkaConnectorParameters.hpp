// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSOURCESOURCECUSTOMIZEDKAFKACONNECTORPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSOURCESOURCECUSTOMIZEDKAFKACONNECTORPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParametersConnectorParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorPackageUrl, connectorPackageUrl_);
      DARABONBA_PTR_TO_JSON(ConnectorParameters, connectorParameters_);
      DARABONBA_ANY_TO_JSON(WorkerParameters, workerParameters_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorPackageUrl, connectorPackageUrl_);
      DARABONBA_PTR_FROM_JSON(ConnectorParameters, connectorParameters_);
      DARABONBA_ANY_FROM_JSON(WorkerParameters, workerParameters_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters(const ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters(ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters &&) = default ;
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
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters& setConnectorPackageUrl(string connectorPackageUrl) { DARABONBA_PTR_SET_VALUE(connectorPackageUrl_, connectorPackageUrl) };


    // connectorParameters Field Functions 
    bool hasConnectorParameters() const { return this->connectorParameters_ != nullptr;};
    void deleteConnectorParameters() { this->connectorParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParametersConnectorParameters & connectorParameters() const { DARABONBA_PTR_GET_CONST(connectorParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParametersConnectorParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParametersConnectorParameters connectorParameters() { DARABONBA_PTR_GET(connectorParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParametersConnectorParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters& setConnectorParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParametersConnectorParameters & connectorParameters) { DARABONBA_PTR_SET_VALUE(connectorParameters_, connectorParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters& setConnectorParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParametersConnectorParameters && connectorParameters) { DARABONBA_PTR_SET_RVALUE(connectorParameters_, connectorParameters) };


    // workerParameters Field Functions 
    bool hasWorkerParameters() const { return this->workerParameters_ != nullptr;};
    void deleteWorkerParameters() { this->workerParameters_ = nullptr;};
    inline     const Darabonba::Json & workerParameters() const { DARABONBA_GET(workerParameters_) };
    Darabonba::Json & workerParameters() { DARABONBA_GET(workerParameters_) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters& setWorkerParameters(const Darabonba::Json & workerParameters) { DARABONBA_SET_VALUE(workerParameters_, workerParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters& setWorkerParameters(Darabonba::Json & workerParameters) { DARABONBA_SET_RVALUE(workerParameters_, workerParameters) };


  protected:
    std::shared_ptr<string> connectorPackageUrl_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParametersConnectorParameters> connectorParameters_ = nullptr;
    Darabonba::Json workerParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
