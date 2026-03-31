// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUEST_HPP_
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
  class CreateApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmConfig, alarmConfig_);
      DARABONBA_PTR_TO_JSON(ApplicationSource, applicationSource_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmConfig, alarmConfig_);
      DARABONBA_PTR_FROM_JSON(ApplicationSource, applicationSource_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
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
      // The alert contact groups.
      shared_ptr<vector<string>> contactGroups_ {};
      // The health check URL of the application.
      shared_ptr<string> healthCheckUrl_ {};
      // The alert templates.
      shared_ptr<vector<string>> templateIds_ {};
    };

    virtual bool empty() const override { return this->alarmConfig_ == nullptr
        && this->applicationSource_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->serviceId_ == nullptr && this->tags_ == nullptr; };
    // alarmConfig Field Functions 
    bool hasAlarmConfig() const { return this->alarmConfig_ != nullptr;};
    void deleteAlarmConfig() { this->alarmConfig_ = nullptr;};
    inline const CreateApplicationRequest::AlarmConfig & getAlarmConfig() const { DARABONBA_PTR_GET_CONST(alarmConfig_, CreateApplicationRequest::AlarmConfig) };
    inline CreateApplicationRequest::AlarmConfig getAlarmConfig() { DARABONBA_PTR_GET(alarmConfig_, CreateApplicationRequest::AlarmConfig) };
    inline CreateApplicationRequest& setAlarmConfig(const CreateApplicationRequest::AlarmConfig & alarmConfig) { DARABONBA_PTR_SET_VALUE(alarmConfig_, alarmConfig) };
    inline CreateApplicationRequest& setAlarmConfig(CreateApplicationRequest::AlarmConfig && alarmConfig) { DARABONBA_PTR_SET_RVALUE(alarmConfig_, alarmConfig) };


    // applicationSource Field Functions 
    bool hasApplicationSource() const { return this->applicationSource_ != nullptr;};
    void deleteApplicationSource() { this->applicationSource_ = nullptr;};
    inline string getApplicationSource() const { DARABONBA_PTR_GET_DEFAULT(applicationSource_, "") };
    inline CreateApplicationRequest& setApplicationSource(string applicationSource) { DARABONBA_PTR_SET_VALUE(applicationSource_, applicationSource) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateApplicationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApplicationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateApplicationRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApplicationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateApplicationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateApplicationRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline CreateApplicationRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateApplicationRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


  protected:
    // The configurations of application alerts.
    shared_ptr<CreateApplicationRequest::AlarmConfig> alarmConfig_ {};
    // The source of application.
    shared_ptr<string> applicationSource_ {};
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The description of the application.
    shared_ptr<string> description_ {};
    // The application name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The region ID. Set the value to cn-hangzhou.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the Compute Nest service that corresponds to the application template.
    shared_ptr<string> serviceId_ {};
    // The tags.
    Darabonba::Json tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
