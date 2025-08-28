// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESBYENDUSERRESPONSEBODYSERVICES_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESBYENDUSERRESPONSEBODYSERVICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVpcEndpointServicesByEndUserResponseBodyServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointServicesByEndUserResponseBodyServices& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultPolicyDocument, defaultPolicyDocument_);
      DARABONBA_PTR_TO_JSON(ServiceDomain, serviceDomain_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(SupportPolicy, supportPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointServicesByEndUserResponseBodyServices& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultPolicyDocument, defaultPolicyDocument_);
      DARABONBA_PTR_FROM_JSON(ServiceDomain, serviceDomain_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(SupportPolicy, supportPolicy_);
    };
    ListVpcEndpointServicesByEndUserResponseBodyServices() = default ;
    ListVpcEndpointServicesByEndUserResponseBodyServices(const ListVpcEndpointServicesByEndUserResponseBodyServices &) = default ;
    ListVpcEndpointServicesByEndUserResponseBodyServices(ListVpcEndpointServicesByEndUserResponseBodyServices &&) = default ;
    ListVpcEndpointServicesByEndUserResponseBodyServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointServicesByEndUserResponseBodyServices() = default ;
    ListVpcEndpointServicesByEndUserResponseBodyServices& operator=(const ListVpcEndpointServicesByEndUserResponseBodyServices &) = default ;
    ListVpcEndpointServicesByEndUserResponseBodyServices& operator=(ListVpcEndpointServicesByEndUserResponseBodyServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultPolicyDocument_ != nullptr
        && this->serviceDomain_ != nullptr && this->serviceId_ != nullptr && this->serviceName_ != nullptr && this->supportPolicy_ != nullptr; };
    // defaultPolicyDocument Field Functions 
    bool hasDefaultPolicyDocument() const { return this->defaultPolicyDocument_ != nullptr;};
    void deleteDefaultPolicyDocument() { this->defaultPolicyDocument_ = nullptr;};
    inline string defaultPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(defaultPolicyDocument_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setDefaultPolicyDocument(string defaultPolicyDocument) { DARABONBA_PTR_SET_VALUE(defaultPolicyDocument_, defaultPolicyDocument) };


    // serviceDomain Field Functions 
    bool hasServiceDomain() const { return this->serviceDomain_ != nullptr;};
    void deleteServiceDomain() { this->serviceDomain_ = nullptr;};
    inline string serviceDomain() const { DARABONBA_PTR_GET_DEFAULT(serviceDomain_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setServiceDomain(string serviceDomain) { DARABONBA_PTR_SET_VALUE(serviceDomain_, serviceDomain) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // supportPolicy Field Functions 
    bool hasSupportPolicy() const { return this->supportPolicy_ != nullptr;};
    void deleteSupportPolicy() { this->supportPolicy_ = nullptr;};
    inline bool supportPolicy() const { DARABONBA_PTR_GET_DEFAULT(supportPolicy_, false) };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setSupportPolicy(bool supportPolicy) { DARABONBA_PTR_SET_VALUE(supportPolicy_, supportPolicy) };


  protected:
    // The default access policy.
    std::shared_ptr<string> defaultPolicyDocument_ = nullptr;
    // The domain name of the cloud service to which the endpoint service belongs.
    std::shared_ptr<string> serviceDomain_ = nullptr;
    // The ID of the endpoint service.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The name of the endpoint service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // Indicate whether the endpoint service supports the access policy. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> supportPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
