// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSETEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSETEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDefenseTemplatesResponseBody() = default ;
    DescribeDefenseTemplatesResponseBody(const DescribeDefenseTemplatesResponseBody &) = default ;
    DescribeDefenseTemplatesResponseBody(DescribeDefenseTemplatesResponseBody &&) = default ;
    DescribeDefenseTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseTemplatesResponseBody() = default ;
    DescribeDefenseTemplatesResponseBody& operator=(const DescribeDefenseTemplatesResponseBody &) = default ;
    DescribeDefenseTemplatesResponseBody& operator=(DescribeDefenseTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Templates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Templates& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Templates& obj) { 
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
      Templates() = default ;
      Templates(const Templates &) = default ;
      Templates(Templates &&) = default ;
      Templates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Templates() = default ;
      Templates& operator=(const Templates &) = default ;
      Templates& operator=(Templates &&) = default ;
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
      inline Templates& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


      // defenseSubScene Field Functions 
      bool hasDefenseSubScene() const { return this->defenseSubScene_ != nullptr;};
      void deleteDefenseSubScene() { this->defenseSubScene_ = nullptr;};
      inline string getDefenseSubScene() const { DARABONBA_PTR_GET_DEFAULT(defenseSubScene_, "") };
      inline Templates& setDefenseSubScene(string defenseSubScene) { DARABONBA_PTR_SET_VALUE(defenseSubScene_, defenseSubScene) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Templates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Templates& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline Templates& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Templates& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateOrigin Field Functions 
      bool hasTemplateOrigin() const { return this->templateOrigin_ != nullptr;};
      void deleteTemplateOrigin() { this->templateOrigin_ = nullptr;};
      inline string getTemplateOrigin() const { DARABONBA_PTR_GET_DEFAULT(templateOrigin_, "") };
      inline Templates& setTemplateOrigin(string templateOrigin) { DARABONBA_PTR_SET_VALUE(templateOrigin_, templateOrigin) };


      // templateStatus Field Functions 
      bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
      void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
      inline int32_t getTemplateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, 0) };
      inline Templates& setTemplateStatus(int32_t templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline Templates& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


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
      shared_ptr<string> defenseScene_ {};
      // The sub-scenario in which the protection template is used. Valid values:
      // 
      // *   **web**: bot management for website protection.
      // *   **app**: bot management for app protection.
      // *   **basic**: bot management for basic protection.
      shared_ptr<string> defenseSubScene_ {};
      // The description of the protection template.
      shared_ptr<string> description_ {};
      // The time when the protection template was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> gmtModified_ {};
      // The ID of the protection template.
      shared_ptr<int64_t> templateId_ {};
      // The name of the protection template.
      shared_ptr<string> templateName_ {};
      // The origin of the protection template. The value custom indicates that the protection template is a custom template created by the user.
      shared_ptr<string> templateOrigin_ {};
      // The status of the protection template. Valid values:
      // 
      // *   **0**: disabled.
      // *   **1**: enabled.
      shared_ptr<int32_t> templateStatus_ {};
      // The type of the protection template. Valid values:
      // 
      // *   **user_default**: default template.
      // *   **user_custom**: custom template.
      shared_ptr<string> templateType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->templates_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<DescribeDefenseTemplatesResponseBody::Templates> & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, vector<DescribeDefenseTemplatesResponseBody::Templates>) };
    inline vector<DescribeDefenseTemplatesResponseBody::Templates> getTemplates() { DARABONBA_PTR_GET(templates_, vector<DescribeDefenseTemplatesResponseBody::Templates>) };
    inline DescribeDefenseTemplatesResponseBody& setTemplates(const vector<DescribeDefenseTemplatesResponseBody::Templates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline DescribeDefenseTemplatesResponseBody& setTemplates(vector<DescribeDefenseTemplatesResponseBody::Templates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDefenseTemplatesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The protection templates.
    shared_ptr<vector<DescribeDefenseTemplatesResponseBody::Templates>> templates_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
