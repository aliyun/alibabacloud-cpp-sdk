// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADTRANSLATIONFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADTRANSLATIONFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RealTranslationAgent20260622
{
namespace Models
{
  class UploadTranslationFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadTranslationFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UploadTranslationFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UploadTranslationFileResponseBody() = default ;
    UploadTranslationFileResponseBody(const UploadTranslationFileResponseBody &) = default ;
    UploadTranslationFileResponseBody(UploadTranslationFileResponseBody &&) = default ;
    UploadTranslationFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadTranslationFileResponseBody() = default ;
    UploadTranslationFileResponseBody& operator=(const UploadTranslationFileResponseBody &) = default ;
    UploadTranslationFileResponseBody& operator=(UploadTranslationFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreditBreakdown, creditBreakdown_);
        DARABONBA_PTR_TO_JSON(CreditsAvailable, creditsAvailable_);
        DARABONBA_PTR_TO_JSON(DetectedLang, detectedLang_);
        DARABONBA_PTR_TO_JSON(EstimatedCostCredits, estimatedCostCredits_);
        DARABONBA_PTR_TO_JSON(EstimatedTime, estimatedTime_);
        DARABONBA_PTR_TO_JSON(Fonts, fonts_);
        DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
        DARABONBA_PTR_TO_JSON(SensitiveDetected, sensitiveDetected_);
        DARABONBA_PTR_TO_JSON(SensitiveTags, sensitiveTags_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(WordCount, wordCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreditBreakdown, creditBreakdown_);
        DARABONBA_PTR_FROM_JSON(CreditsAvailable, creditsAvailable_);
        DARABONBA_PTR_FROM_JSON(DetectedLang, detectedLang_);
        DARABONBA_PTR_FROM_JSON(EstimatedCostCredits, estimatedCostCredits_);
        DARABONBA_PTR_FROM_JSON(EstimatedTime, estimatedTime_);
        DARABONBA_PTR_FROM_JSON(Fonts, fonts_);
        DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
        DARABONBA_PTR_FROM_JSON(SensitiveDetected, sensitiveDetected_);
        DARABONBA_PTR_FROM_JSON(SensitiveTags, sensitiveTags_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(WordCount, wordCount_);
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
      virtual bool empty() const override { return this->creditBreakdown_ == nullptr
        && this->creditsAvailable_ == nullptr && this->detectedLang_ == nullptr && this->estimatedCostCredits_ == nullptr && this->estimatedTime_ == nullptr && this->fonts_ == nullptr
        && this->pageCount_ == nullptr && this->sensitiveDetected_ == nullptr && this->sensitiveTags_ == nullptr && this->taskId_ == nullptr && this->wordCount_ == nullptr; };
      // creditBreakdown Field Functions 
      bool hasCreditBreakdown() const { return this->creditBreakdown_ != nullptr;};
      void deleteCreditBreakdown() { this->creditBreakdown_ = nullptr;};
      inline string getCreditBreakdown() const { DARABONBA_PTR_GET_DEFAULT(creditBreakdown_, "") };
      inline Data& setCreditBreakdown(string creditBreakdown) { DARABONBA_PTR_SET_VALUE(creditBreakdown_, creditBreakdown) };


      // creditsAvailable Field Functions 
      bool hasCreditsAvailable() const { return this->creditsAvailable_ != nullptr;};
      void deleteCreditsAvailable() { this->creditsAvailable_ = nullptr;};
      inline bool getCreditsAvailable() const { DARABONBA_PTR_GET_DEFAULT(creditsAvailable_, false) };
      inline Data& setCreditsAvailable(bool creditsAvailable) { DARABONBA_PTR_SET_VALUE(creditsAvailable_, creditsAvailable) };


      // detectedLang Field Functions 
      bool hasDetectedLang() const { return this->detectedLang_ != nullptr;};
      void deleteDetectedLang() { this->detectedLang_ = nullptr;};
      inline string getDetectedLang() const { DARABONBA_PTR_GET_DEFAULT(detectedLang_, "") };
      inline Data& setDetectedLang(string detectedLang) { DARABONBA_PTR_SET_VALUE(detectedLang_, detectedLang) };


      // estimatedCostCredits Field Functions 
      bool hasEstimatedCostCredits() const { return this->estimatedCostCredits_ != nullptr;};
      void deleteEstimatedCostCredits() { this->estimatedCostCredits_ = nullptr;};
      inline double getEstimatedCostCredits() const { DARABONBA_PTR_GET_DEFAULT(estimatedCostCredits_, 0.0) };
      inline Data& setEstimatedCostCredits(double estimatedCostCredits) { DARABONBA_PTR_SET_VALUE(estimatedCostCredits_, estimatedCostCredits) };


      // estimatedTime Field Functions 
      bool hasEstimatedTime() const { return this->estimatedTime_ != nullptr;};
      void deleteEstimatedTime() { this->estimatedTime_ = nullptr;};
      inline int64_t getEstimatedTime() const { DARABONBA_PTR_GET_DEFAULT(estimatedTime_, 0L) };
      inline Data& setEstimatedTime(int64_t estimatedTime) { DARABONBA_PTR_SET_VALUE(estimatedTime_, estimatedTime) };


      // fonts Field Functions 
      bool hasFonts() const { return this->fonts_ != nullptr;};
      void deleteFonts() { this->fonts_ = nullptr;};
      inline const map<string, vector<string>> & getFonts() const { DARABONBA_PTR_GET_CONST(fonts_, map<string, vector<string>>) };
      inline map<string, vector<string>> getFonts() { DARABONBA_PTR_GET(fonts_, map<string, vector<string>>) };
      inline Data& setFonts(const map<string, vector<string>> & fonts) { DARABONBA_PTR_SET_VALUE(fonts_, fonts) };
      inline Data& setFonts(map<string, vector<string>> && fonts) { DARABONBA_PTR_SET_RVALUE(fonts_, fonts) };


      // pageCount Field Functions 
      bool hasPageCount() const { return this->pageCount_ != nullptr;};
      void deletePageCount() { this->pageCount_ = nullptr;};
      inline int64_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0L) };
      inline Data& setPageCount(int64_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


      // sensitiveDetected Field Functions 
      bool hasSensitiveDetected() const { return this->sensitiveDetected_ != nullptr;};
      void deleteSensitiveDetected() { this->sensitiveDetected_ = nullptr;};
      inline bool getSensitiveDetected() const { DARABONBA_PTR_GET_DEFAULT(sensitiveDetected_, false) };
      inline Data& setSensitiveDetected(bool sensitiveDetected) { DARABONBA_PTR_SET_VALUE(sensitiveDetected_, sensitiveDetected) };


      // sensitiveTags Field Functions 
      bool hasSensitiveTags() const { return this->sensitiveTags_ != nullptr;};
      void deleteSensitiveTags() { this->sensitiveTags_ = nullptr;};
      inline const vector<string> & getSensitiveTags() const { DARABONBA_PTR_GET_CONST(sensitiveTags_, vector<string>) };
      inline vector<string> getSensitiveTags() { DARABONBA_PTR_GET(sensitiveTags_, vector<string>) };
      inline Data& setSensitiveTags(const vector<string> & sensitiveTags) { DARABONBA_PTR_SET_VALUE(sensitiveTags_, sensitiveTags) };
      inline Data& setSensitiveTags(vector<string> && sensitiveTags) { DARABONBA_PTR_SET_RVALUE(sensitiveTags_, sensitiveTags) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // wordCount Field Functions 
      bool hasWordCount() const { return this->wordCount_ != nullptr;};
      void deleteWordCount() { this->wordCount_ = nullptr;};
      inline int64_t getWordCount() const { DARABONBA_PTR_GET_DEFAULT(wordCount_, 0L) };
      inline Data& setWordCount(int64_t wordCount) { DARABONBA_PTR_SET_VALUE(wordCount_, wordCount) };


    protected:
      shared_ptr<string> creditBreakdown_ {};
      shared_ptr<bool> creditsAvailable_ {};
      shared_ptr<string> detectedLang_ {};
      shared_ptr<double> estimatedCostCredits_ {};
      shared_ptr<int64_t> estimatedTime_ {};
      shared_ptr<map<string, vector<string>>> fonts_ {};
      shared_ptr<int64_t> pageCount_ {};
      shared_ptr<bool> sensitiveDetected_ {};
      shared_ptr<vector<string>> sensitiveTags_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<int64_t> wordCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UploadTranslationFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UploadTranslationFileResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UploadTranslationFileResponseBody::Data) };
    inline UploadTranslationFileResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UploadTranslationFileResponseBody::Data) };
    inline UploadTranslationFileResponseBody& setData(const UploadTranslationFileResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UploadTranslationFileResponseBody& setData(UploadTranslationFileResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UploadTranslationFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadTranslationFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UploadTranslationFileResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<UploadTranslationFileResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RealTranslationAgent20260622
#endif
