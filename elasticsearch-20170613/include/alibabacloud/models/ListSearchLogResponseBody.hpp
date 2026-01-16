// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListSearchLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListSearchLogResponseBody() = default ;
    ListSearchLogResponseBody(const ListSearchLogResponseBody &) = default ;
    ListSearchLogResponseBody(ListSearchLogResponseBody &&) = default ;
    ListSearchLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchLogResponseBody() = default ;
    ListSearchLogResponseBody& operator=(const ListSearchLogResponseBody &) = default ;
    ListSearchLogResponseBody& operator=(ListSearchLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_ANY_TO_JSON(contentCollection, contentCollection_);
        DARABONBA_PTR_TO_JSON(host, host_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(level, level_);
        DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_ANY_FROM_JSON(contentCollection, contentCollection_);
        DARABONBA_PTR_FROM_JSON(host, host_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(level, level_);
        DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
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
      virtual bool empty() const override { return this->content_ == nullptr
        && this->contentCollection_ == nullptr && this->host_ == nullptr && this->instanceId_ == nullptr && this->level_ == nullptr && this->timestamp_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Result& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // contentCollection Field Functions 
      bool hasContentCollection() const { return this->contentCollection_ != nullptr;};
      void deleteContentCollection() { this->contentCollection_ = nullptr;};
      inline       const Darabonba::Json & getContentCollection() const { DARABONBA_GET(contentCollection_) };
      Darabonba::Json & getContentCollection() { DARABONBA_GET(contentCollection_) };
      inline Result& setContentCollection(const Darabonba::Json & contentCollection) { DARABONBA_SET_VALUE(contentCollection_, contentCollection) };
      inline Result& setContentCollection(Darabonba::Json && contentCollection) { DARABONBA_SET_RVALUE(contentCollection_, contentCollection) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline Result& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline Result& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Result& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The ID of the instance.
      shared_ptr<string> content_ {};
      Darabonba::Json contentCollection_ {};
      // Details of the log entry. Different content fields are returned for different log types.
      shared_ptr<string> host_ {};
      shared_ptr<string> instanceId_ {};
      // The timestamp when the log is generated. Unit: ms.
      shared_ptr<string> level_ {};
      shared_ptr<int64_t> timestamp_ {};
    };

    class Headers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Headers& obj) { 
        DARABONBA_PTR_TO_JSON(X-Total-Count, xTotalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Headers& obj) { 
        DARABONBA_PTR_FROM_JSON(X-Total-Count, xTotalCount_);
      };
      Headers() = default ;
      Headers(const Headers &) = default ;
      Headers(Headers &&) = default ;
      Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Headers() = default ;
      Headers& operator=(const Headers &) = default ;
      Headers& operator=(Headers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->xTotalCount_ == nullptr; };
      // xTotalCount Field Functions 
      bool hasXTotalCount() const { return this->xTotalCount_ != nullptr;};
      void deleteXTotalCount() { this->xTotalCount_ = nullptr;};
      inline int32_t getXTotalCount() const { DARABONBA_PTR_GET_DEFAULT(xTotalCount_, 0) };
      inline Headers& setXTotalCount(int32_t xTotalCount) { DARABONBA_PTR_SET_VALUE(xTotalCount_, xTotalCount) };


    protected:
      // The IP address of the node that generates the log.
      shared_ptr<int32_t> xTotalCount_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListSearchLogResponseBody::Headers & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, ListSearchLogResponseBody::Headers) };
    inline ListSearchLogResponseBody::Headers getHeaders() { DARABONBA_PTR_GET(headers_, ListSearchLogResponseBody::Headers) };
    inline ListSearchLogResponseBody& setHeaders(const ListSearchLogResponseBody::Headers & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListSearchLogResponseBody& setHeaders(ListSearchLogResponseBody::Headers && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSearchLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListSearchLogResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListSearchLogResponseBody::Result>) };
    inline vector<ListSearchLogResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListSearchLogResponseBody::Result>) };
    inline ListSearchLogResponseBody& setResult(const vector<ListSearchLogResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListSearchLogResponseBody& setResult(vector<ListSearchLogResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The level of the log. Valid values:
    // 
    // *   warn: warning log
    // *   info: information log
    // *   error: error log
    // *   trace: trace logs
    // *   debug: debug logs
    // 
    // The level information has been migrated to the contentCollection field.
    shared_ptr<ListSearchLogResponseBody::Headers> headers_ {};
    // The list of logs returned by the request.
    shared_ptr<string> requestId_ {};
    // The content of the log entry. Migrated to the contentCollection field.
    shared_ptr<vector<ListSearchLogResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
