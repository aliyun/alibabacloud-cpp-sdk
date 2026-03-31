// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    DescribeDefenseTemplateResponseBody() = default ;
    DescribeDefenseTemplateResponseBody(const DescribeDefenseTemplateResponseBody &) = default ;
    DescribeDefenseTemplateResponseBody(DescribeDefenseTemplateResponseBody &&) = default ;
    DescribeDefenseTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseTemplateResponseBody() = default ;
    DescribeDefenseTemplateResponseBody& operator=(const DescribeDefenseTemplateResponseBody &) = default ;
    DescribeDefenseTemplateResponseBody& operator=(DescribeDefenseTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Template : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Template& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Template& obj) { 
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
      Template() = default ;
      Template(const Template &) = default ;
      Template(Template &&) = default ;
      Template(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Template() = default ;
      Template& operator=(const Template &) = default ;
      Template& operator=(Template &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defenseScene_ == nullptr
        && this->defenseSubScene_ == nullptr && this->description_ == nullptr && this->gmtModified_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr
        && this->templateOrigin_ == nullptr && this->templateStatus_ == nullptr && this->templateType_ == nullptr; };
      // defenseScene Field Functions 
      bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
      void deleteDefenseScene() { this->defenseScene_ = nullptr;};
      inline string getDefenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
      inline Template& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


      // defenseSubScene Field Functions 
      bool hasDefenseSubScene() const { return this->defenseSubScene_ != nullptr;};
      void deleteDefenseSubScene() { this->defenseSubScene_ = nullptr;};
      inline string getDefenseSubScene() const { DARABONBA_PTR_GET_DEFAULT(defenseSubScene_, "") };
      inline Template& setDefenseSubScene(string defenseSubScene) { DARABONBA_PTR_SET_VALUE(defenseSubScene_, defenseSubScene) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Template& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Template& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline Template& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Template& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateOrigin Field Functions 
      bool hasTemplateOrigin() const { return this->templateOrigin_ != nullptr;};
      void deleteTemplateOrigin() { this->templateOrigin_ = nullptr;};
      inline string getTemplateOrigin() const { DARABONBA_PTR_GET_DEFAULT(templateOrigin_, "") };
      inline Template& setTemplateOrigin(string templateOrigin) { DARABONBA_PTR_SET_VALUE(templateOrigin_, templateOrigin) };


      // templateStatus Field Functions 
      bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
      void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
      inline int32_t getTemplateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, 0) };
      inline Template& setTemplateStatus(int32_t templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline Template& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    protected:
      // The scenario in which the template is used. For more information, see the description of the **DefenseScene** parameter in the [CreateDefenseRule](~~CreateDefenseRule~~) topic.
      shared_ptr<string> defenseScene_ {};
      // The sub-scenario in which the template is used. Valid values:
      // 
      // *   **web**: The template is a bot management template that is used for website protection.
      // *   **app**: The template is a bot management template that is used for app protection.
      // *   **basic**: The template is a bot management template that is used for basic protection.
      shared_ptr<string> defenseSubScene_ {};
      // The description of the protection rule template.
      shared_ptr<string> description_ {};
      // The most recent time when the protection rule template was modified.
      shared_ptr<int64_t> gmtModified_ {};
      // The ID of the protection rule template.
      shared_ptr<int64_t> templateId_ {};
      // The name of the protection rule template.
      shared_ptr<string> templateName_ {};
      // The origin of the protection rule template. If the value of this parameter is custom, the protection rule template is created by the user.
      shared_ptr<string> templateOrigin_ {};
      // The status of the protection rule template. Valid values:
      // 
      // *   **0:** disabled.
      // *   **1:** enabled.
      shared_ptr<int32_t> templateStatus_ {};
      // The type of the protection rule template. Valid values:
      // 
      // *   **user_default:** default template.
      // *   **user_custom:** custom template.
      shared_ptr<string> templateType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->template_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const DescribeDefenseTemplateResponseBody::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, DescribeDefenseTemplateResponseBody::Template) };
    inline DescribeDefenseTemplateResponseBody::Template getTemplate() { DARABONBA_PTR_GET(template_, DescribeDefenseTemplateResponseBody::Template) };
    inline DescribeDefenseTemplateResponseBody& setTemplate(const DescribeDefenseTemplateResponseBody::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline DescribeDefenseTemplateResponseBody& setTemplate(DescribeDefenseTemplateResponseBody::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the template.
    shared_ptr<DescribeDefenseTemplateResponseBody::Template> template_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
