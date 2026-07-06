// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICECREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICECREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateServiceCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialAgeDays, credentialAgeDays_);
      DARABONBA_PTR_TO_JSON(ServiceCredentialName, serviceCredentialName_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialAgeDays, credentialAgeDays_);
      DARABONBA_PTR_FROM_JSON(ServiceCredentialName, serviceCredentialName_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    CreateServiceCredentialRequest() = default ;
    CreateServiceCredentialRequest(const CreateServiceCredentialRequest &) = default ;
    CreateServiceCredentialRequest(CreateServiceCredentialRequest &&) = default ;
    CreateServiceCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceCredentialRequest() = default ;
    CreateServiceCredentialRequest& operator=(const CreateServiceCredentialRequest &) = default ;
    CreateServiceCredentialRequest& operator=(CreateServiceCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialAgeDays_ == nullptr
        && this->serviceCredentialName_ == nullptr && this->serviceName_ == nullptr && this->userPrincipalName_ == nullptr; };
    // credentialAgeDays Field Functions 
    bool hasCredentialAgeDays() const { return this->credentialAgeDays_ != nullptr;};
    void deleteCredentialAgeDays() { this->credentialAgeDays_ = nullptr;};
    inline int32_t getCredentialAgeDays() const { DARABONBA_PTR_GET_DEFAULT(credentialAgeDays_, 0) };
    inline CreateServiceCredentialRequest& setCredentialAgeDays(int32_t credentialAgeDays) { DARABONBA_PTR_SET_VALUE(credentialAgeDays_, credentialAgeDays) };


    // serviceCredentialName Field Functions 
    bool hasServiceCredentialName() const { return this->serviceCredentialName_ != nullptr;};
    void deleteServiceCredentialName() { this->serviceCredentialName_ = nullptr;};
    inline string getServiceCredentialName() const { DARABONBA_PTR_GET_DEFAULT(serviceCredentialName_, "") };
    inline CreateServiceCredentialRequest& setServiceCredentialName(string serviceCredentialName) { DARABONBA_PTR_SET_VALUE(serviceCredentialName_, serviceCredentialName) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CreateServiceCredentialRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline CreateServiceCredentialRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The expiration time of the service credential, in days.
    // Valid values: 1 to 36600.
    // If this parameter is not specified, the service credential is permanently valid.
    shared_ptr<int32_t> credentialAgeDays_ {};
    // The service credential name.
    // The name must be 1 to 128 characters in length and can contain letters, digits, periods (.), hyphens (-), and underscores (_).
    // 
    // This parameter is required.
    shared_ptr<string> serviceCredentialName_ {};
    // The Alibaba Cloud service name.
    // 
    // This parameter is required.
    shared_ptr<string> serviceName_ {};
    // The logon name of the RAM user.
    // If this parameter is left empty, a service credential is created for the current user by default.
    shared_ptr<string> userPrincipalName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
