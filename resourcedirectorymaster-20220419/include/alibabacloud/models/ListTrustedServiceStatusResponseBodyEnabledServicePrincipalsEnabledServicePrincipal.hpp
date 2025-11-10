// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRUSTEDSERVICESTATUSRESPONSEBODYENABLEDSERVICEPRINCIPALSENABLEDSERVICEPRINCIPAL_HPP_
#define ALIBABACLOUD_MODELS_LISTTRUSTEDSERVICESTATUSRESPONSEBODYENABLEDSERVICEPRINCIPALSENABLEDSERVICEPRINCIPAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal& obj) { 
      DARABONBA_PTR_TO_JSON(EnableTime, enableTime_);
      DARABONBA_PTR_TO_JSON(ServicePrincipal, servicePrincipal_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableTime, enableTime_);
      DARABONBA_PTR_FROM_JSON(ServicePrincipal, servicePrincipal_);
    };
    ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal() = default ;
    ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal(const ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal &) = default ;
    ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal(ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal &&) = default ;
    ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal() = default ;
    ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal& operator=(const ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal &) = default ;
    ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal& operator=(ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableTime_ == nullptr
        && return this->servicePrincipal_ == nullptr; };
    // enableTime Field Functions 
    bool hasEnableTime() const { return this->enableTime_ != nullptr;};
    void deleteEnableTime() { this->enableTime_ = nullptr;};
    inline string enableTime() const { DARABONBA_PTR_GET_DEFAULT(enableTime_, "") };
    inline ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal& setEnableTime(string enableTime) { DARABONBA_PTR_SET_VALUE(enableTime_, enableTime) };


    // servicePrincipal Field Functions 
    bool hasServicePrincipal() const { return this->servicePrincipal_ != nullptr;};
    void deleteServicePrincipal() { this->servicePrincipal_ = nullptr;};
    inline string servicePrincipal() const { DARABONBA_PTR_GET_DEFAULT(servicePrincipal_, "") };
    inline ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal& setServicePrincipal(string servicePrincipal) { DARABONBA_PTR_SET_VALUE(servicePrincipal_, servicePrincipal) };


  protected:
    // The time when the trusted service was enabled.
    std::shared_ptr<string> enableTime_ = nullptr;
    // The identifier of the trusted service.
    std::shared_ptr<string> servicePrincipal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
