// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATION_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATION_HPP_
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
  class GetApplicationResponseBodyApplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBodyApplication& obj) { 
      DARABONBA_PTR_TO_JSON(ApiInvokeStatus, apiInvokeStatus_);
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
      DARABONBA_PTR_TO_JSON(ResourceServerStatus, resourceServerStatus_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(SsoType, ssoType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBodyApplication& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiInvokeStatus, apiInvokeStatus_);
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
      DARABONBA_PTR_FROM_JSON(ResourceServerStatus, resourceServerStatus_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(SsoType, ssoType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetApplicationResponseBodyApplication() = default ;
    GetApplicationResponseBodyApplication(const GetApplicationResponseBodyApplication &) = default ;
    GetApplicationResponseBodyApplication(GetApplicationResponseBodyApplication &&) = default ;
    GetApplicationResponseBodyApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBodyApplication() = default ;
    GetApplicationResponseBodyApplication& operator=(const GetApplicationResponseBodyApplication &) = default ;
    GetApplicationResponseBodyApplication& operator=(GetApplicationResponseBodyApplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiInvokeStatus_ != nullptr
        && this->applicationId_ != nullptr && this->applicationName_ != nullptr && this->applicationSourceType_ != nullptr && this->applicationTemplateId_ != nullptr && this->applicationVisibility_ != nullptr
        && this->authorizationType_ != nullptr && this->clientId_ != nullptr && this->createTime_ != nullptr && this->customSubjectStatus_ != nullptr && this->description_ != nullptr
        && this->features_ != nullptr && this->instanceId_ != nullptr && this->logoUrl_ != nullptr && this->m2MClientStatus_ != nullptr && this->managedServiceCode_ != nullptr
        && this->resourceServerIdentifier_ != nullptr && this->resourceServerStatus_ != nullptr && this->serviceManaged_ != nullptr && this->ssoType_ != nullptr && this->status_ != nullptr
        && this->updateTime_ != nullptr; };
    // apiInvokeStatus Field Functions 
    bool hasApiInvokeStatus() const { return this->apiInvokeStatus_ != nullptr;};
    void deleteApiInvokeStatus() { this->apiInvokeStatus_ = nullptr;};
    inline string apiInvokeStatus() const { DARABONBA_PTR_GET_DEFAULT(apiInvokeStatus_, "") };
    inline GetApplicationResponseBodyApplication& setApiInvokeStatus(string apiInvokeStatus) { DARABONBA_PTR_SET_VALUE(apiInvokeStatus_, apiInvokeStatus) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline GetApplicationResponseBodyApplication& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline GetApplicationResponseBodyApplication& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // applicationSourceType Field Functions 
    bool hasApplicationSourceType() const { return this->applicationSourceType_ != nullptr;};
    void deleteApplicationSourceType() { this->applicationSourceType_ = nullptr;};
    inline string applicationSourceType() const { DARABONBA_PTR_GET_DEFAULT(applicationSourceType_, "") };
    inline GetApplicationResponseBodyApplication& setApplicationSourceType(string applicationSourceType) { DARABONBA_PTR_SET_VALUE(applicationSourceType_, applicationSourceType) };


    // applicationTemplateId Field Functions 
    bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
    void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
    inline string applicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
    inline GetApplicationResponseBodyApplication& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


    // applicationVisibility Field Functions 
    bool hasApplicationVisibility() const { return this->applicationVisibility_ != nullptr;};
    void deleteApplicationVisibility() { this->applicationVisibility_ = nullptr;};
    inline const vector<string> & applicationVisibility() const { DARABONBA_PTR_GET_CONST(applicationVisibility_, vector<string>) };
    inline vector<string> applicationVisibility() { DARABONBA_PTR_GET(applicationVisibility_, vector<string>) };
    inline GetApplicationResponseBodyApplication& setApplicationVisibility(const vector<string> & applicationVisibility) { DARABONBA_PTR_SET_VALUE(applicationVisibility_, applicationVisibility) };
    inline GetApplicationResponseBodyApplication& setApplicationVisibility(vector<string> && applicationVisibility) { DARABONBA_PTR_SET_RVALUE(applicationVisibility_, applicationVisibility) };


    // authorizationType Field Functions 
    bool hasAuthorizationType() const { return this->authorizationType_ != nullptr;};
    void deleteAuthorizationType() { this->authorizationType_ = nullptr;};
    inline string authorizationType() const { DARABONBA_PTR_GET_DEFAULT(authorizationType_, "") };
    inline GetApplicationResponseBodyApplication& setAuthorizationType(string authorizationType) { DARABONBA_PTR_SET_VALUE(authorizationType_, authorizationType) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline GetApplicationResponseBodyApplication& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetApplicationResponseBodyApplication& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customSubjectStatus Field Functions 
    bool hasCustomSubjectStatus() const { return this->customSubjectStatus_ != nullptr;};
    void deleteCustomSubjectStatus() { this->customSubjectStatus_ = nullptr;};
    inline string customSubjectStatus() const { DARABONBA_PTR_GET_DEFAULT(customSubjectStatus_, "") };
    inline GetApplicationResponseBodyApplication& setCustomSubjectStatus(string customSubjectStatus) { DARABONBA_PTR_SET_VALUE(customSubjectStatus_, customSubjectStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetApplicationResponseBodyApplication& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline string features() const { DARABONBA_PTR_GET_DEFAULT(features_, "") };
    inline GetApplicationResponseBodyApplication& setFeatures(string features) { DARABONBA_PTR_SET_VALUE(features_, features) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetApplicationResponseBodyApplication& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logoUrl Field Functions 
    bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
    void deleteLogoUrl() { this->logoUrl_ = nullptr;};
    inline string logoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
    inline GetApplicationResponseBodyApplication& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


    // m2MClientStatus Field Functions 
    bool hasM2MClientStatus() const { return this->m2MClientStatus_ != nullptr;};
    void deleteM2MClientStatus() { this->m2MClientStatus_ = nullptr;};
    inline string m2MClientStatus() const { DARABONBA_PTR_GET_DEFAULT(m2MClientStatus_, "") };
    inline GetApplicationResponseBodyApplication& setM2MClientStatus(string m2MClientStatus) { DARABONBA_PTR_SET_VALUE(m2MClientStatus_, m2MClientStatus) };


    // managedServiceCode Field Functions 
    bool hasManagedServiceCode() const { return this->managedServiceCode_ != nullptr;};
    void deleteManagedServiceCode() { this->managedServiceCode_ = nullptr;};
    inline string managedServiceCode() const { DARABONBA_PTR_GET_DEFAULT(managedServiceCode_, "") };
    inline GetApplicationResponseBodyApplication& setManagedServiceCode(string managedServiceCode) { DARABONBA_PTR_SET_VALUE(managedServiceCode_, managedServiceCode) };


    // resourceServerIdentifier Field Functions 
    bool hasResourceServerIdentifier() const { return this->resourceServerIdentifier_ != nullptr;};
    void deleteResourceServerIdentifier() { this->resourceServerIdentifier_ = nullptr;};
    inline string resourceServerIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceServerIdentifier_, "") };
    inline GetApplicationResponseBodyApplication& setResourceServerIdentifier(string resourceServerIdentifier) { DARABONBA_PTR_SET_VALUE(resourceServerIdentifier_, resourceServerIdentifier) };


    // resourceServerStatus Field Functions 
    bool hasResourceServerStatus() const { return this->resourceServerStatus_ != nullptr;};
    void deleteResourceServerStatus() { this->resourceServerStatus_ = nullptr;};
    inline string resourceServerStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceServerStatus_, "") };
    inline GetApplicationResponseBodyApplication& setResourceServerStatus(string resourceServerStatus) { DARABONBA_PTR_SET_VALUE(resourceServerStatus_, resourceServerStatus) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool serviceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline GetApplicationResponseBodyApplication& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // ssoType Field Functions 
    bool hasSsoType() const { return this->ssoType_ != nullptr;};
    void deleteSsoType() { this->ssoType_ = nullptr;};
    inline string ssoType() const { DARABONBA_PTR_GET_DEFAULT(ssoType_, "") };
    inline GetApplicationResponseBodyApplication& setSsoType(string ssoType) { DARABONBA_PTR_SET_VALUE(ssoType_, ssoType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetApplicationResponseBodyApplication& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetApplicationResponseBodyApplication& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The status of the Developer API feature. Valid values:
    // 
    // *   Enabled: The Developer API feature is enabled.
    // *   Disabled: The Developer API feature is disabled.
    std::shared_ptr<string> apiInvokeStatus_ = nullptr;
    // The ID of the application.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The origin of the application. Valid values:
    // 
    // *   urn:alibaba:idaas:app:source:template: The application is created based on a template.
    // *   urn:alibaba:idaas: The application is created based on the standard protocol.
    std::shared_ptr<string> applicationSourceType_ = nullptr;
    // The ID of the template based on which the application is created. This parameter is returned only if the application is created based on a template.
    std::shared_ptr<string> applicationTemplateId_ = nullptr;
    // Application visibility
    std::shared_ptr<vector<string>> applicationVisibility_ = nullptr;
    // The authorization type of the EIAM application. Valid values:
    // 
    // *   authorize_required: Only the user with explicit authorization can access the application.
    // *   default_all: By default, all users can access the application.
    std::shared_ptr<string> authorizationType_ = nullptr;
    // The client ID of the application.
    std::shared_ptr<string> clientId_ = nullptr;
    // The time when the application was created. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> customSubjectStatus_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The features that are supported by the application. The value is a JSON array. Valid values:
    // 
    // *   sso: The application supports SSO.
    // *   provision: The application supports account synchronization.
    // *   api_invoke: The application supports custom APIs.
    std::shared_ptr<string> features_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The URL of the application icon.
    std::shared_ptr<string> logoUrl_ = nullptr;
    // M2M client status.
    std::shared_ptr<string> m2MClientStatus_ = nullptr;
    // The service code of the cloud service that manages the application template.
    std::shared_ptr<string> managedServiceCode_ = nullptr;
    // Unique identifier of the resource server
    std::shared_ptr<string> resourceServerIdentifier_ = nullptr;
    // Resource server status.
    std::shared_ptr<string> resourceServerStatus_ = nullptr;
    // Indicates whether the application template is managed by a cloud service.
    std::shared_ptr<bool> serviceManaged_ = nullptr;
    // The type of the single sign-on (SSO) protocol. Valid values:
    // 
    // *   saml2: the Security Assertion Markup Language (SAML) 2.0 protocol.
    // *   oidc: the OpenID Connect (OIDC) protocol.
    std::shared_ptr<string> ssoType_ = nullptr;
    // The status of the application. Valid values:
    // 
    // *   Enabled: The application is enabled.
    // *   Disabled: The application is disabled.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the application was last updated. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
