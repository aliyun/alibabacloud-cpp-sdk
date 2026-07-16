// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSREQUEST_HPP_
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
  class ListApplicationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationCreationType, applicationCreationType_);
      DARABONBA_PTR_TO_JSON(ApplicationIdentityType, applicationIdentityType_);
      DARABONBA_PTR_TO_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ApplicationTemplateId, applicationTemplateId_);
      DARABONBA_PTR_TO_JSON(AuthorizationType, authorizationType_);
      DARABONBA_PTR_TO_JSON(CustomFields, customFields_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(M2MClientStatus, m2MClientStatus_);
      DARABONBA_PTR_TO_JSON(ManagedServiceCode, managedServiceCode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceServerStatus, resourceServerStatus_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(SsoType, ssoType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationCreationType, applicationCreationType_);
      DARABONBA_PTR_FROM_JSON(ApplicationIdentityType, applicationIdentityType_);
      DARABONBA_PTR_FROM_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ApplicationTemplateId, applicationTemplateId_);
      DARABONBA_PTR_FROM_JSON(AuthorizationType, authorizationType_);
      DARABONBA_PTR_FROM_JSON(CustomFields, customFields_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(M2MClientStatus, m2MClientStatus_);
      DARABONBA_PTR_FROM_JSON(ManagedServiceCode, managedServiceCode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceServerStatus, resourceServerStatus_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(SsoType, ssoType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListApplicationsRequest() = default ;
    ListApplicationsRequest(const ListApplicationsRequest &) = default ;
    ListApplicationsRequest(ListApplicationsRequest &&) = default ;
    ListApplicationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsRequest() = default ;
    ListApplicationsRequest& operator=(const ListApplicationsRequest &) = default ;
    ListApplicationsRequest& operator=(ListApplicationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomFields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomFields& obj) { 
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
      };
      friend void from_json(const Darabonba::Json& j, CustomFields& obj) { 
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
      };
      CustomFields() = default ;
      CustomFields(const CustomFields &) = default ;
      CustomFields(CustomFields &&) = default ;
      CustomFields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomFields() = default ;
      CustomFields& operator=(const CustomFields &) = default ;
      CustomFields& operator=(CustomFields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fieldName_ == nullptr
        && this->fieldValue_ == nullptr; };
      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline CustomFields& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // fieldValue Field Functions 
      bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
      void deleteFieldValue() { this->fieldValue_ = nullptr;};
      inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
      inline CustomFields& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    protected:
      // The custom field identifier. Valid values:
      // - agent_type: the agent type.
      shared_ptr<string> fieldName_ {};
      // The custom field value.
      shared_ptr<string> fieldValue_ {};
    };

    virtual bool empty() const override { return this->applicationCreationType_ == nullptr
        && this->applicationIdentityType_ == nullptr && this->applicationIds_ == nullptr && this->applicationName_ == nullptr && this->applicationTemplateId_ == nullptr && this->authorizationType_ == nullptr
        && this->customFields_ == nullptr && this->instanceId_ == nullptr && this->m2MClientStatus_ == nullptr && this->managedServiceCode_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->resourceServerStatus_ == nullptr && this->serviceManaged_ == nullptr && this->ssoType_ == nullptr && this->status_ == nullptr; };
    // applicationCreationType Field Functions 
    bool hasApplicationCreationType() const { return this->applicationCreationType_ != nullptr;};
    void deleteApplicationCreationType() { this->applicationCreationType_ = nullptr;};
    inline string getApplicationCreationType() const { DARABONBA_PTR_GET_DEFAULT(applicationCreationType_, "") };
    inline ListApplicationsRequest& setApplicationCreationType(string applicationCreationType) { DARABONBA_PTR_SET_VALUE(applicationCreationType_, applicationCreationType) };


    // applicationIdentityType Field Functions 
    bool hasApplicationIdentityType() const { return this->applicationIdentityType_ != nullptr;};
    void deleteApplicationIdentityType() { this->applicationIdentityType_ = nullptr;};
    inline string getApplicationIdentityType() const { DARABONBA_PTR_GET_DEFAULT(applicationIdentityType_, "") };
    inline ListApplicationsRequest& setApplicationIdentityType(string applicationIdentityType) { DARABONBA_PTR_SET_VALUE(applicationIdentityType_, applicationIdentityType) };


    // applicationIds Field Functions 
    bool hasApplicationIds() const { return this->applicationIds_ != nullptr;};
    void deleteApplicationIds() { this->applicationIds_ = nullptr;};
    inline const vector<string> & getApplicationIds() const { DARABONBA_PTR_GET_CONST(applicationIds_, vector<string>) };
    inline vector<string> getApplicationIds() { DARABONBA_PTR_GET(applicationIds_, vector<string>) };
    inline ListApplicationsRequest& setApplicationIds(const vector<string> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
    inline ListApplicationsRequest& setApplicationIds(vector<string> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListApplicationsRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // applicationTemplateId Field Functions 
    bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
    void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
    inline string getApplicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
    inline ListApplicationsRequest& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


    // authorizationType Field Functions 
    bool hasAuthorizationType() const { return this->authorizationType_ != nullptr;};
    void deleteAuthorizationType() { this->authorizationType_ = nullptr;};
    inline string getAuthorizationType() const { DARABONBA_PTR_GET_DEFAULT(authorizationType_, "") };
    inline ListApplicationsRequest& setAuthorizationType(string authorizationType) { DARABONBA_PTR_SET_VALUE(authorizationType_, authorizationType) };


    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline const vector<ListApplicationsRequest::CustomFields> & getCustomFields() const { DARABONBA_PTR_GET_CONST(customFields_, vector<ListApplicationsRequest::CustomFields>) };
    inline vector<ListApplicationsRequest::CustomFields> getCustomFields() { DARABONBA_PTR_GET(customFields_, vector<ListApplicationsRequest::CustomFields>) };
    inline ListApplicationsRequest& setCustomFields(const vector<ListApplicationsRequest::CustomFields> & customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };
    inline ListApplicationsRequest& setCustomFields(vector<ListApplicationsRequest::CustomFields> && customFields) { DARABONBA_PTR_SET_RVALUE(customFields_, customFields) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListApplicationsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // m2MClientStatus Field Functions 
    bool hasM2MClientStatus() const { return this->m2MClientStatus_ != nullptr;};
    void deleteM2MClientStatus() { this->m2MClientStatus_ = nullptr;};
    inline string getM2MClientStatus() const { DARABONBA_PTR_GET_DEFAULT(m2MClientStatus_, "") };
    inline ListApplicationsRequest& setM2MClientStatus(string m2MClientStatus) { DARABONBA_PTR_SET_VALUE(m2MClientStatus_, m2MClientStatus) };


    // managedServiceCode Field Functions 
    bool hasManagedServiceCode() const { return this->managedServiceCode_ != nullptr;};
    void deleteManagedServiceCode() { this->managedServiceCode_ = nullptr;};
    inline string getManagedServiceCode() const { DARABONBA_PTR_GET_DEFAULT(managedServiceCode_, "") };
    inline ListApplicationsRequest& setManagedServiceCode(string managedServiceCode) { DARABONBA_PTR_SET_VALUE(managedServiceCode_, managedServiceCode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListApplicationsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListApplicationsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceServerStatus Field Functions 
    bool hasResourceServerStatus() const { return this->resourceServerStatus_ != nullptr;};
    void deleteResourceServerStatus() { this->resourceServerStatus_ = nullptr;};
    inline string getResourceServerStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceServerStatus_, "") };
    inline ListApplicationsRequest& setResourceServerStatus(string resourceServerStatus) { DARABONBA_PTR_SET_VALUE(resourceServerStatus_, resourceServerStatus) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline ListApplicationsRequest& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // ssoType Field Functions 
    bool hasSsoType() const { return this->ssoType_ != nullptr;};
    void deleteSsoType() { this->ssoType_ = nullptr;};
    inline string getSsoType() const { DARABONBA_PTR_GET_DEFAULT(ssoType_, "") };
    inline ListApplicationsRequest& setSsoType(string ssoType) { DARABONBA_PTR_SET_VALUE(ssoType_, ssoType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListApplicationsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The application creation type. If this parameter is left empty, applications of the user_custom type are queried by default. To query applications of all types, set this parameter to all.
    shared_ptr<string> applicationCreationType_ {};
    // The application identity type. If this parameter is left empty, applications of the application type are queried by default. To query applications of all identity types, set this parameter to all.
    shared_ptr<string> applicationIdentityType_ {};
    // The list of application IDs.
    shared_ptr<vector<string>> applicationIds_ {};
    // The application name. Only left fuzzy match is supported.
    shared_ptr<string> applicationName_ {};
    shared_ptr<string> applicationTemplateId_ {};
    // The application access authorization type. Valid values:
    // - authorize_required: Explicit authorization is required for access.
    // - default_all: All members have access permissions by default.
    shared_ptr<string> authorizationType_ {};
    // The list of custom fields.
    shared_ptr<vector<ListApplicationsRequest::CustomFields>> customFields_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies whether the M2M Client identity is enabled.
    shared_ptr<string> m2MClientStatus_ {};
    shared_ptr<string> managedServiceCode_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The page size.
    shared_ptr<int64_t> pageSize_ {};
    // Specifies whether the ResourceServer capability is enabled.
    shared_ptr<string> resourceServerStatus_ {};
    shared_ptr<bool> serviceManaged_ {};
    // The SSO type filter condition. Multiple types can be separated by commas, such as oauth2/m2m,oidc+oauth2/m2m.
    shared_ptr<string> ssoType_ {};
    // The application status. Valid values:
    // - enabled: Enabled.
    // - disabled: Disabled.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
