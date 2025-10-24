// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMARTTAGTEMPLATELISTRESPONSEBODYTEMPLATESTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMARTTAGTEMPLATELISTRESPONSEBODYTEMPLATESTEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QuerySmarttagTemplateListResponseBodyTemplatesTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmarttagTemplateListResponseBodyTemplatesTemplate& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QuerySmarttagTemplateListResponseBodyTemplatesTemplate& obj) { 
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
    QuerySmarttagTemplateListResponseBodyTemplatesTemplate() = default ;
    QuerySmarttagTemplateListResponseBodyTemplatesTemplate(const QuerySmarttagTemplateListResponseBodyTemplatesTemplate &) = default ;
    QuerySmarttagTemplateListResponseBodyTemplatesTemplate(QuerySmarttagTemplateListResponseBodyTemplatesTemplate &&) = default ;
    QuerySmarttagTemplateListResponseBodyTemplatesTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmarttagTemplateListResponseBodyTemplatesTemplate() = default ;
    QuerySmarttagTemplateListResponseBodyTemplatesTemplate& operator=(const QuerySmarttagTemplateListResponseBodyTemplatesTemplate &) = default ;
    QuerySmarttagTemplateListResponseBodyTemplatesTemplate& operator=(QuerySmarttagTemplateListResponseBodyTemplatesTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analyseTypes_ == nullptr
        && return this->faceCategoryIds_ == nullptr && return this->faceCustomParamsConfig_ == nullptr && return this->industry_ == nullptr && return this->isDefault_ == nullptr && return this->keywordConfig_ == nullptr
        && return this->knowledgeConfig_ == nullptr && return this->labelType_ == nullptr && return this->labelVersion_ == nullptr && return this->landmarkGroupIds_ == nullptr && return this->objectGroupIds_ == nullptr
        && return this->scene_ == nullptr && return this->templateId_ == nullptr && return this->templateName_ == nullptr; };
    // analyseTypes Field Functions 
    bool hasAnalyseTypes() const { return this->analyseTypes_ != nullptr;};
    void deleteAnalyseTypes() { this->analyseTypes_ = nullptr;};
    inline string analyseTypes() const { DARABONBA_PTR_GET_DEFAULT(analyseTypes_, "") };
    inline QuerySmarttagTemplateListResponseBodyTemplatesTemplate& setAnalyseTypes(string analyseTypes) { DARABONBA_PTR_SET_VALUE(analyseTypes_, analyseTypes) };


    // faceCategoryIds Field Functions 
    bool hasFaceCategoryIds() const { return this->faceCategoryIds_ != nullptr;};
    void deleteFaceCategoryIds() { this->faceCategoryIds_ = nullptr;};
    inline string faceCategoryIds() const { DARABONBA_PTR_GET_DEFAULT(faceCategoryIds_, "") };
    inline QuerySmarttagTemplateListResponseBodyTemplatesTemplate& setFaceCategoryIds(string faceCategoryIds) { DARABONBA_PTR_SET_VALUE(faceCategoryIds_, faceCategoryIds) };


    // faceCustomParamsConfig Field Functions 
    bool hasFaceCustomParamsConfig() const { return this->faceCustomParamsConfig_ != nullptr;};
    void deleteFaceCustomParamsConfig() { this->faceCustomParamsConfig_ = nullptr;};
    inline string faceCustomParamsConfig() const { DARABONBA_PTR_GET_DEFAULT(faceCustomParamsConfig_, "") };
    inline QuerySmarttagTemplateListResponseBodyTemplatesTemplate& setFaceCustomParamsConfig(string faceCustomParamsConfig) { DARABONBA_PTR_SET_VALUE(faceCustomParamsConfig_, faceCustomParamsConfig) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string industry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline QuerySmarttagTemplateListResponseBodyTemplatesTemplate& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline QuerySmarttagTemplateListResponseBodyTemplatesTemplate& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // keywordConfig Field Functions 
    bool hasKeywordConfig() const { return this->keywordConfig_ != nullptr;};
    void deleteKeywordConfig() { this->keywordConfig_ = nullptr;};
    inline string keywordConfig() const { DARABONBA_PTR_GET_DEFAULT(keywordConfig_, "") };
    inline QuerySmarttagTemplateListResponseBodyTemplatesTemplate& setKeywordConfig(string keywordConfig) { DARABONBA_PTR_SET_VALUE(keywordConfig_, keywordConfig) };


    // knowledgeConfig Field Functions 
    bool hasKnowledgeConfig() const { return this->knowledgeConfig_ != nullptr;};
    void deleteKnowledgeConfig() { this->knowledgeConfig_ = nullptr;};
    inline string knowledgeConfig() const { DARABONBA_PTR_GET_DEFAULT(knowledgeConfig_, "") };
    inline QuerySmarttagTemplateListResponseBodyTemplatesTemplate& setKnowledgeConfig(string knowledgeConfig) { DARABONBA_PTR_SET_VALUE(knowledgeConfig_, knowledgeConfig) };


    // labelType Field Functions 
    bool hasLabelType() const { return this->labelType_ != nullptr;};
    void deleteLabelType() { this->labelType_ = nullptr;};
    inline string labelType() const { DARABONBA_PTR_GET_DEFAULT(labelType_, "") };
    inline QuerySmarttagTemplateListResponseBodyTemplatesTemplate& setLabelType(string labelType) { DARABONBA_PTR_SET_VALUE(labelType_, labelType) };


    // labelVersion Field Functions 
    bool hasLabelVersion() const { return this->labelVersion_ != nullptr;};
    void deleteLabelVersion() { this->labelVersion_ = nullptr;};
    inline string labelVersion() const { DARABONBA_PTR_GET_DEFAULT(labelVersion_, "") };
    inline QuerySmarttagTemplateListResponseBodyTemplatesTemplate& setLabelVersion(string labelVersion) { DARABONBA_PTR_SET_VALUE(labelVersion_, labelVersion) };


    // landmarkGroupIds Field Functions 
    bool hasLandmarkGroupIds() const { return this->landmarkGroupIds_ != nullptr;};
    void deleteLandmarkGroupIds() { this->landmarkGroupIds_ = nullptr;};
    inline string landmarkGroupIds() const { DARABONBA_PTR_GET_DEFAULT(landmarkGroupIds_, "") };
    inline QuerySmarttagTemplateListResponseBodyTemplatesTemplate& setLandmarkGroupIds(string landmarkGroupIds) { DARABONBA_PTR_SET_VALUE(landmarkGroupIds_, landmarkGroupIds) };


    // objectGroupIds Field Functions 
    bool hasObjectGroupIds() const { return this->objectGroupIds_ != nullptr;};
    void deleteObjectGroupIds() { this->objectGroupIds_ = nullptr;};
    inline string objectGroupIds() const { DARABONBA_PTR_GET_DEFAULT(objectGroupIds_, "") };
    inline QuerySmarttagTemplateListResponseBodyTemplatesTemplate& setObjectGroupIds(string objectGroupIds) { DARABONBA_PTR_SET_VALUE(objectGroupIds_, objectGroupIds) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline QuerySmarttagTemplateListResponseBodyTemplatesTemplate& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline QuerySmarttagTemplateListResponseBodyTemplatesTemplate& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline QuerySmarttagTemplateListResponseBodyTemplatesTemplate& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The analysis types that are used in the template. One or more values are returned. Valid values:
    // 
    // *   **ocr**: text recognition
    // *   **asr**: speech recognition
    // *   **classification**: video classification
    // *   **shows**: program recognition
    // *   **face**: facial recognition
    // *   **role**: figure recognition
    // *   **object**: object recognition
    // *   **tvstation**: logo recognition
    // *   **action**: action recognition
    // *   **emotion**: facial expression recognition
    // *   **landmark**: landmark recognition
    // *   **scene**: scene recognition
    // *   **movieip**: movie intellectual property recognition
    // *   **subtitle**: subtitle extraction
    std::shared_ptr<string> analyseTypes_ = nullptr;
    // The IDs of the system facial image libraries that are used in the template. One or more values are returned. Valid values:
    // 
    // *   celebrity: the facial image library of celebrities
    // *   politician: the facial image library of politicians
    // *   sensitive: the facial image library of sensitive figures
    std::shared_ptr<string> faceCategoryIds_ = nullptr;
    // The configurations of face-related algorithms. The value of this parameter is a JSON string and consists of the thresholds set for face detection and facial recognition. Valid values:
    // 
    // *   **faceDetThreshold**: The default threshold for face detection is 0.999. The threshold takes effect only for the faces that are strange to the system.
    // *   **faceRegThreshold**: The default threshold for facial recognition is 0.9.
    std::shared_ptr<string> faceCustomParamsConfig_ = nullptr;
    // The industry to which the template applies. Default value: **common**. Valid values:
    // 
    // *   **microVideo**: short video industry
    // *   **common**: general industries
    std::shared_ptr<string> industry_ = nullptr;
    // Indicates whether the template is the default template. Valid values:
    // 
    // *   **true**: The template is the default template.
    // *   **false**: The template is not the default template.
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The configuration of keyword tags. The type field specifies the category of a keyword tag. You can specify one or more values and separate the values with commas (,). Valid values:
    // 
    // *   name
    // *   location
    // *   organization
    // *   other
    // 
    // > Keyword tags of all the categories are returned in one of the following scenarios: The KeywordConfig parameter is not specified or the Keyword field is invalid because it is not a JSON string, or the KeywordConfig parameter does not contain the type field or the type field is invalid.
    std::shared_ptr<string> keywordConfig_ = nullptr;
    // The fields to be identified as knowledge graph information when tags are returned in Smart tagging V2.0 and Smart tagging V2.0-custom modes. For more information, see [Knowledge graph fields in smart tagging jobs](https://help.aliyun.com/document_detail/356383.html). If this parameter is not specified or the specified value is NULL or invalid because it is not a JSON string, the following fields are returned:
    // 
    // *   movie-related fields:
    // 
    //     *   name: the name of the intellectual property that is featured in the movie
    //     *   alias: the alias of the intellectual property that is featured in the movie
    //     *   chnl: the category of the movie
    //     *   genre: the genre of the movie
    //     *   country: the country or region in which the movie was produced
    //     *   language: the language of the movie
    //     *   releaseYear: the year when the movie was released
    // 
    // *   music-related fields:
    // 
    //     *   songName: the name of the song
    //     *   artistName: the name of the singer
    //     *   artistArea: the region to which the singer belongs, such as China, Japan, Korea, Europe, and America, or others.
    //     *   albumName: the name of the album
    // 
    // *   person-related fields:
    // 
    //     *   name: the name of the person
    //     *   gender: the gender of the person
    //     *   citizenship: the nationality of the person
    //     *   occupation: the occupation of the person
    //     *   classification: the type into which the person is classified
    //     *   nationality: the ethnic group of the person
    //     *   birthPlace: the place where the person was born
    //     *   birthDate: the date when the person was born
    // 
    // *   landmark-related fields:
    // 
    //     *   name: the display name of the landmark
    //     *   nameEn: the English name of the landmark
    //     *   Description: the description of the parameter
    //     *   address: the address of the landmark
    // 
    // *   item-related fields:
    // 
    //     *   brandName: the brand of the item
    //     *   finegrainName: the fine-grained description of the item
    std::shared_ptr<string> knowledgeConfig_ = nullptr;
    // The type of the tagging. Default value: **auto**. Valid values:
    // 
    // *   **auto**: machine tagging
    // *   **hmi**: tagging by human and machine
    std::shared_ptr<string> labelType_ = nullptr;
    // The version of the smart tagging feature. Default value: 1.0. Valid values:
    // 
    // *   1.0: Smart tagging V1.0
    // *   2.0: Smart tagging V2.0 (CPV tagging)
    // *   2.0-custom: Smart tagging V2.0-custom (CPV tagging by using custom models)
    std::shared_ptr<string> labelVersion_ = nullptr;
    // The IDs of the landmark libraries that are used in the template.
    std::shared_ptr<string> landmarkGroupIds_ = nullptr;
    // The IDs of the object libraries that are used in the template.
    std::shared_ptr<string> objectGroupIds_ = nullptr;
    // The scenario in which the template is used. Valid values:
    // 
    // *   **search**: search scenarios
    // *   **recommend**: recommendation scenarios
    std::shared_ptr<string> scene_ = nullptr;
    // The ID of the template.
    std::shared_ptr<string> templateId_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
