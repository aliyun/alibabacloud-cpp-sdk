// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AnalyzeConversationRequestCategoryTags.hpp>
#include <alibabacloud/models/AnalyzeConversationRequestDialogue.hpp>
#include <alibabacloud/models/AnalyzeConversationRequestExamples.hpp>
#include <alibabacloud/models/AnalyzeConversationRequestFields.hpp>
#include <alibabacloud/models/AnalyzeConversationRequestServiceInspection.hpp>
#include <alibabacloud/models/AnalyzeConversationRequestUserProfiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class AnalyzeConversationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeConversationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(categoryTags, categoryTags_);
      DARABONBA_PTR_TO_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_TO_JSON(dialogue, dialogue_);
      DARABONBA_PTR_TO_JSON(examples, examples_);
      DARABONBA_PTR_TO_JSON(fields, fields_);
      DARABONBA_PTR_TO_JSON(modelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(responseFormatType, responseFormatType_);
      DARABONBA_PTR_TO_JSON(resultTypes, resultTypes_);
      DARABONBA_PTR_TO_JSON(sceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(serviceInspection, serviceInspection_);
      DARABONBA_PTR_TO_JSON(sourceCallerUid, sourceCallerUid_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(timeConstraintList, timeConstraintList_);
      DARABONBA_PTR_TO_JSON(userProfiles, userProfiles_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeConversationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(categoryTags, categoryTags_);
      DARABONBA_PTR_FROM_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_FROM_JSON(dialogue, dialogue_);
      DARABONBA_PTR_FROM_JSON(examples, examples_);
      DARABONBA_PTR_FROM_JSON(fields, fields_);
      DARABONBA_PTR_FROM_JSON(modelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(responseFormatType, responseFormatType_);
      DARABONBA_PTR_FROM_JSON(resultTypes, resultTypes_);
      DARABONBA_PTR_FROM_JSON(sceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(serviceInspection, serviceInspection_);
      DARABONBA_PTR_FROM_JSON(sourceCallerUid, sourceCallerUid_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(timeConstraintList, timeConstraintList_);
      DARABONBA_PTR_FROM_JSON(userProfiles, userProfiles_);
    };
    AnalyzeConversationRequest() = default ;
    AnalyzeConversationRequest(const AnalyzeConversationRequest &) = default ;
    AnalyzeConversationRequest(AnalyzeConversationRequest &&) = default ;
    AnalyzeConversationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeConversationRequest() = default ;
    AnalyzeConversationRequest& operator=(const AnalyzeConversationRequest &) = default ;
    AnalyzeConversationRequest& operator=(AnalyzeConversationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryTags_ != nullptr
        && this->customPrompt_ != nullptr && this->dialogue_ != nullptr && this->examples_ != nullptr && this->fields_ != nullptr && this->modelCode_ != nullptr
        && this->responseFormatType_ != nullptr && this->resultTypes_ != nullptr && this->sceneName_ != nullptr && this->serviceInspection_ != nullptr && this->sourceCallerUid_ != nullptr
        && this->stream_ != nullptr && this->timeConstraintList_ != nullptr && this->userProfiles_ != nullptr; };
    // categoryTags Field Functions 
    bool hasCategoryTags() const { return this->categoryTags_ != nullptr;};
    void deleteCategoryTags() { this->categoryTags_ = nullptr;};
    inline const vector<AnalyzeConversationRequestCategoryTags> & categoryTags() const { DARABONBA_PTR_GET_CONST(categoryTags_, vector<AnalyzeConversationRequestCategoryTags>) };
    inline vector<AnalyzeConversationRequestCategoryTags> categoryTags() { DARABONBA_PTR_GET(categoryTags_, vector<AnalyzeConversationRequestCategoryTags>) };
    inline AnalyzeConversationRequest& setCategoryTags(const vector<AnalyzeConversationRequestCategoryTags> & categoryTags) { DARABONBA_PTR_SET_VALUE(categoryTags_, categoryTags) };
    inline AnalyzeConversationRequest& setCategoryTags(vector<AnalyzeConversationRequestCategoryTags> && categoryTags) { DARABONBA_PTR_SET_RVALUE(categoryTags_, categoryTags) };


    // customPrompt Field Functions 
    bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
    void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
    inline string customPrompt() const { DARABONBA_PTR_GET_DEFAULT(customPrompt_, "") };
    inline AnalyzeConversationRequest& setCustomPrompt(string customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };


    // dialogue Field Functions 
    bool hasDialogue() const { return this->dialogue_ != nullptr;};
    void deleteDialogue() { this->dialogue_ = nullptr;};
    inline const AnalyzeConversationRequestDialogue & dialogue() const { DARABONBA_PTR_GET_CONST(dialogue_, AnalyzeConversationRequestDialogue) };
    inline AnalyzeConversationRequestDialogue dialogue() { DARABONBA_PTR_GET(dialogue_, AnalyzeConversationRequestDialogue) };
    inline AnalyzeConversationRequest& setDialogue(const AnalyzeConversationRequestDialogue & dialogue) { DARABONBA_PTR_SET_VALUE(dialogue_, dialogue) };
    inline AnalyzeConversationRequest& setDialogue(AnalyzeConversationRequestDialogue && dialogue) { DARABONBA_PTR_SET_RVALUE(dialogue_, dialogue) };


    // examples Field Functions 
    bool hasExamples() const { return this->examples_ != nullptr;};
    void deleteExamples() { this->examples_ = nullptr;};
    inline const vector<AnalyzeConversationRequestExamples> & examples() const { DARABONBA_PTR_GET_CONST(examples_, vector<AnalyzeConversationRequestExamples>) };
    inline vector<AnalyzeConversationRequestExamples> examples() { DARABONBA_PTR_GET(examples_, vector<AnalyzeConversationRequestExamples>) };
    inline AnalyzeConversationRequest& setExamples(const vector<AnalyzeConversationRequestExamples> & examples) { DARABONBA_PTR_SET_VALUE(examples_, examples) };
    inline AnalyzeConversationRequest& setExamples(vector<AnalyzeConversationRequestExamples> && examples) { DARABONBA_PTR_SET_RVALUE(examples_, examples) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<AnalyzeConversationRequestFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<AnalyzeConversationRequestFields>) };
    inline vector<AnalyzeConversationRequestFields> fields() { DARABONBA_PTR_GET(fields_, vector<AnalyzeConversationRequestFields>) };
    inline AnalyzeConversationRequest& setFields(const vector<AnalyzeConversationRequestFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline AnalyzeConversationRequest& setFields(vector<AnalyzeConversationRequestFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string modelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline AnalyzeConversationRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // responseFormatType Field Functions 
    bool hasResponseFormatType() const { return this->responseFormatType_ != nullptr;};
    void deleteResponseFormatType() { this->responseFormatType_ = nullptr;};
    inline string responseFormatType() const { DARABONBA_PTR_GET_DEFAULT(responseFormatType_, "") };
    inline AnalyzeConversationRequest& setResponseFormatType(string responseFormatType) { DARABONBA_PTR_SET_VALUE(responseFormatType_, responseFormatType) };


    // resultTypes Field Functions 
    bool hasResultTypes() const { return this->resultTypes_ != nullptr;};
    void deleteResultTypes() { this->resultTypes_ = nullptr;};
    inline const vector<string> & resultTypes() const { DARABONBA_PTR_GET_CONST(resultTypes_, vector<string>) };
    inline vector<string> resultTypes() { DARABONBA_PTR_GET(resultTypes_, vector<string>) };
    inline AnalyzeConversationRequest& setResultTypes(const vector<string> & resultTypes) { DARABONBA_PTR_SET_VALUE(resultTypes_, resultTypes) };
    inline AnalyzeConversationRequest& setResultTypes(vector<string> && resultTypes) { DARABONBA_PTR_SET_RVALUE(resultTypes_, resultTypes) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline AnalyzeConversationRequest& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // serviceInspection Field Functions 
    bool hasServiceInspection() const { return this->serviceInspection_ != nullptr;};
    void deleteServiceInspection() { this->serviceInspection_ = nullptr;};
    inline const AnalyzeConversationRequestServiceInspection & serviceInspection() const { DARABONBA_PTR_GET_CONST(serviceInspection_, AnalyzeConversationRequestServiceInspection) };
    inline AnalyzeConversationRequestServiceInspection serviceInspection() { DARABONBA_PTR_GET(serviceInspection_, AnalyzeConversationRequestServiceInspection) };
    inline AnalyzeConversationRequest& setServiceInspection(const AnalyzeConversationRequestServiceInspection & serviceInspection) { DARABONBA_PTR_SET_VALUE(serviceInspection_, serviceInspection) };
    inline AnalyzeConversationRequest& setServiceInspection(AnalyzeConversationRequestServiceInspection && serviceInspection) { DARABONBA_PTR_SET_RVALUE(serviceInspection_, serviceInspection) };


    // sourceCallerUid Field Functions 
    bool hasSourceCallerUid() const { return this->sourceCallerUid_ != nullptr;};
    void deleteSourceCallerUid() { this->sourceCallerUid_ = nullptr;};
    inline string sourceCallerUid() const { DARABONBA_PTR_GET_DEFAULT(sourceCallerUid_, "") };
    inline AnalyzeConversationRequest& setSourceCallerUid(string sourceCallerUid) { DARABONBA_PTR_SET_VALUE(sourceCallerUid_, sourceCallerUid) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline AnalyzeConversationRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // timeConstraintList Field Functions 
    bool hasTimeConstraintList() const { return this->timeConstraintList_ != nullptr;};
    void deleteTimeConstraintList() { this->timeConstraintList_ = nullptr;};
    inline const vector<string> & timeConstraintList() const { DARABONBA_PTR_GET_CONST(timeConstraintList_, vector<string>) };
    inline vector<string> timeConstraintList() { DARABONBA_PTR_GET(timeConstraintList_, vector<string>) };
    inline AnalyzeConversationRequest& setTimeConstraintList(const vector<string> & timeConstraintList) { DARABONBA_PTR_SET_VALUE(timeConstraintList_, timeConstraintList) };
    inline AnalyzeConversationRequest& setTimeConstraintList(vector<string> && timeConstraintList) { DARABONBA_PTR_SET_RVALUE(timeConstraintList_, timeConstraintList) };


    // userProfiles Field Functions 
    bool hasUserProfiles() const { return this->userProfiles_ != nullptr;};
    void deleteUserProfiles() { this->userProfiles_ = nullptr;};
    inline const vector<AnalyzeConversationRequestUserProfiles> & userProfiles() const { DARABONBA_PTR_GET_CONST(userProfiles_, vector<AnalyzeConversationRequestUserProfiles>) };
    inline vector<AnalyzeConversationRequestUserProfiles> userProfiles() { DARABONBA_PTR_GET(userProfiles_, vector<AnalyzeConversationRequestUserProfiles>) };
    inline AnalyzeConversationRequest& setUserProfiles(const vector<AnalyzeConversationRequestUserProfiles> & userProfiles) { DARABONBA_PTR_SET_VALUE(userProfiles_, userProfiles) };
    inline AnalyzeConversationRequest& setUserProfiles(vector<AnalyzeConversationRequestUserProfiles> && userProfiles) { DARABONBA_PTR_SET_RVALUE(userProfiles_, userProfiles) };


  protected:
    std::shared_ptr<vector<AnalyzeConversationRequestCategoryTags>> categoryTags_ = nullptr;
    std::shared_ptr<string> customPrompt_ = nullptr;
    std::shared_ptr<AnalyzeConversationRequestDialogue> dialogue_ = nullptr;
    std::shared_ptr<vector<AnalyzeConversationRequestExamples>> examples_ = nullptr;
    std::shared_ptr<vector<AnalyzeConversationRequestFields>> fields_ = nullptr;
    std::shared_ptr<string> modelCode_ = nullptr;
    std::shared_ptr<string> responseFormatType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> resultTypes_ = nullptr;
    std::shared_ptr<string> sceneName_ = nullptr;
    std::shared_ptr<AnalyzeConversationRequestServiceInspection> serviceInspection_ = nullptr;
    std::shared_ptr<string> sourceCallerUid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> stream_ = nullptr;
    std::shared_ptr<vector<string>> timeConstraintList_ = nullptr;
    std::shared_ptr<vector<AnalyzeConversationRequestUserProfiles>> userProfiles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
