// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTaskRequestParametersAutoChapters.hpp>
#include <alibabacloud/models/CreateTaskRequestParametersContentExtraction.hpp>
#include <alibabacloud/models/CreateTaskRequestParametersCustomPrompt.hpp>
#include <alibabacloud/models/CreateTaskRequestParametersExtraParams.hpp>
#include <alibabacloud/models/CreateTaskRequestParametersIdentityRecognition.hpp>
#include <alibabacloud/models/CreateTaskRequestParametersMeetingAssistance.hpp>
#include <alibabacloud/models/CreateTaskRequestParametersServiceInspection.hpp>
#include <alibabacloud/models/CreateTaskRequestParametersSummarization.hpp>
#include <alibabacloud/models/CreateTaskRequestParametersTranscoding.hpp>
#include <alibabacloud/models/CreateTaskRequestParametersTranscription.hpp>
#include <alibabacloud/models/CreateTaskRequestParametersTranslation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(AutoChapters, autoChapters_);
      DARABONBA_PTR_TO_JSON(AutoChaptersEnabled, autoChaptersEnabled_);
      DARABONBA_PTR_TO_JSON(ContentExtraction, contentExtraction_);
      DARABONBA_PTR_TO_JSON(ContentExtractionEnabled, contentExtractionEnabled_);
      DARABONBA_PTR_TO_JSON(CustomPrompt, customPrompt_);
      DARABONBA_PTR_TO_JSON(CustomPromptEnabled, customPromptEnabled_);
      DARABONBA_PTR_TO_JSON(ExtraParams, extraParams_);
      DARABONBA_PTR_TO_JSON(IdentityRecognition, identityRecognition_);
      DARABONBA_PTR_TO_JSON(IdentityRecognitionEnabled, identityRecognitionEnabled_);
      DARABONBA_PTR_TO_JSON(LlmOutputLanguage, llmOutputLanguage_);
      DARABONBA_PTR_TO_JSON(MeetingAssistance, meetingAssistance_);
      DARABONBA_PTR_TO_JSON(MeetingAssistanceEnabled, meetingAssistanceEnabled_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(PptExtractionEnabled, pptExtractionEnabled_);
      DARABONBA_PTR_TO_JSON(ServiceInspection, serviceInspection_);
      DARABONBA_PTR_TO_JSON(ServiceInspectionEnabled, serviceInspectionEnabled_);
      DARABONBA_PTR_TO_JSON(Summarization, summarization_);
      DARABONBA_PTR_TO_JSON(SummarizationEnabled, summarizationEnabled_);
      DARABONBA_PTR_TO_JSON(TextPolishEnabled, textPolishEnabled_);
      DARABONBA_PTR_TO_JSON(Transcoding, transcoding_);
      DARABONBA_PTR_TO_JSON(Transcription, transcription_);
      DARABONBA_PTR_TO_JSON(Translation, translation_);
      DARABONBA_PTR_TO_JSON(TranslationEnabled, translationEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoChapters, autoChapters_);
      DARABONBA_PTR_FROM_JSON(AutoChaptersEnabled, autoChaptersEnabled_);
      DARABONBA_PTR_FROM_JSON(ContentExtraction, contentExtraction_);
      DARABONBA_PTR_FROM_JSON(ContentExtractionEnabled, contentExtractionEnabled_);
      DARABONBA_PTR_FROM_JSON(CustomPrompt, customPrompt_);
      DARABONBA_PTR_FROM_JSON(CustomPromptEnabled, customPromptEnabled_);
      DARABONBA_PTR_FROM_JSON(ExtraParams, extraParams_);
      DARABONBA_PTR_FROM_JSON(IdentityRecognition, identityRecognition_);
      DARABONBA_PTR_FROM_JSON(IdentityRecognitionEnabled, identityRecognitionEnabled_);
      DARABONBA_PTR_FROM_JSON(LlmOutputLanguage, llmOutputLanguage_);
      DARABONBA_PTR_FROM_JSON(MeetingAssistance, meetingAssistance_);
      DARABONBA_PTR_FROM_JSON(MeetingAssistanceEnabled, meetingAssistanceEnabled_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(PptExtractionEnabled, pptExtractionEnabled_);
      DARABONBA_PTR_FROM_JSON(ServiceInspection, serviceInspection_);
      DARABONBA_PTR_FROM_JSON(ServiceInspectionEnabled, serviceInspectionEnabled_);
      DARABONBA_PTR_FROM_JSON(Summarization, summarization_);
      DARABONBA_PTR_FROM_JSON(SummarizationEnabled, summarizationEnabled_);
      DARABONBA_PTR_FROM_JSON(TextPolishEnabled, textPolishEnabled_);
      DARABONBA_PTR_FROM_JSON(Transcoding, transcoding_);
      DARABONBA_PTR_FROM_JSON(Transcription, transcription_);
      DARABONBA_PTR_FROM_JSON(Translation, translation_);
      DARABONBA_PTR_FROM_JSON(TranslationEnabled, translationEnabled_);
    };
    CreateTaskRequestParameters() = default ;
    CreateTaskRequestParameters(const CreateTaskRequestParameters &) = default ;
    CreateTaskRequestParameters(CreateTaskRequestParameters &&) = default ;
    CreateTaskRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestParameters() = default ;
    CreateTaskRequestParameters& operator=(const CreateTaskRequestParameters &) = default ;
    CreateTaskRequestParameters& operator=(CreateTaskRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoChapters_ != nullptr
        && this->autoChaptersEnabled_ != nullptr && this->contentExtraction_ != nullptr && this->contentExtractionEnabled_ != nullptr && this->customPrompt_ != nullptr && this->customPromptEnabled_ != nullptr
        && this->extraParams_ != nullptr && this->identityRecognition_ != nullptr && this->identityRecognitionEnabled_ != nullptr && this->llmOutputLanguage_ != nullptr && this->meetingAssistance_ != nullptr
        && this->meetingAssistanceEnabled_ != nullptr && this->model_ != nullptr && this->pptExtractionEnabled_ != nullptr && this->serviceInspection_ != nullptr && this->serviceInspectionEnabled_ != nullptr
        && this->summarization_ != nullptr && this->summarizationEnabled_ != nullptr && this->textPolishEnabled_ != nullptr && this->transcoding_ != nullptr && this->transcription_ != nullptr
        && this->translation_ != nullptr && this->translationEnabled_ != nullptr; };
    // autoChapters Field Functions 
    bool hasAutoChapters() const { return this->autoChapters_ != nullptr;};
    void deleteAutoChapters() { this->autoChapters_ = nullptr;};
    inline const Models::CreateTaskRequestParametersAutoChapters & autoChapters() const { DARABONBA_PTR_GET_CONST(autoChapters_, Models::CreateTaskRequestParametersAutoChapters) };
    inline Models::CreateTaskRequestParametersAutoChapters autoChapters() { DARABONBA_PTR_GET(autoChapters_, Models::CreateTaskRequestParametersAutoChapters) };
    inline CreateTaskRequestParameters& setAutoChapters(const Models::CreateTaskRequestParametersAutoChapters & autoChapters) { DARABONBA_PTR_SET_VALUE(autoChapters_, autoChapters) };
    inline CreateTaskRequestParameters& setAutoChapters(Models::CreateTaskRequestParametersAutoChapters && autoChapters) { DARABONBA_PTR_SET_RVALUE(autoChapters_, autoChapters) };


    // autoChaptersEnabled Field Functions 
    bool hasAutoChaptersEnabled() const { return this->autoChaptersEnabled_ != nullptr;};
    void deleteAutoChaptersEnabled() { this->autoChaptersEnabled_ = nullptr;};
    inline bool autoChaptersEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoChaptersEnabled_, false) };
    inline CreateTaskRequestParameters& setAutoChaptersEnabled(bool autoChaptersEnabled) { DARABONBA_PTR_SET_VALUE(autoChaptersEnabled_, autoChaptersEnabled) };


    // contentExtraction Field Functions 
    bool hasContentExtraction() const { return this->contentExtraction_ != nullptr;};
    void deleteContentExtraction() { this->contentExtraction_ = nullptr;};
    inline const Models::CreateTaskRequestParametersContentExtraction & contentExtraction() const { DARABONBA_PTR_GET_CONST(contentExtraction_, Models::CreateTaskRequestParametersContentExtraction) };
    inline Models::CreateTaskRequestParametersContentExtraction contentExtraction() { DARABONBA_PTR_GET(contentExtraction_, Models::CreateTaskRequestParametersContentExtraction) };
    inline CreateTaskRequestParameters& setContentExtraction(const Models::CreateTaskRequestParametersContentExtraction & contentExtraction) { DARABONBA_PTR_SET_VALUE(contentExtraction_, contentExtraction) };
    inline CreateTaskRequestParameters& setContentExtraction(Models::CreateTaskRequestParametersContentExtraction && contentExtraction) { DARABONBA_PTR_SET_RVALUE(contentExtraction_, contentExtraction) };


    // contentExtractionEnabled Field Functions 
    bool hasContentExtractionEnabled() const { return this->contentExtractionEnabled_ != nullptr;};
    void deleteContentExtractionEnabled() { this->contentExtractionEnabled_ = nullptr;};
    inline bool contentExtractionEnabled() const { DARABONBA_PTR_GET_DEFAULT(contentExtractionEnabled_, false) };
    inline CreateTaskRequestParameters& setContentExtractionEnabled(bool contentExtractionEnabled) { DARABONBA_PTR_SET_VALUE(contentExtractionEnabled_, contentExtractionEnabled) };


    // customPrompt Field Functions 
    bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
    void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
    inline const Models::CreateTaskRequestParametersCustomPrompt & customPrompt() const { DARABONBA_PTR_GET_CONST(customPrompt_, Models::CreateTaskRequestParametersCustomPrompt) };
    inline Models::CreateTaskRequestParametersCustomPrompt customPrompt() { DARABONBA_PTR_GET(customPrompt_, Models::CreateTaskRequestParametersCustomPrompt) };
    inline CreateTaskRequestParameters& setCustomPrompt(const Models::CreateTaskRequestParametersCustomPrompt & customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };
    inline CreateTaskRequestParameters& setCustomPrompt(Models::CreateTaskRequestParametersCustomPrompt && customPrompt) { DARABONBA_PTR_SET_RVALUE(customPrompt_, customPrompt) };


    // customPromptEnabled Field Functions 
    bool hasCustomPromptEnabled() const { return this->customPromptEnabled_ != nullptr;};
    void deleteCustomPromptEnabled() { this->customPromptEnabled_ = nullptr;};
    inline bool customPromptEnabled() const { DARABONBA_PTR_GET_DEFAULT(customPromptEnabled_, false) };
    inline CreateTaskRequestParameters& setCustomPromptEnabled(bool customPromptEnabled) { DARABONBA_PTR_SET_VALUE(customPromptEnabled_, customPromptEnabled) };


    // extraParams Field Functions 
    bool hasExtraParams() const { return this->extraParams_ != nullptr;};
    void deleteExtraParams() { this->extraParams_ = nullptr;};
    inline const Models::CreateTaskRequestParametersExtraParams & extraParams() const { DARABONBA_PTR_GET_CONST(extraParams_, Models::CreateTaskRequestParametersExtraParams) };
    inline Models::CreateTaskRequestParametersExtraParams extraParams() { DARABONBA_PTR_GET(extraParams_, Models::CreateTaskRequestParametersExtraParams) };
    inline CreateTaskRequestParameters& setExtraParams(const Models::CreateTaskRequestParametersExtraParams & extraParams) { DARABONBA_PTR_SET_VALUE(extraParams_, extraParams) };
    inline CreateTaskRequestParameters& setExtraParams(Models::CreateTaskRequestParametersExtraParams && extraParams) { DARABONBA_PTR_SET_RVALUE(extraParams_, extraParams) };


    // identityRecognition Field Functions 
    bool hasIdentityRecognition() const { return this->identityRecognition_ != nullptr;};
    void deleteIdentityRecognition() { this->identityRecognition_ = nullptr;};
    inline const Models::CreateTaskRequestParametersIdentityRecognition & identityRecognition() const { DARABONBA_PTR_GET_CONST(identityRecognition_, Models::CreateTaskRequestParametersIdentityRecognition) };
    inline Models::CreateTaskRequestParametersIdentityRecognition identityRecognition() { DARABONBA_PTR_GET(identityRecognition_, Models::CreateTaskRequestParametersIdentityRecognition) };
    inline CreateTaskRequestParameters& setIdentityRecognition(const Models::CreateTaskRequestParametersIdentityRecognition & identityRecognition) { DARABONBA_PTR_SET_VALUE(identityRecognition_, identityRecognition) };
    inline CreateTaskRequestParameters& setIdentityRecognition(Models::CreateTaskRequestParametersIdentityRecognition && identityRecognition) { DARABONBA_PTR_SET_RVALUE(identityRecognition_, identityRecognition) };


    // identityRecognitionEnabled Field Functions 
    bool hasIdentityRecognitionEnabled() const { return this->identityRecognitionEnabled_ != nullptr;};
    void deleteIdentityRecognitionEnabled() { this->identityRecognitionEnabled_ = nullptr;};
    inline bool identityRecognitionEnabled() const { DARABONBA_PTR_GET_DEFAULT(identityRecognitionEnabled_, false) };
    inline CreateTaskRequestParameters& setIdentityRecognitionEnabled(bool identityRecognitionEnabled) { DARABONBA_PTR_SET_VALUE(identityRecognitionEnabled_, identityRecognitionEnabled) };


    // llmOutputLanguage Field Functions 
    bool hasLlmOutputLanguage() const { return this->llmOutputLanguage_ != nullptr;};
    void deleteLlmOutputLanguage() { this->llmOutputLanguage_ = nullptr;};
    inline string llmOutputLanguage() const { DARABONBA_PTR_GET_DEFAULT(llmOutputLanguage_, "") };
    inline CreateTaskRequestParameters& setLlmOutputLanguage(string llmOutputLanguage) { DARABONBA_PTR_SET_VALUE(llmOutputLanguage_, llmOutputLanguage) };


    // meetingAssistance Field Functions 
    bool hasMeetingAssistance() const { return this->meetingAssistance_ != nullptr;};
    void deleteMeetingAssistance() { this->meetingAssistance_ = nullptr;};
    inline const Models::CreateTaskRequestParametersMeetingAssistance & meetingAssistance() const { DARABONBA_PTR_GET_CONST(meetingAssistance_, Models::CreateTaskRequestParametersMeetingAssistance) };
    inline Models::CreateTaskRequestParametersMeetingAssistance meetingAssistance() { DARABONBA_PTR_GET(meetingAssistance_, Models::CreateTaskRequestParametersMeetingAssistance) };
    inline CreateTaskRequestParameters& setMeetingAssistance(const Models::CreateTaskRequestParametersMeetingAssistance & meetingAssistance) { DARABONBA_PTR_SET_VALUE(meetingAssistance_, meetingAssistance) };
    inline CreateTaskRequestParameters& setMeetingAssistance(Models::CreateTaskRequestParametersMeetingAssistance && meetingAssistance) { DARABONBA_PTR_SET_RVALUE(meetingAssistance_, meetingAssistance) };


    // meetingAssistanceEnabled Field Functions 
    bool hasMeetingAssistanceEnabled() const { return this->meetingAssistanceEnabled_ != nullptr;};
    void deleteMeetingAssistanceEnabled() { this->meetingAssistanceEnabled_ = nullptr;};
    inline bool meetingAssistanceEnabled() const { DARABONBA_PTR_GET_DEFAULT(meetingAssistanceEnabled_, false) };
    inline CreateTaskRequestParameters& setMeetingAssistanceEnabled(bool meetingAssistanceEnabled) { DARABONBA_PTR_SET_VALUE(meetingAssistanceEnabled_, meetingAssistanceEnabled) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateTaskRequestParameters& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // pptExtractionEnabled Field Functions 
    bool hasPptExtractionEnabled() const { return this->pptExtractionEnabled_ != nullptr;};
    void deletePptExtractionEnabled() { this->pptExtractionEnabled_ = nullptr;};
    inline bool pptExtractionEnabled() const { DARABONBA_PTR_GET_DEFAULT(pptExtractionEnabled_, false) };
    inline CreateTaskRequestParameters& setPptExtractionEnabled(bool pptExtractionEnabled) { DARABONBA_PTR_SET_VALUE(pptExtractionEnabled_, pptExtractionEnabled) };


    // serviceInspection Field Functions 
    bool hasServiceInspection() const { return this->serviceInspection_ != nullptr;};
    void deleteServiceInspection() { this->serviceInspection_ = nullptr;};
    inline const Models::CreateTaskRequestParametersServiceInspection & serviceInspection() const { DARABONBA_PTR_GET_CONST(serviceInspection_, Models::CreateTaskRequestParametersServiceInspection) };
    inline Models::CreateTaskRequestParametersServiceInspection serviceInspection() { DARABONBA_PTR_GET(serviceInspection_, Models::CreateTaskRequestParametersServiceInspection) };
    inline CreateTaskRequestParameters& setServiceInspection(const Models::CreateTaskRequestParametersServiceInspection & serviceInspection) { DARABONBA_PTR_SET_VALUE(serviceInspection_, serviceInspection) };
    inline CreateTaskRequestParameters& setServiceInspection(Models::CreateTaskRequestParametersServiceInspection && serviceInspection) { DARABONBA_PTR_SET_RVALUE(serviceInspection_, serviceInspection) };


    // serviceInspectionEnabled Field Functions 
    bool hasServiceInspectionEnabled() const { return this->serviceInspectionEnabled_ != nullptr;};
    void deleteServiceInspectionEnabled() { this->serviceInspectionEnabled_ = nullptr;};
    inline bool serviceInspectionEnabled() const { DARABONBA_PTR_GET_DEFAULT(serviceInspectionEnabled_, false) };
    inline CreateTaskRequestParameters& setServiceInspectionEnabled(bool serviceInspectionEnabled) { DARABONBA_PTR_SET_VALUE(serviceInspectionEnabled_, serviceInspectionEnabled) };


    // summarization Field Functions 
    bool hasSummarization() const { return this->summarization_ != nullptr;};
    void deleteSummarization() { this->summarization_ = nullptr;};
    inline const Models::CreateTaskRequestParametersSummarization & summarization() const { DARABONBA_PTR_GET_CONST(summarization_, Models::CreateTaskRequestParametersSummarization) };
    inline Models::CreateTaskRequestParametersSummarization summarization() { DARABONBA_PTR_GET(summarization_, Models::CreateTaskRequestParametersSummarization) };
    inline CreateTaskRequestParameters& setSummarization(const Models::CreateTaskRequestParametersSummarization & summarization) { DARABONBA_PTR_SET_VALUE(summarization_, summarization) };
    inline CreateTaskRequestParameters& setSummarization(Models::CreateTaskRequestParametersSummarization && summarization) { DARABONBA_PTR_SET_RVALUE(summarization_, summarization) };


    // summarizationEnabled Field Functions 
    bool hasSummarizationEnabled() const { return this->summarizationEnabled_ != nullptr;};
    void deleteSummarizationEnabled() { this->summarizationEnabled_ = nullptr;};
    inline bool summarizationEnabled() const { DARABONBA_PTR_GET_DEFAULT(summarizationEnabled_, false) };
    inline CreateTaskRequestParameters& setSummarizationEnabled(bool summarizationEnabled) { DARABONBA_PTR_SET_VALUE(summarizationEnabled_, summarizationEnabled) };


    // textPolishEnabled Field Functions 
    bool hasTextPolishEnabled() const { return this->textPolishEnabled_ != nullptr;};
    void deleteTextPolishEnabled() { this->textPolishEnabled_ = nullptr;};
    inline bool textPolishEnabled() const { DARABONBA_PTR_GET_DEFAULT(textPolishEnabled_, false) };
    inline CreateTaskRequestParameters& setTextPolishEnabled(bool textPolishEnabled) { DARABONBA_PTR_SET_VALUE(textPolishEnabled_, textPolishEnabled) };


    // transcoding Field Functions 
    bool hasTranscoding() const { return this->transcoding_ != nullptr;};
    void deleteTranscoding() { this->transcoding_ = nullptr;};
    inline const Models::CreateTaskRequestParametersTranscoding & transcoding() const { DARABONBA_PTR_GET_CONST(transcoding_, Models::CreateTaskRequestParametersTranscoding) };
    inline Models::CreateTaskRequestParametersTranscoding transcoding() { DARABONBA_PTR_GET(transcoding_, Models::CreateTaskRequestParametersTranscoding) };
    inline CreateTaskRequestParameters& setTranscoding(const Models::CreateTaskRequestParametersTranscoding & transcoding) { DARABONBA_PTR_SET_VALUE(transcoding_, transcoding) };
    inline CreateTaskRequestParameters& setTranscoding(Models::CreateTaskRequestParametersTranscoding && transcoding) { DARABONBA_PTR_SET_RVALUE(transcoding_, transcoding) };


    // transcription Field Functions 
    bool hasTranscription() const { return this->transcription_ != nullptr;};
    void deleteTranscription() { this->transcription_ = nullptr;};
    inline const Models::CreateTaskRequestParametersTranscription & transcription() const { DARABONBA_PTR_GET_CONST(transcription_, Models::CreateTaskRequestParametersTranscription) };
    inline Models::CreateTaskRequestParametersTranscription transcription() { DARABONBA_PTR_GET(transcription_, Models::CreateTaskRequestParametersTranscription) };
    inline CreateTaskRequestParameters& setTranscription(const Models::CreateTaskRequestParametersTranscription & transcription) { DARABONBA_PTR_SET_VALUE(transcription_, transcription) };
    inline CreateTaskRequestParameters& setTranscription(Models::CreateTaskRequestParametersTranscription && transcription) { DARABONBA_PTR_SET_RVALUE(transcription_, transcription) };


    // translation Field Functions 
    bool hasTranslation() const { return this->translation_ != nullptr;};
    void deleteTranslation() { this->translation_ = nullptr;};
    inline const Models::CreateTaskRequestParametersTranslation & translation() const { DARABONBA_PTR_GET_CONST(translation_, Models::CreateTaskRequestParametersTranslation) };
    inline Models::CreateTaskRequestParametersTranslation translation() { DARABONBA_PTR_GET(translation_, Models::CreateTaskRequestParametersTranslation) };
    inline CreateTaskRequestParameters& setTranslation(const Models::CreateTaskRequestParametersTranslation & translation) { DARABONBA_PTR_SET_VALUE(translation_, translation) };
    inline CreateTaskRequestParameters& setTranslation(Models::CreateTaskRequestParametersTranslation && translation) { DARABONBA_PTR_SET_RVALUE(translation_, translation) };


    // translationEnabled Field Functions 
    bool hasTranslationEnabled() const { return this->translationEnabled_ != nullptr;};
    void deleteTranslationEnabled() { this->translationEnabled_ = nullptr;};
    inline bool translationEnabled() const { DARABONBA_PTR_GET_DEFAULT(translationEnabled_, false) };
    inline CreateTaskRequestParameters& setTranslationEnabled(bool translationEnabled) { DARABONBA_PTR_SET_VALUE(translationEnabled_, translationEnabled) };


  protected:
    std::shared_ptr<Models::CreateTaskRequestParametersAutoChapters> autoChapters_ = nullptr;
    std::shared_ptr<bool> autoChaptersEnabled_ = nullptr;
    std::shared_ptr<Models::CreateTaskRequestParametersContentExtraction> contentExtraction_ = nullptr;
    std::shared_ptr<bool> contentExtractionEnabled_ = nullptr;
    std::shared_ptr<Models::CreateTaskRequestParametersCustomPrompt> customPrompt_ = nullptr;
    std::shared_ptr<bool> customPromptEnabled_ = nullptr;
    std::shared_ptr<Models::CreateTaskRequestParametersExtraParams> extraParams_ = nullptr;
    std::shared_ptr<Models::CreateTaskRequestParametersIdentityRecognition> identityRecognition_ = nullptr;
    std::shared_ptr<bool> identityRecognitionEnabled_ = nullptr;
    std::shared_ptr<string> llmOutputLanguage_ = nullptr;
    std::shared_ptr<Models::CreateTaskRequestParametersMeetingAssistance> meetingAssistance_ = nullptr;
    std::shared_ptr<bool> meetingAssistanceEnabled_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<bool> pptExtractionEnabled_ = nullptr;
    std::shared_ptr<Models::CreateTaskRequestParametersServiceInspection> serviceInspection_ = nullptr;
    std::shared_ptr<bool> serviceInspectionEnabled_ = nullptr;
    std::shared_ptr<Models::CreateTaskRequestParametersSummarization> summarization_ = nullptr;
    std::shared_ptr<bool> summarizationEnabled_ = nullptr;
    std::shared_ptr<bool> textPolishEnabled_ = nullptr;
    std::shared_ptr<Models::CreateTaskRequestParametersTranscoding> transcoding_ = nullptr;
    std::shared_ptr<Models::CreateTaskRequestParametersTranscription> transcription_ = nullptr;
    std::shared_ptr<Models::CreateTaskRequestParametersTranslation> translation_ = nullptr;
    std::shared_ptr<bool> translationEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
