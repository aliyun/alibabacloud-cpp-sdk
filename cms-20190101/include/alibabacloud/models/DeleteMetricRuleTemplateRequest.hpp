// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMETRICRULETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMETRICRULETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteMetricRuleTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMetricRuleTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMetricRuleTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DeleteMetricRuleTemplateRequest() = default ;
    DeleteMetricRuleTemplateRequest(const DeleteMetricRuleTemplateRequest &) = default ;
    DeleteMetricRuleTemplateRequest(DeleteMetricRuleTemplateRequest &&) = default ;
    DeleteMetricRuleTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMetricRuleTemplateRequest() = default ;
    DeleteMetricRuleTemplateRequest& operator=(const DeleteMetricRuleTemplateRequest &) = default ;
    DeleteMetricRuleTemplateRequest& operator=(DeleteMetricRuleTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->templateId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteMetricRuleTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DeleteMetricRuleTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the alert template.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
