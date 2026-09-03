// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSESSIONCONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSESSIONCONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OssAgent20260622
{
namespace Models
{
  class GetSessionContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSessionContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSessionContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    GetSessionContentResponseBody() = default ;
    GetSessionContentResponseBody(const GetSessionContentResponseBody &) = default ;
    GetSessionContentResponseBody(GetSessionContentResponseBody &&) = default ;
    GetSessionContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSessionContentResponseBody() = default ;
    GetSessionContentResponseBody& operator=(const GetSessionContentResponseBody &) = default ;
    GetSessionContentResponseBody& operator=(GetSessionContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(agentContents, agentContents_);
        DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(toolConfirm, toolConfirm_);
        DARABONBA_PTR_TO_JSON(userContent, userContent_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(agentContents, agentContents_);
        DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(toolConfirm, toolConfirm_);
        DARABONBA_PTR_FROM_JSON(userContent, userContent_);
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
      class AgentContents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentContents& obj) { 
          DARABONBA_PTR_TO_JSON(agentContent, agentContent_);
          DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, AgentContents& obj) { 
          DARABONBA_PTR_FROM_JSON(agentContent, agentContent_);
          DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
        };
        AgentContents() = default ;
        AgentContents(const AgentContents &) = default ;
        AgentContents(AgentContents &&) = default ;
        AgentContents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentContents() = default ;
        AgentContents& operator=(const AgentContents &) = default ;
        AgentContents& operator=(AgentContents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentContent_ == nullptr
        && this->timestamp_ == nullptr; };
        // agentContent Field Functions 
        bool hasAgentContent() const { return this->agentContent_ != nullptr;};
        void deleteAgentContent() { this->agentContent_ = nullptr;};
        inline string getAgentContent() const { DARABONBA_PTR_GET_DEFAULT(agentContent_, "") };
        inline AgentContents& setAgentContent(string agentContent) { DARABONBA_PTR_SET_VALUE(agentContent_, agentContent) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline AgentContents& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        // The detailed conversation chunk content. All chunks compose the complete response.
        shared_ptr<string> agentContent_ {};
        // The time when the content was generated, in the yyyy-MM-dd HH:mm:ss,SSS format.
        shared_ptr<string> timestamp_ {};
      };

      virtual bool empty() const override { return this->agentContents_ == nullptr
        && this->timestamp_ == nullptr && this->toolConfirm_ == nullptr && this->userContent_ == nullptr; };
      // agentContents Field Functions 
      bool hasAgentContents() const { return this->agentContents_ != nullptr;};
      void deleteAgentContents() { this->agentContents_ = nullptr;};
      inline const vector<Content::AgentContents> & getAgentContents() const { DARABONBA_PTR_GET_CONST(agentContents_, vector<Content::AgentContents>) };
      inline vector<Content::AgentContents> getAgentContents() { DARABONBA_PTR_GET(agentContents_, vector<Content::AgentContents>) };
      inline Content& setAgentContents(const vector<Content::AgentContents> & agentContents) { DARABONBA_PTR_SET_VALUE(agentContents_, agentContents) };
      inline Content& setAgentContents(vector<Content::AgentContents> && agentContents) { DARABONBA_PTR_SET_RVALUE(agentContents_, agentContents) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline Content& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // toolConfirm Field Functions 
      bool hasToolConfirm() const { return this->toolConfirm_ != nullptr;};
      void deleteToolConfirm() { this->toolConfirm_ = nullptr;};
      inline bool getToolConfirm() const { DARABONBA_PTR_GET_DEFAULT(toolConfirm_, false) };
      inline Content& setToolConfirm(bool toolConfirm) { DARABONBA_PTR_SET_VALUE(toolConfirm_, toolConfirm) };


      // userContent Field Functions 
      bool hasUserContent() const { return this->userContent_ != nullptr;};
      void deleteUserContent() { this->userContent_ = nullptr;};
      inline string getUserContent() const { DARABONBA_PTR_GET_DEFAULT(userContent_, "") };
      inline Content& setUserContent(string userContent) { DARABONBA_PTR_SET_VALUE(userContent_, userContent) };


    protected:
      // The detailed conversation content.
      shared_ptr<vector<Content::AgentContents>> agentContents_ {};
      // The time when the session occurred, in the yyyy-MM-dd HH:mm:ss,SSS format.
      shared_ptr<string> timestamp_ {};
      // Indicates whether tool confirmation is required.
      shared_ptr<bool> toolConfirm_ {};
      // The user content of the first message in the session.
      shared_ptr<string> userContent_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr && this->sessionId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<GetSessionContentResponseBody::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<GetSessionContentResponseBody::Content>) };
    inline vector<GetSessionContentResponseBody::Content> getContent() { DARABONBA_PTR_GET(content_, vector<GetSessionContentResponseBody::Content>) };
    inline GetSessionContentResponseBody& setContent(const vector<GetSessionContentResponseBody::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetSessionContentResponseBody& setContent(vector<GetSessionContentResponseBody::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSessionContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetSessionContentResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The conversation text content.
    shared_ptr<vector<GetSessionContentResponseBody::Content>> content_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The session ID.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OssAgent20260622
#endif
