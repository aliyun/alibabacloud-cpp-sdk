// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class GetTaskInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTaskInfoResponseBody() = default ;
    GetTaskInfoResponseBody(const GetTaskInfoResponseBody &) = default ;
    GetTaskInfoResponseBody(GetTaskInfoResponseBody &&) = default ;
    GetTaskInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskInfoResponseBody() = default ;
    GetTaskInfoResponseBody& operator=(const GetTaskInfoResponseBody &) = default ;
    GetTaskInfoResponseBody& operator=(GetTaskInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(OutputMp3Path, outputMp3Path_);
        DARABONBA_PTR_TO_JSON(OutputMp4Path, outputMp4Path_);
        DARABONBA_PTR_TO_JSON(OutputSpectrumPath, outputSpectrumPath_);
        DARABONBA_PTR_TO_JSON(OutputThumbnailPath, outputThumbnailPath_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskKey, taskKey_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(OutputMp3Path, outputMp3Path_);
        DARABONBA_PTR_FROM_JSON(OutputMp4Path, outputMp4Path_);
        DARABONBA_PTR_FROM_JSON(OutputSpectrumPath, outputSpectrumPath_);
        DARABONBA_PTR_FROM_JSON(OutputThumbnailPath, outputThumbnailPath_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskKey, taskKey_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
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
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoChapters_ == nullptr
        && this->contentExtraction_ == nullptr && this->customPrompt_ == nullptr && this->identityRecognition_ == nullptr && this->meetingAssistance_ == nullptr && this->pptExtraction_ == nullptr
        && this->serviceInspection_ == nullptr && this->summarization_ == nullptr && this->textPolish_ == nullptr && this->transcription_ == nullptr && this->translation_ == nullptr; };
        // autoChapters Field Functions 
        bool hasAutoChapters() const { return this->autoChapters_ != nullptr;};
        void deleteAutoChapters() { this->autoChapters_ = nullptr;};
        inline string getAutoChapters() const { DARABONBA_PTR_GET_DEFAULT(autoChapters_, "") };
        inline Result& setAutoChapters(string autoChapters) { DARABONBA_PTR_SET_VALUE(autoChapters_, autoChapters) };


        // contentExtraction Field Functions 
        bool hasContentExtraction() const { return this->contentExtraction_ != nullptr;};
        void deleteContentExtraction() { this->contentExtraction_ = nullptr;};
        inline string getContentExtraction() const { DARABONBA_PTR_GET_DEFAULT(contentExtraction_, "") };
        inline Result& setContentExtraction(string contentExtraction) { DARABONBA_PTR_SET_VALUE(contentExtraction_, contentExtraction) };


        // customPrompt Field Functions 
        bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
        void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
        inline string getCustomPrompt() const { DARABONBA_PTR_GET_DEFAULT(customPrompt_, "") };
        inline Result& setCustomPrompt(string customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };


        // identityRecognition Field Functions 
        bool hasIdentityRecognition() const { return this->identityRecognition_ != nullptr;};
        void deleteIdentityRecognition() { this->identityRecognition_ = nullptr;};
        inline string getIdentityRecognition() const { DARABONBA_PTR_GET_DEFAULT(identityRecognition_, "") };
        inline Result& setIdentityRecognition(string identityRecognition) { DARABONBA_PTR_SET_VALUE(identityRecognition_, identityRecognition) };


        // meetingAssistance Field Functions 
        bool hasMeetingAssistance() const { return this->meetingAssistance_ != nullptr;};
        void deleteMeetingAssistance() { this->meetingAssistance_ = nullptr;};
        inline string getMeetingAssistance() const { DARABONBA_PTR_GET_DEFAULT(meetingAssistance_, "") };
        inline Result& setMeetingAssistance(string meetingAssistance) { DARABONBA_PTR_SET_VALUE(meetingAssistance_, meetingAssistance) };


        // pptExtraction Field Functions 
        bool hasPptExtraction() const { return this->pptExtraction_ != nullptr;};
        void deletePptExtraction() { this->pptExtraction_ = nullptr;};
        inline string getPptExtraction() const { DARABONBA_PTR_GET_DEFAULT(pptExtraction_, "") };
        inline Result& setPptExtraction(string pptExtraction) { DARABONBA_PTR_SET_VALUE(pptExtraction_, pptExtraction) };


        // serviceInspection Field Functions 
        bool hasServiceInspection() const { return this->serviceInspection_ != nullptr;};
        void deleteServiceInspection() { this->serviceInspection_ = nullptr;};
        inline string getServiceInspection() const { DARABONBA_PTR_GET_DEFAULT(serviceInspection_, "") };
        inline Result& setServiceInspection(string serviceInspection) { DARABONBA_PTR_SET_VALUE(serviceInspection_, serviceInspection) };


        // summarization Field Functions 
        bool hasSummarization() const { return this->summarization_ != nullptr;};
        void deleteSummarization() { this->summarization_ = nullptr;};
        inline string getSummarization() const { DARABONBA_PTR_GET_DEFAULT(summarization_, "") };
        inline Result& setSummarization(string summarization) { DARABONBA_PTR_SET_VALUE(summarization_, summarization) };


        // textPolish Field Functions 
        bool hasTextPolish() const { return this->textPolish_ != nullptr;};
        void deleteTextPolish() { this->textPolish_ = nullptr;};
        inline string getTextPolish() const { DARABONBA_PTR_GET_DEFAULT(textPolish_, "") };
        inline Result& setTextPolish(string textPolish) { DARABONBA_PTR_SET_VALUE(textPolish_, textPolish) };


        // transcription Field Functions 
        bool hasTranscription() const { return this->transcription_ != nullptr;};
        void deleteTranscription() { this->transcription_ = nullptr;};
        inline string getTranscription() const { DARABONBA_PTR_GET_DEFAULT(transcription_, "") };
        inline Result& setTranscription(string transcription) { DARABONBA_PTR_SET_VALUE(transcription_, transcription) };


        // translation Field Functions 
        bool hasTranslation() const { return this->translation_ != nullptr;};
        void deleteTranslation() { this->translation_ = nullptr;};
        inline string getTranslation() const { DARABONBA_PTR_GET_DEFAULT(translation_, "") };
        inline Result& setTranslation(string translation) { DARABONBA_PTR_SET_VALUE(translation_, translation) };


      protected:
        shared_ptr<string> autoChapters_ {};
        shared_ptr<string> contentExtraction_ {};
        shared_ptr<string> customPrompt_ {};
        shared_ptr<string> identityRecognition_ {};
        shared_ptr<string> meetingAssistance_ {};
        shared_ptr<string> pptExtraction_ {};
        shared_ptr<string> serviceInspection_ {};
        shared_ptr<string> summarization_ {};
        shared_ptr<string> textPolish_ {};
        shared_ptr<string> transcription_ {};
        shared_ptr<string> translation_ {};
      };

      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->outputMp3Path_ == nullptr && this->outputMp4Path_ == nullptr && this->outputSpectrumPath_ == nullptr && this->outputThumbnailPath_ == nullptr
        && this->result_ == nullptr && this->taskId_ == nullptr && this->taskKey_ == nullptr && this->taskStatus_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // outputMp3Path Field Functions 
      bool hasOutputMp3Path() const { return this->outputMp3Path_ != nullptr;};
      void deleteOutputMp3Path() { this->outputMp3Path_ = nullptr;};
      inline string getOutputMp3Path() const { DARABONBA_PTR_GET_DEFAULT(outputMp3Path_, "") };
      inline Data& setOutputMp3Path(string outputMp3Path) { DARABONBA_PTR_SET_VALUE(outputMp3Path_, outputMp3Path) };


      // outputMp4Path Field Functions 
      bool hasOutputMp4Path() const { return this->outputMp4Path_ != nullptr;};
      void deleteOutputMp4Path() { this->outputMp4Path_ = nullptr;};
      inline string getOutputMp4Path() const { DARABONBA_PTR_GET_DEFAULT(outputMp4Path_, "") };
      inline Data& setOutputMp4Path(string outputMp4Path) { DARABONBA_PTR_SET_VALUE(outputMp4Path_, outputMp4Path) };


      // outputSpectrumPath Field Functions 
      bool hasOutputSpectrumPath() const { return this->outputSpectrumPath_ != nullptr;};
      void deleteOutputSpectrumPath() { this->outputSpectrumPath_ = nullptr;};
      inline string getOutputSpectrumPath() const { DARABONBA_PTR_GET_DEFAULT(outputSpectrumPath_, "") };
      inline Data& setOutputSpectrumPath(string outputSpectrumPath) { DARABONBA_PTR_SET_VALUE(outputSpectrumPath_, outputSpectrumPath) };


      // outputThumbnailPath Field Functions 
      bool hasOutputThumbnailPath() const { return this->outputThumbnailPath_ != nullptr;};
      void deleteOutputThumbnailPath() { this->outputThumbnailPath_ = nullptr;};
      inline string getOutputThumbnailPath() const { DARABONBA_PTR_GET_DEFAULT(outputThumbnailPath_, "") };
      inline Data& setOutputThumbnailPath(string outputThumbnailPath) { DARABONBA_PTR_SET_VALUE(outputThumbnailPath_, outputThumbnailPath) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const Data::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, Data::Result) };
      inline Data::Result getResult() { DARABONBA_PTR_GET(result_, Data::Result) };
      inline Data& setResult(const Data::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(Data::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskKey Field Functions 
      bool hasTaskKey() const { return this->taskKey_ != nullptr;};
      void deleteTaskKey() { this->taskKey_ = nullptr;};
      inline string getTaskKey() const { DARABONBA_PTR_GET_DEFAULT(taskKey_, "") };
      inline Data& setTaskKey(string taskKey) { DARABONBA_PTR_SET_VALUE(taskKey_, taskKey) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline Data& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> outputMp3Path_ {};
      shared_ptr<string> outputMp4Path_ {};
      shared_ptr<string> outputSpectrumPath_ {};
      shared_ptr<string> outputThumbnailPath_ {};
      shared_ptr<Data::Result> result_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskKey_ {};
      shared_ptr<string> taskStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTaskInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTaskInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTaskInfoResponseBody::Data) };
    inline GetTaskInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTaskInfoResponseBody::Data) };
    inline GetTaskInfoResponseBody& setData(const GetTaskInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTaskInfoResponseBody& setData(GetTaskInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTaskInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetTaskInfoResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
