// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEASMGATEWAYIMPORTEDSERVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEASMGATEWAYIMPORTEDSERVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateASMGatewayImportedServicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateASMGatewayImportedServicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ASMGatewayName, ASMGatewayName_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(ServiceNames, serviceNames_);
      DARABONBA_PTR_TO_JSON(ServiceNamespace, serviceNamespace_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateASMGatewayImportedServicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ASMGatewayName, ASMGatewayName_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(ServiceNames, serviceNames_);
      DARABONBA_PTR_FROM_JSON(ServiceNamespace, serviceNamespace_);
    };
    UpdateASMGatewayImportedServicesRequest() = default ;
    UpdateASMGatewayImportedServicesRequest(const UpdateASMGatewayImportedServicesRequest &) = default ;
    UpdateASMGatewayImportedServicesRequest(UpdateASMGatewayImportedServicesRequest &&) = default ;
    UpdateASMGatewayImportedServicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateASMGatewayImportedServicesRequest() = default ;
    UpdateASMGatewayImportedServicesRequest& operator=(const UpdateASMGatewayImportedServicesRequest &) = default ;
    UpdateASMGatewayImportedServicesRequest& operator=(UpdateASMGatewayImportedServicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ASMGatewayName_ == nullptr
        && return this->serviceMeshId_ == nullptr && return this->serviceNames_ == nullptr && return this->serviceNamespace_ == nullptr; };
    // ASMGatewayName Field Functions 
    bool hasASMGatewayName() const { return this->ASMGatewayName_ != nullptr;};
    void deleteASMGatewayName() { this->ASMGatewayName_ = nullptr;};
    inline string ASMGatewayName() const { DARABONBA_PTR_GET_DEFAULT(ASMGatewayName_, "") };
    inline UpdateASMGatewayImportedServicesRequest& setASMGatewayName(string ASMGatewayName) { DARABONBA_PTR_SET_VALUE(ASMGatewayName_, ASMGatewayName) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline UpdateASMGatewayImportedServicesRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // serviceNames Field Functions 
    bool hasServiceNames() const { return this->serviceNames_ != nullptr;};
    void deleteServiceNames() { this->serviceNames_ = nullptr;};
    inline string serviceNames() const { DARABONBA_PTR_GET_DEFAULT(serviceNames_, "") };
    inline UpdateASMGatewayImportedServicesRequest& setServiceNames(string serviceNames) { DARABONBA_PTR_SET_VALUE(serviceNames_, serviceNames) };


    // serviceNamespace Field Functions 
    bool hasServiceNamespace() const { return this->serviceNamespace_ != nullptr;};
    void deleteServiceNamespace() { this->serviceNamespace_ = nullptr;};
    inline string serviceNamespace() const { DARABONBA_PTR_GET_DEFAULT(serviceNamespace_, "") };
    inline UpdateASMGatewayImportedServicesRequest& setServiceNamespace(string serviceNamespace) { DARABONBA_PTR_SET_VALUE(serviceNamespace_, serviceNamespace) };


  protected:
    // The name of the ASM gateway.
    std::shared_ptr<string> ASMGatewayName_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
    // The names of the services. Separate multiple service names with commas (,). Example: reviews,sleep.
    std::shared_ptr<string> serviceNames_ = nullptr;
    // The namespace in which the service resides.
    std::shared_ptr<string> serviceNamespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
