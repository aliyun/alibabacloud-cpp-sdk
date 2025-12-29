// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTTOPICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTTOPICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListHotTopicsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotTopicsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotTopicsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHotTopicsResponseBody() = default ;
    ListHotTopicsResponseBody(const ListHotTopicsResponseBody &) = default ;
    ListHotTopicsResponseBody(ListHotTopicsResponseBody &&) = default ;
    ListHotTopicsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotTopicsResponseBody() = default ;
    ListHotTopicsResponseBody& operator=(const ListHotTopicsResponseBody &) = default ;
    ListHotTopicsResponseBody& operator=(ListHotTopicsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AsyncTaskId, asyncTaskId_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(HotValue, hotValue_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StructureSummary, structureSummary_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(TaskErrorMessage, taskErrorMessage_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(Topic, topic_);
        DARABONBA_PTR_TO_JSON(TopicSource, topicSource_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AsyncTaskId, asyncTaskId_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(HotValue, hotValue_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StructureSummary, structureSummary_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(TaskErrorMessage, taskErrorMessage_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(Topic, topic_);
        DARABONBA_PTR_FROM_JSON(TopicSource, topicSource_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
      class StructureSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StructureSummary& obj) { 
          DARABONBA_PTR_TO_JSON(DocList, docList_);
          DARABONBA_PTR_TO_JSON(Summary, summary_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, StructureSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(DocList, docList_);
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        StructureSummary() = default ;
        StructureSummary(const StructureSummary &) = default ;
        StructureSummary(StructureSummary &&) = default ;
        StructureSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StructureSummary() = default ;
        StructureSummary& operator=(const StructureSummary &) = default ;
        StructureSummary& operator=(StructureSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DocList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DocList& obj) { 
            DARABONBA_PTR_TO_JSON(Source, source_);
            DARABONBA_PTR_TO_JSON(Title, title_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, DocList& obj) { 
            DARABONBA_PTR_FROM_JSON(Source, source_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          DocList() = default ;
          DocList(const DocList &) = default ;
          DocList(DocList &&) = default ;
          DocList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DocList() = default ;
          DocList& operator=(const DocList &) = default ;
          DocList& operator=(DocList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->source_ == nullptr
        && this->title_ == nullptr && this->url_ == nullptr; };
          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
          inline DocList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline DocList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline DocList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> source_ {};
          shared_ptr<string> title_ {};
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->docList_ == nullptr
        && this->summary_ == nullptr && this->title_ == nullptr; };
        // docList Field Functions 
        bool hasDocList() const { return this->docList_ != nullptr;};
        void deleteDocList() { this->docList_ = nullptr;};
        inline const vector<StructureSummary::DocList> & getDocList() const { DARABONBA_PTR_GET_CONST(docList_, vector<StructureSummary::DocList>) };
        inline vector<StructureSummary::DocList> getDocList() { DARABONBA_PTR_GET(docList_, vector<StructureSummary::DocList>) };
        inline StructureSummary& setDocList(const vector<StructureSummary::DocList> & docList) { DARABONBA_PTR_SET_VALUE(docList_, docList) };
        inline StructureSummary& setDocList(vector<StructureSummary::DocList> && docList) { DARABONBA_PTR_SET_RVALUE(docList_, docList) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline StructureSummary& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline StructureSummary& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<vector<StructureSummary::DocList>> docList_ {};
        shared_ptr<string> summary_ {};
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->asyncTaskId_ == nullptr
        && this->createUser_ == nullptr && this->hotValue_ == nullptr && this->id_ == nullptr && this->status_ == nullptr && this->structureSummary_ == nullptr
        && this->summary_ == nullptr && this->taskErrorMessage_ == nullptr && this->taskStatus_ == nullptr && this->topic_ == nullptr && this->topicSource_ == nullptr
        && this->version_ == nullptr; };
      // asyncTaskId Field Functions 
      bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
      void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
      inline string getAsyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
      inline Data& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline Data& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // hotValue Field Functions 
      bool hasHotValue() const { return this->hotValue_ != nullptr;};
      void deleteHotValue() { this->hotValue_ = nullptr;};
      inline int64_t getHotValue() const { DARABONBA_PTR_GET_DEFAULT(hotValue_, 0L) };
      inline Data& setHotValue(int64_t hotValue) { DARABONBA_PTR_SET_VALUE(hotValue_, hotValue) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // structureSummary Field Functions 
      bool hasStructureSummary() const { return this->structureSummary_ != nullptr;};
      void deleteStructureSummary() { this->structureSummary_ = nullptr;};
      inline const vector<Data::StructureSummary> & getStructureSummary() const { DARABONBA_PTR_GET_CONST(structureSummary_, vector<Data::StructureSummary>) };
      inline vector<Data::StructureSummary> getStructureSummary() { DARABONBA_PTR_GET(structureSummary_, vector<Data::StructureSummary>) };
      inline Data& setStructureSummary(const vector<Data::StructureSummary> & structureSummary) { DARABONBA_PTR_SET_VALUE(structureSummary_, structureSummary) };
      inline Data& setStructureSummary(vector<Data::StructureSummary> && structureSummary) { DARABONBA_PTR_SET_RVALUE(structureSummary_, structureSummary) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Data& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // taskErrorMessage Field Functions 
      bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
      void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
      inline string getTaskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
      inline Data& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
      inline Data& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
      inline Data& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      // topicSource Field Functions 
      bool hasTopicSource() const { return this->topicSource_ != nullptr;};
      void deleteTopicSource() { this->topicSource_ = nullptr;};
      inline string getTopicSource() const { DARABONBA_PTR_GET_DEFAULT(topicSource_, "") };
      inline Data& setTopicSource(string topicSource) { DARABONBA_PTR_SET_VALUE(topicSource_, topicSource) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> asyncTaskId_ {};
      shared_ptr<string> createUser_ {};
      shared_ptr<int64_t> hotValue_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<Data::StructureSummary>> structureSummary_ {};
      shared_ptr<string> summary_ {};
      shared_ptr<string> taskErrorMessage_ {};
      shared_ptr<int32_t> taskStatus_ {};
      shared_ptr<string> topic_ {};
      shared_ptr<string> topicSource_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListHotTopicsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListHotTopicsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListHotTopicsResponseBody::Data>) };
    inline vector<ListHotTopicsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListHotTopicsResponseBody::Data>) };
    inline ListHotTopicsResponseBody& setData(const vector<ListHotTopicsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListHotTopicsResponseBody& setData(vector<ListHotTopicsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListHotTopicsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListHotTopicsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHotTopicsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListHotTopicsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHotTopicsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListHotTopicsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHotTopicsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListHotTopicsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
