// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATELISTRESPONSEBODYTEMPLATESTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATELISTRESPONSEBODYTEMPLATESTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyHistories, applyHistories_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RestVersion, restVersion_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyHistories, applyHistories_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RestVersion, restVersion_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate() = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate(const DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate &) = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate(DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate &&) = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate() = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate& operator=(const DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate &) = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate& operator=(DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyHistories_ != nullptr
        && this->description_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->name_ != nullptr && this->restVersion_ != nullptr
        && this->templateId_ != nullptr; };
    // applyHistories Field Functions 
    bool hasApplyHistories() const { return this->applyHistories_ != nullptr;};
    void deleteApplyHistories() { this->applyHistories_ = nullptr;};
    inline const Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories & applyHistories() const { DARABONBA_PTR_GET_CONST(applyHistories_, Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories) };
    inline Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories applyHistories() { DARABONBA_PTR_GET(applyHistories_, Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories) };
    inline DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate& setApplyHistories(const Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories & applyHistories) { DARABONBA_PTR_SET_VALUE(applyHistories_, applyHistories) };
    inline DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate& setApplyHistories(Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories && applyHistories) { DARABONBA_PTR_SET_RVALUE(applyHistories_, applyHistories) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // restVersion Field Functions 
    bool hasRestVersion() const { return this->restVersion_ != nullptr;};
    void deleteRestVersion() { this->restVersion_ = nullptr;};
    inline int64_t restVersion() const { DARABONBA_PTR_GET_DEFAULT(restVersion_, 0L) };
    inline DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate& setRestVersion(int64_t restVersion) { DARABONBA_PTR_SET_VALUE(restVersion_, restVersion) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The history of applying the alert templates to application groups.
    std::shared_ptr<Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistories> applyHistories_ = nullptr;
    // The description of the alert template.
    std::shared_ptr<string> description_ = nullptr;
    // The timestamp when the alert template was created.
    // 
    // Unit: milliseconds.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The timestamp when the alert template was modified.
    // 
    // Unit: milliseconds.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The name of the alert template.
    std::shared_ptr<string> name_ = nullptr;
    // The version of the alert template.
    // 
    // Default value: 0.
    std::shared_ptr<int64_t> restVersion_ = nullptr;
    // The ID of the alert template.
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
