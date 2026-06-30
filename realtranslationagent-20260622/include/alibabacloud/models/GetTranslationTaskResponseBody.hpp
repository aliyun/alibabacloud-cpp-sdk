// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSLATIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSLATIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RealTranslationAgent20260622
{
namespace Models
{
  class GetTranslationTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranslationTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranslationTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTranslationTaskResponseBody() = default ;
    GetTranslationTaskResponseBody(const GetTranslationTaskResponseBody &) = default ;
    GetTranslationTaskResponseBody(GetTranslationTaskResponseBody &&) = default ;
    GetTranslationTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranslationTaskResponseBody() = default ;
    GetTranslationTaskResponseBody& operator=(const GetTranslationTaskResponseBody &) = default ;
    GetTranslationTaskResponseBody& operator=(GetTranslationTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BaseTaskId, baseTaskId_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(CostCredits, costCredits_);
        DARABONBA_PTR_TO_JSON(CostTime, costTime_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(EstimatedCostCredits, estimatedCostCredits_);
        DARABONBA_PTR_TO_JSON(EstimatedTime, estimatedTime_);
        DARABONBA_PTR_TO_JSON(ExtractedTerms, extractedTerms_);
        DARABONBA_PTR_TO_JSON(FileFormat, fileFormat_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FinishedAt, finishedAt_);
        DARABONBA_PTR_TO_JSON(Fonts, fonts_);
        DARABONBA_PTR_TO_JSON(OrgId, orgId_);
        DARABONBA_PTR_TO_JSON(OriginalFileName, originalFileName_);
        DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(WordCount, wordCount_);
        DARABONBA_PTR_TO_JSON(WorkSpaceId, workSpaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BaseTaskId, baseTaskId_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(CostCredits, costCredits_);
        DARABONBA_PTR_FROM_JSON(CostTime, costTime_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(EstimatedCostCredits, estimatedCostCredits_);
        DARABONBA_PTR_FROM_JSON(EstimatedTime, estimatedTime_);
        DARABONBA_PTR_FROM_JSON(ExtractedTerms, extractedTerms_);
        DARABONBA_PTR_FROM_JSON(FileFormat, fileFormat_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FinishedAt, finishedAt_);
        DARABONBA_PTR_FROM_JSON(Fonts, fonts_);
        DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
        DARABONBA_PTR_FROM_JSON(OriginalFileName, originalFileName_);
        DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(WordCount, wordCount_);
        DARABONBA_PTR_FROM_JSON(WorkSpaceId, workSpaceId_);
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
      class ExtractedTerms : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtractedTerms& obj) { 
          DARABONBA_PTR_TO_JSON(SourceTerm, sourceTerm_);
          DARABONBA_PTR_TO_JSON(TargetTerm, targetTerm_);
        };
        friend void from_json(const Darabonba::Json& j, ExtractedTerms& obj) { 
          DARABONBA_PTR_FROM_JSON(SourceTerm, sourceTerm_);
          DARABONBA_PTR_FROM_JSON(TargetTerm, targetTerm_);
        };
        ExtractedTerms() = default ;
        ExtractedTerms(const ExtractedTerms &) = default ;
        ExtractedTerms(ExtractedTerms &&) = default ;
        ExtractedTerms(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtractedTerms() = default ;
        ExtractedTerms& operator=(const ExtractedTerms &) = default ;
        ExtractedTerms& operator=(ExtractedTerms &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sourceTerm_ == nullptr
        && this->targetTerm_ == nullptr; };
        // sourceTerm Field Functions 
        bool hasSourceTerm() const { return this->sourceTerm_ != nullptr;};
        void deleteSourceTerm() { this->sourceTerm_ = nullptr;};
        inline string getSourceTerm() const { DARABONBA_PTR_GET_DEFAULT(sourceTerm_, "") };
        inline ExtractedTerms& setSourceTerm(string sourceTerm) { DARABONBA_PTR_SET_VALUE(sourceTerm_, sourceTerm) };


        // targetTerm Field Functions 
        bool hasTargetTerm() const { return this->targetTerm_ != nullptr;};
        void deleteTargetTerm() { this->targetTerm_ = nullptr;};
        inline string getTargetTerm() const { DARABONBA_PTR_GET_DEFAULT(targetTerm_, "") };
        inline ExtractedTerms& setTargetTerm(string targetTerm) { DARABONBA_PTR_SET_VALUE(targetTerm_, targetTerm) };


      protected:
        shared_ptr<string> sourceTerm_ {};
        shared_ptr<string> targetTerm_ {};
      };

      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
          DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
          DARABONBA_PTR_TO_JSON(Style, style_);
          DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
          DARABONBA_PTR_TO_JSON(Template, template_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
          DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
          DARABONBA_PTR_FROM_JSON(Style, style_);
          DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
          DARABONBA_PTR_FROM_JSON(Template, template_);
        };
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->securityLevel_ == nullptr
        && this->sourceLanguage_ == nullptr && this->style_ == nullptr && this->targetLanguage_ == nullptr && this->template_ == nullptr; };
        // securityLevel Field Functions 
        bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
        void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
        inline string getSecurityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
        inline Config& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


        // sourceLanguage Field Functions 
        bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
        void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
        inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
        inline Config& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


        // style Field Functions 
        bool hasStyle() const { return this->style_ != nullptr;};
        void deleteStyle() { this->style_ = nullptr;};
        inline string getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
        inline Config& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


        // targetLanguage Field Functions 
        bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
        void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
        inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
        inline Config& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


        // template Field Functions 
        bool hasTemplate() const { return this->template_ != nullptr;};
        void deleteTemplate() { this->template_ = nullptr;};
        inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
        inline Config& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      protected:
        shared_ptr<string> securityLevel_ {};
        shared_ptr<string> sourceLanguage_ {};
        shared_ptr<string> style_ {};
        shared_ptr<string> targetLanguage_ {};
        shared_ptr<string> template_ {};
      };

      virtual bool empty() const override { return this->baseTaskId_ == nullptr
        && this->config_ == nullptr && this->costCredits_ == nullptr && this->costTime_ == nullptr && this->errorMessage_ == nullptr && this->estimatedCostCredits_ == nullptr
        && this->estimatedTime_ == nullptr && this->extractedTerms_ == nullptr && this->fileFormat_ == nullptr && this->fileName_ == nullptr && this->finishedAt_ == nullptr
        && this->fonts_ == nullptr && this->orgId_ == nullptr && this->originalFileName_ == nullptr && this->pageCount_ == nullptr && this->progress_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr && this->wordCount_ == nullptr && this->workSpaceId_ == nullptr; };
      // baseTaskId Field Functions 
      bool hasBaseTaskId() const { return this->baseTaskId_ != nullptr;};
      void deleteBaseTaskId() { this->baseTaskId_ = nullptr;};
      inline string getBaseTaskId() const { DARABONBA_PTR_GET_DEFAULT(baseTaskId_, "") };
      inline Data& setBaseTaskId(string baseTaskId) { DARABONBA_PTR_SET_VALUE(baseTaskId_, baseTaskId) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const Data::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Data::Config) };
      inline Data::Config getConfig() { DARABONBA_PTR_GET(config_, Data::Config) };
      inline Data& setConfig(const Data::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Data& setConfig(Data::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // costCredits Field Functions 
      bool hasCostCredits() const { return this->costCredits_ != nullptr;};
      void deleteCostCredits() { this->costCredits_ = nullptr;};
      inline double getCostCredits() const { DARABONBA_PTR_GET_DEFAULT(costCredits_, 0.0) };
      inline Data& setCostCredits(double costCredits) { DARABONBA_PTR_SET_VALUE(costCredits_, costCredits) };


      // costTime Field Functions 
      bool hasCostTime() const { return this->costTime_ != nullptr;};
      void deleteCostTime() { this->costTime_ = nullptr;};
      inline int64_t getCostTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, 0L) };
      inline Data& setCostTime(int64_t costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


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


      // extractedTerms Field Functions 
      bool hasExtractedTerms() const { return this->extractedTerms_ != nullptr;};
      void deleteExtractedTerms() { this->extractedTerms_ = nullptr;};
      inline const vector<Data::ExtractedTerms> & getExtractedTerms() const { DARABONBA_PTR_GET_CONST(extractedTerms_, vector<Data::ExtractedTerms>) };
      inline vector<Data::ExtractedTerms> getExtractedTerms() { DARABONBA_PTR_GET(extractedTerms_, vector<Data::ExtractedTerms>) };
      inline Data& setExtractedTerms(const vector<Data::ExtractedTerms> & extractedTerms) { DARABONBA_PTR_SET_VALUE(extractedTerms_, extractedTerms) };
      inline Data& setExtractedTerms(vector<Data::ExtractedTerms> && extractedTerms) { DARABONBA_PTR_SET_RVALUE(extractedTerms_, extractedTerms) };


      // fileFormat Field Functions 
      bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
      void deleteFileFormat() { this->fileFormat_ = nullptr;};
      inline string getFileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
      inline Data& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Data& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // finishedAt Field Functions 
      bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
      void deleteFinishedAt() { this->finishedAt_ = nullptr;};
      inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
      inline Data& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


      // fonts Field Functions 
      bool hasFonts() const { return this->fonts_ != nullptr;};
      void deleteFonts() { this->fonts_ = nullptr;};
      inline const map<string, vector<string>> & getFonts() const { DARABONBA_PTR_GET_CONST(fonts_, map<string, vector<string>>) };
      inline map<string, vector<string>> getFonts() { DARABONBA_PTR_GET(fonts_, map<string, vector<string>>) };
      inline Data& setFonts(const map<string, vector<string>> & fonts) { DARABONBA_PTR_SET_VALUE(fonts_, fonts) };
      inline Data& setFonts(map<string, vector<string>> && fonts) { DARABONBA_PTR_SET_RVALUE(fonts_, fonts) };


      // orgId Field Functions 
      bool hasOrgId() const { return this->orgId_ != nullptr;};
      void deleteOrgId() { this->orgId_ = nullptr;};
      inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
      inline Data& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


      // originalFileName Field Functions 
      bool hasOriginalFileName() const { return this->originalFileName_ != nullptr;};
      void deleteOriginalFileName() { this->originalFileName_ = nullptr;};
      inline string getOriginalFileName() const { DARABONBA_PTR_GET_DEFAULT(originalFileName_, "") };
      inline Data& setOriginalFileName(string originalFileName) { DARABONBA_PTR_SET_VALUE(originalFileName_, originalFileName) };


      // pageCount Field Functions 
      bool hasPageCount() const { return this->pageCount_ != nullptr;};
      void deletePageCount() { this->pageCount_ = nullptr;};
      inline int64_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0L) };
      inline Data& setPageCount(int64_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
      inline Data& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Data& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // wordCount Field Functions 
      bool hasWordCount() const { return this->wordCount_ != nullptr;};
      void deleteWordCount() { this->wordCount_ = nullptr;};
      inline int64_t getWordCount() const { DARABONBA_PTR_GET_DEFAULT(wordCount_, 0L) };
      inline Data& setWordCount(int64_t wordCount) { DARABONBA_PTR_SET_VALUE(wordCount_, wordCount) };


      // workSpaceId Field Functions 
      bool hasWorkSpaceId() const { return this->workSpaceId_ != nullptr;};
      void deleteWorkSpaceId() { this->workSpaceId_ = nullptr;};
      inline string getWorkSpaceId() const { DARABONBA_PTR_GET_DEFAULT(workSpaceId_, "") };
      inline Data& setWorkSpaceId(string workSpaceId) { DARABONBA_PTR_SET_VALUE(workSpaceId_, workSpaceId) };


    protected:
      shared_ptr<string> baseTaskId_ {};
      shared_ptr<Data::Config> config_ {};
      shared_ptr<double> costCredits_ {};
      shared_ptr<int64_t> costTime_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<double> estimatedCostCredits_ {};
      shared_ptr<int64_t> estimatedTime_ {};
      shared_ptr<vector<Data::ExtractedTerms>> extractedTerms_ {};
      shared_ptr<string> fileFormat_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<string> finishedAt_ {};
      shared_ptr<map<string, vector<string>>> fonts_ {};
      shared_ptr<string> orgId_ {};
      shared_ptr<string> originalFileName_ {};
      shared_ptr<int64_t> pageCount_ {};
      shared_ptr<int32_t> progress_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<int64_t> wordCount_ {};
      shared_ptr<string> workSpaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTranslationTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTranslationTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTranslationTaskResponseBody::Data) };
    inline GetTranslationTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTranslationTaskResponseBody::Data) };
    inline GetTranslationTaskResponseBody& setData(const GetTranslationTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTranslationTaskResponseBody& setData(GetTranslationTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTranslationTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTranslationTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTranslationTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetTranslationTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RealTranslationAgent20260622
#endif
