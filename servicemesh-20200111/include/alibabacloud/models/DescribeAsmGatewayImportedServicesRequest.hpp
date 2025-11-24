// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASMGATEWAYIMPORTEDSERVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASMGATEWAYIMPORTEDSERVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeASMGatewayImportedServicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeASMGatewayImportedServicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ASMGatewayName, ASMGatewayName_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(ServiceNamespace, serviceNamespace_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeASMGatewayImportedServicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ASMGatewayName, ASMGatewayName_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(ServiceNamespace, serviceNamespace_);
    };
    DescribeASMGatewayImportedServicesRequest() = default ;
    DescribeASMGatewayImportedServicesRequest(const DescribeASMGatewayImportedServicesRequest &) = default ;
    DescribeASMGatewayImportedServicesRequest(DescribeASMGatewayImportedServicesRequest &&) = default ;
    DescribeASMGatewayImportedServicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeASMGatewayImportedServicesRequest() = default ;
    DescribeASMGatewayImportedServicesRequest& operator=(const DescribeASMGatewayImportedServicesRequest &) = default ;
    DescribeASMGatewayImportedServicesRequest& operator=(DescribeASMGatewayImportedServicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ASMGatewayName_ == nullptr
        && return this->serviceMeshId_ == nullptr && return this->serviceNamespace_ == nullptr; };
    // ASMGatewayName Field Functions 
    bool hasASMGatewayName() const { return this->ASMGatewayName_ != nullptr;};
    void deleteASMGatewayName() { this->ASMGatewayName_ = nullptr;};
    inline string ASMGatewayName() const { DARABONBA_PTR_GET_DEFAULT(ASMGatewayName_, "") };
    inline DescribeASMGatewayImportedServicesRequest& setASMGatewayName(string ASMGatewayName) { DARABONBA_PTR_SET_VALUE(ASMGatewayName_, ASMGatewayName) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DescribeASMGatewayImportedServicesRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // serviceNamespace Field Functions 
    bool hasServiceNamespace() const { return this->serviceNamespace_ != nullptr;};
    void deleteServiceNamespace() { this->serviceNamespace_ = nullptr;};
    inline string serviceNamespace() const { DARABONBA_PTR_GET_DEFAULT(serviceNamespace_, "") };
    inline DescribeASMGatewayImportedServicesRequest& setServiceNamespace(string serviceNamespace) { DARABONBA_PTR_SET_VALUE(serviceNamespace_, serviceNamespace) };


  protected:
    // The name of the ASM gateway.
    std::shared_ptr<string> ASMGatewayName_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
    // The namespace in which the services reside.
    std::shared_ptr<string> serviceNamespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
