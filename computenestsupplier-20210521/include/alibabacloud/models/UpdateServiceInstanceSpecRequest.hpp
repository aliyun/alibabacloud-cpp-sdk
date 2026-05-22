// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceInstanceSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceInstanceSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EnableUserPrometheus, enableUserPrometheus_);
      DARABONBA_PTR_TO_JSON(OperationName, operationName_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PredefinedParametersName, predefinedParametersName_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceInstanceSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EnableUserPrometheus, enableUserPrometheus_);
      DARABONBA_PTR_FROM_JSON(OperationName, operationName_);
      DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PredefinedParametersName, predefinedParametersName_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    UpdateServiceInstanceSpecRequest() = default ;
    UpdateServiceInstanceSpecRequest(const UpdateServiceInstanceSpecRequest &) = default ;
    UpdateServiceInstanceSpecRequest(UpdateServiceInstanceSpecRequest &&) = default ;
    UpdateServiceInstanceSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceInstanceSpecRequest() = default ;
    UpdateServiceInstanceSpecRequest& operator=(const UpdateServiceInstanceSpecRequest &) = default ;
    UpdateServiceInstanceSpecRequest& operator=(UpdateServiceInstanceSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->enableUserPrometheus_ == nullptr && this->operationName_ == nullptr && this->parameters_ == nullptr && this->predefinedParametersName_ == nullptr && this->serviceInstanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateServiceInstanceSpecRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enableUserPrometheus Field Functions 
    bool hasEnableUserPrometheus() const { return this->enableUserPrometheus_ != nullptr;};
    void deleteEnableUserPrometheus() { this->enableUserPrometheus_ = nullptr;};
    inline bool getEnableUserPrometheus() const { DARABONBA_PTR_GET_DEFAULT(enableUserPrometheus_, false) };
    inline UpdateServiceInstanceSpecRequest& setEnableUserPrometheus(bool enableUserPrometheus) { DARABONBA_PTR_SET_VALUE(enableUserPrometheus_, enableUserPrometheus) };


    // operationName Field Functions 
    bool hasOperationName() const { return this->operationName_ != nullptr;};
    void deleteOperationName() { this->operationName_ = nullptr;};
    inline string getOperationName() const { DARABONBA_PTR_GET_DEFAULT(operationName_, "") };
    inline UpdateServiceInstanceSpecRequest& setOperationName(string operationName) { DARABONBA_PTR_SET_VALUE(operationName_, operationName) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
    inline UpdateServiceInstanceSpecRequest& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline UpdateServiceInstanceSpecRequest& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // predefinedParametersName Field Functions 
    bool hasPredefinedParametersName() const { return this->predefinedParametersName_ != nullptr;};
    void deletePredefinedParametersName() { this->predefinedParametersName_ = nullptr;};
    inline string getPredefinedParametersName() const { DARABONBA_PTR_GET_DEFAULT(predefinedParametersName_, "") };
    inline UpdateServiceInstanceSpecRequest& setPredefinedParametersName(string predefinedParametersName) { DARABONBA_PTR_SET_VALUE(predefinedParametersName_, predefinedParametersName) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline UpdateServiceInstanceSpecRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to enable Prometheus on the customer side. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> enableUserPrometheus_ {};
    // The name of the configuration update operation.
    shared_ptr<string> operationName_ {};
    // The configuration parameters of the service instance.
    Darabonba::Json parameters_ {};
    // The name of the specification package.
    shared_ptr<string> predefinedParametersName_ {};
    // The service instance ID.
    shared_ptr<string> serviceInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
