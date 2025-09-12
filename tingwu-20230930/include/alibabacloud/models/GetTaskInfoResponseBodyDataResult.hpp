// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKINFORESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_GETTASKINFORESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class GetTaskInfoResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskInfoResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(AutoChapters, autoChapters_);
      DARABONBA_PTR_TO_JSON(ContentExtraction, contentExtraction_);
      DARABONBA_PTR_TO_JSON(CustomPrompt, customPrompt_);
      DARABONBA_PTR_TO_JSON(IdentityRecognition, identityRecognition_);
      DARABONBA_PTR_TO_JSON(MeetingAssistance, meetingAssistance_);
      DARABONBA_PTR_TO_JSON(PptExtraction, pptExtraction_);
      DARABONBA_PTR_TO_JSON(ServiceInspection, serviceInspection_);
      DARABONBA_PTR_TO_JSON(Summarization, summarization_);
      DARABONBA_PTR_TO_JSON(TextPolish, textPolish_);
      DARABONBA_PTR_TO_JSON(Transcription, transcription_);
      DARABONBA_PTR_TO_JSON(Translation, translation_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskInfoResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoChapters, autoChapters_);
      DARABONBA_PTR_FROM_JSON(ContentExtraction, contentExtraction_);
      DARABONBA_PTR_FROM_JSON(CustomPrompt, customPrompt_);
      DARABONBA_PTR_FROM_JSON(IdentityRecognition, identityRecognition_);
      DARABONBA_PTR_FROM_JSON(MeetingAssistance, meetingAssistance_);
      DARABONBA_PTR_FROM_JSON(PptExtraction, pptExtraction_);
      DARABONBA_PTR_FROM_JSON(ServiceInspection, serviceInspection_);
      DARABONBA_PTR_FROM_JSON(Summarization, summarization_);
      DARABONBA_PTR_FROM_JSON(TextPolish, textPolish_);
      DARABONBA_PTR_FROM_JSON(Transcription, transcription_);
      DARABONBA_PTR_FROM_JSON(Translation, translation_);
    };
    GetTaskInfoResponseBodyDataResult() = default ;
    GetTaskInfoResponseBodyDataResult(const GetTaskInfoResponseBodyDataResult &) = default ;
    GetTaskInfoResponseBodyDataResult(GetTaskInfoResponseBodyDataResult &&) = default ;
    GetTaskInfoResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskInfoResponseBodyDataResult() = default ;
    GetTaskInfoResponseBodyDataResult& operator=(const GetTaskInfoResponseBodyDataResult &) = default ;
    GetTaskInfoResponseBodyDataResult& operator=(GetTaskInfoResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoChapters_ != nullptr
        && this->contentExtraction_ != nullptr && this->customPrompt_ != nullptr && this->identityRecognition_ != nullptr && this->meetingAssistance_ != nullptr && this->pptExtraction_ != nullptr
        && this->serviceInspection_ != nullptr && this->summarization_ != nullptr && this->textPolish_ != nullptr && this->transcription_ != nullptr && this->translation_ != nullptr; };
    // autoChapters Field Functions 
    bool hasAutoChapters() const { return this->autoChapters_ != nullptr;};
    void deleteAutoChapters() { this->autoChapters_ = nullptr;};
    inline string autoChapters() const { DARABONBA_PTR_GET_DEFAULT(autoChapters_, "") };
    inline GetTaskInfoResponseBodyDataResult& setAutoChapters(string autoChapters) { DARABONBA_PTR_SET_VALUE(autoChapters_, autoChapters) };


    // contentExtraction Field Functions 
    bool hasContentExtraction() const { return this->contentExtraction_ != nullptr;};
    void deleteContentExtraction() { this->contentExtraction_ = nullptr;};
    inline string contentExtraction() const { DARABONBA_PTR_GET_DEFAULT(contentExtraction_, "") };
    inline GetTaskInfoResponseBodyDataResult& setContentExtraction(string contentExtraction) { DARABONBA_PTR_SET_VALUE(contentExtraction_, contentExtraction) };


    // customPrompt Field Functions 
    bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
    void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
    inline string customPrompt() const { DARABONBA_PTR_GET_DEFAULT(customPrompt_, "") };
    inline GetTaskInfoResponseBodyDataResult& setCustomPrompt(string customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };


    // identityRecognition Field Functions 
    bool hasIdentityRecognition() const { return this->identityRecognition_ != nullptr;};
    void deleteIdentityRecognition() { this->identityRecognition_ = nullptr;};
    inline string identityRecognition() const { DARABONBA_PTR_GET_DEFAULT(identityRecognition_, "") };
    inline GetTaskInfoResponseBodyDataResult& setIdentityRecognition(string identityRecognition) { DARABONBA_PTR_SET_VALUE(identityRecognition_, identityRecognition) };


    // meetingAssistance Field Functions 
    bool hasMeetingAssistance() const { return this->meetingAssistance_ != nullptr;};
    void deleteMeetingAssistance() { this->meetingAssistance_ = nullptr;};
    inline string meetingAssistance() const { DARABONBA_PTR_GET_DEFAULT(meetingAssistance_, "") };
    inline GetTaskInfoResponseBodyDataResult& setMeetingAssistance(string meetingAssistance) { DARABONBA_PTR_SET_VALUE(meetingAssistance_, meetingAssistance) };


    // pptExtraction Field Functions 
    bool hasPptExtraction() const { return this->pptExtraction_ != nullptr;};
    void deletePptExtraction() { this->pptExtraction_ = nullptr;};
    inline string pptExtraction() const { DARABONBA_PTR_GET_DEFAULT(pptExtraction_, "") };
    inline GetTaskInfoResponseBodyDataResult& setPptExtraction(string pptExtraction) { DARABONBA_PTR_SET_VALUE(pptExtraction_, pptExtraction) };


    // serviceInspection Field Functions 
    bool hasServiceInspection() const { return this->serviceInspection_ != nullptr;};
    void deleteServiceInspection() { this->serviceInspection_ = nullptr;};
    inline string serviceInspection() const { DARABONBA_PTR_GET_DEFAULT(serviceInspection_, "") };
    inline GetTaskInfoResponseBodyDataResult& setServiceInspection(string serviceInspection) { DARABONBA_PTR_SET_VALUE(serviceInspection_, serviceInspection) };


    // summarization Field Functions 
    bool hasSummarization() const { return this->summarization_ != nullptr;};
    void deleteSummarization() { this->summarization_ = nullptr;};
    inline string summarization() const { DARABONBA_PTR_GET_DEFAULT(summarization_, "") };
    inline GetTaskInfoResponseBodyDataResult& setSummarization(string summarization) { DARABONBA_PTR_SET_VALUE(summarization_, summarization) };


    // textPolish Field Functions 
    bool hasTextPolish() const { return this->textPolish_ != nullptr;};
    void deleteTextPolish() { this->textPolish_ = nullptr;};
    inline string textPolish() const { DARABONBA_PTR_GET_DEFAULT(textPolish_, "") };
    inline GetTaskInfoResponseBodyDataResult& setTextPolish(string textPolish) { DARABONBA_PTR_SET_VALUE(textPolish_, textPolish) };


    // transcription Field Functions 
    bool hasTranscription() const { return this->transcription_ != nullptr;};
    void deleteTranscription() { this->transcription_ = nullptr;};
    inline string transcription() const { DARABONBA_PTR_GET_DEFAULT(transcription_, "") };
    inline GetTaskInfoResponseBodyDataResult& setTranscription(string transcription) { DARABONBA_PTR_SET_VALUE(transcription_, transcription) };


    // translation Field Functions 
    bool hasTranslation() const { return this->translation_ != nullptr;};
    void deleteTranslation() { this->translation_ = nullptr;};
    inline string translation() const { DARABONBA_PTR_GET_DEFAULT(translation_, "") };
    inline GetTaskInfoResponseBodyDataResult& setTranslation(string translation) { DARABONBA_PTR_SET_VALUE(translation_, translation) };


  protected:
    std::shared_ptr<string> autoChapters_ = nullptr;
    std::shared_ptr<string> contentExtraction_ = nullptr;
    std::shared_ptr<string> customPrompt_ = nullptr;
    std::shared_ptr<string> identityRecognition_ = nullptr;
    std::shared_ptr<string> meetingAssistance_ = nullptr;
    std::shared_ptr<string> pptExtraction_ = nullptr;
    std::shared_ptr<string> serviceInspection_ = nullptr;
    std::shared_ptr<string> summarization_ = nullptr;
    std::shared_ptr<string> textPolish_ = nullptr;
    std::shared_ptr<string> transcription_ = nullptr;
    std::shared_ptr<string> translation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
