// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLOWTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_FLOWTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class FlowTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlowTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(AliyunDocumentId, aliyunDocumentId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DescriptionI18N, descriptionI18N_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(DisplayNameI18N, displayNameI18N_);
      DARABONBA_PTR_TO_JSON(FlowFiles, flowFiles_);
      DARABONBA_PTR_TO_JSON(FlowStoragePath, flowStoragePath_);
      DARABONBA_PTR_TO_JSON(FlowTemplateId, flowTemplateId_);
      DARABONBA_PTR_TO_JSON(FlowType, flowType_);
      DARABONBA_PTR_TO_JSON(Locale, locale_);
      DARABONBA_PTR_TO_JSON(ReferenceCount, referenceCount_);
      DARABONBA_PTR_TO_JSON(TemplateGroup, templateGroup_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlowTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(AliyunDocumentId, aliyunDocumentId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DescriptionI18N, descriptionI18N_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(DisplayNameI18N, displayNameI18N_);
      DARABONBA_PTR_FROM_JSON(FlowFiles, flowFiles_);
      DARABONBA_PTR_FROM_JSON(FlowStoragePath, flowStoragePath_);
      DARABONBA_PTR_FROM_JSON(FlowTemplateId, flowTemplateId_);
      DARABONBA_PTR_FROM_JSON(FlowType, flowType_);
      DARABONBA_PTR_FROM_JSON(Locale, locale_);
      DARABONBA_PTR_FROM_JSON(ReferenceCount, referenceCount_);
      DARABONBA_PTR_FROM_JSON(TemplateGroup, templateGroup_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    FlowTemplate() = default ;
    FlowTemplate(const FlowTemplate &) = default ;
    FlowTemplate(FlowTemplate &&) = default ;
    FlowTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlowTemplate() = default ;
    FlowTemplate& operator=(const FlowTemplate &) = default ;
    FlowTemplate& operator=(FlowTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->aliyunDocumentId_ == nullptr && this->description_ == nullptr && this->descriptionI18N_ == nullptr && this->displayName_ == nullptr && this->displayNameI18N_ == nullptr
        && this->flowFiles_ == nullptr && this->flowStoragePath_ == nullptr && this->flowTemplateId_ == nullptr && this->flowType_ == nullptr && this->locale_ == nullptr
        && this->referenceCount_ == nullptr && this->templateGroup_ == nullptr && this->templateName_ == nullptr && this->url_ == nullptr && this->version_ == nullptr
        && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline FlowTemplate& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // aliyunDocumentId Field Functions 
    bool hasAliyunDocumentId() const { return this->aliyunDocumentId_ != nullptr;};
    void deleteAliyunDocumentId() { this->aliyunDocumentId_ = nullptr;};
    inline string getAliyunDocumentId() const { DARABONBA_PTR_GET_DEFAULT(aliyunDocumentId_, "") };
    inline FlowTemplate& setAliyunDocumentId(string aliyunDocumentId) { DARABONBA_PTR_SET_VALUE(aliyunDocumentId_, aliyunDocumentId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline FlowTemplate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // descriptionI18N Field Functions 
    bool hasDescriptionI18N() const { return this->descriptionI18N_ != nullptr;};
    void deleteDescriptionI18N() { this->descriptionI18N_ = nullptr;};
    inline const map<string, string> & getDescriptionI18N() const { DARABONBA_PTR_GET_CONST(descriptionI18N_, map<string, string>) };
    inline map<string, string> getDescriptionI18N() { DARABONBA_PTR_GET(descriptionI18N_, map<string, string>) };
    inline FlowTemplate& setDescriptionI18N(const map<string, string> & descriptionI18N) { DARABONBA_PTR_SET_VALUE(descriptionI18N_, descriptionI18N) };
    inline FlowTemplate& setDescriptionI18N(map<string, string> && descriptionI18N) { DARABONBA_PTR_SET_RVALUE(descriptionI18N_, descriptionI18N) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline FlowTemplate& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // displayNameI18N Field Functions 
    bool hasDisplayNameI18N() const { return this->displayNameI18N_ != nullptr;};
    void deleteDisplayNameI18N() { this->displayNameI18N_ = nullptr;};
    inline const map<string, string> & getDisplayNameI18N() const { DARABONBA_PTR_GET_CONST(displayNameI18N_, map<string, string>) };
    inline map<string, string> getDisplayNameI18N() { DARABONBA_PTR_GET(displayNameI18N_, map<string, string>) };
    inline FlowTemplate& setDisplayNameI18N(const map<string, string> & displayNameI18N) { DARABONBA_PTR_SET_VALUE(displayNameI18N_, displayNameI18N) };
    inline FlowTemplate& setDisplayNameI18N(map<string, string> && displayNameI18N) { DARABONBA_PTR_SET_RVALUE(displayNameI18N_, displayNameI18N) };


    // flowFiles Field Functions 
    bool hasFlowFiles() const { return this->flowFiles_ != nullptr;};
    void deleteFlowFiles() { this->flowFiles_ = nullptr;};
    inline string getFlowFiles() const { DARABONBA_PTR_GET_DEFAULT(flowFiles_, "") };
    inline FlowTemplate& setFlowFiles(string flowFiles) { DARABONBA_PTR_SET_VALUE(flowFiles_, flowFiles) };


    // flowStoragePath Field Functions 
    bool hasFlowStoragePath() const { return this->flowStoragePath_ != nullptr;};
    void deleteFlowStoragePath() { this->flowStoragePath_ = nullptr;};
    inline string getFlowStoragePath() const { DARABONBA_PTR_GET_DEFAULT(flowStoragePath_, "") };
    inline FlowTemplate& setFlowStoragePath(string flowStoragePath) { DARABONBA_PTR_SET_VALUE(flowStoragePath_, flowStoragePath) };


    // flowTemplateId Field Functions 
    bool hasFlowTemplateId() const { return this->flowTemplateId_ != nullptr;};
    void deleteFlowTemplateId() { this->flowTemplateId_ = nullptr;};
    inline string getFlowTemplateId() const { DARABONBA_PTR_GET_DEFAULT(flowTemplateId_, "") };
    inline FlowTemplate& setFlowTemplateId(string flowTemplateId) { DARABONBA_PTR_SET_VALUE(flowTemplateId_, flowTemplateId) };


    // flowType Field Functions 
    bool hasFlowType() const { return this->flowType_ != nullptr;};
    void deleteFlowType() { this->flowType_ = nullptr;};
    inline string getFlowType() const { DARABONBA_PTR_GET_DEFAULT(flowType_, "") };
    inline FlowTemplate& setFlowType(string flowType) { DARABONBA_PTR_SET_VALUE(flowType_, flowType) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline FlowTemplate& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


    // referenceCount Field Functions 
    bool hasReferenceCount() const { return this->referenceCount_ != nullptr;};
    void deleteReferenceCount() { this->referenceCount_ = nullptr;};
    inline int32_t getReferenceCount() const { DARABONBA_PTR_GET_DEFAULT(referenceCount_, 0) };
    inline FlowTemplate& setReferenceCount(int32_t referenceCount) { DARABONBA_PTR_SET_VALUE(referenceCount_, referenceCount) };


    // templateGroup Field Functions 
    bool hasTemplateGroup() const { return this->templateGroup_ != nullptr;};
    void deleteTemplateGroup() { this->templateGroup_ = nullptr;};
    inline string getTemplateGroup() const { DARABONBA_PTR_GET_DEFAULT(templateGroup_, "") };
    inline FlowTemplate& setTemplateGroup(string templateGroup) { DARABONBA_PTR_SET_VALUE(templateGroup_, templateGroup) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline FlowTemplate& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline FlowTemplate& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline FlowTemplate& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline FlowTemplate& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> accessibility_ {};
    shared_ptr<string> aliyunDocumentId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<map<string, string>> descriptionI18N_ {};
    shared_ptr<string> displayName_ {};
    shared_ptr<map<string, string>> displayNameI18N_ {};
    shared_ptr<string> flowFiles_ {};
    shared_ptr<string> flowStoragePath_ {};
    shared_ptr<string> flowTemplateId_ {};
    shared_ptr<string> flowType_ {};
    shared_ptr<string> locale_ {};
    shared_ptr<int32_t> referenceCount_ {};
    shared_ptr<string> templateGroup_ {};
    shared_ptr<string> templateName_ {};
    shared_ptr<string> url_ {};
    shared_ptr<string> version_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
