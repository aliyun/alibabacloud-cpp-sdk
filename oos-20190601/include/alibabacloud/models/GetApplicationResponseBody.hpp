// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
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
        DARABONBA_PTR_TO_JSON(AlarmConfig, alarmConfig_);
        DARABONBA_PTR_TO_JSON(ApplicationSource, applicationSource_);
        DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_ANY_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
      };
      friend void from_json(const Darabonba::Json& j, Application& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmConfig, alarmConfig_);
        DARABONBA_PTR_FROM_JSON(ApplicationSource, applicationSource_);
        DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_ANY_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
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
      class AlarmConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlarmConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
          DARABONBA_PTR_TO_JSON(HealthCheckUrl, healthCheckUrl_);
          DARABONBA_PTR_TO_JSON(TemplateIds, templateIds_);
        };
        friend void from_json(const Darabonba::Json& j, AlarmConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
          DARABONBA_PTR_FROM_JSON(HealthCheckUrl, healthCheckUrl_);
          DARABONBA_PTR_FROM_JSON(TemplateIds, templateIds_);
        };
        AlarmConfig() = default ;
        AlarmConfig(const AlarmConfig &) = default ;
        AlarmConfig(AlarmConfig &&) = default ;
        AlarmConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlarmConfig() = default ;
        AlarmConfig& operator=(const AlarmConfig &) = default ;
        AlarmConfig& operator=(AlarmConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contactGroups_ == nullptr
        && this->healthCheckUrl_ == nullptr && this->templateIds_ == nullptr; };
        // contactGroups Field Functions 
        bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
        void deleteContactGroups() { this->contactGroups_ = nullptr;};
        inline const vector<string> & getContactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, vector<string>) };
        inline vector<string> getContactGroups() { DARABONBA_PTR_GET(contactGroups_, vector<string>) };
        inline AlarmConfig& setContactGroups(const vector<string> & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
        inline AlarmConfig& setContactGroups(vector<string> && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


        // healthCheckUrl Field Functions 
        bool hasHealthCheckUrl() const { return this->healthCheckUrl_ != nullptr;};
        void deleteHealthCheckUrl() { this->healthCheckUrl_ = nullptr;};
        inline string getHealthCheckUrl() const { DARABONBA_PTR_GET_DEFAULT(healthCheckUrl_, "") };
        inline AlarmConfig& setHealthCheckUrl(string healthCheckUrl) { DARABONBA_PTR_SET_VALUE(healthCheckUrl_, healthCheckUrl) };


        // templateIds Field Functions 
        bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
        void deleteTemplateIds() { this->templateIds_ = nullptr;};
        inline const vector<string> & getTemplateIds() const { DARABONBA_PTR_GET_CONST(templateIds_, vector<string>) };
        inline vector<string> getTemplateIds() { DARABONBA_PTR_GET(templateIds_, vector<string>) };
        inline AlarmConfig& setTemplateIds(const vector<string> & templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };
        inline AlarmConfig& setTemplateIds(vector<string> && templateIds) { DARABONBA_PTR_SET_RVALUE(templateIds_, templateIds) };


      protected:
        // The alert contact list.
        shared_ptr<vector<string>> contactGroups_ {};
        // The health check URL of the application.
        shared_ptr<string> healthCheckUrl_ {};
        // The ID of the alert template.
        shared_ptr<vector<string>> templateIds_ {};
      };

      virtual bool empty() const override { return this->alarmConfig_ == nullptr
        && this->applicationSource_ == nullptr && this->applicationType_ == nullptr && this->createDate_ == nullptr && this->description_ == nullptr && this->name_ == nullptr
        && this->resourceGroupId_ == nullptr && this->serviceId_ == nullptr && this->tags_ == nullptr && this->updateDate_ == nullptr; };
      // alarmConfig Field Functions 
      bool hasAlarmConfig() const { return this->alarmConfig_ != nullptr;};
      void deleteAlarmConfig() { this->alarmConfig_ = nullptr;};
      inline const Application::AlarmConfig & getAlarmConfig() const { DARABONBA_PTR_GET_CONST(alarmConfig_, Application::AlarmConfig) };
      inline Application::AlarmConfig getAlarmConfig() { DARABONBA_PTR_GET(alarmConfig_, Application::AlarmConfig) };
      inline Application& setAlarmConfig(const Application::AlarmConfig & alarmConfig) { DARABONBA_PTR_SET_VALUE(alarmConfig_, alarmConfig) };
      inline Application& setAlarmConfig(Application::AlarmConfig && alarmConfig) { DARABONBA_PTR_SET_RVALUE(alarmConfig_, alarmConfig) };


      // applicationSource Field Functions 
      bool hasApplicationSource() const { return this->applicationSource_ != nullptr;};
      void deleteApplicationSource() { this->applicationSource_ = nullptr;};
      inline string getApplicationSource() const { DARABONBA_PTR_GET_DEFAULT(applicationSource_, "") };
      inline Application& setApplicationSource(string applicationSource) { DARABONBA_PTR_SET_VALUE(applicationSource_, applicationSource) };


      // applicationType Field Functions 
      bool hasApplicationType() const { return this->applicationType_ != nullptr;};
      void deleteApplicationType() { this->applicationType_ = nullptr;};
      inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
      inline Application& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline Application& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Application& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Application& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Application& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Application& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline Application& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline Application& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline Application& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    protected:
      // The configurations of application alerts.
      shared_ptr<Application::AlarmConfig> alarmConfig_ {};
      // The source of application.
      shared_ptr<string> applicationSource_ {};
      // The type of the application.
      // 
      // Valid values:
      // 
      // *   ComputeNest
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Custom
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   DingTalk
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> applicationType_ {};
      // The time when the application was created.
      shared_ptr<string> createDate_ {};
      // The description of the application.
      shared_ptr<string> description_ {};
      // The application name.
      shared_ptr<string> name_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the Compute Nest service that corresponds to the application template.
      shared_ptr<string> serviceId_ {};
      // The tags.
      Darabonba::Json tags_ {};
      // The time when the application was updated.
      shared_ptr<string> updateDate_ {};
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
    // The information about the application.
    shared_ptr<GetApplicationResponseBody::Application> application_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
