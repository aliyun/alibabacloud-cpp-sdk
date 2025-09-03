// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKDASHVECTORPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKDASHVECTORPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDashVectorParametersPartition.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDashVectorParametersPrimaryKeyId.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDashVectorParametersVector.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSinkSinkDashVectorParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSinkSinkDashVectorParameters& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSinkSinkDashVectorParameters& obj) { 
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
    UpdateEventStreamingRequestSinkSinkDashVectorParameters() = default ;
    UpdateEventStreamingRequestSinkSinkDashVectorParameters(const UpdateEventStreamingRequestSinkSinkDashVectorParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkDashVectorParameters(UpdateEventStreamingRequestSinkSinkDashVectorParameters &&) = default ;
    UpdateEventStreamingRequestSinkSinkDashVectorParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSinkSinkDashVectorParameters() = default ;
    UpdateEventStreamingRequestSinkSinkDashVectorParameters& operator=(const UpdateEventStreamingRequestSinkSinkDashVectorParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkDashVectorParameters& operator=(UpdateEventStreamingRequestSinkSinkDashVectorParameters &&) = default ;
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
    inline UpdateEventStreamingRequestSinkSinkDashVectorParameters& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string collection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParameters& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // dashVectorSchemaParameters Field Functions 
    bool hasDashVectorSchemaParameters() const { return this->dashVectorSchemaParameters_ != nullptr;};
    void deleteDashVectorSchemaParameters() { this->dashVectorSchemaParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters & dashVectorSchemaParameters() const { DARABONBA_PTR_GET_CONST(dashVectorSchemaParameters_, Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters dashVectorSchemaParameters() { DARABONBA_PTR_GET(dashVectorSchemaParameters_, Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters) };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParameters& setDashVectorSchemaParameters(const Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters & dashVectorSchemaParameters) { DARABONBA_PTR_SET_VALUE(dashVectorSchemaParameters_, dashVectorSchemaParameters) };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParameters& setDashVectorSchemaParameters(Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters && dashVectorSchemaParameters) { DARABONBA_PTR_SET_RVALUE(dashVectorSchemaParameters_, dashVectorSchemaParameters) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string network() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParameters& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParameters& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersPartition & partition() const { DARABONBA_PTR_GET_CONST(partition_, Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersPartition) };
    inline Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersPartition partition() { DARABONBA_PTR_GET(partition_, Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersPartition) };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParameters& setPartition(const Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersPartition & partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParameters& setPartition(Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersPartition && partition) { DARABONBA_PTR_SET_RVALUE(partition_, partition) };


    // primaryKeyId Field Functions 
    bool hasPrimaryKeyId() const { return this->primaryKeyId_ != nullptr;};
    void deletePrimaryKeyId() { this->primaryKeyId_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersPrimaryKeyId & primaryKeyId() const { DARABONBA_PTR_GET_CONST(primaryKeyId_, Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersPrimaryKeyId) };
    inline Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersPrimaryKeyId primaryKeyId() { DARABONBA_PTR_GET(primaryKeyId_, Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersPrimaryKeyId) };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParameters& setPrimaryKeyId(const Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersPrimaryKeyId & primaryKeyId) { DARABONBA_PTR_SET_VALUE(primaryKeyId_, primaryKeyId) };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParameters& setPrimaryKeyId(Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersPrimaryKeyId && primaryKeyId) { DARABONBA_PTR_SET_RVALUE(primaryKeyId_, primaryKeyId) };


    // vector Field Functions 
    bool hasVector() const { return this->vector_ != nullptr;};
    void deleteVector() { this->vector_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersVector & _vector() const { DARABONBA_PTR_GET_CONST(vector_, Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersVector) };
    inline Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersVector _vector() { DARABONBA_PTR_GET(vector_, Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersVector) };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParameters& setVector(const Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersVector & _vector) { DARABONBA_PTR_SET_VALUE(vector_, _vector) };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParameters& setVector(Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersVector && _vector) { DARABONBA_PTR_SET_RVALUE(vector_, _vector) };


  protected:
    // The API key that you want to create in the DashVector console.
    std::shared_ptr<string> apiKey_ = nullptr;
    // The collection name.
    std::shared_ptr<string> collection_ = nullptr;
    // The parameters in the Schema field of the table when data is inserted into DashVector. After the event content is transformed, the data must be in JSON format.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters> dashVectorSchemaParameters_ = nullptr;
    // The ID of the DashVector instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The network type. Valid values:
    // 
    // *   PrivateNetwork
    // *   PublicNetwork
    std::shared_ptr<string> network_ = nullptr;
    // The type of operation that you want to perform on the DashVector database. Valid values:
    // 
    // *   Delete
    // *   Upsert
    std::shared_ptr<string> operation_ = nullptr;
    // The partition. Default value: default.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersPartition> partition_ = nullptr;
    // The ID of the primary key that you want to use when you insert or delete records. If you do not specify this parameter, a random primary key ID is returned.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersPrimaryKeyId> primaryKeyId_ = nullptr;
    // The vector that is recorded when data is inserted into DashVector.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDashVectorParametersVector> vector_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
