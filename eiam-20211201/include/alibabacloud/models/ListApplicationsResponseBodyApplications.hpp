// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationsResponseBodyApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsResponseBodyApplications& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
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
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(SsoType, ssoType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsResponseBodyApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
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
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(SsoType, ssoType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListApplicationsResponseBodyApplications() = default ;
    ListApplicationsResponseBodyApplications(const ListApplicationsResponseBodyApplications &) = default ;
    ListApplicationsResponseBodyApplications(ListApplicationsResponseBodyApplications &&) = default ;
    ListApplicationsResponseBodyApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsResponseBodyApplications() = default ;
    ListApplicationsResponseBodyApplications& operator=(const ListApplicationsResponseBodyApplications &) = default ;
    ListApplicationsResponseBodyApplications& operator=(ListApplicationsResponseBodyApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->applicationName_ != nullptr && this->applicationSourceType_ != nullptr && this->applicationTemplateId_ != nullptr && this->clientId_ != nullptr && this->createTime_ != nullptr
        && this->description_ != nullptr && this->features_ != nullptr && this->instanceId_ != nullptr && this->logoUrl_ != nullptr && this->managedServiceCode_ != nullptr
        && this->serviceManaged_ != nullptr && this->ssoType_ != nullptr && this->status_ != nullptr && this->updateTime_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListApplicationsResponseBodyApplications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListApplicationsResponseBodyApplications& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // applicationSourceType Field Functions 
    bool hasApplicationSourceType() const { return this->applicationSourceType_ != nullptr;};
    void deleteApplicationSourceType() { this->applicationSourceType_ = nullptr;};
    inline string applicationSourceType() const { DARABONBA_PTR_GET_DEFAULT(applicationSourceType_, "") };
    inline ListApplicationsResponseBodyApplications& setApplicationSourceType(string applicationSourceType) { DARABONBA_PTR_SET_VALUE(applicationSourceType_, applicationSourceType) };


    // applicationTemplateId Field Functions 
    bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
    void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
    inline string applicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
    inline ListApplicationsResponseBodyApplications& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline ListApplicationsResponseBodyApplications& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListApplicationsResponseBodyApplications& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApplicationsResponseBodyApplications& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline string features() const { DARABONBA_PTR_GET_DEFAULT(features_, "") };
    inline ListApplicationsResponseBodyApplications& setFeatures(string features) { DARABONBA_PTR_SET_VALUE(features_, features) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListApplicationsResponseBodyApplications& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logoUrl Field Functions 
    bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
    void deleteLogoUrl() { this->logoUrl_ = nullptr;};
    inline string logoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
    inline ListApplicationsResponseBodyApplications& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


    // managedServiceCode Field Functions 
    bool hasManagedServiceCode() const { return this->managedServiceCode_ != nullptr;};
    void deleteManagedServiceCode() { this->managedServiceCode_ = nullptr;};
    inline string managedServiceCode() const { DARABONBA_PTR_GET_DEFAULT(managedServiceCode_, "") };
    inline ListApplicationsResponseBodyApplications& setManagedServiceCode(string managedServiceCode) { DARABONBA_PTR_SET_VALUE(managedServiceCode_, managedServiceCode) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool serviceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline ListApplicationsResponseBodyApplications& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // ssoType Field Functions 
    bool hasSsoType() const { return this->ssoType_ != nullptr;};
    void deleteSsoType() { this->ssoType_ = nullptr;};
    inline string ssoType() const { DARABONBA_PTR_GET_DEFAULT(ssoType_, "") };
    inline ListApplicationsResponseBodyApplications& setSsoType(string ssoType) { DARABONBA_PTR_SET_VALUE(ssoType_, ssoType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListApplicationsResponseBodyApplications& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListApplicationsResponseBodyApplications& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The origin of the application. Valid values:
    // 
    // *   urn:alibaba:idaas:app:source:template: The application is created based on a template.
    // *   urn:alibaba:idaas: The application is created based on the standard protocol.
    std::shared_ptr<string> applicationSourceType_ = nullptr;
    // The application template ID.
    std::shared_ptr<string> applicationTemplateId_ = nullptr;
    // The client ID of the application.
    std::shared_ptr<string> clientId_ = nullptr;
    // The time when the application was created. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The features that are supported by the application. The value is a JSON array. Valid values:
    // 
    // *   sso: The application supports SSO.
    // *   slo: The application supports SLO.
    // *   provision: The application supports account synchronization.
    // *   api_invoke: The application supports custom APIs.
    // *   m2m_client: The application supports M2M Client.
    // *   resource_server: The application supports Resource Server.
    // *   other: undertake.
    std::shared_ptr<string> features_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The URL of the application icon.
    std::shared_ptr<string> logoUrl_ = nullptr;
    // The service code of the cloud service that manages the application template.
    std::shared_ptr<string> managedServiceCode_ = nullptr;
    // Indicates whether the application template is managed by a cloud service.
    std::shared_ptr<bool> serviceManaged_ = nullptr;
    // The type of the single sign-on (SSO) protocol. Valid values:
    // 
    // *   saml2: the Security Assertion Markup Language (SAML) 2.0 protocol.
    // *   oidc: the OpenID Connect (OIDC) protocol.
    // *   oauth2/m2m: the OAuth2.0  protocol M2M.
    std::shared_ptr<string> ssoType_ = nullptr;
    // The status of the application. Valid values:
    // 
    // *   enabled: The application is enabled.
    // *   disabled: The application is disabled.
    // *   deleted: The application is deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the application was last updated. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
