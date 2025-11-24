// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTEREDSERVICEENDPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTEREDSERVICEENDPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetRegisteredServiceEndpointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegisteredServiceEndpointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegisteredServiceEndpointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
    };
    GetRegisteredServiceEndpointsRequest() = default ;
    GetRegisteredServiceEndpointsRequest(const GetRegisteredServiceEndpointsRequest &) = default ;
    GetRegisteredServiceEndpointsRequest(GetRegisteredServiceEndpointsRequest &&) = default ;
    GetRegisteredServiceEndpointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegisteredServiceEndpointsRequest() = default ;
    GetRegisteredServiceEndpointsRequest& operator=(const GetRegisteredServiceEndpointsRequest &) = default ;
    GetRegisteredServiceEndpointsRequest& operator=(GetRegisteredServiceEndpointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterIds_ == nullptr
        && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->serviceMeshId_ == nullptr && return this->serviceType_ == nullptr; };
    // clusterIds Field Functions 
    bool hasClusterIds() const { return this->clusterIds_ != nullptr;};
    void deleteClusterIds() { this->clusterIds_ = nullptr;};
    inline string clusterIds() const { DARABONBA_PTR_GET_DEFAULT(clusterIds_, "") };
    inline GetRegisteredServiceEndpointsRequest& setClusterIds(string clusterIds) { DARABONBA_PTR_SET_VALUE(clusterIds_, clusterIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRegisteredServiceEndpointsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetRegisteredServiceEndpointsRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline GetRegisteredServiceEndpointsRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetRegisteredServiceEndpointsRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    // The name of the registered service.
    std::shared_ptr<string> clusterIds_ = nullptr;
    // The type of the registered service. Valid values:
    // 
    // *   `ServiceEntry`: indicates that the service is registered by creating a service entry.
    // *   `Kubernetes`: indicates that the service is registered on a Kubernetes cluster on the data plane.
    std::shared_ptr<string> name_ = nullptr;
    // The IDs of clusters in the ASM instance. Separate multiple cluster IDs with commas (,).
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
    // The endpoints of the registered service.
    std::shared_ptr<string> serviceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
