// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNODEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetNodeDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(agentWorkProcess, agentWorkProcess_);
      DARABONBA_PTR_TO_JSON(artifacts, artifacts_);
      DARABONBA_PTR_TO_JSON(attemptSeq, attemptSeq_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(conversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(conversationWritable, conversationWritable_);
      DARABONBA_PTR_TO_JSON(handler, handler_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(nodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_ANY_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(resumePending, resumePending_);
      DARABONBA_PTR_TO_JSON(runLog, runLog_);
      DARABONBA_PTR_TO_JSON(stateVersion, stateVersion_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(todoIds, todoIds_);
      DARABONBA_PTR_TO_JSON(turnSeq, turnSeq_);
      DARABONBA_PTR_TO_JSON(waitType, waitType_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(agentWorkProcess, agentWorkProcess_);
      DARABONBA_PTR_FROM_JSON(artifacts, artifacts_);
      DARABONBA_PTR_FROM_JSON(attemptSeq, attemptSeq_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(conversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(conversationWritable, conversationWritable_);
      DARABONBA_PTR_FROM_JSON(handler, handler_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(nodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_ANY_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(resumePending, resumePending_);
      DARABONBA_PTR_FROM_JSON(runLog, runLog_);
      DARABONBA_PTR_FROM_JSON(stateVersion, stateVersion_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(todoIds, todoIds_);
      DARABONBA_PTR_FROM_JSON(turnSeq, turnSeq_);
      DARABONBA_PTR_FROM_JSON(waitType, waitType_);
    };
    GetNodeDetailResponseBody() = default ;
    GetNodeDetailResponseBody(const GetNodeDetailResponseBody &) = default ;
    GetNodeDetailResponseBody(GetNodeDetailResponseBody &&) = default ;
    GetNodeDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeDetailResponseBody() = default ;
    GetNodeDetailResponseBody& operator=(const GetNodeDetailResponseBody &) = default ;
    GetNodeDetailResponseBody& operator=(GetNodeDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RunLog : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RunLog& obj) { 
        DARABONBA_PTR_TO_JSON(action, action_);
        DARABONBA_PTR_TO_JSON(detail, detail_);
        DARABONBA_PTR_TO_JSON(duration, duration_);
        DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, RunLog& obj) { 
        DARABONBA_PTR_FROM_JSON(action, action_);
        DARABONBA_PTR_FROM_JSON(detail, detail_);
        DARABONBA_PTR_FROM_JSON(duration, duration_);
        DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      };
      RunLog() = default ;
      RunLog(const RunLog &) = default ;
      RunLog(RunLog &&) = default ;
      RunLog(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RunLog() = default ;
      RunLog& operator=(const RunLog &) = default ;
      RunLog& operator=(RunLog &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->detail_ == nullptr && this->duration_ == nullptr && this->nodeId_ == nullptr && this->timestamp_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline RunLog& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline RunLog& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline RunLog& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline RunLog& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline RunLog& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The record type. Valid values: THINK, REPLY, TOOL_CALL, SKILL_CALL, or ARTIFACT.
      shared_ptr<string> action_ {};
      // The saved original record content. Tool invocation and artifact metadata are JSON strings.
      shared_ptr<string> detail_ {};
      // The time taken for this work record, in milliseconds. The value is 0 for artifact records.
      shared_ptr<int64_t> duration_ {};
      // The key of the parent node, not the conversation ID.
      shared_ptr<string> nodeId_ {};
      // The time when the event is recorded, in ISO-8601 format. This is an empty string if the source record has no time.
      shared_ptr<string> timestamp_ {};
    };

    class Artifacts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Artifacts& obj) { 
        DARABONBA_PTR_TO_JSON(artifactId, artifactId_);
        DARABONBA_PTR_TO_JSON(artifactKey, artifactKey_);
        DARABONBA_PTR_TO_JSON(ref, ref_);
        DARABONBA_PTR_TO_JSON(summary, summary_);
        DARABONBA_PTR_TO_JSON(title, title_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Artifacts& obj) { 
        DARABONBA_PTR_FROM_JSON(artifactId, artifactId_);
        DARABONBA_PTR_FROM_JSON(artifactKey, artifactKey_);
        DARABONBA_PTR_FROM_JSON(ref, ref_);
        DARABONBA_PTR_FROM_JSON(summary, summary_);
        DARABONBA_PTR_FROM_JSON(title, title_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Artifacts() = default ;
      Artifacts(const Artifacts &) = default ;
      Artifacts(Artifacts &&) = default ;
      Artifacts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Artifacts() = default ;
      Artifacts& operator=(const Artifacts &) = default ;
      Artifacts& operator=(Artifacts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->artifactId_ == nullptr
        && this->artifactKey_ == nullptr && this->ref_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
      // artifactId Field Functions 
      bool hasArtifactId() const { return this->artifactId_ != nullptr;};
      void deleteArtifactId() { this->artifactId_ = nullptr;};
      inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
      inline Artifacts& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


      // artifactKey Field Functions 
      bool hasArtifactKey() const { return this->artifactKey_ != nullptr;};
      void deleteArtifactKey() { this->artifactKey_ = nullptr;};
      inline string getArtifactKey() const { DARABONBA_PTR_GET_DEFAULT(artifactKey_, "") };
      inline Artifacts& setArtifactKey(string artifactKey) { DARABONBA_PTR_SET_VALUE(artifactKey_, artifactKey) };


      // ref Field Functions 
      bool hasRef() const { return this->ref_ != nullptr;};
      void deleteRef() { this->ref_ = nullptr;};
      inline const map<string, string> & getRef() const { DARABONBA_PTR_GET_CONST(ref_, map<string, string>) };
      inline map<string, string> getRef() { DARABONBA_PTR_GET(ref_, map<string, string>) };
      inline Artifacts& setRef(const map<string, string> & ref) { DARABONBA_PTR_SET_VALUE(ref_, ref) };
      inline Artifacts& setRef(map<string, string> && ref) { DARABONBA_PTR_SET_RVALUE(ref_, ref) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Artifacts& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Artifacts& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Artifacts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The registered artifact ID. This parameter may be empty for artifacts derived only from the result summary.
      shared_ptr<string> artifactId_ {};
      // The unique key of the artifact in the node result.
      shared_ptr<string> artifactKey_ {};
      // The stable reference of the artifact, including kind, id, and url. The URL of a registered artifact is a re-authentication entry point and can be empty.
      shared_ptr<map<string, string>> ref_ {};
      // The artifact summary, excluding inline content.
      shared_ptr<string> summary_ {};
      // The display title of the artifact.
      shared_ptr<string> title_ {};
      // The artifact type.
      shared_ptr<string> type_ {};
    };

    class AgentWorkProcess : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgentWorkProcess& obj) { 
        DARABONBA_PTR_TO_JSON(artifacts, artifacts_);
        DARABONBA_PTR_TO_JSON(replies, replies_);
        DARABONBA_PTR_TO_JSON(skillCalls, skillCalls_);
        DARABONBA_PTR_TO_JSON(thoughts, thoughts_);
        DARABONBA_PTR_TO_JSON(toolCalls, toolCalls_);
      };
      friend void from_json(const Darabonba::Json& j, AgentWorkProcess& obj) { 
        DARABONBA_PTR_FROM_JSON(artifacts, artifacts_);
        DARABONBA_PTR_FROM_JSON(replies, replies_);
        DARABONBA_PTR_FROM_JSON(skillCalls, skillCalls_);
        DARABONBA_PTR_FROM_JSON(thoughts, thoughts_);
        DARABONBA_PTR_FROM_JSON(toolCalls, toolCalls_);
      };
      AgentWorkProcess() = default ;
      AgentWorkProcess(const AgentWorkProcess &) = default ;
      AgentWorkProcess(AgentWorkProcess &&) = default ;
      AgentWorkProcess(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgentWorkProcess() = default ;
      AgentWorkProcess& operator=(const AgentWorkProcess &) = default ;
      AgentWorkProcess& operator=(AgentWorkProcess &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ToolCalls : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ToolCalls& obj) { 
          DARABONBA_PTR_TO_JSON(action, action_);
          DARABONBA_PTR_TO_JSON(detail, detail_);
          DARABONBA_PTR_TO_JSON(duration, duration_);
          DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, ToolCalls& obj) { 
          DARABONBA_PTR_FROM_JSON(action, action_);
          DARABONBA_PTR_FROM_JSON(detail, detail_);
          DARABONBA_PTR_FROM_JSON(duration, duration_);
          DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
        };
        ToolCalls() = default ;
        ToolCalls(const ToolCalls &) = default ;
        ToolCalls(ToolCalls &&) = default ;
        ToolCalls(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ToolCalls() = default ;
        ToolCalls& operator=(const ToolCalls &) = default ;
        ToolCalls& operator=(ToolCalls &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->detail_ == nullptr && this->duration_ == nullptr && this->nodeId_ == nullptr && this->timestamp_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline ToolCalls& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
        inline ToolCalls& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline ToolCalls& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline ToolCalls& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline ToolCalls& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        // The record type. Valid values: THINK, REPLY, TOOL_CALL, SKILL_CALL, or ARTIFACT.
        shared_ptr<string> action_ {};
        // The saved original record content. Tool invocation and artifact metadata are JSON strings.
        shared_ptr<string> detail_ {};
        // The time taken for this work record, in milliseconds. The value is 0 for artifact records.
        shared_ptr<int64_t> duration_ {};
        // The key of the parent node, not the conversation ID.
        shared_ptr<string> nodeId_ {};
        // The time when the event is recorded, in ISO-8601 format. This is an empty string if the source record has no time.
        shared_ptr<string> timestamp_ {};
      };

      class Thoughts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Thoughts& obj) { 
          DARABONBA_PTR_TO_JSON(action, action_);
          DARABONBA_PTR_TO_JSON(detail, detail_);
          DARABONBA_PTR_TO_JSON(duration, duration_);
          DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Thoughts& obj) { 
          DARABONBA_PTR_FROM_JSON(action, action_);
          DARABONBA_PTR_FROM_JSON(detail, detail_);
          DARABONBA_PTR_FROM_JSON(duration, duration_);
          DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
        };
        Thoughts() = default ;
        Thoughts(const Thoughts &) = default ;
        Thoughts(Thoughts &&) = default ;
        Thoughts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Thoughts() = default ;
        Thoughts& operator=(const Thoughts &) = default ;
        Thoughts& operator=(Thoughts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->detail_ == nullptr && this->duration_ == nullptr && this->nodeId_ == nullptr && this->timestamp_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline Thoughts& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
        inline Thoughts& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline Thoughts& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline Thoughts& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline Thoughts& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        // The record type. Valid values: THINK, REPLY, TOOL_CALL, SKILL_CALL, or ARTIFACT.
        shared_ptr<string> action_ {};
        // The saved original record content. Tool invocation and artifact metadata are JSON strings.
        shared_ptr<string> detail_ {};
        // The time taken for this work record, in milliseconds. The value is 0 for artifact records.
        shared_ptr<int64_t> duration_ {};
        // The key of the parent node, not the conversation ID.
        shared_ptr<string> nodeId_ {};
        // The time when the event is recorded, in ISO-8601 format. This is an empty string if the source record has no time.
        shared_ptr<string> timestamp_ {};
      };

      class SkillCalls : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SkillCalls& obj) { 
          DARABONBA_PTR_TO_JSON(action, action_);
          DARABONBA_PTR_TO_JSON(detail, detail_);
          DARABONBA_PTR_TO_JSON(duration, duration_);
          DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, SkillCalls& obj) { 
          DARABONBA_PTR_FROM_JSON(action, action_);
          DARABONBA_PTR_FROM_JSON(detail, detail_);
          DARABONBA_PTR_FROM_JSON(duration, duration_);
          DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
        };
        SkillCalls() = default ;
        SkillCalls(const SkillCalls &) = default ;
        SkillCalls(SkillCalls &&) = default ;
        SkillCalls(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SkillCalls() = default ;
        SkillCalls& operator=(const SkillCalls &) = default ;
        SkillCalls& operator=(SkillCalls &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->detail_ == nullptr && this->duration_ == nullptr && this->nodeId_ == nullptr && this->timestamp_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline SkillCalls& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
        inline SkillCalls& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline SkillCalls& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline SkillCalls& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline SkillCalls& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        // The record type. Valid values: THINK, REPLY, TOOL_CALL, SKILL_CALL, or ARTIFACT.
        shared_ptr<string> action_ {};
        // The saved original record content. Tool invocation and artifact metadata are JSON strings.
        shared_ptr<string> detail_ {};
        // The time taken for this work record, in milliseconds. The value is 0 for artifact records.
        shared_ptr<int64_t> duration_ {};
        // The key of the parent node, not the conversation ID.
        shared_ptr<string> nodeId_ {};
        // The time when the event is recorded, in ISO-8601 format. This is an empty string if the source record has no time.
        shared_ptr<string> timestamp_ {};
      };

      class Replies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Replies& obj) { 
          DARABONBA_PTR_TO_JSON(action, action_);
          DARABONBA_PTR_TO_JSON(detail, detail_);
          DARABONBA_PTR_TO_JSON(duration, duration_);
          DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Replies& obj) { 
          DARABONBA_PTR_FROM_JSON(action, action_);
          DARABONBA_PTR_FROM_JSON(detail, detail_);
          DARABONBA_PTR_FROM_JSON(duration, duration_);
          DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
        };
        Replies() = default ;
        Replies(const Replies &) = default ;
        Replies(Replies &&) = default ;
        Replies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Replies() = default ;
        Replies& operator=(const Replies &) = default ;
        Replies& operator=(Replies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->detail_ == nullptr && this->duration_ == nullptr && this->nodeId_ == nullptr && this->timestamp_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline Replies& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
        inline Replies& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline Replies& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline Replies& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline Replies& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        // The record type. Valid values: THINK, REPLY, TOOL_CALL, SKILL_CALL, or ARTIFACT.
        shared_ptr<string> action_ {};
        // The saved original record content. Tool invocation and artifact metadata are JSON strings.
        shared_ptr<string> detail_ {};
        // The time taken for this work record, in milliseconds. The value is 0 for artifact records.
        shared_ptr<int64_t> duration_ {};
        // The key of the parent node, not the conversation ID.
        shared_ptr<string> nodeId_ {};
        // The time when the event is recorded, in ISO-8601 format. This is an empty string if the source record has no time.
        shared_ptr<string> timestamp_ {};
      };

      class Artifacts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Artifacts& obj) { 
          DARABONBA_PTR_TO_JSON(artifactId, artifactId_);
          DARABONBA_PTR_TO_JSON(artifactKey, artifactKey_);
          DARABONBA_PTR_TO_JSON(ref, ref_);
          DARABONBA_PTR_TO_JSON(summary, summary_);
          DARABONBA_PTR_TO_JSON(title, title_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Artifacts& obj) { 
          DARABONBA_PTR_FROM_JSON(artifactId, artifactId_);
          DARABONBA_PTR_FROM_JSON(artifactKey, artifactKey_);
          DARABONBA_PTR_FROM_JSON(ref, ref_);
          DARABONBA_PTR_FROM_JSON(summary, summary_);
          DARABONBA_PTR_FROM_JSON(title, title_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Artifacts() = default ;
        Artifacts(const Artifacts &) = default ;
        Artifacts(Artifacts &&) = default ;
        Artifacts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Artifacts() = default ;
        Artifacts& operator=(const Artifacts &) = default ;
        Artifacts& operator=(Artifacts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->artifactId_ == nullptr
        && this->artifactKey_ == nullptr && this->ref_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
        // artifactId Field Functions 
        bool hasArtifactId() const { return this->artifactId_ != nullptr;};
        void deleteArtifactId() { this->artifactId_ = nullptr;};
        inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
        inline Artifacts& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


        // artifactKey Field Functions 
        bool hasArtifactKey() const { return this->artifactKey_ != nullptr;};
        void deleteArtifactKey() { this->artifactKey_ = nullptr;};
        inline string getArtifactKey() const { DARABONBA_PTR_GET_DEFAULT(artifactKey_, "") };
        inline Artifacts& setArtifactKey(string artifactKey) { DARABONBA_PTR_SET_VALUE(artifactKey_, artifactKey) };


        // ref Field Functions 
        bool hasRef() const { return this->ref_ != nullptr;};
        void deleteRef() { this->ref_ = nullptr;};
        inline const map<string, string> & getRef() const { DARABONBA_PTR_GET_CONST(ref_, map<string, string>) };
        inline map<string, string> getRef() { DARABONBA_PTR_GET(ref_, map<string, string>) };
        inline Artifacts& setRef(const map<string, string> & ref) { DARABONBA_PTR_SET_VALUE(ref_, ref) };
        inline Artifacts& setRef(map<string, string> && ref) { DARABONBA_PTR_SET_RVALUE(ref_, ref) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline Artifacts& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Artifacts& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Artifacts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The registered artifact ID. This parameter may be empty for artifacts derived only from the result summary.
        shared_ptr<string> artifactId_ {};
        // The unique key of the artifact in the node result.
        shared_ptr<string> artifactKey_ {};
        // The stable reference of the artifact, including kind, id, and url. The URL of a registered artifact is a re-authentication entry point and can be empty.
        shared_ptr<map<string, string>> ref_ {};
        // The artifact summary, excluding inline content.
        shared_ptr<string> summary_ {};
        // The display title of the artifact.
        shared_ptr<string> title_ {};
        // The artifact type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->artifacts_ == nullptr
        && this->replies_ == nullptr && this->skillCalls_ == nullptr && this->thoughts_ == nullptr && this->toolCalls_ == nullptr; };
      // artifacts Field Functions 
      bool hasArtifacts() const { return this->artifacts_ != nullptr;};
      void deleteArtifacts() { this->artifacts_ = nullptr;};
      inline const vector<AgentWorkProcess::Artifacts> & getArtifacts() const { DARABONBA_PTR_GET_CONST(artifacts_, vector<AgentWorkProcess::Artifacts>) };
      inline vector<AgentWorkProcess::Artifacts> getArtifacts() { DARABONBA_PTR_GET(artifacts_, vector<AgentWorkProcess::Artifacts>) };
      inline AgentWorkProcess& setArtifacts(const vector<AgentWorkProcess::Artifacts> & artifacts) { DARABONBA_PTR_SET_VALUE(artifacts_, artifacts) };
      inline AgentWorkProcess& setArtifacts(vector<AgentWorkProcess::Artifacts> && artifacts) { DARABONBA_PTR_SET_RVALUE(artifacts_, artifacts) };


      // replies Field Functions 
      bool hasReplies() const { return this->replies_ != nullptr;};
      void deleteReplies() { this->replies_ = nullptr;};
      inline const vector<AgentWorkProcess::Replies> & getReplies() const { DARABONBA_PTR_GET_CONST(replies_, vector<AgentWorkProcess::Replies>) };
      inline vector<AgentWorkProcess::Replies> getReplies() { DARABONBA_PTR_GET(replies_, vector<AgentWorkProcess::Replies>) };
      inline AgentWorkProcess& setReplies(const vector<AgentWorkProcess::Replies> & replies) { DARABONBA_PTR_SET_VALUE(replies_, replies) };
      inline AgentWorkProcess& setReplies(vector<AgentWorkProcess::Replies> && replies) { DARABONBA_PTR_SET_RVALUE(replies_, replies) };


      // skillCalls Field Functions 
      bool hasSkillCalls() const { return this->skillCalls_ != nullptr;};
      void deleteSkillCalls() { this->skillCalls_ = nullptr;};
      inline const vector<AgentWorkProcess::SkillCalls> & getSkillCalls() const { DARABONBA_PTR_GET_CONST(skillCalls_, vector<AgentWorkProcess::SkillCalls>) };
      inline vector<AgentWorkProcess::SkillCalls> getSkillCalls() { DARABONBA_PTR_GET(skillCalls_, vector<AgentWorkProcess::SkillCalls>) };
      inline AgentWorkProcess& setSkillCalls(const vector<AgentWorkProcess::SkillCalls> & skillCalls) { DARABONBA_PTR_SET_VALUE(skillCalls_, skillCalls) };
      inline AgentWorkProcess& setSkillCalls(vector<AgentWorkProcess::SkillCalls> && skillCalls) { DARABONBA_PTR_SET_RVALUE(skillCalls_, skillCalls) };


      // thoughts Field Functions 
      bool hasThoughts() const { return this->thoughts_ != nullptr;};
      void deleteThoughts() { this->thoughts_ = nullptr;};
      inline const vector<AgentWorkProcess::Thoughts> & getThoughts() const { DARABONBA_PTR_GET_CONST(thoughts_, vector<AgentWorkProcess::Thoughts>) };
      inline vector<AgentWorkProcess::Thoughts> getThoughts() { DARABONBA_PTR_GET(thoughts_, vector<AgentWorkProcess::Thoughts>) };
      inline AgentWorkProcess& setThoughts(const vector<AgentWorkProcess::Thoughts> & thoughts) { DARABONBA_PTR_SET_VALUE(thoughts_, thoughts) };
      inline AgentWorkProcess& setThoughts(vector<AgentWorkProcess::Thoughts> && thoughts) { DARABONBA_PTR_SET_RVALUE(thoughts_, thoughts) };


      // toolCalls Field Functions 
      bool hasToolCalls() const { return this->toolCalls_ != nullptr;};
      void deleteToolCalls() { this->toolCalls_ = nullptr;};
      inline const vector<AgentWorkProcess::ToolCalls> & getToolCalls() const { DARABONBA_PTR_GET_CONST(toolCalls_, vector<AgentWorkProcess::ToolCalls>) };
      inline vector<AgentWorkProcess::ToolCalls> getToolCalls() { DARABONBA_PTR_GET(toolCalls_, vector<AgentWorkProcess::ToolCalls>) };
      inline AgentWorkProcess& setToolCalls(const vector<AgentWorkProcess::ToolCalls> & toolCalls) { DARABONBA_PTR_SET_VALUE(toolCalls_, toolCalls) };
      inline AgentWorkProcess& setToolCalls(vector<AgentWorkProcess::ToolCalls> && toolCalls) { DARABONBA_PTR_SET_RVALUE(toolCalls_, toolCalls) };


    protected:
      // The artifacts: saved node work records and artifacts.
      shared_ptr<vector<AgentWorkProcess::Artifacts>> artifacts_ {};
      // The replies: saved node work records and artifacts.
      shared_ptr<vector<AgentWorkProcess::Replies>> replies_ {};
      // The skill calls: saved node work records and artifacts.
      shared_ptr<vector<AgentWorkProcess::SkillCalls>> skillCalls_ {};
      // The thoughts: saved node work records and artifacts.
      shared_ptr<vector<AgentWorkProcess::Thoughts>> thoughts_ {};
      // The tool calls: saved node work records and artifacts.
      shared_ptr<vector<AgentWorkProcess::ToolCalls>> toolCalls_ {};
    };

    virtual bool empty() const override { return this->agentWorkProcess_ == nullptr
        && this->artifacts_ == nullptr && this->attemptSeq_ == nullptr && this->code_ == nullptr && this->conversationId_ == nullptr && this->conversationWritable_ == nullptr
        && this->handler_ == nullptr && this->message_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->nodeType_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->resumePending_ == nullptr && this->runLog_ == nullptr && this->stateVersion_ == nullptr
        && this->status_ == nullptr && this->todoIds_ == nullptr && this->turnSeq_ == nullptr && this->waitType_ == nullptr; };
    // agentWorkProcess Field Functions 
    bool hasAgentWorkProcess() const { return this->agentWorkProcess_ != nullptr;};
    void deleteAgentWorkProcess() { this->agentWorkProcess_ = nullptr;};
    inline const GetNodeDetailResponseBody::AgentWorkProcess & getAgentWorkProcess() const { DARABONBA_PTR_GET_CONST(agentWorkProcess_, GetNodeDetailResponseBody::AgentWorkProcess) };
    inline GetNodeDetailResponseBody::AgentWorkProcess getAgentWorkProcess() { DARABONBA_PTR_GET(agentWorkProcess_, GetNodeDetailResponseBody::AgentWorkProcess) };
    inline GetNodeDetailResponseBody& setAgentWorkProcess(const GetNodeDetailResponseBody::AgentWorkProcess & agentWorkProcess) { DARABONBA_PTR_SET_VALUE(agentWorkProcess_, agentWorkProcess) };
    inline GetNodeDetailResponseBody& setAgentWorkProcess(GetNodeDetailResponseBody::AgentWorkProcess && agentWorkProcess) { DARABONBA_PTR_SET_RVALUE(agentWorkProcess_, agentWorkProcess) };


    // artifacts Field Functions 
    bool hasArtifacts() const { return this->artifacts_ != nullptr;};
    void deleteArtifacts() { this->artifacts_ = nullptr;};
    inline const vector<GetNodeDetailResponseBody::Artifacts> & getArtifacts() const { DARABONBA_PTR_GET_CONST(artifacts_, vector<GetNodeDetailResponseBody::Artifacts>) };
    inline vector<GetNodeDetailResponseBody::Artifacts> getArtifacts() { DARABONBA_PTR_GET(artifacts_, vector<GetNodeDetailResponseBody::Artifacts>) };
    inline GetNodeDetailResponseBody& setArtifacts(const vector<GetNodeDetailResponseBody::Artifacts> & artifacts) { DARABONBA_PTR_SET_VALUE(artifacts_, artifacts) };
    inline GetNodeDetailResponseBody& setArtifacts(vector<GetNodeDetailResponseBody::Artifacts> && artifacts) { DARABONBA_PTR_SET_RVALUE(artifacts_, artifacts) };


    // attemptSeq Field Functions 
    bool hasAttemptSeq() const { return this->attemptSeq_ != nullptr;};
    void deleteAttemptSeq() { this->attemptSeq_ = nullptr;};
    inline int64_t getAttemptSeq() const { DARABONBA_PTR_GET_DEFAULT(attemptSeq_, 0L) };
    inline GetNodeDetailResponseBody& setAttemptSeq(int64_t attemptSeq) { DARABONBA_PTR_SET_VALUE(attemptSeq_, attemptSeq) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetNodeDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline GetNodeDetailResponseBody& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // conversationWritable Field Functions 
    bool hasConversationWritable() const { return this->conversationWritable_ != nullptr;};
    void deleteConversationWritable() { this->conversationWritable_ = nullptr;};
    inline bool getConversationWritable() const { DARABONBA_PTR_GET_DEFAULT(conversationWritable_, false) };
    inline GetNodeDetailResponseBody& setConversationWritable(bool conversationWritable) { DARABONBA_PTR_SET_VALUE(conversationWritable_, conversationWritable) };


    // handler Field Functions 
    bool hasHandler() const { return this->handler_ != nullptr;};
    void deleteHandler() { this->handler_ = nullptr;};
    inline string getHandler() const { DARABONBA_PTR_GET_DEFAULT(handler_, "") };
    inline GetNodeDetailResponseBody& setHandler(string handler) { DARABONBA_PTR_SET_VALUE(handler_, handler) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetNodeDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetNodeDetailResponseBody& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetNodeDetailResponseBody& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline GetNodeDetailResponseBody& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNodeDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline     const Darabonba::Json & getResult() const { DARABONBA_GET(result_) };
    Darabonba::Json & getResult() { DARABONBA_GET(result_) };
    inline GetNodeDetailResponseBody& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
    inline GetNodeDetailResponseBody& setResult(Darabonba::Json && result) { DARABONBA_SET_RVALUE(result_, result) };


    // resumePending Field Functions 
    bool hasResumePending() const { return this->resumePending_ != nullptr;};
    void deleteResumePending() { this->resumePending_ = nullptr;};
    inline bool getResumePending() const { DARABONBA_PTR_GET_DEFAULT(resumePending_, false) };
    inline GetNodeDetailResponseBody& setResumePending(bool resumePending) { DARABONBA_PTR_SET_VALUE(resumePending_, resumePending) };


    // runLog Field Functions 
    bool hasRunLog() const { return this->runLog_ != nullptr;};
    void deleteRunLog() { this->runLog_ = nullptr;};
    inline const vector<GetNodeDetailResponseBody::RunLog> & getRunLog() const { DARABONBA_PTR_GET_CONST(runLog_, vector<GetNodeDetailResponseBody::RunLog>) };
    inline vector<GetNodeDetailResponseBody::RunLog> getRunLog() { DARABONBA_PTR_GET(runLog_, vector<GetNodeDetailResponseBody::RunLog>) };
    inline GetNodeDetailResponseBody& setRunLog(const vector<GetNodeDetailResponseBody::RunLog> & runLog) { DARABONBA_PTR_SET_VALUE(runLog_, runLog) };
    inline GetNodeDetailResponseBody& setRunLog(vector<GetNodeDetailResponseBody::RunLog> && runLog) { DARABONBA_PTR_SET_RVALUE(runLog_, runLog) };


    // stateVersion Field Functions 
    bool hasStateVersion() const { return this->stateVersion_ != nullptr;};
    void deleteStateVersion() { this->stateVersion_ = nullptr;};
    inline int64_t getStateVersion() const { DARABONBA_PTR_GET_DEFAULT(stateVersion_, 0L) };
    inline GetNodeDetailResponseBody& setStateVersion(int64_t stateVersion) { DARABONBA_PTR_SET_VALUE(stateVersion_, stateVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetNodeDetailResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // todoIds Field Functions 
    bool hasTodoIds() const { return this->todoIds_ != nullptr;};
    void deleteTodoIds() { this->todoIds_ = nullptr;};
    inline const vector<string> & getTodoIds() const { DARABONBA_PTR_GET_CONST(todoIds_, vector<string>) };
    inline vector<string> getTodoIds() { DARABONBA_PTR_GET(todoIds_, vector<string>) };
    inline GetNodeDetailResponseBody& setTodoIds(const vector<string> & todoIds) { DARABONBA_PTR_SET_VALUE(todoIds_, todoIds) };
    inline GetNodeDetailResponseBody& setTodoIds(vector<string> && todoIds) { DARABONBA_PTR_SET_RVALUE(todoIds_, todoIds) };


    // turnSeq Field Functions 
    bool hasTurnSeq() const { return this->turnSeq_ != nullptr;};
    void deleteTurnSeq() { this->turnSeq_ = nullptr;};
    inline int64_t getTurnSeq() const { DARABONBA_PTR_GET_DEFAULT(turnSeq_, 0L) };
    inline GetNodeDetailResponseBody& setTurnSeq(int64_t turnSeq) { DARABONBA_PTR_SET_VALUE(turnSeq_, turnSeq) };


    // waitType Field Functions 
    bool hasWaitType() const { return this->waitType_ != nullptr;};
    void deleteWaitType() { this->waitType_ = nullptr;};
    inline string getWaitType() const { DARABONBA_PTR_GET_DEFAULT(waitType_, "") };
    inline GetNodeDetailResponseBody& setWaitType(string waitType) { DARABONBA_PTR_SET_VALUE(waitType_, waitType) };


  protected:
    // The actual work process grouped by thoughts, skills, tools, replies, and artifacts.
    shared_ptr<GetNodeDetailResponseBody::AgentWorkProcess> agentWorkProcess_ {};
    // The artifacts: saved node work records and artifacts.
    shared_ptr<vector<GetNodeDetailResponseBody::Artifacts>> artifacts_ {};
    // The sequence number of the node execution attempt.
    shared_ptr<int64_t> attemptSeq_ {};
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The node conversation ID. This parameter is empty if no conversation is created.
    shared_ptr<string> conversationId_ {};
    // Indicates whether the current node conversation can continue to receive input.
    shared_ptr<bool> conversationWritable_ {};
    // The display name of the node owner. This parameter is empty if the owner is unknown.
    shared_ptr<string> handler_ {};
    // The error description.
    shared_ptr<string> message_ {};
    // The node key.
    shared_ptr<string> nodeId_ {};
    // The display name of the node, which shares the same source as the node list.
    shared_ptr<string> nodeName_ {};
    // The node type. The actual enum value is returned.
    shared_ptr<string> nodeType_ {};
    // The request tracking ID.
    shared_ptr<string> requestId_ {};
    // The node result summary, excluding inline content.
    Darabonba::Json result_ {};
    // Indicates whether there are pending follow-up turns to be dispatched.
    shared_ptr<bool> resumePending_ {};
    // The run log: saved node work records and artifacts.
    shared_ptr<vector<GetNodeDetailResponseBody::RunLog>> runLog_ {};
    // stateVersion
    shared_ptr<int64_t> stateVersion_ {};
    // The node running status. The actual enum value is returned.
    shared_ptr<string> status_ {};
    // The list of to-do IDs associated with the current node.
    shared_ptr<vector<string>> todoIds_ {};
    // The sequence number of the conversation turn in the current attempt.
    shared_ptr<int64_t> turnSeq_ {};
    // The reason why the node is waiting. This parameter is empty if the node is not waiting.
    shared_ptr<string> waitType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
