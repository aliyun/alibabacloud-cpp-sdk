// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateEventsRequest() = default ;
    CreateEventsRequest(const CreateEventsRequest &) = default ;
    CreateEventsRequest(CreateEventsRequest &&) = default ;
    CreateEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventsRequest() = default ;
    CreateEventsRequest& operator=(const CreateEventsRequest &) = default ;
    CreateEventsRequest& operator=(CreateEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(events, events_);
        DARABONBA_PTR_TO_JSON(scope, scope_);
        DARABONBA_PTR_TO_JSON(session, session_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(events, events_);
        DARABONBA_PTR_FROM_JSON(scope, scope_);
        DARABONBA_PTR_FROM_JSON(session, session_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Session : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Session& obj) { 
          DARABONBA_PTR_TO_JSON(metadata, metadata_);
          DARABONBA_PTR_TO_JSON(title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Session& obj) { 
          DARABONBA_PTR_FROM_JSON(metadata, metadata_);
          DARABONBA_PTR_FROM_JSON(title, title_);
        };
        Session() = default ;
        Session(const Session &) = default ;
        Session(Session &&) = default ;
        Session(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Session() = default ;
        Session& operator=(const Session &) = default ;
        Session& operator=(Session &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->metadata_ == nullptr
        && this->title_ == nullptr; };
        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline const map<string, string> & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
        inline map<string, string> getMetadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
        inline Session& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
        inline Session& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Session& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // The JSON metadata of the session.
        shared_ptr<map<string, string>> metadata_ {};
        // The session title. It can be up to 256 characters in length.
        shared_ptr<string> title_ {};
      };

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

      class Events : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Events& obj) { 
          DARABONBA_PTR_TO_JSON(data, data_);
          DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Events& obj) { 
          DARABONBA_PTR_FROM_JSON(data, data_);
          DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Events() = default ;
        Events(const Events &) = default ;
        Events(Events &&) = default ;
        Events(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Events() = default ;
        Events& operator=(const Events &) = default ;
        Events& operator=(Events &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
            inline             const Darabonba::Json & getArguments() const { DARABONBA_GET(arguments_) };
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
            inline             const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
            Darabonba::Json & getValue() { DARABONBA_GET(value_) };
            inline Content& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
            inline Content& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


          protected:
            // The JSON parameter values. This field is required for tool_call blocks. Unparsed raw strings can be retained.
            Darabonba::Json arguments_ {};
            // The logical call ID. This field is required for tool_call blocks.
            shared_ptr<string> callId_ {};
            // The access format identifier. This field is required for opaque blocks. Saving the format does not mean that its content can be interpreted or used across platforms.
            shared_ptr<string> format_ {};
            // The tool name. This field is required for tool_call blocks. This content block only expresses the call intent.
            shared_ptr<string> name_ {};
            // The actual text. This field is required for text and reasoning blocks.
            shared_ptr<string> text_ {};
            // The content block type. This field determines the required fields.
            // 
            // This parameter is required.
            shared_ptr<string> type_ {};
            // The JSON value. This field is required for json and opaque blocks. The data field is not used for opaque blocks.
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
          // The call ID. This field is required for tool_call and tool_result events, or message events with the role set to tool. It associates the call intent, actual execution, and feedback.
          shared_ptr<string> callId_ {};
          // The ordered content blocks. This field is required for message and tool_result events. Use a text block for plain text. This can be an empty array if the tool has no output.
          shared_ptr<vector<Data::Content>> content_ {};
          // The list of visible event IDs referenced by the summary. This list cannot be empty.
          shared_ptr<vector<string>> eventIds_ {};
          // The anchor event ID of the parent session. This field is required for session_fork events. The child session continues from the valid context at this anchor and does not inherit interactions after the anchor.
          shared_ptr<string> parentEventId_ {};
          // The business scope of the parent session. This field is required for session_fork events. The event is written to the child session, and the requested scope is the child session.
          shared_ptr<Data::ParentScope> parentScope_ {};
          // The message role. This field is required for message events.
          shared_ptr<string> role_ {};
          // The human-readable summary. This field is optional for context_update events.
          shared_ptr<string> summary_ {};
        };

        virtual bool empty() const override { return this->data_ == nullptr
        && this->timestamp_ == nullptr && this->type_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const Events::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, Events::Data) };
        inline Events::Data getData() { DARABONBA_PTR_GET(data_, Events::Data) };
        inline Events& setData(const Events::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Events& setData(Events::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline Events& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Events& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The event-specific data. Use the corresponding fields based on the type. For conditional requirements, refer to the description of each field.
        // 
        // This parameter is required.
        shared_ptr<Events::Data> data_ {};
        // The actual occurrence time provided by the client as a Unix timestamp in milliseconds. This is the only source for business sorting. Identical values do not indicate a known sequence, and the array position does not imply a business order.
        // 
        // This parameter is required.
        shared_ptr<int64_t> timestamp_ {};
        // The event type. This determines the applicable fields and conditional requirements for the data.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->events_ == nullptr
        && this->scope_ == nullptr && this->session_ == nullptr; };
      // events Field Functions 
      bool hasEvents() const { return this->events_ != nullptr;};
      void deleteEvents() { this->events_ = nullptr;};
      inline const vector<Body::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<Body::Events>) };
      inline vector<Body::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<Body::Events>) };
      inline Body& setEvents(const vector<Body::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
      inline Body& setEvents(vector<Body::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline const Body::Scope & getScope() const { DARABONBA_PTR_GET_CONST(scope_, Body::Scope) };
      inline Body::Scope getScope() { DARABONBA_PTR_GET(scope_, Body::Scope) };
      inline Body& setScope(const Body::Scope & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
      inline Body& setScope(Body::Scope && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


      // session Field Functions 
      bool hasSession() const { return this->session_ != nullptr;};
      void deleteSession() { this->session_ = nullptr;};
      inline const Body::Session & getSession() const { DARABONBA_PTR_GET_CONST(session_, Body::Session) };
      inline Body::Session getSession() { DARABONBA_PTR_GET(session_, Body::Session) };
      inline Body& setSession(const Body::Session & session) { DARABONBA_PTR_SET_VALUE(session_, session) };
      inline Body& setSession(Body::Session && session) { DARABONBA_PTR_SET_RVALUE(session_, session) };


    protected:
      // A list of 1 to 100 events. The request body cannot exceed 1 MiB.
      // 
      // This parameter is required.
      shared_ptr<vector<Body::Events>> events_ {};
      // The exact session to which all events belong.
      // 
      // This parameter is required.
      shared_ptr<Body::Scope> scope_ {};
      // The information saved when the first event is successfully written. It is not overwritten by subsequent writes.
      shared_ptr<Body::Session> session_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateEventsRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateEventsRequest::Body) };
    inline CreateEventsRequest::Body getBody() { DARABONBA_PTR_GET(body_, CreateEventsRequest::Body) };
    inline CreateEventsRequest& setBody(const CreateEventsRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateEventsRequest& setBody(CreateEventsRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The JSON request body.
    // 
    // This parameter is required.
    shared_ptr<CreateEventsRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
