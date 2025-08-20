// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZEAUDIOSYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ANALYZEAUDIOSYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AnalyzeAudioSyncRequestCategoryTags.hpp>
#include <alibabacloud/models/AnalyzeAudioSyncRequestFields.hpp>
#include <alibabacloud/models/AnalyzeAudioSyncRequestServiceInspection.hpp>
#include <alibabacloud/models/AnalyzeAudioSyncRequestTranscription.hpp>
#include <alibabacloud/models/AnalyzeAudioSyncRequestVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class AnalyzeAudioSyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeAudioSyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(categoryTags, categoryTags_);
      DARABONBA_PTR_TO_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_TO_JSON(fields, fields_);
      DARABONBA_PTR_TO_JSON(modelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(responseFormatType, responseFormatType_);
      DARABONBA_PTR_TO_JSON(resultTypes, resultTypes_);
      DARABONBA_PTR_TO_JSON(serviceInspection, serviceInspection_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(templateIds, templateIds_);
      DARABONBA_PTR_TO_JSON(transcription, transcription_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeAudioSyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(categoryTags, categoryTags_);
      DARABONBA_PTR_FROM_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_FROM_JSON(fields, fields_);
      DARABONBA_PTR_FROM_JSON(modelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(responseFormatType, responseFormatType_);
      DARABONBA_PTR_FROM_JSON(resultTypes, resultTypes_);
      DARABONBA_PTR_FROM_JSON(serviceInspection, serviceInspection_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(templateIds, templateIds_);
      DARABONBA_PTR_FROM_JSON(transcription, transcription_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    AnalyzeAudioSyncRequest() = default ;
    AnalyzeAudioSyncRequest(const AnalyzeAudioSyncRequest &) = default ;
    AnalyzeAudioSyncRequest(AnalyzeAudioSyncRequest &&) = default ;
    AnalyzeAudioSyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeAudioSyncRequest() = default ;
    AnalyzeAudioSyncRequest& operator=(const AnalyzeAudioSyncRequest &) = default ;
    AnalyzeAudioSyncRequest& operator=(AnalyzeAudioSyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryTags_ != nullptr
        && this->customPrompt_ != nullptr && this->fields_ != nullptr && this->modelCode_ != nullptr && this->responseFormatType_ != nullptr && this->resultTypes_ != nullptr
        && this->serviceInspection_ != nullptr && this->stream_ != nullptr && this->templateIds_ != nullptr && this->transcription_ != nullptr && this->variables_ != nullptr; };
    // categoryTags Field Functions 
    bool hasCategoryTags() const { return this->categoryTags_ != nullptr;};
    void deleteCategoryTags() { this->categoryTags_ = nullptr;};
    inline const vector<AnalyzeAudioSyncRequestCategoryTags> & categoryTags() const { DARABONBA_PTR_GET_CONST(categoryTags_, vector<AnalyzeAudioSyncRequestCategoryTags>) };
    inline vector<AnalyzeAudioSyncRequestCategoryTags> categoryTags() { DARABONBA_PTR_GET(categoryTags_, vector<AnalyzeAudioSyncRequestCategoryTags>) };
    inline AnalyzeAudioSyncRequest& setCategoryTags(const vector<AnalyzeAudioSyncRequestCategoryTags> & categoryTags) { DARABONBA_PTR_SET_VALUE(categoryTags_, categoryTags) };
    inline AnalyzeAudioSyncRequest& setCategoryTags(vector<AnalyzeAudioSyncRequestCategoryTags> && categoryTags) { DARABONBA_PTR_SET_RVALUE(categoryTags_, categoryTags) };


    // customPrompt Field Functions 
    bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
    void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
    inline string customPrompt() const { DARABONBA_PTR_GET_DEFAULT(customPrompt_, "") };
    inline AnalyzeAudioSyncRequest& setCustomPrompt(string customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<AnalyzeAudioSyncRequestFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<AnalyzeAudioSyncRequestFields>) };
    inline vector<AnalyzeAudioSyncRequestFields> fields() { DARABONBA_PTR_GET(fields_, vector<AnalyzeAudioSyncRequestFields>) };
    inline AnalyzeAudioSyncRequest& setFields(const vector<AnalyzeAudioSyncRequestFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline AnalyzeAudioSyncRequest& setFields(vector<AnalyzeAudioSyncRequestFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string modelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline AnalyzeAudioSyncRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // responseFormatType Field Functions 
    bool hasResponseFormatType() const { return this->responseFormatType_ != nullptr;};
    void deleteResponseFormatType() { this->responseFormatType_ = nullptr;};
    inline string responseFormatType() const { DARABONBA_PTR_GET_DEFAULT(responseFormatType_, "") };
    inline AnalyzeAudioSyncRequest& setResponseFormatType(string responseFormatType) { DARABONBA_PTR_SET_VALUE(responseFormatType_, responseFormatType) };


    // resultTypes Field Functions 
    bool hasResultTypes() const { return this->resultTypes_ != nullptr;};
    void deleteResultTypes() { this->resultTypes_ = nullptr;};
    inline const vector<string> & resultTypes() const { DARABONBA_PTR_GET_CONST(resultTypes_, vector<string>) };
    inline vector<string> resultTypes() { DARABONBA_PTR_GET(resultTypes_, vector<string>) };
    inline AnalyzeAudioSyncRequest& setResultTypes(const vector<string> & resultTypes) { DARABONBA_PTR_SET_VALUE(resultTypes_, resultTypes) };
    inline AnalyzeAudioSyncRequest& setResultTypes(vector<string> && resultTypes) { DARABONBA_PTR_SET_RVALUE(resultTypes_, resultTypes) };


    // serviceInspection Field Functions 
    bool hasServiceInspection() const { return this->serviceInspection_ != nullptr;};
    void deleteServiceInspection() { this->serviceInspection_ = nullptr;};
    inline const AnalyzeAudioSyncRequestServiceInspection & serviceInspection() const { DARABONBA_PTR_GET_CONST(serviceInspection_, AnalyzeAudioSyncRequestServiceInspection) };
    inline AnalyzeAudioSyncRequestServiceInspection serviceInspection() { DARABONBA_PTR_GET(serviceInspection_, AnalyzeAudioSyncRequestServiceInspection) };
    inline AnalyzeAudioSyncRequest& setServiceInspection(const AnalyzeAudioSyncRequestServiceInspection & serviceInspection) { DARABONBA_PTR_SET_VALUE(serviceInspection_, serviceInspection) };
    inline AnalyzeAudioSyncRequest& setServiceInspection(AnalyzeAudioSyncRequestServiceInspection && serviceInspection) { DARABONBA_PTR_SET_RVALUE(serviceInspection_, serviceInspection) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline AnalyzeAudioSyncRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // templateIds Field Functions 
    bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
    void deleteTemplateIds() { this->templateIds_ = nullptr;};
    inline const vector<string> & templateIds() const { DARABONBA_PTR_GET_CONST(templateIds_, vector<string>) };
    inline vector<string> templateIds() { DARABONBA_PTR_GET(templateIds_, vector<string>) };
    inline AnalyzeAudioSyncRequest& setTemplateIds(const vector<string> & templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };
    inline AnalyzeAudioSyncRequest& setTemplateIds(vector<string> && templateIds) { DARABONBA_PTR_SET_RVALUE(templateIds_, templateIds) };


    // transcription Field Functions 
    bool hasTranscription() const { return this->transcription_ != nullptr;};
    void deleteTranscription() { this->transcription_ = nullptr;};
    inline const AnalyzeAudioSyncRequestTranscription & transcription() const { DARABONBA_PTR_GET_CONST(transcription_, AnalyzeAudioSyncRequestTranscription) };
    inline AnalyzeAudioSyncRequestTranscription transcription() { DARABONBA_PTR_GET(transcription_, AnalyzeAudioSyncRequestTranscription) };
    inline AnalyzeAudioSyncRequest& setTranscription(const AnalyzeAudioSyncRequestTranscription & transcription) { DARABONBA_PTR_SET_VALUE(transcription_, transcription) };
    inline AnalyzeAudioSyncRequest& setTranscription(AnalyzeAudioSyncRequestTranscription && transcription) { DARABONBA_PTR_SET_RVALUE(transcription_, transcription) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<AnalyzeAudioSyncRequestVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<AnalyzeAudioSyncRequestVariables>) };
    inline vector<AnalyzeAudioSyncRequestVariables> variables() { DARABONBA_PTR_GET(variables_, vector<AnalyzeAudioSyncRequestVariables>) };
    inline AnalyzeAudioSyncRequest& setVariables(const vector<AnalyzeAudioSyncRequestVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline AnalyzeAudioSyncRequest& setVariables(vector<AnalyzeAudioSyncRequestVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<vector<AnalyzeAudioSyncRequestCategoryTags>> categoryTags_ = nullptr;
    std::shared_ptr<string> customPrompt_ = nullptr;
    std::shared_ptr<vector<AnalyzeAudioSyncRequestFields>> fields_ = nullptr;
    std::shared_ptr<string> modelCode_ = nullptr;
    std::shared_ptr<string> responseFormatType_ = nullptr;
    std::shared_ptr<vector<string>> resultTypes_ = nullptr;
    std::shared_ptr<AnalyzeAudioSyncRequestServiceInspection> serviceInspection_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> stream_ = nullptr;
    std::shared_ptr<vector<string>> templateIds_ = nullptr;
    std::shared_ptr<AnalyzeAudioSyncRequestTranscription> transcription_ = nullptr;
    std::shared_ptr<vector<AnalyzeAudioSyncRequestVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
