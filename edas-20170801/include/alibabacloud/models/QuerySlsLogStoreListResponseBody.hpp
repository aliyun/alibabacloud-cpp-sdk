// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSLSLOGSTORELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSLSLOGSTORELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QuerySlsLogStoreListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySlsLogStoreListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySlsLogStoreListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    QuerySlsLogStoreListResponseBody() = default ;
    QuerySlsLogStoreListResponseBody(const QuerySlsLogStoreListResponseBody &) = default ;
    QuerySlsLogStoreListResponseBody(QuerySlsLogStoreListResponseBody &&) = default ;
    QuerySlsLogStoreListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySlsLogStoreListResponseBody() = default ;
    QuerySlsLogStoreListResponseBody& operator=(const QuerySlsLogStoreListResponseBody &) = default ;
    QuerySlsLogStoreListResponseBody& operator=(QuerySlsLogStoreListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ConsumerSide, consumerSide_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Link, link_);
        DARABONBA_PTR_TO_JSON(Logstore, logstore_);
        DARABONBA_PTR_TO_JSON(Project, project_);
        DARABONBA_PTR_TO_JSON(Source, source_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ConsumerSide, consumerSide_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Link, link_);
        DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
        DARABONBA_PTR_FROM_JSON(Project, project_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
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
      virtual bool empty() const override { return this->consumerSide_ == nullptr
        && this->createTime_ == nullptr && this->link_ == nullptr && this->logstore_ == nullptr && this->project_ == nullptr && this->source_ == nullptr; };
      // consumerSide Field Functions 
      bool hasConsumerSide() const { return this->consumerSide_ != nullptr;};
      void deleteConsumerSide() { this->consumerSide_ = nullptr;};
      inline string getConsumerSide() const { DARABONBA_PTR_GET_DEFAULT(consumerSide_, "") };
      inline Result& setConsumerSide(string consumerSide) { DARABONBA_PTR_SET_VALUE(consumerSide_, consumerSide) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Result& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // link Field Functions 
      bool hasLink() const { return this->link_ != nullptr;};
      void deleteLink() { this->link_ = nullptr;};
      inline string getLink() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
      inline Result& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


      // logstore Field Functions 
      bool hasLogstore() const { return this->logstore_ != nullptr;};
      void deleteLogstore() { this->logstore_ = nullptr;};
      inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
      inline Result& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline Result& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Result& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    protected:
      // The type of the logging service.
      shared_ptr<string> consumerSide_ {};
      // The time when the logging service was created.
      shared_ptr<string> createTime_ {};
      // The URL of the logging service.
      shared_ptr<string> link_ {};
      // The name of the Logstore.
      shared_ptr<string> logstore_ {};
      // The name of the project.
      shared_ptr<string> project_ {};
      // The source of logs. Valid values:
      // 
      // - Standard output: stdout.log
      // 
      // - File log: the directory that stores logs
      shared_ptr<string> source_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->totalSize_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QuerySlsLogStoreListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySlsLogStoreListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySlsLogStoreListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QuerySlsLogStoreListResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<QuerySlsLogStoreListResponseBody::Result>) };
    inline vector<QuerySlsLogStoreListResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<QuerySlsLogStoreListResponseBody::Result>) };
    inline QuerySlsLogStoreListResponseBody& setResult(const vector<QuerySlsLogStoreListResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QuerySlsLogStoreListResponseBody& setResult(vector<QuerySlsLogStoreListResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline QuerySlsLogStoreListResponseBody& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The configurations of Log Service for the application.
    shared_ptr<vector<QuerySlsLogStoreListResponseBody::Result>> result_ {};
    // The number of log sources configured for the application.
    shared_ptr<int32_t> totalSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
