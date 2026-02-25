// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMARTTAGTEMPLATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMARTTAGTEMPLATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QuerySmarttagTemplateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmarttagTemplateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmarttagTemplateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
    };
    QuerySmarttagTemplateListResponseBody() = default ;
    QuerySmarttagTemplateListResponseBody(const QuerySmarttagTemplateListResponseBody &) = default ;
    QuerySmarttagTemplateListResponseBody(QuerySmarttagTemplateListResponseBody &&) = default ;
    QuerySmarttagTemplateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmarttagTemplateListResponseBody() = default ;
    QuerySmarttagTemplateListResponseBody& operator=(const QuerySmarttagTemplateListResponseBody &) = default ;
    QuerySmarttagTemplateListResponseBody& operator=(QuerySmarttagTemplateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Templates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Templates& obj) { 
        DARABONBA_PTR_TO_JSON(Template, template_);
      };
      friend void from_json(const Darabonba::Json& j, Templates& obj) { 
        DARABONBA_PTR_FROM_JSON(Template, template_);
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
      class Template : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Template& obj) { 
          DARABONBA_PTR_TO_JSON(AnalyseTypes, analyseTypes_);
          DARABONBA_PTR_TO_JSON(FaceCategoryIds, faceCategoryIds_);
          DARABONBA_PTR_TO_JSON(FaceCustomParamsConfig, faceCustomParamsConfig_);
          DARABONBA_PTR_TO_JSON(Industry, industry_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(KeywordConfig, keywordConfig_);
          DARABONBA_PTR_TO_JSON(KnowledgeConfig, knowledgeConfig_);
          DARABONBA_PTR_TO_JSON(LabelType, labelType_);
          DARABONBA_PTR_TO_JSON(LabelVersion, labelVersion_);
          DARABONBA_PTR_TO_JSON(LandmarkGroupIds, landmarkGroupIds_);
          DARABONBA_PTR_TO_JSON(ObjectGroupIds, objectGroupIds_);
          DARABONBA_PTR_TO_JSON(Scene, scene_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        };
        friend void from_json(const Darabonba::Json& j, Template& obj) { 
          DARABONBA_PTR_FROM_JSON(AnalyseTypes, analyseTypes_);
          DARABONBA_PTR_FROM_JSON(FaceCategoryIds, faceCategoryIds_);
          DARABONBA_PTR_FROM_JSON(FaceCustomParamsConfig, faceCustomParamsConfig_);
          DARABONBA_PTR_FROM_JSON(Industry, industry_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(KeywordConfig, keywordConfig_);
          DARABONBA_PTR_FROM_JSON(KnowledgeConfig, knowledgeConfig_);
          DARABONBA_PTR_FROM_JSON(LabelType, labelType_);
          DARABONBA_PTR_FROM_JSON(LabelVersion, labelVersion_);
          DARABONBA_PTR_FROM_JSON(LandmarkGroupIds, landmarkGroupIds_);
          DARABONBA_PTR_FROM_JSON(ObjectGroupIds, objectGroupIds_);
          DARABONBA_PTR_FROM_JSON(Scene, scene_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
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
        virtual bool empty() const override { return this->analyseTypes_ == nullptr
        && this->faceCategoryIds_ == nullptr && this->faceCustomParamsConfig_ == nullptr && this->industry_ == nullptr && this->isDefault_ == nullptr && this->keywordConfig_ == nullptr
        && this->knowledgeConfig_ == nullptr && this->labelType_ == nullptr && this->labelVersion_ == nullptr && this->landmarkGroupIds_ == nullptr && this->objectGroupIds_ == nullptr
        && this->scene_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr; };
        // analyseTypes Field Functions 
        bool hasAnalyseTypes() const { return this->analyseTypes_ != nullptr;};
        void deleteAnalyseTypes() { this->analyseTypes_ = nullptr;};
        inline string getAnalyseTypes() const { DARABONBA_PTR_GET_DEFAULT(analyseTypes_, "") };
        inline Template& setAnalyseTypes(string analyseTypes) { DARABONBA_PTR_SET_VALUE(analyseTypes_, analyseTypes) };


        // faceCategoryIds Field Functions 
        bool hasFaceCategoryIds() const { return this->faceCategoryIds_ != nullptr;};
        void deleteFaceCategoryIds() { this->faceCategoryIds_ = nullptr;};
        inline string getFaceCategoryIds() const { DARABONBA_PTR_GET_DEFAULT(faceCategoryIds_, "") };
        inline Template& setFaceCategoryIds(string faceCategoryIds) { DARABONBA_PTR_SET_VALUE(faceCategoryIds_, faceCategoryIds) };


        // faceCustomParamsConfig Field Functions 
        bool hasFaceCustomParamsConfig() const { return this->faceCustomParamsConfig_ != nullptr;};
        void deleteFaceCustomParamsConfig() { this->faceCustomParamsConfig_ = nullptr;};
        inline string getFaceCustomParamsConfig() const { DARABONBA_PTR_GET_DEFAULT(faceCustomParamsConfig_, "") };
        inline Template& setFaceCustomParamsConfig(string faceCustomParamsConfig) { DARABONBA_PTR_SET_VALUE(faceCustomParamsConfig_, faceCustomParamsConfig) };


        // industry Field Functions 
        bool hasIndustry() const { return this->industry_ != nullptr;};
        void deleteIndustry() { this->industry_ = nullptr;};
        inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
        inline Template& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline Template& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // keywordConfig Field Functions 
        bool hasKeywordConfig() const { return this->keywordConfig_ != nullptr;};
        void deleteKeywordConfig() { this->keywordConfig_ = nullptr;};
        inline string getKeywordConfig() const { DARABONBA_PTR_GET_DEFAULT(keywordConfig_, "") };
        inline Template& setKeywordConfig(string keywordConfig) { DARABONBA_PTR_SET_VALUE(keywordConfig_, keywordConfig) };


        // knowledgeConfig Field Functions 
        bool hasKnowledgeConfig() const { return this->knowledgeConfig_ != nullptr;};
        void deleteKnowledgeConfig() { this->knowledgeConfig_ = nullptr;};
        inline string getKnowledgeConfig() const { DARABONBA_PTR_GET_DEFAULT(knowledgeConfig_, "") };
        inline Template& setKnowledgeConfig(string knowledgeConfig) { DARABONBA_PTR_SET_VALUE(knowledgeConfig_, knowledgeConfig) };


        // labelType Field Functions 
        bool hasLabelType() const { return this->labelType_ != nullptr;};
        void deleteLabelType() { this->labelType_ = nullptr;};
        inline string getLabelType() const { DARABONBA_PTR_GET_DEFAULT(labelType_, "") };
        inline Template& setLabelType(string labelType) { DARABONBA_PTR_SET_VALUE(labelType_, labelType) };


        // labelVersion Field Functions 
        bool hasLabelVersion() const { return this->labelVersion_ != nullptr;};
        void deleteLabelVersion() { this->labelVersion_ = nullptr;};
        inline string getLabelVersion() const { DARABONBA_PTR_GET_DEFAULT(labelVersion_, "") };
        inline Template& setLabelVersion(string labelVersion) { DARABONBA_PTR_SET_VALUE(labelVersion_, labelVersion) };


        // landmarkGroupIds Field Functions 
        bool hasLandmarkGroupIds() const { return this->landmarkGroupIds_ != nullptr;};
        void deleteLandmarkGroupIds() { this->landmarkGroupIds_ = nullptr;};
        inline string getLandmarkGroupIds() const { DARABONBA_PTR_GET_DEFAULT(landmarkGroupIds_, "") };
        inline Template& setLandmarkGroupIds(string landmarkGroupIds) { DARABONBA_PTR_SET_VALUE(landmarkGroupIds_, landmarkGroupIds) };


        // objectGroupIds Field Functions 
        bool hasObjectGroupIds() const { return this->objectGroupIds_ != nullptr;};
        void deleteObjectGroupIds() { this->objectGroupIds_ = nullptr;};
        inline string getObjectGroupIds() const { DARABONBA_PTR_GET_DEFAULT(objectGroupIds_, "") };
        inline Template& setObjectGroupIds(string objectGroupIds) { DARABONBA_PTR_SET_VALUE(objectGroupIds_, objectGroupIds) };


        // scene Field Functions 
        bool hasScene() const { return this->scene_ != nullptr;};
        void deleteScene() { this->scene_ = nullptr;};
        inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
        inline Template& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
        inline Template& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline Template& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      protected:
        shared_ptr<string> analyseTypes_ {};
        shared_ptr<string> faceCategoryIds_ {};
        shared_ptr<string> faceCustomParamsConfig_ {};
        shared_ptr<string> industry_ {};
        shared_ptr<bool> isDefault_ {};
        shared_ptr<string> keywordConfig_ {};
        shared_ptr<string> knowledgeConfig_ {};
        shared_ptr<string> labelType_ {};
        shared_ptr<string> labelVersion_ {};
        shared_ptr<string> landmarkGroupIds_ {};
        shared_ptr<string> objectGroupIds_ {};
        shared_ptr<string> scene_ {};
        shared_ptr<string> templateId_ {};
        shared_ptr<string> templateName_ {};
      };

      virtual bool empty() const override { return this->template_ == nullptr; };
      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline const vector<Templates::Template> & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, vector<Templates::Template>) };
      inline vector<Templates::Template> getTemplate() { DARABONBA_PTR_GET(template_, vector<Templates::Template>) };
      inline Templates& setTemplate(const vector<Templates::Template> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
      inline Templates& setTemplate(vector<Templates::Template> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


    protected:
      shared_ptr<vector<Templates::Template>> template_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->templates_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySmarttagTemplateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const QuerySmarttagTemplateListResponseBody::Templates & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, QuerySmarttagTemplateListResponseBody::Templates) };
    inline QuerySmarttagTemplateListResponseBody::Templates getTemplates() { DARABONBA_PTR_GET(templates_, QuerySmarttagTemplateListResponseBody::Templates) };
    inline QuerySmarttagTemplateListResponseBody& setTemplates(const QuerySmarttagTemplateListResponseBody::Templates & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline QuerySmarttagTemplateListResponseBody& setTemplates(QuerySmarttagTemplateListResponseBody::Templates && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<QuerySmarttagTemplateListResponseBody::Templates> templates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
