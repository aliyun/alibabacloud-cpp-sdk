// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCESPECSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCESPECSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateServiceInstanceSpecShrinkRequestCommodity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class UpdateServiceInstanceSpecShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceInstanceSpecShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnableUserPrometheus, enableUserPrometheus_);
      DARABONBA_PTR_TO_JSON(OperationName, operationName_);
      DARABONBA_PTR_TO_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_TO_JSON(PredefinedParametersName, predefinedParametersName_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceInstanceSpecShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EnableUserPrometheus, enableUserPrometheus_);
      DARABONBA_PTR_FROM_JSON(OperationName, operationName_);
      DARABONBA_PTR_FROM_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_FROM_JSON(PredefinedParametersName, predefinedParametersName_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    UpdateServiceInstanceSpecShrinkRequest() = default ;
    UpdateServiceInstanceSpecShrinkRequest(const UpdateServiceInstanceSpecShrinkRequest &) = default ;
    UpdateServiceInstanceSpecShrinkRequest(UpdateServiceInstanceSpecShrinkRequest &&) = default ;
    UpdateServiceInstanceSpecShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceInstanceSpecShrinkRequest() = default ;
    UpdateServiceInstanceSpecShrinkRequest& operator=(const UpdateServiceInstanceSpecShrinkRequest &) = default ;
    UpdateServiceInstanceSpecShrinkRequest& operator=(UpdateServiceInstanceSpecShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->commodity_ != nullptr && this->dryRun_ != nullptr && this->enableUserPrometheus_ != nullptr && this->operationName_ != nullptr && this->parametersShrink_ != nullptr
        && this->predefinedParametersName_ != nullptr && this->serviceInstanceId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateServiceInstanceSpecShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commodity Field Functions 
    bool hasCommodity() const { return this->commodity_ != nullptr;};
    void deleteCommodity() { this->commodity_ = nullptr;};
    inline const UpdateServiceInstanceSpecShrinkRequestCommodity & commodity() const { DARABONBA_PTR_GET_CONST(commodity_, UpdateServiceInstanceSpecShrinkRequestCommodity) };
    inline UpdateServiceInstanceSpecShrinkRequestCommodity commodity() { DARABONBA_PTR_GET(commodity_, UpdateServiceInstanceSpecShrinkRequestCommodity) };
    inline UpdateServiceInstanceSpecShrinkRequest& setCommodity(const UpdateServiceInstanceSpecShrinkRequestCommodity & commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };
    inline UpdateServiceInstanceSpecShrinkRequest& setCommodity(UpdateServiceInstanceSpecShrinkRequestCommodity && commodity) { DARABONBA_PTR_SET_RVALUE(commodity_, commodity) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateServiceInstanceSpecShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enableUserPrometheus Field Functions 
    bool hasEnableUserPrometheus() const { return this->enableUserPrometheus_ != nullptr;};
    void deleteEnableUserPrometheus() { this->enableUserPrometheus_ = nullptr;};
    inline bool enableUserPrometheus() const { DARABONBA_PTR_GET_DEFAULT(enableUserPrometheus_, false) };
    inline UpdateServiceInstanceSpecShrinkRequest& setEnableUserPrometheus(bool enableUserPrometheus) { DARABONBA_PTR_SET_VALUE(enableUserPrometheus_, enableUserPrometheus) };


    // operationName Field Functions 
    bool hasOperationName() const { return this->operationName_ != nullptr;};
    void deleteOperationName() { this->operationName_ = nullptr;};
    inline string operationName() const { DARABONBA_PTR_GET_DEFAULT(operationName_, "") };
    inline UpdateServiceInstanceSpecShrinkRequest& setOperationName(string operationName) { DARABONBA_PTR_SET_VALUE(operationName_, operationName) };


    // parametersShrink Field Functions 
    bool hasParametersShrink() const { return this->parametersShrink_ != nullptr;};
    void deleteParametersShrink() { this->parametersShrink_ = nullptr;};
    inline string parametersShrink() const { DARABONBA_PTR_GET_DEFAULT(parametersShrink_, "") };
    inline UpdateServiceInstanceSpecShrinkRequest& setParametersShrink(string parametersShrink) { DARABONBA_PTR_SET_VALUE(parametersShrink_, parametersShrink) };


    // predefinedParametersName Field Functions 
    bool hasPredefinedParametersName() const { return this->predefinedParametersName_ != nullptr;};
    void deletePredefinedParametersName() { this->predefinedParametersName_ = nullptr;};
    inline string predefinedParametersName() const { DARABONBA_PTR_GET_DEFAULT(predefinedParametersName_, "") };
    inline UpdateServiceInstanceSpecShrinkRequest& setPredefinedParametersName(string predefinedParametersName) { DARABONBA_PTR_SET_VALUE(predefinedParametersName_, predefinedParametersName) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline UpdateServiceInstanceSpecShrinkRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The information about the order placed in Alibaba Cloud Marketplace. You do not need to specify this parameter if the service is not published in Alibaba Cloud Marketplace or uses the pay-as-you-go billing method.
    std::shared_ptr<UpdateServiceInstanceSpecShrinkRequestCommodity> commodity_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. A dry run includes checks on the permissions and instance state.
    // 
    // Valid values:
    // 
    // *   true: performs a dry run but does not create a service instance.
    // *   false: performs a dry run and creates a service instance if the request passes the dry run.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // Specifies whether to enable Prometheus monitoring on the user side.
    // 
    // Valid values:
    // 
    // true
    // 
    // false
    std::shared_ptr<bool> enableUserPrometheus_ = nullptr;
    // The name of the configuration change operation.
    // 
    // To obtain the names and content of the configuration change operations of the service, you can call the [GetService](https://help.aliyun.com/document_detail/2340828.html) operation. In the response, check the value of **ModifyParametersConfig** in the value of **OperationMetadata**.
    std::shared_ptr<string> operationName_ = nullptr;
    // The configuration parameter.
    // 
    // This parameter is available if the service provider set **Method** to **Change Parameter** when configuring configuration change operations.
    // 
    // > 
    // 
    // *   To obtain the parameters of the service that support configuration change, you can call the [GetService](https://help.aliyun.com/document_detail/2340828.html) operation. In the response, check the value of **ModifyParametersConfig** in the value of **OperationMetadata**.
    // 
    // *   You can also view the parameters of the service that support configuration change in the **configuration change** dialog box in the [Compute Nest console](https://computenest.console.aliyun.com/service/instance/cn-hangzhou).
    // 
    // For example, if the service supports Elastic Compute Service (ECS) instance type upgrade, you must specify an instance type that has higher specifications than the current one.
    std::shared_ptr<string> parametersShrink_ = nullptr;
    // The name of the configuration plan.
    // 
    // This parameter is available if the service provider set **Method** to **Change Plan** when configuring configuration change operations.
    // 
    // To obtain the configuration plan names of the service, you can call the [GetService](https://help.aliyun.com/document_detail/2340828.html) operation. In the response, check the value of **PredefinedParameters** in the value of **DeployMetadata**.
    std::shared_ptr<string> predefinedParametersName_ = nullptr;
    // The ID of the service instance.
    // 
    // You can call the [ListServiceInstances](https://help.aliyun.com/document_detail/396200.html) operation to obtain the ID of the service instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
