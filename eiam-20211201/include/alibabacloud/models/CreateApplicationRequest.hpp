// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUEST_HPP_
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
  class CreateApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationIdentityType, applicationIdentityType_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ApplicationOwner, applicationOwner_);
      DARABONBA_PTR_TO_JSON(ApplicationSourceType, applicationSourceType_);
      DARABONBA_PTR_TO_JSON(ApplicationTemplateId, applicationTemplateId_);
      DARABONBA_PTR_TO_JSON(CustomFields, customFields_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_TO_JSON(SsoType, ssoType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationIdentityType, applicationIdentityType_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ApplicationOwner, applicationOwner_);
      DARABONBA_PTR_FROM_JSON(ApplicationSourceType, applicationSourceType_);
      DARABONBA_PTR_FROM_JSON(ApplicationTemplateId, applicationTemplateId_);
      DARABONBA_PTR_FROM_JSON(CustomFields, customFields_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_FROM_JSON(SsoType, ssoType_);
    };
    CreateApplicationRequest() = default ;
    CreateApplicationRequest(const CreateApplicationRequest &) = default ;
    CreateApplicationRequest(CreateApplicationRequest &&) = default ;
    CreateApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationRequest() = default ;
    CreateApplicationRequest& operator=(const CreateApplicationRequest &) = default ;
    CreateApplicationRequest& operator=(CreateApplicationRequest &&) = default ;
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
      shared_ptr<string> fieldName_ {};
      shared_ptr<string> fieldValue_ {};
    };

    class ApplicationOwner : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationOwner& obj) { 
        DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
        DARABONBA_PTR_TO_JSON(UserIds, userIds_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationOwner& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
        DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
      };
      ApplicationOwner() = default ;
      ApplicationOwner(const ApplicationOwner &) = default ;
      ApplicationOwner(ApplicationOwner &&) = default ;
      ApplicationOwner(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationOwner() = default ;
      ApplicationOwner& operator=(const ApplicationOwner &) = default ;
      ApplicationOwner& operator=(ApplicationOwner &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupIds_ == nullptr
        && this->userIds_ == nullptr; };
      // groupIds Field Functions 
      bool hasGroupIds() const { return this->groupIds_ != nullptr;};
      void deleteGroupIds() { this->groupIds_ = nullptr;};
      inline const vector<string> & getGroupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<string>) };
      inline vector<string> getGroupIds() { DARABONBA_PTR_GET(groupIds_, vector<string>) };
      inline ApplicationOwner& setGroupIds(const vector<string> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
      inline ApplicationOwner& setGroupIds(vector<string> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


      // userIds Field Functions 
      bool hasUserIds() const { return this->userIds_ != nullptr;};
      void deleteUserIds() { this->userIds_ = nullptr;};
      inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
      inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
      inline ApplicationOwner& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
      inline ApplicationOwner& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


    protected:
      shared_ptr<vector<string>> groupIds_ {};
      shared_ptr<vector<string>> userIds_ {};
    };

    virtual bool empty() const override { return this->applicationIdentityType_ == nullptr
        && this->applicationName_ == nullptr && this->applicationOwner_ == nullptr && this->applicationSourceType_ == nullptr && this->applicationTemplateId_ == nullptr && this->customFields_ == nullptr
        && this->description_ == nullptr && this->instanceId_ == nullptr && this->logoUrl_ == nullptr && this->ssoType_ == nullptr; };
    // applicationIdentityType Field Functions 
    bool hasApplicationIdentityType() const { return this->applicationIdentityType_ != nullptr;};
    void deleteApplicationIdentityType() { this->applicationIdentityType_ = nullptr;};
    inline string getApplicationIdentityType() const { DARABONBA_PTR_GET_DEFAULT(applicationIdentityType_, "") };
    inline CreateApplicationRequest& setApplicationIdentityType(string applicationIdentityType) { DARABONBA_PTR_SET_VALUE(applicationIdentityType_, applicationIdentityType) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline CreateApplicationRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // applicationOwner Field Functions 
    bool hasApplicationOwner() const { return this->applicationOwner_ != nullptr;};
    void deleteApplicationOwner() { this->applicationOwner_ = nullptr;};
    inline const CreateApplicationRequest::ApplicationOwner & getApplicationOwner() const { DARABONBA_PTR_GET_CONST(applicationOwner_, CreateApplicationRequest::ApplicationOwner) };
    inline CreateApplicationRequest::ApplicationOwner getApplicationOwner() { DARABONBA_PTR_GET(applicationOwner_, CreateApplicationRequest::ApplicationOwner) };
    inline CreateApplicationRequest& setApplicationOwner(const CreateApplicationRequest::ApplicationOwner & applicationOwner) { DARABONBA_PTR_SET_VALUE(applicationOwner_, applicationOwner) };
    inline CreateApplicationRequest& setApplicationOwner(CreateApplicationRequest::ApplicationOwner && applicationOwner) { DARABONBA_PTR_SET_RVALUE(applicationOwner_, applicationOwner) };


    // applicationSourceType Field Functions 
    bool hasApplicationSourceType() const { return this->applicationSourceType_ != nullptr;};
    void deleteApplicationSourceType() { this->applicationSourceType_ = nullptr;};
    inline string getApplicationSourceType() const { DARABONBA_PTR_GET_DEFAULT(applicationSourceType_, "") };
    inline CreateApplicationRequest& setApplicationSourceType(string applicationSourceType) { DARABONBA_PTR_SET_VALUE(applicationSourceType_, applicationSourceType) };


    // applicationTemplateId Field Functions 
    bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
    void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
    inline string getApplicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
    inline CreateApplicationRequest& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline const vector<CreateApplicationRequest::CustomFields> & getCustomFields() const { DARABONBA_PTR_GET_CONST(customFields_, vector<CreateApplicationRequest::CustomFields>) };
    inline vector<CreateApplicationRequest::CustomFields> getCustomFields() { DARABONBA_PTR_GET(customFields_, vector<CreateApplicationRequest::CustomFields>) };
    inline CreateApplicationRequest& setCustomFields(const vector<CreateApplicationRequest::CustomFields> & customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };
    inline CreateApplicationRequest& setCustomFields(vector<CreateApplicationRequest::CustomFields> && customFields) { DARABONBA_PTR_SET_RVALUE(customFields_, customFields) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApplicationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateApplicationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logoUrl Field Functions 
    bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
    void deleteLogoUrl() { this->logoUrl_ = nullptr;};
    inline string getLogoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
    inline CreateApplicationRequest& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


    // ssoType Field Functions 
    bool hasSsoType() const { return this->ssoType_ != nullptr;};
    void deleteSsoType() { this->ssoType_ = nullptr;};
    inline string getSsoType() const { DARABONBA_PTR_GET_DEFAULT(ssoType_, "") };
    inline CreateApplicationRequest& setSsoType(string ssoType) { DARABONBA_PTR_SET_VALUE(ssoType_, ssoType) };


  protected:
    shared_ptr<string> applicationIdentityType_ {};
    // The name of the application.
    // 
    // This parameter is required.
    shared_ptr<string> applicationName_ {};
    shared_ptr<CreateApplicationRequest::ApplicationOwner> applicationOwner_ {};
    // The type of the application source. Valid values:
    // 
    // *   urn:alibaba:idaas:app:source:template: application template
    // *   urn:alibaba:idaas:app:source:standard: standard protocol
    // 
    // This parameter is required.
    shared_ptr<string> applicationSourceType_ {};
    // The ID of the application template. This parameter is required if you set the ApplicationSourceType parameter to urn:alibaba:idaas:app:source:template.
    shared_ptr<string> applicationTemplateId_ {};
    shared_ptr<vector<CreateApplicationRequest::CustomFields>> customFields_ {};
    // The description of the application.
    shared_ptr<string> description_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The URL of the application logo.
    shared_ptr<string> logoUrl_ {};
    // The SSO protocol. Valid values:
    // 
    // *   saml2: the SAML 2.0 protocol.
    // *   oidc: the OpenID Connect protocol.
    // 
    // This parameter is required.
    shared_ptr<string> ssoType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
