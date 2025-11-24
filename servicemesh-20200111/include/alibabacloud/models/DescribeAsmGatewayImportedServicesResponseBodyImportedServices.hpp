// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASMGATEWAYIMPORTEDSERVICESRESPONSEBODYIMPORTEDSERVICES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASMGATEWAYIMPORTEDSERVICESRESPONSEBODYIMPORTEDSERVICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeASMGatewayImportedServicesResponseBodyImportedServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeASMGatewayImportedServicesResponseBodyImportedServices& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceNamespace, serviceNamespace_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeASMGatewayImportedServicesResponseBodyImportedServices& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceNamespace, serviceNamespace_);
    };
    DescribeASMGatewayImportedServicesResponseBodyImportedServices() = default ;
    DescribeASMGatewayImportedServicesResponseBodyImportedServices(const DescribeASMGatewayImportedServicesResponseBodyImportedServices &) = default ;
    DescribeASMGatewayImportedServicesResponseBodyImportedServices(DescribeASMGatewayImportedServicesResponseBodyImportedServices &&) = default ;
    DescribeASMGatewayImportedServicesResponseBodyImportedServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeASMGatewayImportedServicesResponseBodyImportedServices() = default ;
    DescribeASMGatewayImportedServicesResponseBodyImportedServices& operator=(const DescribeASMGatewayImportedServicesResponseBodyImportedServices &) = default ;
    DescribeASMGatewayImportedServicesResponseBodyImportedServices& operator=(DescribeASMGatewayImportedServicesResponseBodyImportedServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceName_ == nullptr
        && return this->serviceNamespace_ == nullptr; };
    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeASMGatewayImportedServicesResponseBodyImportedServices& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceNamespace Field Functions 
    bool hasServiceNamespace() const { return this->serviceNamespace_ != nullptr;};
    void deleteServiceNamespace() { this->serviceNamespace_ = nullptr;};
    inline string serviceNamespace() const { DARABONBA_PTR_GET_DEFAULT(serviceNamespace_, "") };
    inline DescribeASMGatewayImportedServicesResponseBodyImportedServices& setServiceNamespace(string serviceNamespace) { DARABONBA_PTR_SET_VALUE(serviceNamespace_, serviceNamespace) };


  protected:
    // The name of a service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The namespace in which the service resides.
    std::shared_ptr<string> serviceNamespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
