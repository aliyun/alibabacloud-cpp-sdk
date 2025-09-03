// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKDASHVECTORPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKDASHVECTORPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDashVectorParametersPartition.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDashVectorParametersPrimaryKeyId.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDashVectorParametersVector.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSinkSinkDashVectorParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSinkSinkDashVectorParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(DashVectorSchemaParameters, dashVectorSchemaParameters_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Partition, partition_);
      DARABONBA_PTR_TO_JSON(PrimaryKeyId, primaryKeyId_);
      DARABONBA_PTR_TO_JSON(Vector, vector_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSinkSinkDashVectorParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(DashVectorSchemaParameters, dashVectorSchemaParameters_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Partition, partition_);
      DARABONBA_PTR_FROM_JSON(PrimaryKeyId, primaryKeyId_);
      DARABONBA_PTR_FROM_JSON(Vector, vector_);
    };
    CreateEventStreamingRequestSinkSinkDashVectorParameters() = default ;
    CreateEventStreamingRequestSinkSinkDashVectorParameters(const CreateEventStreamingRequestSinkSinkDashVectorParameters &) = default ;
    CreateEventStreamingRequestSinkSinkDashVectorParameters(CreateEventStreamingRequestSinkSinkDashVectorParameters &&) = default ;
    CreateEventStreamingRequestSinkSinkDashVectorParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSinkSinkDashVectorParameters() = default ;
    CreateEventStreamingRequestSinkSinkDashVectorParameters& operator=(const CreateEventStreamingRequestSinkSinkDashVectorParameters &) = default ;
    CreateEventStreamingRequestSinkSinkDashVectorParameters& operator=(CreateEventStreamingRequestSinkSinkDashVectorParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiKey_ != nullptr
        && this->collection_ != nullptr && this->dashVectorSchemaParameters_ != nullptr && this->instanceId_ != nullptr && this->network_ != nullptr && this->operation_ != nullptr
        && this->partition_ != nullptr && this->primaryKeyId_ != nullptr && this->vector_ != nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline CreateEventStreamingRequestSinkSinkDashVectorParameters& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string collection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline CreateEventStreamingRequestSinkSinkDashVectorParameters& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // dashVectorSchemaParameters Field Functions 
    bool hasDashVectorSchemaParameters() const { return this->dashVectorSchemaParameters_ != nullptr;};
    void deleteDashVectorSchemaParameters() { this->dashVectorSchemaParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters & dashVectorSchemaParameters() const { DARABONBA_PTR_GET_CONST(dashVectorSchemaParameters_, Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters dashVectorSchemaParameters() { DARABONBA_PTR_GET(dashVectorSchemaParameters_, Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters) };
    inline CreateEventStreamingRequestSinkSinkDashVectorParameters& setDashVectorSchemaParameters(const Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters & dashVectorSchemaParameters) { DARABONBA_PTR_SET_VALUE(dashVectorSchemaParameters_, dashVectorSchemaParameters) };
    inline CreateEventStreamingRequestSinkSinkDashVectorParameters& setDashVectorSchemaParameters(Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters && dashVectorSchemaParameters) { DARABONBA_PTR_SET_RVALUE(dashVectorSchemaParameters_, dashVectorSchemaParameters) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateEventStreamingRequestSinkSinkDashVectorParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string network() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline CreateEventStreamingRequestSinkSinkDashVectorParameters& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline CreateEventStreamingRequestSinkSinkDashVectorParameters& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDashVectorParametersPartition & partition() const { DARABONBA_PTR_GET_CONST(partition_, Models::CreateEventStreamingRequestSinkSinkDashVectorParametersPartition) };
    inline Models::CreateEventStreamingRequestSinkSinkDashVectorParametersPartition partition() { DARABONBA_PTR_GET(partition_, Models::CreateEventStreamingRequestSinkSinkDashVectorParametersPartition) };
    inline CreateEventStreamingRequestSinkSinkDashVectorParameters& setPartition(const Models::CreateEventStreamingRequestSinkSinkDashVectorParametersPartition & partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };
    inline CreateEventStreamingRequestSinkSinkDashVectorParameters& setPartition(Models::CreateEventStreamingRequestSinkSinkDashVectorParametersPartition && partition) { DARABONBA_PTR_SET_RVALUE(partition_, partition) };


    // primaryKeyId Field Functions 
    bool hasPrimaryKeyId() const { return this->primaryKeyId_ != nullptr;};
    void deletePrimaryKeyId() { this->primaryKeyId_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDashVectorParametersPrimaryKeyId & primaryKeyId() const { DARABONBA_PTR_GET_CONST(primaryKeyId_, Models::CreateEventStreamingRequestSinkSinkDashVectorParametersPrimaryKeyId) };
    inline Models::CreateEventStreamingRequestSinkSinkDashVectorParametersPrimaryKeyId primaryKeyId() { DARABONBA_PTR_GET(primaryKeyId_, Models::CreateEventStreamingRequestSinkSinkDashVectorParametersPrimaryKeyId) };
    inline CreateEventStreamingRequestSinkSinkDashVectorParameters& setPrimaryKeyId(const Models::CreateEventStreamingRequestSinkSinkDashVectorParametersPrimaryKeyId & primaryKeyId) { DARABONBA_PTR_SET_VALUE(primaryKeyId_, primaryKeyId) };
    inline CreateEventStreamingRequestSinkSinkDashVectorParameters& setPrimaryKeyId(Models::CreateEventStreamingRequestSinkSinkDashVectorParametersPrimaryKeyId && primaryKeyId) { DARABONBA_PTR_SET_RVALUE(primaryKeyId_, primaryKeyId) };


    // vector Field Functions 
    bool hasVector() const { return this->vector_ != nullptr;};
    void deleteVector() { this->vector_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDashVectorParametersVector & _vector() const { DARABONBA_PTR_GET_CONST(vector_, Models::CreateEventStreamingRequestSinkSinkDashVectorParametersVector) };
    inline Models::CreateEventStreamingRequestSinkSinkDashVectorParametersVector _vector() { DARABONBA_PTR_GET(vector_, Models::CreateEventStreamingRequestSinkSinkDashVectorParametersVector) };
    inline CreateEventStreamingRequestSinkSinkDashVectorParameters& setVector(const Models::CreateEventStreamingRequestSinkSinkDashVectorParametersVector & _vector) { DARABONBA_PTR_SET_VALUE(vector_, _vector) };
    inline CreateEventStreamingRequestSinkSinkDashVectorParameters& setVector(Models::CreateEventStreamingRequestSinkSinkDashVectorParametersVector && _vector) { DARABONBA_PTR_SET_RVALUE(vector_, _vector) };


  protected:
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<string> collection_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters> dashVectorSchemaParameters_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> network_ = nullptr;
    std::shared_ptr<string> operation_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDashVectorParametersPartition> partition_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDashVectorParametersPrimaryKeyId> primaryKeyId_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDashVectorParametersVector> vector_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
