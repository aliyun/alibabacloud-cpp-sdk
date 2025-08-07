// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCETEMPLATESRESPONSEBODYTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCETEMPLATESRESPONSEBODYTEMPLATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseResourceTemplatesResponseBodyTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourceTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_TO_JSON(DefenseSubScene, defenseSubScene_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateOrigin, templateOrigin_);
      DARABONBA_PTR_TO_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourceTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_FROM_JSON(DefenseSubScene, defenseSubScene_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateOrigin, templateOrigin_);
      DARABONBA_PTR_FROM_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    DescribeDefenseResourceTemplatesResponseBodyTemplates() = default ;
    DescribeDefenseResourceTemplatesResponseBodyTemplates(const DescribeDefenseResourceTemplatesResponseBodyTemplates &) = default ;
    DescribeDefenseResourceTemplatesResponseBodyTemplates(DescribeDefenseResourceTemplatesResponseBodyTemplates &&) = default ;
    DescribeDefenseResourceTemplatesResponseBodyTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourceTemplatesResponseBodyTemplates() = default ;
    DescribeDefenseResourceTemplatesResponseBodyTemplates& operator=(const DescribeDefenseResourceTemplatesResponseBodyTemplates &) = default ;
    DescribeDefenseResourceTemplatesResponseBodyTemplates& operator=(DescribeDefenseResourceTemplatesResponseBodyTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenseScene_ != nullptr
        && this->defenseSubScene_ != nullptr && this->description_ != nullptr && this->gmtModified_ != nullptr && this->templateId_ != nullptr && this->templateName_ != nullptr
        && this->templateOrigin_ != nullptr && this->templateStatus_ != nullptr && this->templateType_ != nullptr; };
    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string defenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline DescribeDefenseResourceTemplatesResponseBodyTemplates& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    // defenseSubScene Field Functions 
    bool hasDefenseSubScene() const { return this->defenseSubScene_ != nullptr;};
    void deleteDefenseSubScene() { this->defenseSubScene_ = nullptr;};
    inline string defenseSubScene() const { DARABONBA_PTR_GET_DEFAULT(defenseSubScene_, "") };
    inline DescribeDefenseResourceTemplatesResponseBodyTemplates& setDefenseSubScene(string defenseSubScene) { DARABONBA_PTR_SET_VALUE(defenseSubScene_, defenseSubScene) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDefenseResourceTemplatesResponseBodyTemplates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeDefenseResourceTemplatesResponseBodyTemplates& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeDefenseResourceTemplatesResponseBodyTemplates& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeDefenseResourceTemplatesResponseBodyTemplates& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateOrigin Field Functions 
    bool hasTemplateOrigin() const { return this->templateOrigin_ != nullptr;};
    void deleteTemplateOrigin() { this->templateOrigin_ = nullptr;};
    inline string templateOrigin() const { DARABONBA_PTR_GET_DEFAULT(templateOrigin_, "") };
    inline DescribeDefenseResourceTemplatesResponseBodyTemplates& setTemplateOrigin(string templateOrigin) { DARABONBA_PTR_SET_VALUE(templateOrigin_, templateOrigin) };


    // templateStatus Field Functions 
    bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
    void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
    inline int32_t templateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, 0) };
    inline DescribeDefenseResourceTemplatesResponseBodyTemplates& setTemplateStatus(int32_t templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline DescribeDefenseResourceTemplatesResponseBodyTemplates& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The scenario in which the protection template is used.
    // 
    // *   **waf_group**: basic protection.
    // *   **antiscan**: scan protection.
    // *   **ip_blacklist**: IP address blacklist.
    // *   **custom_acl**: custom rule.
    // *   **whitelist**: whitelist.
    // *   **region_block**: region blacklist.
    // *   **custom_response**: custom response.
    // *   **cc**: HTTP flood protection.
    // *   **tamperproof**: website tamper-proofing.
    // *   **dlp**: data leakage prevention.
    std::shared_ptr<string> defenseScene_ = nullptr;
    // The sub-scenario in which the template is used. Valid values:
    // 
    // *   **web**: bot management for website protection.
    // *   **app**: bot management for app protection.
    // *   **basic**: bot management for basic protection.
    std::shared_ptr<string> defenseSubScene_ = nullptr;
    // The description of the protection template.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the protection template was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The ID of the protection template.
    std::shared_ptr<int64_t> templateId_ = nullptr;
    // The name of the protection template.
    std::shared_ptr<string> templateName_ = nullptr;
    // The origin of the protection template. The value custom indicates that the template is a custom template created by the user.
    std::shared_ptr<string> templateOrigin_ = nullptr;
    // The status of the protection template. Valid values:
    // 
    // *   **0**: disabled.
    // *   **1**: enabled.
    std::shared_ptr<int32_t> templateStatus_ = nullptr;
    // The type of the protection template. Valid values:
    // 
    // *   **user_default**: default template.
    // *   **user_custom**: custom template.
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
