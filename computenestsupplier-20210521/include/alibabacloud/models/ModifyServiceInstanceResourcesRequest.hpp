// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSERVICEINSTANCERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSERVICEINSTANCERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ModifyServiceInstanceResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyServiceInstanceResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceResourcesAction, serviceInstanceResourcesAction_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyServiceInstanceResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceResourcesAction, serviceInstanceResourcesAction_);
    };
    ModifyServiceInstanceResourcesRequest() = default ;
    ModifyServiceInstanceResourcesRequest(const ModifyServiceInstanceResourcesRequest &) = default ;
    ModifyServiceInstanceResourcesRequest(ModifyServiceInstanceResourcesRequest &&) = default ;
    ModifyServiceInstanceResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyServiceInstanceResourcesRequest() = default ;
    ModifyServiceInstanceResourcesRequest& operator=(const ModifyServiceInstanceResourcesRequest &) = default ;
    ModifyServiceInstanceResourcesRequest& operator=(ModifyServiceInstanceResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resources_ != nullptr
        && this->serviceInstanceId_ != nullptr && this->serviceInstanceResourcesAction_ != nullptr; };
    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string resources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline ModifyServiceInstanceResourcesRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline ModifyServiceInstanceResourcesRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // serviceInstanceResourcesAction Field Functions 
    bool hasServiceInstanceResourcesAction() const { return this->serviceInstanceResourcesAction_ != nullptr;};
    void deleteServiceInstanceResourcesAction() { this->serviceInstanceResourcesAction_ = nullptr;};
    inline string serviceInstanceResourcesAction() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceResourcesAction_, "") };
    inline ModifyServiceInstanceResourcesRequest& setServiceInstanceResourcesAction(string serviceInstanceResourcesAction) { DARABONBA_PTR_SET_VALUE(serviceInstanceResourcesAction_, serviceInstanceResourcesAction) };


  protected:
    // The imported resources.
    std::shared_ptr<string> resources_ = nullptr;
    // The ID of the service instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
    // The type of operation performed on the service instance resource. Valid values:
    // 
    // *   Import: The resource is imported.
    // *   UnImport: The resource import is canceled.
    std::shared_ptr<string> serviceInstanceResourcesAction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
