// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTaskRequestCategoryTags.hpp>
#include <alibabacloud/models/CreateTaskRequestDialogue.hpp>
#include <alibabacloud/models/CreateTaskRequestExamples.hpp>
#include <alibabacloud/models/CreateTaskRequestFields.hpp>
#include <alibabacloud/models/CreateTaskRequestServiceInspection.hpp>
#include <alibabacloud/models/CreateTaskRequestTranscription.hpp>
#include <alibabacloud/models/CreateTaskRequestVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class CreateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(callBackUrl, callBackUrl_);
      DARABONBA_PTR_TO_JSON(categoryTags, categoryTags_);
      DARABONBA_PTR_TO_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_TO_JSON(dialogue, dialogue_);
      DARABONBA_PTR_TO_JSON(examples, examples_);
      DARABONBA_PTR_TO_JSON(fields, fields_);
      DARABONBA_PTR_TO_JSON(modelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(responseFormatType, responseFormatType_);
      DARABONBA_PTR_TO_JSON(resultTypes, resultTypes_);
      DARABONBA_PTR_TO_JSON(serviceInspection, serviceInspection_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
      DARABONBA_PTR_TO_JSON(templateIds, templateIds_);
      DARABONBA_PTR_TO_JSON(transcription, transcription_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(callBackUrl, callBackUrl_);
      DARABONBA_PTR_FROM_JSON(categoryTags, categoryTags_);
      DARABONBA_PTR_FROM_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_FROM_JSON(dialogue, dialogue_);
      DARABONBA_PTR_FROM_JSON(examples, examples_);
      DARABONBA_PTR_FROM_JSON(fields, fields_);
      DARABONBA_PTR_FROM_JSON(modelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(responseFormatType, responseFormatType_);
      DARABONBA_PTR_FROM_JSON(resultTypes, resultTypes_);
      DARABONBA_PTR_FROM_JSON(serviceInspection, serviceInspection_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
      DARABONBA_PTR_FROM_JSON(templateIds, templateIds_);
      DARABONBA_PTR_FROM_JSON(transcription, transcription_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    CreateTaskRequest() = default ;
    CreateTaskRequest(const CreateTaskRequest &) = default ;
    CreateTaskRequest(CreateTaskRequest &&) = default ;
    CreateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequest() = default ;
    CreateTaskRequest& operator=(const CreateTaskRequest &) = default ;
    CreateTaskRequest& operator=(CreateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callBackUrl_ != nullptr
        && this->categoryTags_ != nullptr && this->customPrompt_ != nullptr && this->dialogue_ != nullptr && this->examples_ != nullptr && this->fields_ != nullptr
        && this->modelCode_ != nullptr && this->responseFormatType_ != nullptr && this->resultTypes_ != nullptr && this->serviceInspection_ != nullptr && this->taskType_ != nullptr
        && this->templateIds_ != nullptr && this->transcription_ != nullptr && this->variables_ != nullptr; };
    // callBackUrl Field Functions 
    bool hasCallBackUrl() const { return this->callBackUrl_ != nullptr;};
    void deleteCallBackUrl() { this->callBackUrl_ = nullptr;};
    inline string callBackUrl() const { DARABONBA_PTR_GET_DEFAULT(callBackUrl_, "") };
    inline CreateTaskRequest& setCallBackUrl(string callBackUrl) { DARABONBA_PTR_SET_VALUE(callBackUrl_, callBackUrl) };


    // categoryTags Field Functions 
    bool hasCategoryTags() const { return this->categoryTags_ != nullptr;};
    void deleteCategoryTags() { this->categoryTags_ = nullptr;};
    inline const vector<CreateTaskRequestCategoryTags> & categoryTags() const { DARABONBA_PTR_GET_CONST(categoryTags_, vector<CreateTaskRequestCategoryTags>) };
    inline vector<CreateTaskRequestCategoryTags> categoryTags() { DARABONBA_PTR_GET(categoryTags_, vector<CreateTaskRequestCategoryTags>) };
    inline CreateTaskRequest& setCategoryTags(const vector<CreateTaskRequestCategoryTags> & categoryTags) { DARABONBA_PTR_SET_VALUE(categoryTags_, categoryTags) };
    inline CreateTaskRequest& setCategoryTags(vector<CreateTaskRequestCategoryTags> && categoryTags) { DARABONBA_PTR_SET_RVALUE(categoryTags_, categoryTags) };


    // customPrompt Field Functions 
    bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
    void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
    inline string customPrompt() const { DARABONBA_PTR_GET_DEFAULT(customPrompt_, "") };
    inline CreateTaskRequest& setCustomPrompt(string customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };


    // dialogue Field Functions 
    bool hasDialogue() const { return this->dialogue_ != nullptr;};
    void deleteDialogue() { this->dialogue_ = nullptr;};
    inline const CreateTaskRequestDialogue & dialogue() const { DARABONBA_PTR_GET_CONST(dialogue_, CreateTaskRequestDialogue) };
    inline CreateTaskRequestDialogue dialogue() { DARABONBA_PTR_GET(dialogue_, CreateTaskRequestDialogue) };
    inline CreateTaskRequest& setDialogue(const CreateTaskRequestDialogue & dialogue) { DARABONBA_PTR_SET_VALUE(dialogue_, dialogue) };
    inline CreateTaskRequest& setDialogue(CreateTaskRequestDialogue && dialogue) { DARABONBA_PTR_SET_RVALUE(dialogue_, dialogue) };


    // examples Field Functions 
    bool hasExamples() const { return this->examples_ != nullptr;};
    void deleteExamples() { this->examples_ = nullptr;};
    inline const CreateTaskRequestExamples & examples() const { DARABONBA_PTR_GET_CONST(examples_, CreateTaskRequestExamples) };
    inline CreateTaskRequestExamples examples() { DARABONBA_PTR_GET(examples_, CreateTaskRequestExamples) };
    inline CreateTaskRequest& setExamples(const CreateTaskRequestExamples & examples) { DARABONBA_PTR_SET_VALUE(examples_, examples) };
    inline CreateTaskRequest& setExamples(CreateTaskRequestExamples && examples) { DARABONBA_PTR_SET_RVALUE(examples_, examples) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<CreateTaskRequestFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<CreateTaskRequestFields>) };
    inline vector<CreateTaskRequestFields> fields() { DARABONBA_PTR_GET(fields_, vector<CreateTaskRequestFields>) };
    inline CreateTaskRequest& setFields(const vector<CreateTaskRequestFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline CreateTaskRequest& setFields(vector<CreateTaskRequestFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string modelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline CreateTaskRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // responseFormatType Field Functions 
    bool hasResponseFormatType() const { return this->responseFormatType_ != nullptr;};
    void deleteResponseFormatType() { this->responseFormatType_ = nullptr;};
    inline string responseFormatType() const { DARABONBA_PTR_GET_DEFAULT(responseFormatType_, "") };
    inline CreateTaskRequest& setResponseFormatType(string responseFormatType) { DARABONBA_PTR_SET_VALUE(responseFormatType_, responseFormatType) };


    // resultTypes Field Functions 
    bool hasResultTypes() const { return this->resultTypes_ != nullptr;};
    void deleteResultTypes() { this->resultTypes_ = nullptr;};
    inline const vector<string> & resultTypes() const { DARABONBA_PTR_GET_CONST(resultTypes_, vector<string>) };
    inline vector<string> resultTypes() { DARABONBA_PTR_GET(resultTypes_, vector<string>) };
    inline CreateTaskRequest& setResultTypes(const vector<string> & resultTypes) { DARABONBA_PTR_SET_VALUE(resultTypes_, resultTypes) };
    inline CreateTaskRequest& setResultTypes(vector<string> && resultTypes) { DARABONBA_PTR_SET_RVALUE(resultTypes_, resultTypes) };


    // serviceInspection Field Functions 
    bool hasServiceInspection() const { return this->serviceInspection_ != nullptr;};
    void deleteServiceInspection() { this->serviceInspection_ = nullptr;};
    inline const CreateTaskRequestServiceInspection & serviceInspection() const { DARABONBA_PTR_GET_CONST(serviceInspection_, CreateTaskRequestServiceInspection) };
    inline CreateTaskRequestServiceInspection serviceInspection() { DARABONBA_PTR_GET(serviceInspection_, CreateTaskRequestServiceInspection) };
    inline CreateTaskRequest& setServiceInspection(const CreateTaskRequestServiceInspection & serviceInspection) { DARABONBA_PTR_SET_VALUE(serviceInspection_, serviceInspection) };
    inline CreateTaskRequest& setServiceInspection(CreateTaskRequestServiceInspection && serviceInspection) { DARABONBA_PTR_SET_RVALUE(serviceInspection_, serviceInspection) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // templateIds Field Functions 
    bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
    void deleteTemplateIds() { this->templateIds_ = nullptr;};
    inline const vector<string> & templateIds() const { DARABONBA_PTR_GET_CONST(templateIds_, vector<string>) };
    inline vector<string> templateIds() { DARABONBA_PTR_GET(templateIds_, vector<string>) };
    inline CreateTaskRequest& setTemplateIds(const vector<string> & templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };
    inline CreateTaskRequest& setTemplateIds(vector<string> && templateIds) { DARABONBA_PTR_SET_RVALUE(templateIds_, templateIds) };


    // transcription Field Functions 
    bool hasTranscription() const { return this->transcription_ != nullptr;};
    void deleteTranscription() { this->transcription_ = nullptr;};
    inline const CreateTaskRequestTranscription & transcription() const { DARABONBA_PTR_GET_CONST(transcription_, CreateTaskRequestTranscription) };
    inline CreateTaskRequestTranscription transcription() { DARABONBA_PTR_GET(transcription_, CreateTaskRequestTranscription) };
    inline CreateTaskRequest& setTranscription(const CreateTaskRequestTranscription & transcription) { DARABONBA_PTR_SET_VALUE(transcription_, transcription) };
    inline CreateTaskRequest& setTranscription(CreateTaskRequestTranscription && transcription) { DARABONBA_PTR_SET_RVALUE(transcription_, transcription) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<CreateTaskRequestVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<CreateTaskRequestVariables>) };
    inline vector<CreateTaskRequestVariables> variables() { DARABONBA_PTR_GET(variables_, vector<CreateTaskRequestVariables>) };
    inline CreateTaskRequest& setVariables(const vector<CreateTaskRequestVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline CreateTaskRequest& setVariables(vector<CreateTaskRequestVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<string> callBackUrl_ = nullptr;
    std::shared_ptr<vector<CreateTaskRequestCategoryTags>> categoryTags_ = nullptr;
    std::shared_ptr<string> customPrompt_ = nullptr;
    std::shared_ptr<CreateTaskRequestDialogue> dialogue_ = nullptr;
    std::shared_ptr<CreateTaskRequestExamples> examples_ = nullptr;
    std::shared_ptr<vector<CreateTaskRequestFields>> fields_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> modelCode_ = nullptr;
    std::shared_ptr<string> responseFormatType_ = nullptr;
    std::shared_ptr<vector<string>> resultTypes_ = nullptr;
    std::shared_ptr<CreateTaskRequestServiceInspection> serviceInspection_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<vector<string>> templateIds_ = nullptr;
    std::shared_ptr<CreateTaskRequestTranscription> transcription_ = nullptr;
    std::shared_ptr<vector<CreateTaskRequestVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
