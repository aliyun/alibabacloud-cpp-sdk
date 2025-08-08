// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEOPERATIONASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEOPERATIONASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ExecuteOperationASyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteOperationASyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_ANY_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteOperationASyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_ANY_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
    };
    ExecuteOperationASyncRequest() = default ;
    ExecuteOperationASyncRequest(const ExecuteOperationASyncRequest &) = default ;
    ExecuteOperationASyncRequest(ExecuteOperationASyncRequest &&) = default ;
    ExecuteOperationASyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteOperationASyncRequest() = default ;
    ExecuteOperationASyncRequest& operator=(const ExecuteOperationASyncRequest &) = default ;
    ExecuteOperationASyncRequest& operator=(ExecuteOperationASyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->attributes_ != nullptr && this->clientToken_ != nullptr && this->operation_ != nullptr && this->resourceGroupId_ != nullptr && this->serviceType_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ExecuteOperationASyncRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline     const Darabonba::Json & attributes() const { DARABONBA_GET(attributes_) };
    Darabonba::Json & attributes() { DARABONBA_GET(attributes_) };
    inline ExecuteOperationASyncRequest& setAttributes(const Darabonba::Json & attributes) { DARABONBA_SET_VALUE(attributes_, attributes) };
    inline ExecuteOperationASyncRequest& setAttributes(Darabonba::Json & attributes) { DARABONBA_SET_RVALUE(attributes_, attributes) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ExecuteOperationASyncRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline ExecuteOperationASyncRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ExecuteOperationASyncRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ExecuteOperationASyncRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    // The ID of the Cloud Architect Design Tools (CADT) application.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The parameters related to the action. Specify the parameters based on the value of Operation. The parameters are passed in the map format. The following examples show how to specify the parameters if you want to change the specifications of an Elastic Compute Service (ECS) instance:
    // 
    // *   The following common parameters are required: change_type, regionId, instanceId, appId
    // *   Example values for changing the instance type of the ECS instance: { "ServiceType": "ecs", "Operation": "modifyInstanceType", "Attributes": "{"change_type":"modify_instance_type","instance_type":"ecs.hfr7.2xlarge","instanceId":"i-xxxxxxxxx","regionId":"cn-beijing","appId":"xxxxxxxxxxxxx"}" }
    // *   Example values for stopping the ECS instance: { "ServiceType": "ecs", "Operation": "modifyInstanceType", "Attributes": "{"change_type":"modify_status","status":"Stopped","instanceId":"i-xxxxxxxxx","regionId":"cn-beijing","appId":"xxxxxxxxxxxxx"}" }
    // *   Example values for starting the ECS instance: { "ServiceType": "ecs", "Operation": "modifyInstanceType", "Attributes": "{"change_type":"modify_status","status":"Running","instanceId":"i-xxxxxxxxx","regionId":"cn-beijing","appId":"xxxxxxxxxxxxx"}" }
    // *   Example values for restarting the ECS instance: { "ServiceType": "ecs", "Operation": "modifyInstanceType", "Attributes": "{"change_type":"modify_status","status":"Restart","instanceId":"i-xxxxxxxxx","regionId":"cn-beijing","appId":"xxxxxxxxxxxxx"}" }
    // 
    // Example of enumerating more than one set of parameters:
    // 
    // *   { "ServiceType": "ecs", "Operation": "modifyInstanceType", "Attributes": "{\\\\"change_type\\\\":\\\\"modify_instance_type\\\\",\\\\"instance_type\\\\":\\\\"ecs.hfr7.2xlarge\\\\",\\\\"instanceId\\\\":\\\\"i-xxxxxxxxx\\\\",\\\\"regionId\\\\":\\\\"cn-beijing\\\\",\\\\"appId\\\\":\\\\"xxxxxxxxxxxxx\\\\"}" }
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     { "ServiceType": "ecs", "Operation": "modifyInstanceType", "Attributes": "{\\\\"change_type\\\\":\\\\"modify_instance_type\\\\",\\\\"instance_type\\\\":\\\\"ecs.hfr7.2xlarge\\\\",\\\\"instanceId\\\\":\\\\"i-xxxxxxxxx\\\\",\\\\"regionId\\\\":\\\\"cn-beijing\\\\",\\\\"appId\\\\":\\\\"xxxxxxxxxxxxx\\\\"}" }
    // 
    //     <!-- -->
    Darabonba::Json attributes_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // This operation type is the operation type of modifying the product, some operation types are generic, and some are used alone. The following is an example of ECS deployment:
    // - The name of the ECS: rename
    // - Specification of ecs: modifyInstanceType
    // - Startup of ecs: modifyInstanceType
    // - Stop of ecs: modifyInstanceType
    // - Restart of ecs: modifyInstanceType
    // - Ecs Tag: addTags
    // - Deletion of ecs: ecsDelete
    // - Paid type for ecs: modifyPayType
    // 
    // This parameter is required.
    std::shared_ptr<string> operation_ = nullptr;
    // Resource group ID, which is used to verify the permissions of the resource group
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The type of the service. If you want to perform operations on an Elastic Compute Service (ECS) instance, set ServiceType to ecs.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
