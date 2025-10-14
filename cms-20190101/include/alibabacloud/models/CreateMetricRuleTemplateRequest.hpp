// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMETRICRULETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMETRICRULETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMetricRuleTemplateRequestAlertTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateMetricRuleTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMetricRuleTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertTemplates, alertTemplates_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMetricRuleTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertTemplates, alertTemplates_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateMetricRuleTemplateRequest() = default ;
    CreateMetricRuleTemplateRequest(const CreateMetricRuleTemplateRequest &) = default ;
    CreateMetricRuleTemplateRequest(CreateMetricRuleTemplateRequest &&) = default ;
    CreateMetricRuleTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMetricRuleTemplateRequest() = default ;
    CreateMetricRuleTemplateRequest& operator=(const CreateMetricRuleTemplateRequest &) = default ;
    CreateMetricRuleTemplateRequest& operator=(CreateMetricRuleTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertTemplates_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr; };
    // alertTemplates Field Functions 
    bool hasAlertTemplates() const { return this->alertTemplates_ != nullptr;};
    void deleteAlertTemplates() { this->alertTemplates_ = nullptr;};
    inline const vector<CreateMetricRuleTemplateRequestAlertTemplates> & alertTemplates() const { DARABONBA_PTR_GET_CONST(alertTemplates_, vector<CreateMetricRuleTemplateRequestAlertTemplates>) };
    inline vector<CreateMetricRuleTemplateRequestAlertTemplates> alertTemplates() { DARABONBA_PTR_GET(alertTemplates_, vector<CreateMetricRuleTemplateRequestAlertTemplates>) };
    inline CreateMetricRuleTemplateRequest& setAlertTemplates(const vector<CreateMetricRuleTemplateRequestAlertTemplates> & alertTemplates) { DARABONBA_PTR_SET_VALUE(alertTemplates_, alertTemplates) };
    inline CreateMetricRuleTemplateRequest& setAlertTemplates(vector<CreateMetricRuleTemplateRequestAlertTemplates> && alertTemplates) { DARABONBA_PTR_SET_RVALUE(alertTemplates_, alertTemplates) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateMetricRuleTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMetricRuleTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateMetricRuleTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The details of the alert template.
    std::shared_ptr<vector<CreateMetricRuleTemplateRequestAlertTemplates>> alertTemplates_ = nullptr;
    // The description of the alert template.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the alert template.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
