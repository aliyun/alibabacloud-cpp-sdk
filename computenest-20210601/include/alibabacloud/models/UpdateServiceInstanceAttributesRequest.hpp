// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCEATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCEATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class UpdateServiceInstanceAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceInstanceAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableOperation, enableOperation_);
      DARABONBA_PTR_TO_JSON(GrantedPermission, grantedPermission_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceInstanceAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableOperation, enableOperation_);
      DARABONBA_PTR_FROM_JSON(GrantedPermission, grantedPermission_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    UpdateServiceInstanceAttributesRequest() = default ;
    UpdateServiceInstanceAttributesRequest(const UpdateServiceInstanceAttributesRequest &) = default ;
    UpdateServiceInstanceAttributesRequest(UpdateServiceInstanceAttributesRequest &&) = default ;
    UpdateServiceInstanceAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceInstanceAttributesRequest() = default ;
    UpdateServiceInstanceAttributesRequest& operator=(const UpdateServiceInstanceAttributesRequest &) = default ;
    UpdateServiceInstanceAttributesRequest& operator=(UpdateServiceInstanceAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GrantedPermission : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GrantedPermission& obj) { 
        DARABONBA_PTR_TO_JSON(OperationEndTime, operationEndTime_);
        DARABONBA_PTR_TO_JSON(PolicyNames, policyNames_);
      };
      friend void from_json(const Darabonba::Json& j, GrantedPermission& obj) { 
        DARABONBA_PTR_FROM_JSON(OperationEndTime, operationEndTime_);
        DARABONBA_PTR_FROM_JSON(PolicyNames, policyNames_);
      };
      GrantedPermission() = default ;
      GrantedPermission(const GrantedPermission &) = default ;
      GrantedPermission(GrantedPermission &&) = default ;
      GrantedPermission(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GrantedPermission() = default ;
      GrantedPermission& operator=(const GrantedPermission &) = default ;
      GrantedPermission& operator=(GrantedPermission &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->operationEndTime_ == nullptr
        && this->policyNames_ == nullptr; };
      // operationEndTime Field Functions 
      bool hasOperationEndTime() const { return this->operationEndTime_ != nullptr;};
      void deleteOperationEndTime() { this->operationEndTime_ = nullptr;};
      inline string getOperationEndTime() const { DARABONBA_PTR_GET_DEFAULT(operationEndTime_, "") };
      inline GrantedPermission& setOperationEndTime(string operationEndTime) { DARABONBA_PTR_SET_VALUE(operationEndTime_, operationEndTime) };


      // policyNames Field Functions 
      bool hasPolicyNames() const { return this->policyNames_ != nullptr;};
      void deletePolicyNames() { this->policyNames_ = nullptr;};
      inline string getPolicyNames() const { DARABONBA_PTR_GET_DEFAULT(policyNames_, "") };
      inline GrantedPermission& setPolicyNames(string policyNames) { DARABONBA_PTR_SET_VALUE(policyNames_, policyNames) };


    protected:
      shared_ptr<string> operationEndTime_ {};
      shared_ptr<string> policyNames_ {};
    };

    virtual bool empty() const override { return this->enableOperation_ == nullptr
        && this->grantedPermission_ == nullptr && this->regionId_ == nullptr && this->serviceInstanceId_ == nullptr; };
    // enableOperation Field Functions 
    bool hasEnableOperation() const { return this->enableOperation_ != nullptr;};
    void deleteEnableOperation() { this->enableOperation_ = nullptr;};
    inline bool getEnableOperation() const { DARABONBA_PTR_GET_DEFAULT(enableOperation_, false) };
    inline UpdateServiceInstanceAttributesRequest& setEnableOperation(bool enableOperation) { DARABONBA_PTR_SET_VALUE(enableOperation_, enableOperation) };


    // grantedPermission Field Functions 
    bool hasGrantedPermission() const { return this->grantedPermission_ != nullptr;};
    void deleteGrantedPermission() { this->grantedPermission_ = nullptr;};
    inline const UpdateServiceInstanceAttributesRequest::GrantedPermission & getGrantedPermission() const { DARABONBA_PTR_GET_CONST(grantedPermission_, UpdateServiceInstanceAttributesRequest::GrantedPermission) };
    inline UpdateServiceInstanceAttributesRequest::GrantedPermission getGrantedPermission() { DARABONBA_PTR_GET(grantedPermission_, UpdateServiceInstanceAttributesRequest::GrantedPermission) };
    inline UpdateServiceInstanceAttributesRequest& setGrantedPermission(const UpdateServiceInstanceAttributesRequest::GrantedPermission & grantedPermission) { DARABONBA_PTR_SET_VALUE(grantedPermission_, grantedPermission) };
    inline UpdateServiceInstanceAttributesRequest& setGrantedPermission(UpdateServiceInstanceAttributesRequest::GrantedPermission && grantedPermission) { DARABONBA_PTR_SET_RVALUE(grantedPermission_, grantedPermission) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateServiceInstanceAttributesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline UpdateServiceInstanceAttributesRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // Specifies whether to authorize the service provider to perform O\\&M operations on the service instance.
    shared_ptr<bool> enableOperation_ {};
    shared_ptr<UpdateServiceInstanceAttributesRequest::GrantedPermission> grantedPermission_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the service instance.
    // 
    // You can call the [ListServiceInstances](https://help.aliyun.com/document_detail/396200.html) operation to obtain the ID of the service instance.
    // 
    // This parameter is required.
    shared_ptr<string> serviceInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
