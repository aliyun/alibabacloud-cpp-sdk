// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListEventsResponseBody() = default ;
    ListEventsResponseBody(const ListEventsResponseBody &) = default ;
    ListEventsResponseBody(ListEventsResponseBody &&) = default ;
    ListEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsResponseBody() = default ;
    ListEventsResponseBody& operator=(const ListEventsResponseBody &) = default ;
    ListEventsResponseBody& operator=(ListEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(data, data_);
        DARABONBA_PTR_TO_JSON(eventId, eventId_);
        DARABONBA_PTR_TO_JSON(receivedAt, receivedAt_);
        DARABONBA_PTR_TO_JSON(scope, scope_);
        DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(data, data_);
        DARABONBA_PTR_FROM_JSON(eventId, eventId_);
        DARABONBA_PTR_FROM_JSON(receivedAt, receivedAt_);
        DARABONBA_PTR_FROM_JSON(scope, scope_);
        DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Scope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Scope& obj) { 
          DARABONBA_PTR_TO_JSON(agentId, agentId_);
          DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(teamId, teamId_);
          DARABONBA_PTR_TO_JSON(userId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Scope& obj) { 
          DARABONBA_PTR_FROM_JSON(agentId, agentId_);
          DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(teamId, teamId_);
          DARABONBA_PTR_FROM_JSON(userId, userId_);
        };
        Scope() = default ;
        Scope(const Scope &) = default ;
        Scope(Scope &&) = default ;
        Scope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Scope() = default ;
        Scope& operator=(const Scope &) = default ;
        Scope& operator=(Scope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->sessionId_ == nullptr && this->teamId_ == nullptr && this->userId_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline Scope& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline Scope& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // teamId Field Functions 
        bool hasTeamId() const { return this->teamId_ != nullptr;};
        void deleteTeamId() { this->teamId_ = nullptr;};
        inline string getTeamId() const { DARABONBA_PTR_GET_DEFAULT(teamId_, "") };
        inline Scope& setTeamId(string teamId) { DARABONBA_PTR_SET_VALUE(teamId_, teamId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Scope& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The business agent ID.
        shared_ptr<string> agentId_ {};
        // The exact session ID.
        // 
        // This parameter is required.
        shared_ptr<string> sessionId_ {};
        // The business team ID.
        shared_ptr<string> teamId_ {};
        // The business user ID. This is not the platform tenant identity.
        shared_ptr<string> userId_ {};
      };

      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(callId, callId_);
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(eventIds, eventIds_);
          DARABONBA_PTR_TO_JSON(parentEventId, parentEventId_);
          DARABONBA_PTR_TO_JSON(parentScope, parentScope_);
          DARABONBA_PTR_TO_JSON(role, role_);
          DARABONBA_PTR_TO_JSON(summary, summary_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(callId, callId_);
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(eventIds, eventIds_);
          DARABONBA_PTR_FROM_JSON(parentEventId, parentEventId_);
          DARABONBA_PTR_FROM_JSON(parentScope, parentScope_);
          DARABONBA_PTR_FROM_JSON(role, role_);
          DARABONBA_PTR_FROM_JSON(summary, summary_);
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
        class ParentScope : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ParentScope& obj) { 
            DARABONBA_PTR_TO_JSON(agentId, agentId_);
            DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
            DARABONBA_PTR_TO_JSON(teamId, teamId_);
            DARABONBA_PTR_TO_JSON(userId, userId_);
          };
          friend void from_json(const Darabonba::Json& j, ParentScope& obj) { 
            DARABONBA_PTR_FROM_JSON(agentId, agentId_);
            DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
            DARABONBA_PTR_FROM_JSON(teamId, teamId_);
            DARABONBA_PTR_FROM_JSON(userId, userId_);
          };
          ParentScope() = default ;
          ParentScope(const ParentScope &) = default ;
          ParentScope(ParentScope &&) = default ;
          ParentScope(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ParentScope() = default ;
          ParentScope& operator=(const ParentScope &) = default ;
          ParentScope& operator=(ParentScope &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->agentId_ == nullptr
        && this->sessionId_ == nullptr && this->teamId_ == nullptr && this->userId_ == nullptr; };
          // agentId Field Functions 
          bool hasAgentId() const { return this->agentId_ != nullptr;};
          void deleteAgentId() { this->agentId_ = nullptr;};
          inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
          inline ParentScope& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


          // sessionId Field Functions 
          bool hasSessionId() const { return this->sessionId_ != nullptr;};
          void deleteSessionId() { this->sessionId_ = nullptr;};
          inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
          inline ParentScope& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


          // teamId Field Functions 
          bool hasTeamId() const { return this->teamId_ != nullptr;};
          void deleteTeamId() { this->teamId_ = nullptr;};
          inline string getTeamId() const { DARABONBA_PTR_GET_DEFAULT(teamId_, "") };
          inline ParentScope& setTeamId(string teamId) { DARABONBA_PTR_SET_VALUE(teamId_, teamId) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline ParentScope& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          // The business agent ID.
          shared_ptr<string> agentId_ {};
          // The exact session ID.
          // 
          // This parameter is required.
          shared_ptr<string> sessionId_ {};
          // The business team ID.
          shared_ptr<string> teamId_ {};
          // The business user ID. This is not the platform tenant identity.
          shared_ptr<string> userId_ {};
        };

        class Content : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Content& obj) { 
            DARABONBA_ANY_TO_JSON(arguments, arguments_);
            DARABONBA_PTR_TO_JSON(callId, callId_);
            DARABONBA_PTR_TO_JSON(format, format_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(text, text_);
            DARABONBA_PTR_TO_JSON(type, type_);
            DARABONBA_ANY_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Content& obj) { 
            DARABONBA_ANY_FROM_JSON(arguments, arguments_);
            DARABONBA_PTR_FROM_JSON(callId, callId_);
            DARABONBA_PTR_FROM_JSON(format, format_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(text, text_);
            DARABONBA_PTR_FROM_JSON(type, type_);
            DARABONBA_ANY_FROM_JSON(value, value_);
          };
          Content() = default ;
          Content(const Content &) = default ;
          Content(Content &&) = default ;
          Content(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Content() = default ;
          Content& operator=(const Content &) = default ;
          Content& operator=(Content &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->arguments_ == nullptr
        && this->callId_ == nullptr && this->format_ == nullptr && this->name_ == nullptr && this->text_ == nullptr && this->type_ == nullptr
        && this->value_ == nullptr; };
          // arguments Field Functions 
          bool hasArguments() const { return this->arguments_ != nullptr;};
          void deleteArguments() { this->arguments_ = nullptr;};
          inline           const Darabonba::Json & getArguments() const { DARABONBA_GET(arguments_) };
          Darabonba::Json & getArguments() { DARABONBA_GET(arguments_) };
          inline Content& setArguments(const Darabonba::Json & arguments) { DARABONBA_SET_VALUE(arguments_, arguments) };
          inline Content& setArguments(Darabonba::Json && arguments) { DARABONBA_SET_RVALUE(arguments_, arguments) };


          // callId Field Functions 
          bool hasCallId() const { return this->callId_ != nullptr;};
          void deleteCallId() { this->callId_ = nullptr;};
          inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
          inline Content& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


          // format Field Functions 
          bool hasFormat() const { return this->format_ != nullptr;};
          void deleteFormat() { this->format_ = nullptr;};
          inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
          inline Content& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Content& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline Content& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Content& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline           const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
          Darabonba::Json & getValue() { DARABONBA_GET(value_) };
          inline Content& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
          inline Content& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


        protected:
          // The JSON parameter values, which are required for tool_call blocks. Unparsed raw strings can be retained.
          Darabonba::Json arguments_ {};
          // The logical call ID, which is required for tool_call blocks.
          shared_ptr<string> callId_ {};
          // The access format identifier, which is required for opaque blocks. Saving the format does not mean its content can be interpreted or used across platforms.
          shared_ptr<string> format_ {};
          // The tool name, which is required for tool_call blocks. This content block only expresses the call intent.
          shared_ptr<string> name_ {};
          // The actual text, which is required for text and reasoning blocks.
          shared_ptr<string> text_ {};
          // The content block type. This field determines the required fields.
          // 
          // This parameter is required.
          shared_ptr<string> type_ {};
          // The JSON value, which is required for json and opaque blocks. The data field is not used for opaque blocks.
          Darabonba::Json value_ {};
        };

        virtual bool empty() const override { return this->callId_ == nullptr
        && this->content_ == nullptr && this->eventIds_ == nullptr && this->parentEventId_ == nullptr && this->parentScope_ == nullptr && this->role_ == nullptr
        && this->summary_ == nullptr; };
        // callId Field Functions 
        bool hasCallId() const { return this->callId_ != nullptr;};
        void deleteCallId() { this->callId_ = nullptr;};
        inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
        inline Data& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
        inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
        inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
        inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


        // eventIds Field Functions 
        bool hasEventIds() const { return this->eventIds_ != nullptr;};
        void deleteEventIds() { this->eventIds_ = nullptr;};
        inline const vector<string> & getEventIds() const { DARABONBA_PTR_GET_CONST(eventIds_, vector<string>) };
        inline vector<string> getEventIds() { DARABONBA_PTR_GET(eventIds_, vector<string>) };
        inline Data& setEventIds(const vector<string> & eventIds) { DARABONBA_PTR_SET_VALUE(eventIds_, eventIds) };
        inline Data& setEventIds(vector<string> && eventIds) { DARABONBA_PTR_SET_RVALUE(eventIds_, eventIds) };


        // parentEventId Field Functions 
        bool hasParentEventId() const { return this->parentEventId_ != nullptr;};
        void deleteParentEventId() { this->parentEventId_ = nullptr;};
        inline string getParentEventId() const { DARABONBA_PTR_GET_DEFAULT(parentEventId_, "") };
        inline Data& setParentEventId(string parentEventId) { DARABONBA_PTR_SET_VALUE(parentEventId_, parentEventId) };


        // parentScope Field Functions 
        bool hasParentScope() const { return this->parentScope_ != nullptr;};
        void deleteParentScope() { this->parentScope_ = nullptr;};
        inline const Data::ParentScope & getParentScope() const { DARABONBA_PTR_GET_CONST(parentScope_, Data::ParentScope) };
        inline Data::ParentScope getParentScope() { DARABONBA_PTR_GET(parentScope_, Data::ParentScope) };
        inline Data& setParentScope(const Data::ParentScope & parentScope) { DARABONBA_PTR_SET_VALUE(parentScope_, parentScope) };
        inline Data& setParentScope(Data::ParentScope && parentScope) { DARABONBA_PTR_SET_RVALUE(parentScope_, parentScope) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Data& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline Data& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      protected:
        // The call ID, which is required for tool_call, tool_result, or messages with role=tool. It associates the call intent, actual execution, and feedback.
        shared_ptr<string> callId_ {};
        // The ordered content blocks, which are required for message and tool_result events. Use a text block for plain text. This can be an empty array if the tool has no output.
        shared_ptr<vector<Data::Content>> content_ {};
        // The list of visible event IDs referenced by the summary. This list cannot be empty.
        shared_ptr<vector<string>> eventIds_ {};
        // The parent session anchor, which is required for session_fork events. The child session continues from the valid context at this anchor and does not inherit interactions after the anchor.
        shared_ptr<string> parentEventId_ {};
        // The business positioning of the parent session, which is required for session_fork events. The event is written to the child session, and the requested scope is the child session.
        shared_ptr<Data::ParentScope> parentScope_ {};
        // The message role, which is required for message events.
        shared_ptr<string> role_ {};
        // The readable summary, which is optional for context_update events.
        shared_ptr<string> summary_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->eventId_ == nullptr && this->receivedAt_ == nullptr && this->scope_ == nullptr && this->timestamp_ == nullptr && this->type_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const Items::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, Items::Data) };
      inline Items::Data getData() { DARABONBA_PTR_GET(data_, Items::Data) };
      inline Items& setData(const Items::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Items& setData(Items::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline Items& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // receivedAt Field Functions 
      bool hasReceivedAt() const { return this->receivedAt_ != nullptr;};
      void deleteReceivedAt() { this->receivedAt_ = nullptr;};
      inline int64_t getReceivedAt() const { DARABONBA_PTR_GET_DEFAULT(receivedAt_, 0L) };
      inline Items& setReceivedAt(int64_t receivedAt) { DARABONBA_PTR_SET_VALUE(receivedAt_, receivedAt) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline const Items::Scope & getScope() const { DARABONBA_PTR_GET_CONST(scope_, Items::Scope) };
      inline Items::Scope getScope() { DARABONBA_PTR_GET(scope_, Items::Scope) };
      inline Items& setScope(const Items::Scope & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
      inline Items& setScope(Items::Scope && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Items& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Items& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The event-specific data. Use the corresponding fields based on the type. For conditional requirements, refer to the description of each field.
      // 
      // This parameter is required.
      shared_ptr<Items::Data> data_ {};
      // The stable event ID generated by the server. It is used for referencing, locating, and deleting events. It does not represent the business sequence, and no separate messageId is provided.
      // 
      // This parameter is required.
      shared_ptr<string> eventId_ {};
      // The time when the event reaches the server, in Unix milliseconds. It is used for asynchronous processing and not for historical business sorting.
      // 
      // This parameter is required.
      shared_ptr<int64_t> receivedAt_ {};
      // The session to which the event belongs.
      // 
      // This parameter is required.
      shared_ptr<Items::Scope> scope_ {};
      // The actual occurrence time provided by the client, in Unix milliseconds. This is the only source for business sorting. Identical values do not indicate a known sequence, and the array position does not imply a business sequence.
      // 
      // This parameter is required.
      shared_ptr<int64_t> timestamp_ {};
      // The event type. This determines the applicable fields and conditional requirements for the data.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListEventsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListEventsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListEventsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListEventsResponseBody::Items>) };
    inline vector<ListEventsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListEventsResponseBody::Items>) };
    inline ListEventsResponseBody& setItems(const vector<ListEventsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListEventsResponseBody& setItems(vector<ListEventsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEventsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEventsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEventsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListEventsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The business result code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The results on the current page.
    shared_ptr<vector<ListEventsResponseBody::Items>> items_ {};
    // The maximum number of entries per page used in the current request.
    shared_ptr<int32_t> maxResults_ {};
    // The request processing message.
    shared_ptr<string> message_ {};
    // The next page token. An empty value indicates that all data has been read.
    shared_ptr<string> nextToken_ {};
    // The request ID used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. For batch operations, you must still check the result of each item.
    shared_ptr<bool> success_ {};
    // The total number of records. This field is empty if the exact total count is not provided.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
