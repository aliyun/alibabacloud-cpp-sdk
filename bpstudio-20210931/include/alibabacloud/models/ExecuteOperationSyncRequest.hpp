// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEOPERATIONSYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEOPERATIONSYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ExecuteOperationSyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteOperationSyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_ANY_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteOperationSyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_ANY_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
    };
    ExecuteOperationSyncRequest() = default ;
    ExecuteOperationSyncRequest(const ExecuteOperationSyncRequest &) = default ;
    ExecuteOperationSyncRequest(ExecuteOperationSyncRequest &&) = default ;
    ExecuteOperationSyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteOperationSyncRequest() = default ;
    ExecuteOperationSyncRequest& operator=(const ExecuteOperationSyncRequest &) = default ;
    ExecuteOperationSyncRequest& operator=(ExecuteOperationSyncRequest &&) = default ;
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
    inline ExecuteOperationSyncRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline     const Darabonba::Json & attributes() const { DARABONBA_GET(attributes_) };
    Darabonba::Json & attributes() { DARABONBA_GET(attributes_) };
    inline ExecuteOperationSyncRequest& setAttributes(const Darabonba::Json & attributes) { DARABONBA_SET_VALUE(attributes_, attributes) };
    inline ExecuteOperationSyncRequest& setAttributes(Darabonba::Json & attributes) { DARABONBA_SET_RVALUE(attributes_, attributes) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ExecuteOperationSyncRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline ExecuteOperationSyncRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ExecuteOperationSyncRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ExecuteOperationSyncRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    std::shared_ptr<string> applicationId_ = nullptr;
    Darabonba::Json attributes_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operation_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> serviceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
