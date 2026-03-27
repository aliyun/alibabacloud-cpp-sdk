// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATRESPONSEBODY_HPP_
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
  class CreateChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    CreateChatResponseBody() = default ;
    CreateChatResponseBody(const CreateChatResponseBody &) = default ;
    CreateChatResponseBody(CreateChatResponseBody &&) = default ;
    CreateChatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatResponseBody() = default ;
    CreateChatResponseBody& operator=(const CreateChatResponseBody &) = default ;
    CreateChatResponseBody& operator=(CreateChatResponseBody &&) = default ;
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
    inline const vector<CreateChatResponseBody::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<CreateChatResponseBody::Messages>) };
    inline vector<CreateChatResponseBody::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<CreateChatResponseBody::Messages>) };
    inline CreateChatResponseBody& setMessages(const vector<CreateChatResponseBody::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline CreateChatResponseBody& setMessages(vector<CreateChatResponseBody::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateChatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CreateChatResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<vector<CreateChatResponseBody::Messages>> messages_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
