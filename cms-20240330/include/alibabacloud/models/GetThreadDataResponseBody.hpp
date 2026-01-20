// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTHREADDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTHREADDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetThreadDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetThreadDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
    };
    friend void from_json(const Darabonba::Json& j, GetThreadDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
    };
    GetThreadDataResponseBody() = default ;
    GetThreadDataResponseBody(const GetThreadDataResponseBody &) = default ;
    GetThreadDataResponseBody(GetThreadDataResponseBody &&) = default ;
    GetThreadDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetThreadDataResponseBody() = default ;
    GetThreadDataResponseBody& operator=(const GetThreadDataResponseBody &) = default ;
    GetThreadDataResponseBody& operator=(GetThreadDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(messages, messages_);
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
        DARABONBA_PTR_TO_JSON(traceId, traceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(messages, messages_);
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        DARABONBA_PTR_FROM_JSON(traceId, traceId_);
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
      class Messages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Messages& obj) { 
          DARABONBA_PTR_TO_JSON(agents, agents_);
          DARABONBA_PTR_TO_JSON(artifacts, artifacts_);
          DARABONBA_PTR_TO_JSON(callId, callId_);
          DARABONBA_PTR_TO_JSON(contents, contents_);
          DARABONBA_PTR_TO_JSON(detail, detail_);
          DARABONBA_PTR_TO_JSON(events, events_);
          DARABONBA_PTR_TO_JSON(parentCallId, parentCallId_);
          DARABONBA_PTR_TO_JSON(role, role_);
          DARABONBA_PTR_TO_JSON(seq, seq_);
          DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(tools, tools_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Messages& obj) { 
          DARABONBA_PTR_FROM_JSON(agents, agents_);
          DARABONBA_PTR_FROM_JSON(artifacts, artifacts_);
          DARABONBA_PTR_FROM_JSON(callId, callId_);
          DARABONBA_PTR_FROM_JSON(contents, contents_);
          DARABONBA_PTR_FROM_JSON(detail, detail_);
          DARABONBA_PTR_FROM_JSON(events, events_);
          DARABONBA_PTR_FROM_JSON(parentCallId, parentCallId_);
          DARABONBA_PTR_FROM_JSON(role, role_);
          DARABONBA_PTR_FROM_JSON(seq, seq_);
          DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(tools, tools_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        Messages() = default ;
        Messages(const Messages &) = default ;
        Messages(Messages &&) = default ;
        Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Messages() = default ;
        Messages& operator=(const Messages &) = default ;
        Messages& operator=(Messages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agents_ == nullptr
        && this->artifacts_ == nullptr && this->callId_ == nullptr && this->contents_ == nullptr && this->detail_ == nullptr && this->events_ == nullptr
        && this->parentCallId_ == nullptr && this->role_ == nullptr && this->seq_ == nullptr && this->timestamp_ == nullptr && this->tools_ == nullptr
        && this->type_ == nullptr && this->version_ == nullptr; };
        // agents Field Functions 
        bool hasAgents() const { return this->agents_ != nullptr;};
        void deleteAgents() { this->agents_ = nullptr;};
        inline const vector<Darabonba::Json> & getAgents() const { DARABONBA_PTR_GET_CONST(agents_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getAgents() { DARABONBA_PTR_GET(agents_, vector<Darabonba::Json>) };
        inline Messages& setAgents(const vector<Darabonba::Json> & agents) { DARABONBA_PTR_SET_VALUE(agents_, agents) };
        inline Messages& setAgents(vector<Darabonba::Json> && agents) { DARABONBA_PTR_SET_RVALUE(agents_, agents) };


        // artifacts Field Functions 
        bool hasArtifacts() const { return this->artifacts_ != nullptr;};
        void deleteArtifacts() { this->artifacts_ = nullptr;};
        inline const vector<Darabonba::Json> & getArtifacts() const { DARABONBA_PTR_GET_CONST(artifacts_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getArtifacts() { DARABONBA_PTR_GET(artifacts_, vector<Darabonba::Json>) };
        inline Messages& setArtifacts(const vector<Darabonba::Json> & artifacts) { DARABONBA_PTR_SET_VALUE(artifacts_, artifacts) };
        inline Messages& setArtifacts(vector<Darabonba::Json> && artifacts) { DARABONBA_PTR_SET_RVALUE(artifacts_, artifacts) };


        // callId Field Functions 
        bool hasCallId() const { return this->callId_ != nullptr;};
        void deleteCallId() { this->callId_ = nullptr;};
        inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
        inline Messages& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


        // contents Field Functions 
        bool hasContents() const { return this->contents_ != nullptr;};
        void deleteContents() { this->contents_ = nullptr;};
        inline const vector<Darabonba::Json> & getContents() const { DARABONBA_PTR_GET_CONST(contents_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getContents() { DARABONBA_PTR_GET(contents_, vector<Darabonba::Json>) };
        inline Messages& setContents(const vector<Darabonba::Json> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
        inline Messages& setContents(vector<Darabonba::Json> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
        inline Messages& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


        // events Field Functions 
        bool hasEvents() const { return this->events_ != nullptr;};
        void deleteEvents() { this->events_ = nullptr;};
        inline const vector<Darabonba::Json> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getEvents() { DARABONBA_PTR_GET(events_, vector<Darabonba::Json>) };
        inline Messages& setEvents(const vector<Darabonba::Json> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
        inline Messages& setEvents(vector<Darabonba::Json> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


        // parentCallId Field Functions 
        bool hasParentCallId() const { return this->parentCallId_ != nullptr;};
        void deleteParentCallId() { this->parentCallId_ = nullptr;};
        inline string getParentCallId() const { DARABONBA_PTR_GET_DEFAULT(parentCallId_, "") };
        inline Messages& setParentCallId(string parentCallId) { DARABONBA_PTR_SET_VALUE(parentCallId_, parentCallId) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // seq Field Functions 
        bool hasSeq() const { return this->seq_ != nullptr;};
        void deleteSeq() { this->seq_ = nullptr;};
        inline int32_t getSeq() const { DARABONBA_PTR_GET_DEFAULT(seq_, 0) };
        inline Messages& setSeq(int32_t seq) { DARABONBA_PTR_SET_VALUE(seq_, seq) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline Messages& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // tools Field Functions 
        bool hasTools() const { return this->tools_ != nullptr;};
        void deleteTools() { this->tools_ = nullptr;};
        inline const vector<Darabonba::Json> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getTools() { DARABONBA_PTR_GET(tools_, vector<Darabonba::Json>) };
        inline Messages& setTools(const vector<Darabonba::Json> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
        inline Messages& setTools(vector<Darabonba::Json> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Messages& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Messages& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<vector<Darabonba::Json>> agents_ {};
        shared_ptr<vector<Darabonba::Json>> artifacts_ {};
        shared_ptr<string> callId_ {};
        shared_ptr<vector<Darabonba::Json>> contents_ {};
        shared_ptr<string> detail_ {};
        shared_ptr<vector<Darabonba::Json>> events_ {};
        shared_ptr<string> parentCallId_ {};
        shared_ptr<string> role_ {};
        shared_ptr<int32_t> seq_ {};
        shared_ptr<string> timestamp_ {};
        shared_ptr<vector<Darabonba::Json>> tools_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->messages_ == nullptr
        && this->requestId_ == nullptr && this->traceId_ == nullptr; };
      // messages Field Functions 
      bool hasMessages() const { return this->messages_ != nullptr;};
      void deleteMessages() { this->messages_ = nullptr;};
      inline const vector<Data::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Data::Messages>) };
      inline vector<Data::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<Data::Messages>) };
      inline Data& setMessages(const vector<Data::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
      inline Data& setMessages(vector<Data::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // traceId Field Functions 
      bool hasTraceId() const { return this->traceId_ != nullptr;};
      void deleteTraceId() { this->traceId_ = nullptr;};
      inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
      inline Data& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    protected:
      shared_ptr<vector<Data::Messages>> messages_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> traceId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->digitalEmployeeName_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->threadId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetThreadDataResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetThreadDataResponseBody::Data>) };
    inline vector<GetThreadDataResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetThreadDataResponseBody::Data>) };
    inline GetThreadDataResponseBody& setData(const vector<GetThreadDataResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetThreadDataResponseBody& setData(vector<GetThreadDataResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline string getDigitalEmployeeName() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeName_, "") };
    inline GetThreadDataResponseBody& setDigitalEmployeeName(string digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline GetThreadDataResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetThreadDataResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetThreadDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline GetThreadDataResponseBody& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


  protected:
    shared_ptr<vector<GetThreadDataResponseBody::Data>> data_ {};
    shared_ptr<string> digitalEmployeeName_ {};
    shared_ptr<int64_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> threadId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
