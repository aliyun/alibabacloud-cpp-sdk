// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATEDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ViewPlugin.hpp>
#include <alibabacloud/models/SimpleUser.hpp>
#include <alibabacloud/models/QuestionPlugin.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class TemplateDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AbandonReasons, abandonReasons_);
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_ANY_TO_JSON(Exif, exif_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(QuestionConfigs, questionConfigs_);
      DARABONBA_PTR_TO_JSON(SharedMode, sharedMode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(ViewConfigs, viewConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AbandonReasons, abandonReasons_);
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_ANY_FROM_JSON(Exif, exif_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(QuestionConfigs, questionConfigs_);
      DARABONBA_PTR_FROM_JSON(SharedMode, sharedMode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(ViewConfigs, viewConfigs_);
    };
    TemplateDetail() = default ;
    TemplateDetail(const TemplateDetail &) = default ;
    TemplateDetail(TemplateDetail &&) = default ;
    TemplateDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateDetail() = default ;
    TemplateDetail& operator=(const TemplateDetail &) = default ;
    TemplateDetail& operator=(TemplateDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ViewConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ViewConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(ViewPlugins, viewPlugins_);
      };
      friend void from_json(const Darabonba::Json& j, ViewConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(ViewPlugins, viewPlugins_);
      };
      ViewConfigs() = default ;
      ViewConfigs(const ViewConfigs &) = default ;
      ViewConfigs(ViewConfigs &&) = default ;
      ViewConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ViewConfigs() = default ;
      ViewConfigs& operator=(const ViewConfigs &) = default ;
      ViewConfigs& operator=(ViewConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->viewPlugins_ == nullptr; };
      // viewPlugins Field Functions 
      bool hasViewPlugins() const { return this->viewPlugins_ != nullptr;};
      void deleteViewPlugins() { this->viewPlugins_ = nullptr;};
      inline const vector<ViewPlugin> & getViewPlugins() const { DARABONBA_PTR_GET_CONST(viewPlugins_, vector<ViewPlugin>) };
      inline vector<ViewPlugin> getViewPlugins() { DARABONBA_PTR_GET(viewPlugins_, vector<ViewPlugin>) };
      inline ViewConfigs& setViewPlugins(const vector<ViewPlugin> & viewPlugins) { DARABONBA_PTR_SET_VALUE(viewPlugins_, viewPlugins) };
      inline ViewConfigs& setViewPlugins(vector<ViewPlugin> && viewPlugins) { DARABONBA_PTR_SET_RVALUE(viewPlugins_, viewPlugins) };


    protected:
      // View widgets.
      shared_ptr<vector<ViewPlugin>> viewPlugins_ {};
    };

    virtual bool empty() const override { return this->abandonReasons_ == nullptr
        && this->classify_ == nullptr && this->creator_ == nullptr && this->description_ == nullptr && this->exif_ == nullptr && this->gmtCreateTime_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->modifier_ == nullptr && this->questionConfigs_ == nullptr && this->sharedMode_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr && this->tenantId_ == nullptr && this->type_ == nullptr
        && this->viewConfigs_ == nullptr; };
    // abandonReasons Field Functions 
    bool hasAbandonReasons() const { return this->abandonReasons_ != nullptr;};
    void deleteAbandonReasons() { this->abandonReasons_ = nullptr;};
    inline const vector<string> & getAbandonReasons() const { DARABONBA_PTR_GET_CONST(abandonReasons_, vector<string>) };
    inline vector<string> getAbandonReasons() { DARABONBA_PTR_GET(abandonReasons_, vector<string>) };
    inline TemplateDetail& setAbandonReasons(const vector<string> & abandonReasons) { DARABONBA_PTR_SET_VALUE(abandonReasons_, abandonReasons) };
    inline TemplateDetail& setAbandonReasons(vector<string> && abandonReasons) { DARABONBA_PTR_SET_RVALUE(abandonReasons_, abandonReasons) };


    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline TemplateDetail& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const SimpleUser & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, SimpleUser) };
    inline SimpleUser getCreator() { DARABONBA_PTR_GET(creator_, SimpleUser) };
    inline TemplateDetail& setCreator(const SimpleUser & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline TemplateDetail& setCreator(SimpleUser && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline TemplateDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // exif Field Functions 
    bool hasExif() const { return this->exif_ != nullptr;};
    void deleteExif() { this->exif_ = nullptr;};
    inline     const Darabonba::Json & getExif() const { DARABONBA_GET(exif_) };
    Darabonba::Json & getExif() { DARABONBA_GET(exif_) };
    inline TemplateDetail& setExif(const Darabonba::Json & exif) { DARABONBA_SET_VALUE(exif_, exif) };
    inline TemplateDetail& setExif(Darabonba::Json && exif) { DARABONBA_SET_RVALUE(exif_, exif) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline TemplateDetail& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline TemplateDetail& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline const SimpleUser & getModifier() const { DARABONBA_PTR_GET_CONST(modifier_, SimpleUser) };
    inline SimpleUser getModifier() { DARABONBA_PTR_GET(modifier_, SimpleUser) };
    inline TemplateDetail& setModifier(const SimpleUser & modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };
    inline TemplateDetail& setModifier(SimpleUser && modifier) { DARABONBA_PTR_SET_RVALUE(modifier_, modifier) };


    // questionConfigs Field Functions 
    bool hasQuestionConfigs() const { return this->questionConfigs_ != nullptr;};
    void deleteQuestionConfigs() { this->questionConfigs_ = nullptr;};
    inline const vector<QuestionPlugin> & getQuestionConfigs() const { DARABONBA_PTR_GET_CONST(questionConfigs_, vector<QuestionPlugin>) };
    inline vector<QuestionPlugin> getQuestionConfigs() { DARABONBA_PTR_GET(questionConfigs_, vector<QuestionPlugin>) };
    inline TemplateDetail& setQuestionConfigs(const vector<QuestionPlugin> & questionConfigs) { DARABONBA_PTR_SET_VALUE(questionConfigs_, questionConfigs) };
    inline TemplateDetail& setQuestionConfigs(vector<QuestionPlugin> && questionConfigs) { DARABONBA_PTR_SET_RVALUE(questionConfigs_, questionConfigs) };


    // sharedMode Field Functions 
    bool hasSharedMode() const { return this->sharedMode_ != nullptr;};
    void deleteSharedMode() { this->sharedMode_ = nullptr;};
    inline string getSharedMode() const { DARABONBA_PTR_GET_DEFAULT(sharedMode_, "") };
    inline TemplateDetail& setSharedMode(string sharedMode) { DARABONBA_PTR_SET_VALUE(sharedMode_, sharedMode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline TemplateDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline TemplateDetail& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline TemplateDetail& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline TemplateDetail& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline TemplateDetail& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline TemplateDetail& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline TemplateDetail& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // viewConfigs Field Functions 
    bool hasViewConfigs() const { return this->viewConfigs_ != nullptr;};
    void deleteViewConfigs() { this->viewConfigs_ = nullptr;};
    inline const TemplateDetail::ViewConfigs & getViewConfigs() const { DARABONBA_PTR_GET_CONST(viewConfigs_, TemplateDetail::ViewConfigs) };
    inline TemplateDetail::ViewConfigs getViewConfigs() { DARABONBA_PTR_GET(viewConfigs_, TemplateDetail::ViewConfigs) };
    inline TemplateDetail& setViewConfigs(const TemplateDetail::ViewConfigs & viewConfigs) { DARABONBA_PTR_SET_VALUE(viewConfigs_, viewConfigs) };
    inline TemplateDetail& setViewConfigs(TemplateDetail::ViewConfigs && viewConfigs) { DARABONBA_PTR_SET_RVALUE(viewConfigs_, viewConfigs) };


  protected:
    // Reasons for deprecation.
    shared_ptr<vector<string>> abandonReasons_ {};
    // Template categorization.
    shared_ptr<string> classify_ {};
    // Creator.
    shared_ptr<SimpleUser> creator_ {};
    // Template description.
    shared_ptr<string> description_ {};
    // Additional template information.
    Darabonba::Json exif_ {};
    // Creation Time.
    shared_ptr<string> gmtCreateTime_ {};
    // Updated At.
    shared_ptr<string> gmtModifiedTime_ {};
    // Modifier.
    shared_ptr<SimpleUser> modifier_ {};
    // Question widget configuration.
    shared_ptr<vector<QuestionPlugin>> questionConfigs_ {};
    // Template shared mode.
    shared_ptr<string> sharedMode_ {};
    // Template status.
    shared_ptr<string> status_ {};
    // Label information.
    shared_ptr<vector<string>> tags_ {};
    // Template ID.
    shared_ptr<string> templateId_ {};
    // Template Name.
    shared_ptr<string> templateName_ {};
    // Tenant where the template resides.
    shared_ptr<string> tenantId_ {};
    // Template type.
    shared_ptr<string> type_ {};
    // View layer configuration.
    shared_ptr<TemplateDetail::ViewConfigs> viewConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
