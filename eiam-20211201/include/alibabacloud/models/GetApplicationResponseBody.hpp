// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Application, application_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Application, application_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationResponseBody() = default ;
    GetApplicationResponseBody(const GetApplicationResponseBody &) = default ;
    GetApplicationResponseBody(GetApplicationResponseBody &&) = default ;
    GetApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBody() = default ;
    GetApplicationResponseBody& operator=(const GetApplicationResponseBody &) = default ;
    GetApplicationResponseBody& operator=(GetApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Application : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Application& obj) { 
        DARABONBA_PTR_TO_JSON(ApiInvokeStatus, apiInvokeStatus_);
        DARABONBA_PTR_TO_JSON(ApplicationCreationType, applicationCreationType_);
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(ApplicationSourceType, applicationSourceType_);
        DARABONBA_PTR_TO_JSON(ApplicationTemplateId, applicationTemplateId_);
        DARABONBA_PTR_TO_JSON(ApplicationVisibility, applicationVisibility_);
        DARABONBA_PTR_TO_JSON(AuthorizationType, authorizationType_);
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CustomSubjectStatus, customSubjectStatus_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Features, features_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LogoUrl, logoUrl_);
        DARABONBA_PTR_TO_JSON(M2MClientStatus, m2MClientStatus_);
        DARABONBA_PTR_TO_JSON(ManagedServiceCode, managedServiceCode_);
        DARABONBA_PTR_TO_JSON(ResourceServerIdentifier, resourceServerIdentifier_);
        DARABONBA_PTR_TO_JSON(ResourceServerSourceType, resourceServerSourceType_);
        DARABONBA_PTR_TO_JSON(ResourceServerStatus, resourceServerStatus_);
        DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_TO_JSON(SsoType, ssoType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Application& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiInvokeStatus, apiInvokeStatus_);
        DARABONBA_PTR_FROM_JSON(ApplicationCreationType, applicationCreationType_);
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(ApplicationSourceType, applicationSourceType_);
        DARABONBA_PTR_FROM_JSON(ApplicationTemplateId, applicationTemplateId_);
        DARABONBA_PTR_FROM_JSON(ApplicationVisibility, applicationVisibility_);
        DARABONBA_PTR_FROM_JSON(AuthorizationType, authorizationType_);
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CustomSubjectStatus, customSubjectStatus_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Features, features_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LogoUrl, logoUrl_);
        DARABONBA_PTR_FROM_JSON(M2MClientStatus, m2MClientStatus_);
        DARABONBA_PTR_FROM_JSON(ManagedServiceCode, managedServiceCode_);
        DARABONBA_PTR_FROM_JSON(ResourceServerIdentifier, resourceServerIdentifier_);
        DARABONBA_PTR_FROM_JSON(ResourceServerSourceType, resourceServerSourceType_);
        DARABONBA_PTR_FROM_JSON(ResourceServerStatus, resourceServerStatus_);
        DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_FROM_JSON(SsoType, ssoType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Application() = default ;
      Application(const Application &) = default ;
      Application(Application &&) = default ;
      Application(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Application() = default ;
      Application& operator=(const Application &) = default ;
      Application& operator=(Application &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiInvokeStatus_ == nullptr
        && this->applicationCreationType_ == nullptr && this->applicationId_ == nullptr && this->applicationName_ == nullptr && this->applicationSourceType_ == nullptr && this->applicationTemplateId_ == nullptr
        && this->applicationVisibility_ == nullptr && this->authorizationType_ == nullptr && this->clientId_ == nullptr && this->createTime_ == nullptr && this->customSubjectStatus_ == nullptr
        && this->description_ == nullptr && this->features_ == nullptr && this->instanceId_ == nullptr && this->logoUrl_ == nullptr && this->m2MClientStatus_ == nullptr
        && this->managedServiceCode_ == nullptr && this->resourceServerIdentifier_ == nullptr && this->resourceServerSourceType_ == nullptr && this->resourceServerStatus_ == nullptr && this->serviceManaged_ == nullptr
        && this->ssoType_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // apiInvokeStatus Field Functions 
      bool hasApiInvokeStatus() const { return this->apiInvokeStatus_ != nullptr;};
      void deleteApiInvokeStatus() { this->apiInvokeStatus_ = nullptr;};
      inline string getApiInvokeStatus() const { DARABONBA_PTR_GET_DEFAULT(apiInvokeStatus_, "") };
      inline Application& setApiInvokeStatus(string apiInvokeStatus) { DARABONBA_PTR_SET_VALUE(apiInvokeStatus_, apiInvokeStatus) };


      // applicationCreationType Field Functions 
      bool hasApplicationCreationType() const { return this->applicationCreationType_ != nullptr;};
      void deleteApplicationCreationType() { this->applicationCreationType_ = nullptr;};
      inline string getApplicationCreationType() const { DARABONBA_PTR_GET_DEFAULT(applicationCreationType_, "") };
      inline Application& setApplicationCreationType(string applicationCreationType) { DARABONBA_PTR_SET_VALUE(applicationCreationType_, applicationCreationType) };


      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline Application& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline Application& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // applicationSourceType Field Functions 
      bool hasApplicationSourceType() const { return this->applicationSourceType_ != nullptr;};
      void deleteApplicationSourceType() { this->applicationSourceType_ = nullptr;};
      inline string getApplicationSourceType() const { DARABONBA_PTR_GET_DEFAULT(applicationSourceType_, "") };
      inline Application& setApplicationSourceType(string applicationSourceType) { DARABONBA_PTR_SET_VALUE(applicationSourceType_, applicationSourceType) };


      // applicationTemplateId Field Functions 
      bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
      void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
      inline string getApplicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
      inline Application& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


      // applicationVisibility Field Functions 
      bool hasApplicationVisibility() const { return this->applicationVisibility_ != nullptr;};
      void deleteApplicationVisibility() { this->applicationVisibility_ = nullptr;};
      inline const vector<string> & getApplicationVisibility() const { DARABONBA_PTR_GET_CONST(applicationVisibility_, vector<string>) };
      inline vector<string> getApplicationVisibility() { DARABONBA_PTR_GET(applicationVisibility_, vector<string>) };
      inline Application& setApplicationVisibility(const vector<string> & applicationVisibility) { DARABONBA_PTR_SET_VALUE(applicationVisibility_, applicationVisibility) };
      inline Application& setApplicationVisibility(vector<string> && applicationVisibility) { DARABONBA_PTR_SET_RVALUE(applicationVisibility_, applicationVisibility) };


      // authorizationType Field Functions 
      bool hasAuthorizationType() const { return this->authorizationType_ != nullptr;};
      void deleteAuthorizationType() { this->authorizationType_ = nullptr;};
      inline string getAuthorizationType() const { DARABONBA_PTR_GET_DEFAULT(authorizationType_, "") };
      inline Application& setAuthorizationType(string authorizationType) { DARABONBA_PTR_SET_VALUE(authorizationType_, authorizationType) };


      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline Application& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Application& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // customSubjectStatus Field Functions 
      bool hasCustomSubjectStatus() const { return this->customSubjectStatus_ != nullptr;};
      void deleteCustomSubjectStatus() { this->customSubjectStatus_ = nullptr;};
      inline string getCustomSubjectStatus() const { DARABONBA_PTR_GET_DEFAULT(customSubjectStatus_, "") };
      inline Application& setCustomSubjectStatus(string customSubjectStatus) { DARABONBA_PTR_SET_VALUE(customSubjectStatus_, customSubjectStatus) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Application& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // features Field Functions 
      bool hasFeatures() const { return this->features_ != nullptr;};
      void deleteFeatures() { this->features_ = nullptr;};
      inline string getFeatures() const { DARABONBA_PTR_GET_DEFAULT(features_, "") };
      inline Application& setFeatures(string features) { DARABONBA_PTR_SET_VALUE(features_, features) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Application& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // logoUrl Field Functions 
      bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
      void deleteLogoUrl() { this->logoUrl_ = nullptr;};
      inline string getLogoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
      inline Application& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


      // m2MClientStatus Field Functions 
      bool hasM2MClientStatus() const { return this->m2MClientStatus_ != nullptr;};
      void deleteM2MClientStatus() { this->m2MClientStatus_ = nullptr;};
      inline string getM2MClientStatus() const { DARABONBA_PTR_GET_DEFAULT(m2MClientStatus_, "") };
      inline Application& setM2MClientStatus(string m2MClientStatus) { DARABONBA_PTR_SET_VALUE(m2MClientStatus_, m2MClientStatus) };


      // managedServiceCode Field Functions 
      bool hasManagedServiceCode() const { return this->managedServiceCode_ != nullptr;};
      void deleteManagedServiceCode() { this->managedServiceCode_ = nullptr;};
      inline string getManagedServiceCode() const { DARABONBA_PTR_GET_DEFAULT(managedServiceCode_, "") };
      inline Application& setManagedServiceCode(string managedServiceCode) { DARABONBA_PTR_SET_VALUE(managedServiceCode_, managedServiceCode) };


      // resourceServerIdentifier Field Functions 
      bool hasResourceServerIdentifier() const { return this->resourceServerIdentifier_ != nullptr;};
      void deleteResourceServerIdentifier() { this->resourceServerIdentifier_ = nullptr;};
      inline string getResourceServerIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceServerIdentifier_, "") };
      inline Application& setResourceServerIdentifier(string resourceServerIdentifier) { DARABONBA_PTR_SET_VALUE(resourceServerIdentifier_, resourceServerIdentifier) };


      // resourceServerSourceType Field Functions 
      bool hasResourceServerSourceType() const { return this->resourceServerSourceType_ != nullptr;};
      void deleteResourceServerSourceType() { this->resourceServerSourceType_ = nullptr;};
      inline string getResourceServerSourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceServerSourceType_, "") };
      inline Application& setResourceServerSourceType(string resourceServerSourceType) { DARABONBA_PTR_SET_VALUE(resourceServerSourceType_, resourceServerSourceType) };


      // resourceServerStatus Field Functions 
      bool hasResourceServerStatus() const { return this->resourceServerStatus_ != nullptr;};
      void deleteResourceServerStatus() { this->resourceServerStatus_ = nullptr;};
      inline string getResourceServerStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceServerStatus_, "") };
      inline Application& setResourceServerStatus(string resourceServerStatus) { DARABONBA_PTR_SET_VALUE(resourceServerStatus_, resourceServerStatus) };


      // serviceManaged Field Functions 
      bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
      void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
      inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
      inline Application& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


      // ssoType Field Functions 
      bool hasSsoType() const { return this->ssoType_ != nullptr;};
      void deleteSsoType() { this->ssoType_ = nullptr;};
      inline string getSsoType() const { DARABONBA_PTR_GET_DEFAULT(ssoType_, "") };
      inline Application& setSsoType(string ssoType) { DARABONBA_PTR_SET_VALUE(ssoType_, ssoType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Application& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Application& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The status of the Developer API feature. Valid values:
      // 
      // *   Enabled: The Developer API feature is enabled.
      // *   Disabled: The Developer API feature is disabled.
      shared_ptr<string> apiInvokeStatus_ {};
      shared_ptr<string> applicationCreationType_ {};
      // The ID of the application.
      shared_ptr<string> applicationId_ {};
      // The name of the application.
      shared_ptr<string> applicationName_ {};
      // The origin of the application. Valid values:
      // 
      // *   urn:alibaba:idaas:app:source:template: The application is created based on a template.
      // *   urn:alibaba:idaas: The application is created based on the standard protocol.
      shared_ptr<string> applicationSourceType_ {};
      // The ID of the template based on which the application is created. This parameter is returned only if the application is created based on a template.
      shared_ptr<string> applicationTemplateId_ {};
      // Application visibility
      shared_ptr<vector<string>> applicationVisibility_ {};
      // The authorization type of the EIAM application. Valid values:
      // 
      // *   authorize_required: Only the user with explicit authorization can access the application.
      // *   default_all: By default, all users can access the application.
      shared_ptr<string> authorizationType_ {};
      // The client ID of the application.
      shared_ptr<string> clientId_ {};
      // The time when the application was created. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> customSubjectStatus_ {};
      // The description of the application.
      shared_ptr<string> description_ {};
      // The features that are supported by the application. The value is a JSON array. Valid values:
      // 
      // *   sso: The application supports SSO.
      // *   provision: The application supports account synchronization.
      // *   api_invoke: The application supports custom APIs.
      shared_ptr<string> features_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The URL of the application icon.
      shared_ptr<string> logoUrl_ {};
      // M2M client status.
      shared_ptr<string> m2MClientStatus_ {};
      // The service code of the cloud service that manages the application template.
      shared_ptr<string> managedServiceCode_ {};
      // Unique identifier of the resource server
      shared_ptr<string> resourceServerIdentifier_ {};
      shared_ptr<string> resourceServerSourceType_ {};
      // Resource server status.
      shared_ptr<string> resourceServerStatus_ {};
      // Indicates whether the application template is managed by a cloud service.
      shared_ptr<bool> serviceManaged_ {};
      // The type of the single sign-on (SSO) protocol. Valid values:
      // 
      // *   saml2: the Security Assertion Markup Language (SAML) 2.0 protocol.
      // *   oidc: the OpenID Connect (OIDC) protocol.
      shared_ptr<string> ssoType_ {};
      // The status of the application. Valid values:
      // 
      // *   Enabled: The application is enabled.
      // *   Disabled: The application is disabled.
      shared_ptr<string> status_ {};
      // The time when the application was last updated. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->application_ == nullptr
        && this->requestId_ == nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline const GetApplicationResponseBody::Application & getApplication() const { DARABONBA_PTR_GET_CONST(application_, GetApplicationResponseBody::Application) };
    inline GetApplicationResponseBody::Application getApplication() { DARABONBA_PTR_GET(application_, GetApplicationResponseBody::Application) };
    inline GetApplicationResponseBody& setApplication(const GetApplicationResponseBody::Application & application) { DARABONBA_PTR_SET_VALUE(application_, application) };
    inline GetApplicationResponseBody& setApplication(GetApplicationResponseBody::Application && application) { DARABONBA_PTR_SET_RVALUE(application_, application) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the application.
    shared_ptr<GetApplicationResponseBody::Application> application_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
