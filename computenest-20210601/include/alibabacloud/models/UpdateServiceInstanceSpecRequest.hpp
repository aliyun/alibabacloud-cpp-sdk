// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class UpdateServiceInstanceSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceInstanceSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnableUserPrometheus, enableUserPrometheus_);
      DARABONBA_PTR_TO_JSON(OperationName, operationName_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PredefinedParametersName, predefinedParametersName_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceInstanceSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
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
    class Commodity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Commodity& obj) { 
        DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      };
      friend void from_json(const Darabonba::Json& j, Commodity& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      };
      Commodity() = default ;
      Commodity(const Commodity &) = default ;
      Commodity(Commodity &&) = default ;
      Commodity(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Commodity() = default ;
      Commodity& operator=(const Commodity &) = default ;
      Commodity& operator=(Commodity &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoPay_ == nullptr; };
      // autoPay Field Functions 
      bool hasAutoPay() const { return this->autoPay_ != nullptr;};
      void deleteAutoPay() { this->autoPay_ = nullptr;};
      inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
      inline Commodity& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    protected:
      // Specifies whether to enable automatic payment.
      // 
      // Valid values:
      // 
      // - **true** (default): Automatic payment is enabled. Make sure that your account has a sufficient balance.
      // 
      // - **false**: An order is generated but the payment is not completed. If your account balance is insufficient, set AutoPay to false to generate an unpaid order. You can then log on to the [ApsaraDB RDS console](https://rdsnext.console.aliyun.com/dashboard/cn-beijing) to pay for the order.
      shared_ptr<bool> autoPay_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->commodity_ == nullptr && this->dryRun_ == nullptr && this->enableUserPrometheus_ == nullptr && this->operationName_ == nullptr && this->parameters_ == nullptr
        && this->predefinedParametersName_ == nullptr && this->serviceInstanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateServiceInstanceSpecRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commodity Field Functions 
    bool hasCommodity() const { return this->commodity_ != nullptr;};
    void deleteCommodity() { this->commodity_ = nullptr;};
    inline const UpdateServiceInstanceSpecRequest::Commodity & getCommodity() const { DARABONBA_PTR_GET_CONST(commodity_, UpdateServiceInstanceSpecRequest::Commodity) };
    inline UpdateServiceInstanceSpecRequest::Commodity getCommodity() { DARABONBA_PTR_GET(commodity_, UpdateServiceInstanceSpecRequest::Commodity) };
    inline UpdateServiceInstanceSpecRequest& setCommodity(const UpdateServiceInstanceSpecRequest::Commodity & commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };
    inline UpdateServiceInstanceSpecRequest& setCommodity(UpdateServiceInstanceSpecRequest::Commodity && commodity) { DARABONBA_PTR_SET_RVALUE(commodity_, commodity) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateServiceInstanceSpecRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


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
    // A client token to ensure the idempotence of the request. This token is generated by your client and must be unique for each request. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The information about the Alibaba Cloud Marketplace purchase order. This parameter is not required if the service is not listed on Alibaba Cloud Marketplace or if the service uses the pay-as-you-go billing method.
    shared_ptr<UpdateServiceInstanceSpecRequest::Commodity> commodity_ {};
    // Specifies whether to perform a dry run for the request. A dry run checks for issues such as permissions and instance status.
    // 
    // Valid values:
    // 
    // - true: Sends the request to perform a dry run. The service instance is not modified.
    // 
    // - false: Sends the request to perform the operation. The service instance is modified after the request passes the checks.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to enable Prometheus monitoring.
    // 
    // Valid values:
    // 
    // true: Enables Prometheus monitoring.
    // 
    // false: Disables Prometheus monitoring.
    shared_ptr<bool> enableUserPrometheus_ {};
    // The name of the upgrade/downgrade operation.
    // 
    // To obtain the name and content of the upgrade/downgrade operation, check the **ModifyParametersConfig** property of the **OperationMetadata** parameter that is returned by the [GetService](https://help.aliyun.com/document_detail/2340828.html) operation.
    shared_ptr<string> operationName_ {};
    // The parameters for changing the service instance.
    // 
    // Set this parameter if the service provider set **Change Type** to **Parameter Change** for the upgrade/downgrade operation.
    // 
    // > - To obtain the change parameters, check the **ModifyParametersConfig** property of the **OperationMetadata** parameter that is returned by the [GetService](https://help.aliyun.com/document_detail/2340828.html) operation.
    // >
    // > - View the change parameters on the **Service Instance Change** page in the [Compute Nest console](https://computenest.console.aliyun.com/service/instance/cn-hangzhou).
    // 
    // For example, if the service is configured to upgrade the ECS instance type, enter an instance specification that is higher than the current one.
    Darabonba::Json parameters_ {};
    // The name of the service instance package.
    // 
    // Set this parameter if the service provider set **Change Type** to **Package Change** for the upgrade/downgrade operation.
    // 
    // To obtain the package name, check the **PredefinedParameters** property of the **DeployMetadata** parameter that is returned by the [GetService](https://help.aliyun.com/document_detail/2340828.html) operation.
    shared_ptr<string> predefinedParametersName_ {};
    // The ID of the service instance.
    // 
    // Call the [ListServiceInstances](https://help.aliyun.com/document_detail/396200.html) operation to obtain the service instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> serviceInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
