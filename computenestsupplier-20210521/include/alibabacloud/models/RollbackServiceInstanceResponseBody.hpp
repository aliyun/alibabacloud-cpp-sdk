// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLLBACKSERVICEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ROLLBACKSERVICEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class RollbackServiceInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RollbackServiceInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, RollbackServiceInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    RollbackServiceInstanceResponseBody() = default ;
    RollbackServiceInstanceResponseBody(const RollbackServiceInstanceResponseBody &) = default ;
    RollbackServiceInstanceResponseBody(RollbackServiceInstanceResponseBody &&) = default ;
    RollbackServiceInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RollbackServiceInstanceResponseBody() = default ;
    RollbackServiceInstanceResponseBody& operator=(const RollbackServiceInstanceResponseBody &) = default ;
    RollbackServiceInstanceResponseBody& operator=(RollbackServiceInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->serviceInstanceId_ == nullptr && this->status_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RollbackServiceInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline RollbackServiceInstanceResponseBody& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RollbackServiceInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The service instance ID.
    shared_ptr<string> serviceInstanceId_ {};
    // The deployment status of the service instance. Valid values:
    // 
    // - Created: The service instance is created.
    // 
    // - Deploying: The service instance is being deployed.
    // 
    // - DeployedFailed: The deployment of the service instance failed.
    // 
    // - Deployed: The service instance is deployed.
    // 
    // - Upgrading: The service instance is being upgraded.
    // 
    // - UpgradeRollbacking: The service instance is being rolled back.
    // 
    // - Deleting: The service instance is being deleted.
    // 
    // - Deleted: The service instance is deleted.
    // 
    // - DeletedFailed: The deletion of the service instance failed.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
