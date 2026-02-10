// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODY_HPP_
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
  class ListApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationsResponseBody() = default ;
    ListApplicationsResponseBody(const ListApplicationsResponseBody &) = default ;
    ListApplicationsResponseBody(ListApplicationsResponseBody &&) = default ;
    ListApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsResponseBody() = default ;
    ListApplicationsResponseBody& operator=(const ListApplicationsResponseBody &) = default ;
    ListApplicationsResponseBody& operator=(ListApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Applications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Applications& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationCreationType, applicationCreationType_);
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(ApplicationIdentityType, applicationIdentityType_);
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(ApplicationSourceType, applicationSourceType_);
        DARABONBA_PTR_TO_JSON(ApplicationTemplateId, applicationTemplateId_);
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Features, features_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LogoUrl, logoUrl_);
        DARABONBA_PTR_TO_JSON(ManagedServiceCode, managedServiceCode_);
        DARABONBA_PTR_TO_JSON(ResourceServerIdentifier, resourceServerIdentifier_);
        DARABONBA_PTR_TO_JSON(ResourceServerSourceType, resourceServerSourceType_);
        DARABONBA_PTR_TO_JSON(ResourceServerStatus, resourceServerStatus_);
        DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_TO_JSON(SsoType, ssoType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Applications& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationCreationType, applicationCreationType_);
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(ApplicationIdentityType, applicationIdentityType_);
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(ApplicationSourceType, applicationSourceType_);
        DARABONBA_PTR_FROM_JSON(ApplicationTemplateId, applicationTemplateId_);
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Features, features_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LogoUrl, logoUrl_);
        DARABONBA_PTR_FROM_JSON(ManagedServiceCode, managedServiceCode_);
        DARABONBA_PTR_FROM_JSON(ResourceServerIdentifier, resourceServerIdentifier_);
        DARABONBA_PTR_FROM_JSON(ResourceServerSourceType, resourceServerSourceType_);
        DARABONBA_PTR_FROM_JSON(ResourceServerStatus, resourceServerStatus_);
        DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_FROM_JSON(SsoType, ssoType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Applications() = default ;
      Applications(const Applications &) = default ;
      Applications(Applications &&) = default ;
      Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Applications() = default ;
      Applications& operator=(const Applications &) = default ;
      Applications& operator=(Applications &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationCreationType_ == nullptr
        && this->applicationId_ == nullptr && this->applicationIdentityType_ == nullptr && this->applicationName_ == nullptr && this->applicationSourceType_ == nullptr && this->applicationTemplateId_ == nullptr
        && this->clientId_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->features_ == nullptr && this->instanceId_ == nullptr
        && this->logoUrl_ == nullptr && this->managedServiceCode_ == nullptr && this->resourceServerIdentifier_ == nullptr && this->resourceServerSourceType_ == nullptr && this->resourceServerStatus_ == nullptr
        && this->serviceManaged_ == nullptr && this->ssoType_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // applicationCreationType Field Functions 
      bool hasApplicationCreationType() const { return this->applicationCreationType_ != nullptr;};
      void deleteApplicationCreationType() { this->applicationCreationType_ = nullptr;};
      inline string getApplicationCreationType() const { DARABONBA_PTR_GET_DEFAULT(applicationCreationType_, "") };
      inline Applications& setApplicationCreationType(string applicationCreationType) { DARABONBA_PTR_SET_VALUE(applicationCreationType_, applicationCreationType) };


      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline Applications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // applicationIdentityType Field Functions 
      bool hasApplicationIdentityType() const { return this->applicationIdentityType_ != nullptr;};
      void deleteApplicationIdentityType() { this->applicationIdentityType_ = nullptr;};
      inline string getApplicationIdentityType() const { DARABONBA_PTR_GET_DEFAULT(applicationIdentityType_, "") };
      inline Applications& setApplicationIdentityType(string applicationIdentityType) { DARABONBA_PTR_SET_VALUE(applicationIdentityType_, applicationIdentityType) };


      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline Applications& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // applicationSourceType Field Functions 
      bool hasApplicationSourceType() const { return this->applicationSourceType_ != nullptr;};
      void deleteApplicationSourceType() { this->applicationSourceType_ = nullptr;};
      inline string getApplicationSourceType() const { DARABONBA_PTR_GET_DEFAULT(applicationSourceType_, "") };
      inline Applications& setApplicationSourceType(string applicationSourceType) { DARABONBA_PTR_SET_VALUE(applicationSourceType_, applicationSourceType) };


      // applicationTemplateId Field Functions 
      bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
      void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
      inline string getApplicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
      inline Applications& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline Applications& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Applications& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Applications& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // features Field Functions 
      bool hasFeatures() const { return this->features_ != nullptr;};
      void deleteFeatures() { this->features_ = nullptr;};
      inline string getFeatures() const { DARABONBA_PTR_GET_DEFAULT(features_, "") };
      inline Applications& setFeatures(string features) { DARABONBA_PTR_SET_VALUE(features_, features) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Applications& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // logoUrl Field Functions 
      bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
      void deleteLogoUrl() { this->logoUrl_ = nullptr;};
      inline string getLogoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
      inline Applications& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


      // managedServiceCode Field Functions 
      bool hasManagedServiceCode() const { return this->managedServiceCode_ != nullptr;};
      void deleteManagedServiceCode() { this->managedServiceCode_ = nullptr;};
      inline string getManagedServiceCode() const { DARABONBA_PTR_GET_DEFAULT(managedServiceCode_, "") };
      inline Applications& setManagedServiceCode(string managedServiceCode) { DARABONBA_PTR_SET_VALUE(managedServiceCode_, managedServiceCode) };


      // resourceServerIdentifier Field Functions 
      bool hasResourceServerIdentifier() const { return this->resourceServerIdentifier_ != nullptr;};
      void deleteResourceServerIdentifier() { this->resourceServerIdentifier_ = nullptr;};
      inline string getResourceServerIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceServerIdentifier_, "") };
      inline Applications& setResourceServerIdentifier(string resourceServerIdentifier) { DARABONBA_PTR_SET_VALUE(resourceServerIdentifier_, resourceServerIdentifier) };


      // resourceServerSourceType Field Functions 
      bool hasResourceServerSourceType() const { return this->resourceServerSourceType_ != nullptr;};
      void deleteResourceServerSourceType() { this->resourceServerSourceType_ = nullptr;};
      inline string getResourceServerSourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceServerSourceType_, "") };
      inline Applications& setResourceServerSourceType(string resourceServerSourceType) { DARABONBA_PTR_SET_VALUE(resourceServerSourceType_, resourceServerSourceType) };


      // resourceServerStatus Field Functions 
      bool hasResourceServerStatus() const { return this->resourceServerStatus_ != nullptr;};
      void deleteResourceServerStatus() { this->resourceServerStatus_ = nullptr;};
      inline string getResourceServerStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceServerStatus_, "") };
      inline Applications& setResourceServerStatus(string resourceServerStatus) { DARABONBA_PTR_SET_VALUE(resourceServerStatus_, resourceServerStatus) };


      // serviceManaged Field Functions 
      bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
      void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
      inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
      inline Applications& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


      // ssoType Field Functions 
      bool hasSsoType() const { return this->ssoType_ != nullptr;};
      void deleteSsoType() { this->ssoType_ = nullptr;};
      inline string getSsoType() const { DARABONBA_PTR_GET_DEFAULT(ssoType_, "") };
      inline Applications& setSsoType(string ssoType) { DARABONBA_PTR_SET_VALUE(ssoType_, ssoType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Applications& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Applications& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> applicationCreationType_ {};
      // The ID of the application.
      shared_ptr<string> applicationId_ {};
      shared_ptr<string> applicationIdentityType_ {};
      // The name of the application.
      shared_ptr<string> applicationName_ {};
      // The origin of the application. Valid values:
      // 
      // *   urn:alibaba:idaas:app:source:template: The application is created based on a template.
      // *   urn:alibaba:idaas: The application is created based on the standard protocol.
      shared_ptr<string> applicationSourceType_ {};
      // The application template ID.
      shared_ptr<string> applicationTemplateId_ {};
      // The client ID of the application.
      shared_ptr<string> clientId_ {};
      // The time when the application was created. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The description of the application.
      shared_ptr<string> description_ {};
      // The features that are supported by the application. The value is a JSON array. Valid values:
      // 
      // *   sso: The application supports SSO.
      // *   slo: The application supports SLO.
      // *   provision: The application supports account synchronization.
      // *   api_invoke: The application supports custom APIs.
      // *   m2m_client: The application supports M2M Client.
      // *   resource_server: The application supports Resource Server.
      // *   other: undertake.
      shared_ptr<string> features_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The URL of the application icon.
      shared_ptr<string> logoUrl_ {};
      // The service code of the cloud service that manages the application template.
      shared_ptr<string> managedServiceCode_ {};
      shared_ptr<string> resourceServerIdentifier_ {};
      shared_ptr<string> resourceServerSourceType_ {};
      shared_ptr<string> resourceServerStatus_ {};
      // Indicates whether the application template is managed by a cloud service.
      shared_ptr<bool> serviceManaged_ {};
      // The type of the single sign-on (SSO) protocol. Valid values:
      // 
      // *   saml2: the Security Assertion Markup Language (SAML) 2.0 protocol.
      // *   oidc: the OpenID Connect (OIDC) protocol.
      // *   oauth2/m2m: the OAuth2.0  protocol M2M.
      shared_ptr<string> ssoType_ {};
      // The status of the application. Valid values:
      // 
      // *   enabled: The application is enabled.
      // *   disabled: The application is disabled.
      // *   deleted: The application is deleted.
      shared_ptr<string> status_ {};
      // The time when the application was last updated. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->applications_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<ListApplicationsResponseBody::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<ListApplicationsResponseBody::Applications>) };
    inline vector<ListApplicationsResponseBody::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<ListApplicationsResponseBody::Applications>) };
    inline ListApplicationsResponseBody& setApplications(const vector<ListApplicationsResponseBody::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListApplicationsResponseBody& setApplications(vector<ListApplicationsResponseBody::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApplicationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the applications.
    shared_ptr<vector<ListApplicationsResponseBody::Applications>> applications_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of the returned entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
