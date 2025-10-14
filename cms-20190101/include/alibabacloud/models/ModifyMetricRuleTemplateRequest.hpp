// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMETRICRULETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMETRICRULETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyMetricRuleTemplateRequestAlertTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyMetricRuleTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMetricRuleTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertTemplates, alertTemplates_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RestVersion, restVersion_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMetricRuleTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertTemplates, alertTemplates_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RestVersion, restVersion_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    ModifyMetricRuleTemplateRequest() = default ;
    ModifyMetricRuleTemplateRequest(const ModifyMetricRuleTemplateRequest &) = default ;
    ModifyMetricRuleTemplateRequest(ModifyMetricRuleTemplateRequest &&) = default ;
    ModifyMetricRuleTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMetricRuleTemplateRequest() = default ;
    ModifyMetricRuleTemplateRequest& operator=(const ModifyMetricRuleTemplateRequest &) = default ;
    ModifyMetricRuleTemplateRequest& operator=(ModifyMetricRuleTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertTemplates_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr && return this->restVersion_ == nullptr && return this->templateId_ == nullptr; };
    // alertTemplates Field Functions 
    bool hasAlertTemplates() const { return this->alertTemplates_ != nullptr;};
    void deleteAlertTemplates() { this->alertTemplates_ = nullptr;};
    inline const vector<ModifyMetricRuleTemplateRequestAlertTemplates> & alertTemplates() const { DARABONBA_PTR_GET_CONST(alertTemplates_, vector<ModifyMetricRuleTemplateRequestAlertTemplates>) };
    inline vector<ModifyMetricRuleTemplateRequestAlertTemplates> alertTemplates() { DARABONBA_PTR_GET(alertTemplates_, vector<ModifyMetricRuleTemplateRequestAlertTemplates>) };
    inline ModifyMetricRuleTemplateRequest& setAlertTemplates(const vector<ModifyMetricRuleTemplateRequestAlertTemplates> & alertTemplates) { DARABONBA_PTR_SET_VALUE(alertTemplates_, alertTemplates) };
    inline ModifyMetricRuleTemplateRequest& setAlertTemplates(vector<ModifyMetricRuleTemplateRequestAlertTemplates> && alertTemplates) { DARABONBA_PTR_SET_RVALUE(alertTemplates_, alertTemplates) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyMetricRuleTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyMetricRuleTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyMetricRuleTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // restVersion Field Functions 
    bool hasRestVersion() const { return this->restVersion_ != nullptr;};
    void deleteRestVersion() { this->restVersion_ = nullptr;};
    inline int64_t restVersion() const { DARABONBA_PTR_GET_DEFAULT(restVersion_, 0L) };
    inline ModifyMetricRuleTemplateRequest& setRestVersion(int64_t restVersion) { DARABONBA_PTR_SET_VALUE(restVersion_, restVersion) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ModifyMetricRuleTemplateRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The details of the alert template.
    std::shared_ptr<vector<ModifyMetricRuleTemplateRequestAlertTemplates>> alertTemplates_ = nullptr;
    // The description of the alert template.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the alert template.
    // 
    // For information about how to obtain the name of an alert template, see [DescribeMetricRuleTemplateList](https://help.aliyun.com/document_detail/114982.html).
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The version of the alert template. The version changes with the number of times that the alert template is modified.
    // 
    // For information about how to obtain the version of an alert template, see [DescribeMetricRuleTemplateList](https://help.aliyun.com/document_detail/114982.html).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> restVersion_ = nullptr;
    // The ID of the alert template.
    // 
    // For information about how to obtain the ID of an alert template, see [DescribeMetricRuleTemplateList](https://help.aliyun.com/document_detail/114982.html).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
