// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANALYSISTAGDETAILBYTASKIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTANALYSISTAGDETAILBYTASKIDRESPONSEBODY_HPP_
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
  class ListAnalysisTagDetailByTaskIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnalysisTagDetailByTaskIdResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAnalysisTagDetailByTaskIdResponseBody& obj) { 
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
    ListAnalysisTagDetailByTaskIdResponseBody() = default ;
    ListAnalysisTagDetailByTaskIdResponseBody(const ListAnalysisTagDetailByTaskIdResponseBody &) = default ;
    ListAnalysisTagDetailByTaskIdResponseBody(ListAnalysisTagDetailByTaskIdResponseBody &&) = default ;
    ListAnalysisTagDetailByTaskIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnalysisTagDetailByTaskIdResponseBody() = default ;
    ListAnalysisTagDetailByTaskIdResponseBody& operator=(const ListAnalysisTagDetailByTaskIdResponseBody &) = default ;
    ListAnalysisTagDetailByTaskIdResponseBody& operator=(ListAnalysisTagDetailByTaskIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(ContentTags, contentTags_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(TagTaskType, tagTaskType_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(ContentTags, contentTags_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(TagTaskType, tagTaskType_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      class ContentTags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContentTags& obj) { 
          DARABONBA_PTR_TO_JSON(SummaryOverview, summaryOverview_);
          DARABONBA_PTR_TO_JSON(TagName, tagName_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, ContentTags& obj) { 
          DARABONBA_PTR_FROM_JSON(SummaryOverview, summaryOverview_);
          DARABONBA_PTR_FROM_JSON(TagName, tagName_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        ContentTags() = default ;
        ContentTags(const ContentTags &) = default ;
        ContentTags(ContentTags &&) = default ;
        ContentTags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContentTags() = default ;
        ContentTags& operator=(const ContentTags &) = default ;
        ContentTags& operator=(ContentTags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->summaryOverview_ == nullptr
        && this->tagName_ == nullptr && this->tags_ == nullptr; };
        // summaryOverview Field Functions 
        bool hasSummaryOverview() const { return this->summaryOverview_ != nullptr;};
        void deleteSummaryOverview() { this->summaryOverview_ = nullptr;};
        inline string getSummaryOverview() const { DARABONBA_PTR_GET_DEFAULT(summaryOverview_, "") };
        inline ContentTags& setSummaryOverview(string summaryOverview) { DARABONBA_PTR_SET_VALUE(summaryOverview_, summaryOverview) };


        // tagName Field Functions 
        bool hasTagName() const { return this->tagName_ != nullptr;};
        void deleteTagName() { this->tagName_ = nullptr;};
        inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
        inline ContentTags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline ContentTags& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline ContentTags& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        shared_ptr<string> summaryOverview_ {};
        shared_ptr<string> tagName_ {};
        shared_ptr<vector<string>> tags_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->contentTags_ == nullptr && this->id_ == nullptr && this->tagTaskType_ == nullptr && this->taskId_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // contentTags Field Functions 
      bool hasContentTags() const { return this->contentTags_ != nullptr;};
      void deleteContentTags() { this->contentTags_ = nullptr;};
      inline const vector<Data::ContentTags> & getContentTags() const { DARABONBA_PTR_GET_CONST(contentTags_, vector<Data::ContentTags>) };
      inline vector<Data::ContentTags> getContentTags() { DARABONBA_PTR_GET(contentTags_, vector<Data::ContentTags>) };
      inline Data& setContentTags(const vector<Data::ContentTags> & contentTags) { DARABONBA_PTR_SET_VALUE(contentTags_, contentTags) };
      inline Data& setContentTags(vector<Data::ContentTags> && contentTags) { DARABONBA_PTR_SET_RVALUE(contentTags_, contentTags) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // tagTaskType Field Functions 
      bool hasTagTaskType() const { return this->tagTaskType_ != nullptr;};
      void deleteTagTaskType() { this->tagTaskType_ = nullptr;};
      inline string getTagTaskType() const { DARABONBA_PTR_GET_DEFAULT(tagTaskType_, "") };
      inline Data& setTagTaskType(string tagTaskType) { DARABONBA_PTR_SET_VALUE(tagTaskType_, tagTaskType) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<vector<Data::ContentTags>> contentTags_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> tagTaskType_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAnalysisTagDetailByTaskIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAnalysisTagDetailByTaskIdResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAnalysisTagDetailByTaskIdResponseBody::Data>) };
    inline vector<ListAnalysisTagDetailByTaskIdResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAnalysisTagDetailByTaskIdResponseBody::Data>) };
    inline ListAnalysisTagDetailByTaskIdResponseBody& setData(const vector<ListAnalysisTagDetailByTaskIdResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAnalysisTagDetailByTaskIdResponseBody& setData(vector<ListAnalysisTagDetailByTaskIdResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAnalysisTagDetailByTaskIdResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAnalysisTagDetailByTaskIdResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAnalysisTagDetailByTaskIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAnalysisTagDetailByTaskIdResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAnalysisTagDetailByTaskIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAnalysisTagDetailByTaskIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAnalysisTagDetailByTaskIdResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListAnalysisTagDetailByTaskIdResponseBody::Data>> data_ {};
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
