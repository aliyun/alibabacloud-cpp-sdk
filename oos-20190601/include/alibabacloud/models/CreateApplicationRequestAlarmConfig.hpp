// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUESTALARMCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUESTALARMCONFIG_HPP_
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
  class CreateApplicationRequestAlarmConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationRequestAlarmConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(HealthCheckUrl, healthCheckUrl_);
      DARABONBA_PTR_TO_JSON(TemplateIds, templateIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationRequestAlarmConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(HealthCheckUrl, healthCheckUrl_);
      DARABONBA_PTR_FROM_JSON(TemplateIds, templateIds_);
    };
    CreateApplicationRequestAlarmConfig() = default ;
    CreateApplicationRequestAlarmConfig(const CreateApplicationRequestAlarmConfig &) = default ;
    CreateApplicationRequestAlarmConfig(CreateApplicationRequestAlarmConfig &&) = default ;
    CreateApplicationRequestAlarmConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationRequestAlarmConfig() = default ;
    CreateApplicationRequestAlarmConfig& operator=(const CreateApplicationRequestAlarmConfig &) = default ;
    CreateApplicationRequestAlarmConfig& operator=(CreateApplicationRequestAlarmConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroups_ == nullptr
        && return this->healthCheckUrl_ == nullptr && return this->templateIds_ == nullptr; };
    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline const vector<string> & contactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, vector<string>) };
    inline vector<string> contactGroups() { DARABONBA_PTR_GET(contactGroups_, vector<string>) };
    inline CreateApplicationRequestAlarmConfig& setContactGroups(const vector<string> & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
    inline CreateApplicationRequestAlarmConfig& setContactGroups(vector<string> && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


    // healthCheckUrl Field Functions 
    bool hasHealthCheckUrl() const { return this->healthCheckUrl_ != nullptr;};
    void deleteHealthCheckUrl() { this->healthCheckUrl_ = nullptr;};
    inline string healthCheckUrl() const { DARABONBA_PTR_GET_DEFAULT(healthCheckUrl_, "") };
    inline CreateApplicationRequestAlarmConfig& setHealthCheckUrl(string healthCheckUrl) { DARABONBA_PTR_SET_VALUE(healthCheckUrl_, healthCheckUrl) };


    // templateIds Field Functions 
    bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
    void deleteTemplateIds() { this->templateIds_ = nullptr;};
    inline const vector<string> & templateIds() const { DARABONBA_PTR_GET_CONST(templateIds_, vector<string>) };
    inline vector<string> templateIds() { DARABONBA_PTR_GET(templateIds_, vector<string>) };
    inline CreateApplicationRequestAlarmConfig& setTemplateIds(const vector<string> & templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };
    inline CreateApplicationRequestAlarmConfig& setTemplateIds(vector<string> && templateIds) { DARABONBA_PTR_SET_RVALUE(templateIds_, templateIds) };


  protected:
    // The alert contact groups.
    std::shared_ptr<vector<string>> contactGroups_ = nullptr;
    // The health check URL of the application.
    std::shared_ptr<string> healthCheckUrl_ = nullptr;
    // The alert templates.
    std::shared_ptr<vector<string>> templateIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
