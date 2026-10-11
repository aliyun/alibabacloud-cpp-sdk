// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMAGENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMAGENTSRESPONSEBODY_HPP_
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
  class ListCustomAgentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomAgentsResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListCustomAgentsResponseBody& obj) { 
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
    ListCustomAgentsResponseBody() = default ;
    ListCustomAgentsResponseBody(const ListCustomAgentsResponseBody &) = default ;
    ListCustomAgentsResponseBody(ListCustomAgentsResponseBody &&) = default ;
    ListCustomAgentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomAgentsResponseBody() = default ;
    ListCustomAgentsResponseBody& operator=(const ListCustomAgentsResponseBody &) = default ;
    ListCustomAgentsResponseBody& operator=(ListCustomAgentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(agentId, agentId_);
        DARABONBA_PTR_TO_JSON(createMode, createMode_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(deployType, deployType_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(latestSpecVersion, latestSpecVersion_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(runtime, runtime_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(agentId, agentId_);
        DARABONBA_PTR_FROM_JSON(createMode, createMode_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(deployType, deployType_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(latestSpecVersion, latestSpecVersion_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(runtime, runtime_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
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
      class Protocol : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Protocol& obj) { 
          DARABONBA_PTR_TO_JSON(headers, headers_);
          DARABONBA_PTR_TO_JSON(paths, paths_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Protocol& obj) { 
          DARABONBA_PTR_FROM_JSON(headers, headers_);
          DARABONBA_PTR_FROM_JSON(paths, paths_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Protocol() = default ;
        Protocol(const Protocol &) = default ;
        Protocol(Protocol &&) = default ;
        Protocol(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Protocol() = default ;
        Protocol& operator=(const Protocol &) = default ;
        Protocol& operator=(Protocol &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Paths : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Paths& obj) { 
            DARABONBA_PTR_TO_JSON(description, description_);
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Paths& obj) { 
            DARABONBA_PTR_FROM_JSON(description, description_);
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          Paths() = default ;
          Paths(const Paths &) = default ;
          Paths(Paths &&) = default ;
          Paths(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Paths() = default ;
          Paths& operator=(const Paths &) = default ;
          Paths& operator=(Paths &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Paths& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Paths& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The description of the purpose of the current API path.
          shared_ptr<string> description_ {};
          // The API path corresponding to the current protocol.
          // 
          // This parameter is required.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->headers_ == nullptr
        && this->paths_ == nullptr && this->type_ == nullptr; };
        // headers Field Functions 
        bool hasHeaders() const { return this->headers_ != nullptr;};
        void deleteHeaders() { this->headers_ = nullptr;};
        inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
        inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
        inline Protocol& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
        inline Protocol& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


        // paths Field Functions 
        bool hasPaths() const { return this->paths_ != nullptr;};
        void deletePaths() { this->paths_ = nullptr;};
        inline const vector<Protocol::Paths> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<Protocol::Paths>) };
        inline vector<Protocol::Paths> getPaths() { DARABONBA_PTR_GET(paths_, vector<Protocol::Paths>) };
        inline Protocol& setPaths(const vector<Protocol::Paths> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
        inline Protocol& setPaths(vector<Protocol::Paths> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Protocol& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The request header configuration of the current protocol. The key is the header name and the value is a string.
        shared_ptr<map<string, string>> headers_ {};
        // The list of API paths corresponding to the current protocol.
        shared_ptr<vector<Protocol::Paths>> paths_ {};
        // The invoke Protocol Type. Valid values: agui: AG-UI protocol. openai-chat-completion: OpenAI Chat Completions compatible protocol. custom: custom protocol.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->createMode_ == nullptr && this->createdAt_ == nullptr && this->deployType_ == nullptr && this->description_ == nullptr && this->latestSpecVersion_ == nullptr
        && this->name_ == nullptr && this->protocol_ == nullptr && this->runtime_ == nullptr && this->status_ == nullptr && this->updatedAt_ == nullptr
        && this->workspaceId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Items& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // createMode Field Functions 
      bool hasCreateMode() const { return this->createMode_ != nullptr;};
      void deleteCreateMode() { this->createMode_ = nullptr;};
      inline string getCreateMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, "") };
      inline Items& setCreateMode(string createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // deployType Field Functions 
      bool hasDeployType() const { return this->deployType_ != nullptr;};
      void deleteDeployType() { this->deployType_ = nullptr;};
      inline string getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
      inline Items& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // latestSpecVersion Field Functions 
      bool hasLatestSpecVersion() const { return this->latestSpecVersion_ != nullptr;};
      void deleteLatestSpecVersion() { this->latestSpecVersion_ = nullptr;};
      inline int64_t getLatestSpecVersion() const { DARABONBA_PTR_GET_DEFAULT(latestSpecVersion_, 0L) };
      inline Items& setLatestSpecVersion(int64_t latestSpecVersion) { DARABONBA_PTR_SET_VALUE(latestSpecVersion_, latestSpecVersion) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline const vector<Items::Protocol> & getProtocol() const { DARABONBA_PTR_GET_CONST(protocol_, vector<Items::Protocol>) };
      inline vector<Items::Protocol> getProtocol() { DARABONBA_PTR_GET(protocol_, vector<Items::Protocol>) };
      inline Items& setProtocol(const vector<Items::Protocol> & protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };
      inline Items& setProtocol(vector<Items::Protocol> && protocol) { DARABONBA_PTR_SET_RVALUE(protocol_, protocol) };


      // runtime Field Functions 
      bool hasRuntime() const { return this->runtime_ != nullptr;};
      void deleteRuntime() { this->runtime_ = nullptr;};
      inline string getRuntime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
      inline Items& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Items& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Items& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The unique identifier of the custom agent. You can obtain the value from the response of CreateCustomAgent or ListCustomAgents.
      shared_ptr<string> agentId_ {};
      // The creation method of the agent. The value is CUSTOM for custom agents.
      shared_ptr<string> createMode_ {};
      // The time when the agent was created. The time is displayed in ISO 8601 format. The trailing Z indicates the UTC time zone. Fractional seconds may be included.
      shared_ptr<string> createdAt_ {};
      // The deployment method of the agent. Custom agents are deployed and managed by the platform. The value is MANAGED.
      shared_ptr<string> deployType_ {};
      // The description of the agent\\"s purpose.
      shared_ptr<string> description_ {};
      // The latest configuration version number. Updates with the same configuration may retain the original version number. This field does not indicate that the configuration has taken effect.
      shared_ptr<int64_t> latestSpecVersion_ {};
      // The name of the custom agent.
      shared_ptr<string> name_ {};
      // The list of invocation protocol configurations for the agent.
      shared_ptr<vector<Items::Protocol>> protocol_ {};
      // The compute specifications of the agent. Valid values: INTERACTIVE, STANDARD, and HEAVY.
      shared_ptr<string> runtime_ {};
      // The overall status of the agent. Valid values: Creating: The agent is being created. Running: The agent is running. Failed: The agent failed to run. Updating: The agent is being updated. Deleting: The agent is being deleted. Deleted: The agent is deleted. To query the execution progress of the latest configuration, call GetCustomAgent.
      shared_ptr<string> status_ {};
      // The time when the agent was last updated. The time is displayed in ISO 8601 format. The trailing Z indicates the UTC time zone. Fractional seconds may be included.
      shared_ptr<string> updatedAt_ {};
      // The ID of the workspace to which the custom agent belongs.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCustomAgentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCustomAgentsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListCustomAgentsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListCustomAgentsResponseBody::Items>) };
    inline vector<ListCustomAgentsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListCustomAgentsResponseBody::Items>) };
    inline ListCustomAgentsResponseBody& setItems(const vector<ListCustomAgentsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListCustomAgentsResponseBody& setItems(vector<ListCustomAgentsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCustomAgentsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCustomAgentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCustomAgentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomAgentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCustomAgentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCustomAgentsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The result code of the request. The value is SUCCESS if the request is successful.
    shared_ptr<string> code_ {};
    // The HTTP status code of the request. The value is 200 if the request is successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The list of custom agent summaries on the current page. To obtain the complete configuration and the execution results of the latest version, call GetCustomAgent.
    shared_ptr<vector<ListCustomAgentsResponseBody::Items>> items_ {};
    // The maximum number of entries returned per page for this query.
    shared_ptr<int32_t> maxResults_ {};
    // The description of the processing result for this request. The value is success if the request is successful.
    shared_ptr<string> message_ {};
    // The opaque token used to query the next page. An empty value indicates that there are no more pages. Pass the token as is in subsequent requests.
    shared_ptr<string> nextToken_ {};
    // The unique identifier of the request. You can use the ID to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was processed successfully. true indicates that the request was processed successfully. A successful creation, update, or deletion does not mean that the background operation is complete.
    shared_ptr<bool> success_ {};
    // The total number of custom agents that meet the query conditions in the specified workspace.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
