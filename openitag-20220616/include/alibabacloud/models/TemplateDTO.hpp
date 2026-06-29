// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATEDTO_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATEDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ViewPlugin.hpp>
#include <alibabacloud/models/QuestionPlugin.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class TemplateDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateDTO& obj) { 
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_ANY_TO_JSON(Exif, exif_);
      DARABONBA_PTR_TO_JSON(QuestionConfigs, questionConfigs_);
      DARABONBA_PTR_TO_JSON(RobotConfigs, robotConfigs_);
      DARABONBA_PTR_TO_JSON(SharedMode, sharedMode_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(ViewConfigs, viewConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_ANY_FROM_JSON(Exif, exif_);
      DARABONBA_PTR_FROM_JSON(QuestionConfigs, questionConfigs_);
      DARABONBA_PTR_FROM_JSON(RobotConfigs, robotConfigs_);
      DARABONBA_PTR_FROM_JSON(SharedMode, sharedMode_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(ViewConfigs, viewConfigs_);
    };
    TemplateDTO() = default ;
    TemplateDTO(const TemplateDTO &) = default ;
    TemplateDTO(TemplateDTO &&) = default ;
    TemplateDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateDTO() = default ;
    TemplateDTO& operator=(const TemplateDTO &) = default ;
    TemplateDTO& operator=(TemplateDTO &&) = default ;
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
      // List of view widgets
      shared_ptr<vector<ViewPlugin>> viewPlugins_ {};
    };

    virtual bool empty() const override { return this->classify_ == nullptr
        && this->description_ == nullptr && this->exif_ == nullptr && this->questionConfigs_ == nullptr && this->robotConfigs_ == nullptr && this->sharedMode_ == nullptr
        && this->tags_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr && this->viewConfigs_ == nullptr; };
    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline TemplateDTO& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline TemplateDTO& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // exif Field Functions 
    bool hasExif() const { return this->exif_ != nullptr;};
    void deleteExif() { this->exif_ = nullptr;};
    inline     const Darabonba::Json & getExif() const { DARABONBA_GET(exif_) };
    Darabonba::Json & getExif() { DARABONBA_GET(exif_) };
    inline TemplateDTO& setExif(const Darabonba::Json & exif) { DARABONBA_SET_VALUE(exif_, exif) };
    inline TemplateDTO& setExif(Darabonba::Json && exif) { DARABONBA_SET_RVALUE(exif_, exif) };


    // questionConfigs Field Functions 
    bool hasQuestionConfigs() const { return this->questionConfigs_ != nullptr;};
    void deleteQuestionConfigs() { this->questionConfigs_ = nullptr;};
    inline const vector<QuestionPlugin> & getQuestionConfigs() const { DARABONBA_PTR_GET_CONST(questionConfigs_, vector<QuestionPlugin>) };
    inline vector<QuestionPlugin> getQuestionConfigs() { DARABONBA_PTR_GET(questionConfigs_, vector<QuestionPlugin>) };
    inline TemplateDTO& setQuestionConfigs(const vector<QuestionPlugin> & questionConfigs) { DARABONBA_PTR_SET_VALUE(questionConfigs_, questionConfigs) };
    inline TemplateDTO& setQuestionConfigs(vector<QuestionPlugin> && questionConfigs) { DARABONBA_PTR_SET_RVALUE(questionConfigs_, questionConfigs) };


    // robotConfigs Field Functions 
    bool hasRobotConfigs() const { return this->robotConfigs_ != nullptr;};
    void deleteRobotConfigs() { this->robotConfigs_ = nullptr;};
    inline const vector<Darabonba::Json> & getRobotConfigs() const { DARABONBA_PTR_GET_CONST(robotConfigs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getRobotConfigs() { DARABONBA_PTR_GET(robotConfigs_, vector<Darabonba::Json>) };
    inline TemplateDTO& setRobotConfigs(const vector<Darabonba::Json> & robotConfigs) { DARABONBA_PTR_SET_VALUE(robotConfigs_, robotConfigs) };
    inline TemplateDTO& setRobotConfigs(vector<Darabonba::Json> && robotConfigs) { DARABONBA_PTR_SET_RVALUE(robotConfigs_, robotConfigs) };


    // sharedMode Field Functions 
    bool hasSharedMode() const { return this->sharedMode_ != nullptr;};
    void deleteSharedMode() { this->sharedMode_ = nullptr;};
    inline string getSharedMode() const { DARABONBA_PTR_GET_DEFAULT(sharedMode_, "") };
    inline TemplateDTO& setSharedMode(string sharedMode) { DARABONBA_PTR_SET_VALUE(sharedMode_, sharedMode) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline TemplateDTO& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline TemplateDTO& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline TemplateDTO& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline TemplateDTO& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // viewConfigs Field Functions 
    bool hasViewConfigs() const { return this->viewConfigs_ != nullptr;};
    void deleteViewConfigs() { this->viewConfigs_ = nullptr;};
    inline const TemplateDTO::ViewConfigs & getViewConfigs() const { DARABONBA_PTR_GET_CONST(viewConfigs_, TemplateDTO::ViewConfigs) };
    inline TemplateDTO::ViewConfigs getViewConfigs() { DARABONBA_PTR_GET(viewConfigs_, TemplateDTO::ViewConfigs) };
    inline TemplateDTO& setViewConfigs(const TemplateDTO::ViewConfigs & viewConfigs) { DARABONBA_PTR_SET_VALUE(viewConfigs_, viewConfigs) };
    inline TemplateDTO& setViewConfigs(TemplateDTO::ViewConfigs && viewConfigs) { DARABONBA_PTR_SET_RVALUE(viewConfigs_, viewConfigs) };


  protected:
    // Template categorization
    shared_ptr<string> classify_ {};
    // Template description
    shared_ptr<string> description_ {};
    // Template additional information
    Darabonba::Json exif_ {};
    // List of question widget configurations
    // 
    // This parameter is required.
    shared_ptr<vector<QuestionPlugin>> questionConfigs_ {};
    // List of assisted annotation configurations
    shared_ptr<vector<Darabonba::Json>> robotConfigs_ {};
    // Template shared mode
    shared_ptr<string> sharedMode_ {};
    // List of tag information
    shared_ptr<vector<string>> tags_ {};
    // Template ID
    shared_ptr<string> templateId_ {};
    // Template Name
    // 
    // This parameter is required.
    shared_ptr<string> templateName_ {};
    // View layer configuration
    // 
    // This parameter is required.
    shared_ptr<TemplateDTO::ViewConfigs> viewConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
