// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMIGRATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMIGRATIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateMigrationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMigrationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(httpApiId, httpApiId_);
      DARABONBA_PTR_TO_JSON(ingressClass, ingressClass_);
      DARABONBA_PTR_TO_JSON(migrationType, migrationType_);
      DARABONBA_PTR_TO_JSON(watchNamespace, watchNamespace_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMigrationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(httpApiId, httpApiId_);
      DARABONBA_PTR_FROM_JSON(ingressClass, ingressClass_);
      DARABONBA_PTR_FROM_JSON(migrationType, migrationType_);
      DARABONBA_PTR_FROM_JSON(watchNamespace, watchNamespace_);
    };
    CreateMigrationTaskRequest() = default ;
    CreateMigrationTaskRequest(const CreateMigrationTaskRequest &) = default ;
    CreateMigrationTaskRequest(CreateMigrationTaskRequest &&) = default ;
    CreateMigrationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMigrationTaskRequest() = default ;
    CreateMigrationTaskRequest& operator=(const CreateMigrationTaskRequest &) = default ;
    CreateMigrationTaskRequest& operator=(CreateMigrationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->description_ == nullptr && this->environmentId_ == nullptr && this->gatewayId_ == nullptr && this->httpApiId_ == nullptr && this->ingressClass_ == nullptr
        && this->migrationType_ == nullptr && this->watchNamespace_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateMigrationTaskRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateMigrationTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline CreateMigrationTaskRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline CreateMigrationTaskRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // httpApiId Field Functions 
    bool hasHttpApiId() const { return this->httpApiId_ != nullptr;};
    void deleteHttpApiId() { this->httpApiId_ = nullptr;};
    inline string getHttpApiId() const { DARABONBA_PTR_GET_DEFAULT(httpApiId_, "") };
    inline CreateMigrationTaskRequest& setHttpApiId(string httpApiId) { DARABONBA_PTR_SET_VALUE(httpApiId_, httpApiId) };


    // ingressClass Field Functions 
    bool hasIngressClass() const { return this->ingressClass_ != nullptr;};
    void deleteIngressClass() { this->ingressClass_ = nullptr;};
    inline string getIngressClass() const { DARABONBA_PTR_GET_DEFAULT(ingressClass_, "") };
    inline CreateMigrationTaskRequest& setIngressClass(string ingressClass) { DARABONBA_PTR_SET_VALUE(ingressClass_, ingressClass) };


    // migrationType Field Functions 
    bool hasMigrationType() const { return this->migrationType_ != nullptr;};
    void deleteMigrationType() { this->migrationType_ = nullptr;};
    inline string getMigrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
    inline CreateMigrationTaskRequest& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


    // watchNamespace Field Functions 
    bool hasWatchNamespace() const { return this->watchNamespace_ != nullptr;};
    void deleteWatchNamespace() { this->watchNamespace_ = nullptr;};
    inline string getWatchNamespace() const { DARABONBA_PTR_GET_DEFAULT(watchNamespace_, "") };
    inline CreateMigrationTaskRequest& setWatchNamespace(string watchNamespace) { DARABONBA_PTR_SET_VALUE(watchNamespace_, watchNamespace) };


  protected:
    // The ID of the source ACK cluster. It must match the cluster in the IngressInfo of the API. Note: This parameter is required. If it is not provided, the API returns a 400 InvalidParameter.IsEmpty error.
    shared_ptr<string> clusterId_ {};
    // The task description. It is stored in the database only when the task is created.
    shared_ptr<string> description_ {};
    // The ID of the destination environment. It must match the Ingress import environment of the API. Note: This parameter is required. If it is not provided, the API returns a 400 InvalidParameter.IsEmpty error. You can call ListEnvironments to query existing environment IDs. CreateEnvironment is deprecated.
    shared_ptr<string> environmentId_ {};
    // The ID of the destination gateway to which migration traffic is switched.
    shared_ptr<string> gatewayId_ {};
    // The ID of the HTTP API. The API must be imported as an Ingress type (HttpIngress) API. Note: This parameter is required. If it is not provided, the API returns a 400 InvalidParameter.IsEmpty error.
    shared_ptr<string> httpApiId_ {};
    // The Ingress class. It must match the API import configuration. Otherwise, an ingress class conflict error is reported.
    shared_ptr<string> ingressClass_ {};
    // The migration type.
    shared_ptr<string> migrationType_ {};
    // The watched namespace. It must match the API import configuration. Otherwise, a watchNamespace conflict error is reported.
    shared_ptr<string> watchNamespace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
