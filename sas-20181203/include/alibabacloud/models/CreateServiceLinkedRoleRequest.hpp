// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICELINKEDROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICELINKEDROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateServiceLinkedRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceLinkedRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceLinkedRole, serviceLinkedRole_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceLinkedRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceLinkedRole, serviceLinkedRole_);
    };
    CreateServiceLinkedRoleRequest() = default ;
    CreateServiceLinkedRoleRequest(const CreateServiceLinkedRoleRequest &) = default ;
    CreateServiceLinkedRoleRequest(CreateServiceLinkedRoleRequest &&) = default ;
    CreateServiceLinkedRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceLinkedRoleRequest() = default ;
    CreateServiceLinkedRoleRequest& operator=(const CreateServiceLinkedRoleRequest &) = default ;
    CreateServiceLinkedRoleRequest& operator=(CreateServiceLinkedRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceLinkedRole_ == nullptr; };
    // serviceLinkedRole Field Functions 
    bool hasServiceLinkedRole() const { return this->serviceLinkedRole_ != nullptr;};
    void deleteServiceLinkedRole() { this->serviceLinkedRole_ = nullptr;};
    inline string getServiceLinkedRole() const { DARABONBA_PTR_GET_DEFAULT(serviceLinkedRole_, "") };
    inline CreateServiceLinkedRoleRequest& setServiceLinkedRole(string serviceLinkedRole) { DARABONBA_PTR_SET_VALUE(serviceLinkedRole_, serviceLinkedRole) };


  protected:
    // The service-linked role. Default value: **AliyunServiceRoleForSas**. Valid values:
    // 
    // *   **AliyunServiceRoleForSas**: the service-linked role of Security Center. Security Center assumes this role to access the resources of other cloud services within your account.
    // *   **AliyunServiceRoleForSasCspm**: the service-linked role of Security Center-CSPM. Security Center-CSPM assumes this role to access the resources of other cloud services within your account.
    shared_ptr<string> serviceLinkedRole_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
