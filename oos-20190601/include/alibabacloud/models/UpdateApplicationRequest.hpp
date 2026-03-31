// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONREQUEST_HPP_
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
  class UpdateApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmConfig, alarmConfig_);
      DARABONBA_PTR_TO_JSON(DeleteAlarmRulesBeforeUpdate, deleteAlarmRulesBeforeUpdate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmConfig, alarmConfig_);
      DARABONBA_PTR_FROM_JSON(DeleteAlarmRulesBeforeUpdate, deleteAlarmRulesBeforeUpdate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
    };
    UpdateApplicationRequest() = default ;
    UpdateApplicationRequest(const UpdateApplicationRequest &) = default ;
    UpdateApplicationRequest(UpdateApplicationRequest &&) = default ;
    UpdateApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationRequest() = default ;
    UpdateApplicationRequest& operator=(const UpdateApplicationRequest &) = default ;
    UpdateApplicationRequest& operator=(UpdateApplicationRequest &&) = default ;
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
        && this->deleteAlarmRulesBeforeUpdate_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->tags_ == nullptr; };
    // alarmConfig Field Functions 
    bool hasAlarmConfig() const { return this->alarmConfig_ != nullptr;};
    void deleteAlarmConfig() { this->alarmConfig_ = nullptr;};
    inline const UpdateApplicationRequest::AlarmConfig & getAlarmConfig() const { DARABONBA_PTR_GET_CONST(alarmConfig_, UpdateApplicationRequest::AlarmConfig) };
    inline UpdateApplicationRequest::AlarmConfig getAlarmConfig() { DARABONBA_PTR_GET(alarmConfig_, UpdateApplicationRequest::AlarmConfig) };
    inline UpdateApplicationRequest& setAlarmConfig(const UpdateApplicationRequest::AlarmConfig & alarmConfig) { DARABONBA_PTR_SET_VALUE(alarmConfig_, alarmConfig) };
    inline UpdateApplicationRequest& setAlarmConfig(UpdateApplicationRequest::AlarmConfig && alarmConfig) { DARABONBA_PTR_SET_RVALUE(alarmConfig_, alarmConfig) };


    // deleteAlarmRulesBeforeUpdate Field Functions 
    bool hasDeleteAlarmRulesBeforeUpdate() const { return this->deleteAlarmRulesBeforeUpdate_ != nullptr;};
    void deleteDeleteAlarmRulesBeforeUpdate() { this->deleteAlarmRulesBeforeUpdate_ = nullptr;};
    inline bool getDeleteAlarmRulesBeforeUpdate() const { DARABONBA_PTR_GET_DEFAULT(deleteAlarmRulesBeforeUpdate_, false) };
    inline UpdateApplicationRequest& setDeleteAlarmRulesBeforeUpdate(bool deleteAlarmRulesBeforeUpdate) { DARABONBA_PTR_SET_VALUE(deleteAlarmRulesBeforeUpdate_, deleteAlarmRulesBeforeUpdate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApplicationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateApplicationRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateApplicationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline UpdateApplicationRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline UpdateApplicationRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


  protected:
    // The configurations of application alerts.
    shared_ptr<UpdateApplicationRequest::AlarmConfig> alarmConfig_ {};
    // Specifies whether to delete existing alert rules before applying the alert template. Default value: false.
    shared_ptr<bool> deleteAlarmRulesBeforeUpdate_ {};
    // The description to be updated for the application.
    shared_ptr<string> description_ {};
    // The application name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The region ID. Set the value to cn-hangzhou.
    shared_ptr<string> regionId_ {};
    // The tags.
    Darabonba::Json tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
