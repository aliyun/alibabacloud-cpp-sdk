// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSLATIONTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSLATIONTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RealTranslationAgent20260622
{
namespace Models
{
  class ListTranslationTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranslationTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranslationTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListTranslationTasksResponseBody() = default ;
    ListTranslationTasksResponseBody(const ListTranslationTasksResponseBody &) = default ;
    ListTranslationTasksResponseBody(ListTranslationTasksResponseBody &&) = default ;
    ListTranslationTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranslationTasksResponseBody() = default ;
    ListTranslationTasksResponseBody& operator=(const ListTranslationTasksResponseBody &) = default ;
    ListTranslationTasksResponseBody& operator=(ListTranslationTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
          DARABONBA_PTR_TO_JSON(CostCredits, costCredits_);
          DARABONBA_PTR_TO_JSON(CostTime, costTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(FileFormat, fileFormat_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(OrgId, orgId_);
          DARABONBA_PTR_TO_JSON(OriginalFileName, originalFileName_);
          DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
          DARABONBA_PTR_TO_JSON(Template, template_);
          DARABONBA_PTR_TO_JSON(WordCount, wordCount_);
          DARABONBA_PTR_TO_JSON(WorkSpaceId, workSpaceId_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
          DARABONBA_PTR_FROM_JSON(CostCredits, costCredits_);
          DARABONBA_PTR_FROM_JSON(CostTime, costTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(FileFormat, fileFormat_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
          DARABONBA_PTR_FROM_JSON(OriginalFileName, originalFileName_);
          DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
          DARABONBA_PTR_FROM_JSON(Template, template_);
          DARABONBA_PTR_FROM_JSON(WordCount, wordCount_);
          DARABONBA_PTR_FROM_JSON(WorkSpaceId, workSpaceId_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->completeTime_ == nullptr
        && this->costCredits_ == nullptr && this->costTime_ == nullptr && this->creator_ == nullptr && this->creatorName_ == nullptr && this->errorMessage_ == nullptr
        && this->fileFormat_ == nullptr && this->fileName_ == nullptr && this->gmtCreate_ == nullptr && this->orgId_ == nullptr && this->originalFileName_ == nullptr
        && this->pageCount_ == nullptr && this->progress_ == nullptr && this->sourceLanguage_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->targetLanguage_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr && this->template_ == nullptr && this->wordCount_ == nullptr
        && this->workSpaceId_ == nullptr; };
        // completeTime Field Functions 
        bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
        void deleteCompleteTime() { this->completeTime_ = nullptr;};
        inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
        inline List& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


        // costCredits Field Functions 
        bool hasCostCredits() const { return this->costCredits_ != nullptr;};
        void deleteCostCredits() { this->costCredits_ = nullptr;};
        inline double getCostCredits() const { DARABONBA_PTR_GET_DEFAULT(costCredits_, 0.0) };
        inline List& setCostCredits(double costCredits) { DARABONBA_PTR_SET_VALUE(costCredits_, costCredits) };


        // costTime Field Functions 
        bool hasCostTime() const { return this->costTime_ != nullptr;};
        void deleteCostTime() { this->costTime_ = nullptr;};
        inline int64_t getCostTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, 0L) };
        inline List& setCostTime(int64_t costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline List& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // creatorName Field Functions 
        bool hasCreatorName() const { return this->creatorName_ != nullptr;};
        void deleteCreatorName() { this->creatorName_ = nullptr;};
        inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
        inline List& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline List& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // fileFormat Field Functions 
        bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
        void deleteFileFormat() { this->fileFormat_ = nullptr;};
        inline string getFileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
        inline List& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline List& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline List& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // orgId Field Functions 
        bool hasOrgId() const { return this->orgId_ != nullptr;};
        void deleteOrgId() { this->orgId_ = nullptr;};
        inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
        inline List& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


        // originalFileName Field Functions 
        bool hasOriginalFileName() const { return this->originalFileName_ != nullptr;};
        void deleteOriginalFileName() { this->originalFileName_ = nullptr;};
        inline string getOriginalFileName() const { DARABONBA_PTR_GET_DEFAULT(originalFileName_, "") };
        inline List& setOriginalFileName(string originalFileName) { DARABONBA_PTR_SET_VALUE(originalFileName_, originalFileName) };


        // pageCount Field Functions 
        bool hasPageCount() const { return this->pageCount_ != nullptr;};
        void deletePageCount() { this->pageCount_ = nullptr;};
        inline int64_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0L) };
        inline List& setPageCount(int64_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
        inline List& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // sourceLanguage Field Functions 
        bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
        void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
        inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
        inline List& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline List& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // targetLanguage Field Functions 
        bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
        void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
        inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
        inline List& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline List& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
        inline List& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


        // template Field Functions 
        bool hasTemplate() const { return this->template_ != nullptr;};
        void deleteTemplate() { this->template_ = nullptr;};
        inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
        inline List& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


        // wordCount Field Functions 
        bool hasWordCount() const { return this->wordCount_ != nullptr;};
        void deleteWordCount() { this->wordCount_ = nullptr;};
        inline int64_t getWordCount() const { DARABONBA_PTR_GET_DEFAULT(wordCount_, 0L) };
        inline List& setWordCount(int64_t wordCount) { DARABONBA_PTR_SET_VALUE(wordCount_, wordCount) };


        // workSpaceId Field Functions 
        bool hasWorkSpaceId() const { return this->workSpaceId_ != nullptr;};
        void deleteWorkSpaceId() { this->workSpaceId_ = nullptr;};
        inline string getWorkSpaceId() const { DARABONBA_PTR_GET_DEFAULT(workSpaceId_, "") };
        inline List& setWorkSpaceId(string workSpaceId) { DARABONBA_PTR_SET_VALUE(workSpaceId_, workSpaceId) };


      protected:
        shared_ptr<string> completeTime_ {};
        shared_ptr<double> costCredits_ {};
        shared_ptr<int64_t> costTime_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> creatorName_ {};
        shared_ptr<string> errorMessage_ {};
        shared_ptr<string> fileFormat_ {};
        shared_ptr<string> fileName_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> orgId_ {};
        shared_ptr<string> originalFileName_ {};
        shared_ptr<int64_t> pageCount_ {};
        shared_ptr<int32_t> progress_ {};
        shared_ptr<string> sourceLanguage_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> targetLanguage_ {};
        shared_ptr<string> taskId_ {};
        shared_ptr<string> taskType_ {};
        shared_ptr<string> template_ {};
        shared_ptr<int64_t> wordCount_ {};
        shared_ptr<string> workSpaceId_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> maxResults_ {};
      shared_ptr<string> nextToken_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTranslationTasksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListTranslationTasksResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListTranslationTasksResponseBody::Data) };
    inline ListTranslationTasksResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListTranslationTasksResponseBody::Data) };
    inline ListTranslationTasksResponseBody& setData(const ListTranslationTasksResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTranslationTasksResponseBody& setData(ListTranslationTasksResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTranslationTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTranslationTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTranslationTasksResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListTranslationTasksResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RealTranslationAgent20260622
#endif
