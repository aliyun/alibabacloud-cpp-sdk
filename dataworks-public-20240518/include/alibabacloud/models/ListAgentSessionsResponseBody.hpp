// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSESSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListAgentSessionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentSessionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentSessionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAgentSessionsResponseBody() = default ;
    ListAgentSessionsResponseBody(const ListAgentSessionsResponseBody &) = default ;
    ListAgentSessionsResponseBody(ListAgentSessionsResponseBody &&) = default ;
    ListAgentSessionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentSessionsResponseBody() = default ;
    ListAgentSessionsResponseBody& operator=(const ListAgentSessionsResponseBody &) = default ;
    ListAgentSessionsResponseBody& operator=(ListAgentSessionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JsonRpcResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JsonRpcResponse& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Jsonrpc, jsonrpc_);
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, JsonRpcResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
      };
      JsonRpcResponse() = default ;
      JsonRpcResponse(const JsonRpcResponse &) = default ;
      JsonRpcResponse(JsonRpcResponse &&) = default ;
      JsonRpcResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JsonRpcResponse() = default ;
      JsonRpcResponse& operator=(const JsonRpcResponse &) = default ;
      JsonRpcResponse& operator=(JsonRpcResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(AgentSessions, agentSessions_);
          DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
          DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentSessions, agentSessions_);
          DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
          DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
        class AgentSessions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AgentSessions& obj) { 
            DARABONBA_PTR_TO_JSON(Meta, meta_);
            DARABONBA_PTR_TO_JSON(SessionCreatedAt, sessionCreatedAt_);
            DARABONBA_PTR_TO_JSON(SessionDescription, sessionDescription_);
            DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
            DARABONBA_PTR_TO_JSON(SessionTitle, sessionTitle_);
            DARABONBA_PTR_TO_JSON(SessionUpdatedAt, sessionUpdatedAt_);
          };
          friend void from_json(const Darabonba::Json& j, AgentSessions& obj) { 
            DARABONBA_PTR_FROM_JSON(Meta, meta_);
            DARABONBA_PTR_FROM_JSON(SessionCreatedAt, sessionCreatedAt_);
            DARABONBA_PTR_FROM_JSON(SessionDescription, sessionDescription_);
            DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
            DARABONBA_PTR_FROM_JSON(SessionTitle, sessionTitle_);
            DARABONBA_PTR_FROM_JSON(SessionUpdatedAt, sessionUpdatedAt_);
          };
          AgentSessions() = default ;
          AgentSessions(const AgentSessions &) = default ;
          AgentSessions(AgentSessions &&) = default ;
          AgentSessions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AgentSessions() = default ;
          AgentSessions& operator=(const AgentSessions &) = default ;
          AgentSessions& operator=(AgentSessions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Meta : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Meta& obj) { 
              DARABONBA_PTR_TO_JSON(SessionSource, sessionSource_);
              DARABONBA_PTR_TO_JSON(SessionStatus, sessionStatus_);
              DARABONBA_PTR_TO_JSON(SessionTagList, sessionTagList_);
            };
            friend void from_json(const Darabonba::Json& j, Meta& obj) { 
              DARABONBA_PTR_FROM_JSON(SessionSource, sessionSource_);
              DARABONBA_PTR_FROM_JSON(SessionStatus, sessionStatus_);
              DARABONBA_PTR_FROM_JSON(SessionTagList, sessionTagList_);
            };
            Meta() = default ;
            Meta(const Meta &) = default ;
            Meta(Meta &&) = default ;
            Meta(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Meta() = default ;
            Meta& operator=(const Meta &) = default ;
            Meta& operator=(Meta &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class SessionTagList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SessionTagList& obj) { 
                DARABONBA_PTR_TO_JSON(SessionTagCode, sessionTagCode_);
              };
              friend void from_json(const Darabonba::Json& j, SessionTagList& obj) { 
                DARABONBA_PTR_FROM_JSON(SessionTagCode, sessionTagCode_);
              };
              SessionTagList() = default ;
              SessionTagList(const SessionTagList &) = default ;
              SessionTagList(SessionTagList &&) = default ;
              SessionTagList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SessionTagList() = default ;
              SessionTagList& operator=(const SessionTagList &) = default ;
              SessionTagList& operator=(SessionTagList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->sessionTagCode_ == nullptr; };
              // sessionTagCode Field Functions 
              bool hasSessionTagCode() const { return this->sessionTagCode_ != nullptr;};
              void deleteSessionTagCode() { this->sessionTagCode_ = nullptr;};
              inline string getSessionTagCode() const { DARABONBA_PTR_GET_DEFAULT(sessionTagCode_, "") };
              inline SessionTagList& setSessionTagCode(string sessionTagCode) { DARABONBA_PTR_SET_VALUE(sessionTagCode_, sessionTagCode) };


            protected:
              shared_ptr<string> sessionTagCode_ {};
            };

            virtual bool empty() const override { return this->sessionSource_ == nullptr
        && this->sessionStatus_ == nullptr && this->sessionTagList_ == nullptr; };
            // sessionSource Field Functions 
            bool hasSessionSource() const { return this->sessionSource_ != nullptr;};
            void deleteSessionSource() { this->sessionSource_ = nullptr;};
            inline string getSessionSource() const { DARABONBA_PTR_GET_DEFAULT(sessionSource_, "") };
            inline Meta& setSessionSource(string sessionSource) { DARABONBA_PTR_SET_VALUE(sessionSource_, sessionSource) };


            // sessionStatus Field Functions 
            bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
            void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
            inline string getSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
            inline Meta& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


            // sessionTagList Field Functions 
            bool hasSessionTagList() const { return this->sessionTagList_ != nullptr;};
            void deleteSessionTagList() { this->sessionTagList_ = nullptr;};
            inline const vector<Meta::SessionTagList> & getSessionTagList() const { DARABONBA_PTR_GET_CONST(sessionTagList_, vector<Meta::SessionTagList>) };
            inline vector<Meta::SessionTagList> getSessionTagList() { DARABONBA_PTR_GET(sessionTagList_, vector<Meta::SessionTagList>) };
            inline Meta& setSessionTagList(const vector<Meta::SessionTagList> & sessionTagList) { DARABONBA_PTR_SET_VALUE(sessionTagList_, sessionTagList) };
            inline Meta& setSessionTagList(vector<Meta::SessionTagList> && sessionTagList) { DARABONBA_PTR_SET_RVALUE(sessionTagList_, sessionTagList) };


          protected:
            shared_ptr<string> sessionSource_ {};
            shared_ptr<string> sessionStatus_ {};
            shared_ptr<vector<Meta::SessionTagList>> sessionTagList_ {};
          };

          virtual bool empty() const override { return this->meta_ == nullptr
        && this->sessionCreatedAt_ == nullptr && this->sessionDescription_ == nullptr && this->sessionId_ == nullptr && this->sessionTitle_ == nullptr && this->sessionUpdatedAt_ == nullptr; };
          // meta Field Functions 
          bool hasMeta() const { return this->meta_ != nullptr;};
          void deleteMeta() { this->meta_ = nullptr;};
          inline const AgentSessions::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, AgentSessions::Meta) };
          inline AgentSessions::Meta getMeta() { DARABONBA_PTR_GET(meta_, AgentSessions::Meta) };
          inline AgentSessions& setMeta(const AgentSessions::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
          inline AgentSessions& setMeta(AgentSessions::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


          // sessionCreatedAt Field Functions 
          bool hasSessionCreatedAt() const { return this->sessionCreatedAt_ != nullptr;};
          void deleteSessionCreatedAt() { this->sessionCreatedAt_ = nullptr;};
          inline int64_t getSessionCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(sessionCreatedAt_, 0L) };
          inline AgentSessions& setSessionCreatedAt(int64_t sessionCreatedAt) { DARABONBA_PTR_SET_VALUE(sessionCreatedAt_, sessionCreatedAt) };


          // sessionDescription Field Functions 
          bool hasSessionDescription() const { return this->sessionDescription_ != nullptr;};
          void deleteSessionDescription() { this->sessionDescription_ = nullptr;};
          inline string getSessionDescription() const { DARABONBA_PTR_GET_DEFAULT(sessionDescription_, "") };
          inline AgentSessions& setSessionDescription(string sessionDescription) { DARABONBA_PTR_SET_VALUE(sessionDescription_, sessionDescription) };


          // sessionId Field Functions 
          bool hasSessionId() const { return this->sessionId_ != nullptr;};
          void deleteSessionId() { this->sessionId_ = nullptr;};
          inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
          inline AgentSessions& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


          // sessionTitle Field Functions 
          bool hasSessionTitle() const { return this->sessionTitle_ != nullptr;};
          void deleteSessionTitle() { this->sessionTitle_ = nullptr;};
          inline string getSessionTitle() const { DARABONBA_PTR_GET_DEFAULT(sessionTitle_, "") };
          inline AgentSessions& setSessionTitle(string sessionTitle) { DARABONBA_PTR_SET_VALUE(sessionTitle_, sessionTitle) };


          // sessionUpdatedAt Field Functions 
          bool hasSessionUpdatedAt() const { return this->sessionUpdatedAt_ != nullptr;};
          void deleteSessionUpdatedAt() { this->sessionUpdatedAt_ = nullptr;};
          inline int64_t getSessionUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(sessionUpdatedAt_, 0L) };
          inline AgentSessions& setSessionUpdatedAt(int64_t sessionUpdatedAt) { DARABONBA_PTR_SET_VALUE(sessionUpdatedAt_, sessionUpdatedAt) };


        protected:
          shared_ptr<AgentSessions::Meta> meta_ {};
          shared_ptr<int64_t> sessionCreatedAt_ {};
          shared_ptr<string> sessionDescription_ {};
          shared_ptr<string> sessionId_ {};
          shared_ptr<string> sessionTitle_ {};
          shared_ptr<int64_t> sessionUpdatedAt_ {};
        };

        virtual bool empty() const override { return this->agentSessions_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
        // agentSessions Field Functions 
        bool hasAgentSessions() const { return this->agentSessions_ != nullptr;};
        void deleteAgentSessions() { this->agentSessions_ = nullptr;};
        inline const vector<Result::AgentSessions> & getAgentSessions() const { DARABONBA_PTR_GET_CONST(agentSessions_, vector<Result::AgentSessions>) };
        inline vector<Result::AgentSessions> getAgentSessions() { DARABONBA_PTR_GET(agentSessions_, vector<Result::AgentSessions>) };
        inline Result& setAgentSessions(const vector<Result::AgentSessions> & agentSessions) { DARABONBA_PTR_SET_VALUE(agentSessions_, agentSessions) };
        inline Result& setAgentSessions(vector<Result::AgentSessions> && agentSessions) { DARABONBA_PTR_SET_RVALUE(agentSessions_, agentSessions) };


        // maxResults Field Functions 
        bool hasMaxResults() const { return this->maxResults_ != nullptr;};
        void deleteMaxResults() { this->maxResults_ = nullptr;};
        inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
        inline Result& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


        // nextToken Field Functions 
        bool hasNextToken() const { return this->nextToken_ != nullptr;};
        void deleteNextToken() { this->nextToken_ = nullptr;};
        inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
        inline Result& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline Result& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        shared_ptr<vector<Result::AgentSessions>> agentSessions_ {};
        shared_ptr<int32_t> maxResults_ {};
        shared_ptr<string> nextToken_ {};
        shared_ptr<int32_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->id_ == nullptr
        && this->jsonrpc_ == nullptr && this->result_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline JsonRpcResponse& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // jsonrpc Field Functions 
      bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
      void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
      inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
      inline JsonRpcResponse& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const JsonRpcResponse::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, JsonRpcResponse::Result) };
      inline JsonRpcResponse::Result getResult() { DARABONBA_PTR_GET(result_, JsonRpcResponse::Result) };
      inline JsonRpcResponse& setResult(const JsonRpcResponse::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline JsonRpcResponse& setResult(JsonRpcResponse::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<string> jsonrpc_ {};
      shared_ptr<JsonRpcResponse::Result> result_ {};
    };

    virtual bool empty() const override { return this->jsonRpcResponse_ == nullptr
        && this->requestId_ == nullptr; };
    // jsonRpcResponse Field Functions 
    bool hasJsonRpcResponse() const { return this->jsonRpcResponse_ != nullptr;};
    void deleteJsonRpcResponse() { this->jsonRpcResponse_ = nullptr;};
    inline const ListAgentSessionsResponseBody::JsonRpcResponse & getJsonRpcResponse() const { DARABONBA_PTR_GET_CONST(jsonRpcResponse_, ListAgentSessionsResponseBody::JsonRpcResponse) };
    inline ListAgentSessionsResponseBody::JsonRpcResponse getJsonRpcResponse() { DARABONBA_PTR_GET(jsonRpcResponse_, ListAgentSessionsResponseBody::JsonRpcResponse) };
    inline ListAgentSessionsResponseBody& setJsonRpcResponse(const ListAgentSessionsResponseBody::JsonRpcResponse & jsonRpcResponse) { DARABONBA_PTR_SET_VALUE(jsonRpcResponse_, jsonRpcResponse) };
    inline ListAgentSessionsResponseBody& setJsonRpcResponse(ListAgentSessionsResponseBody::JsonRpcResponse && jsonRpcResponse) { DARABONBA_PTR_SET_RVALUE(jsonRpcResponse_, jsonRpcResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentSessionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListAgentSessionsResponseBody::JsonRpcResponse> jsonRpcResponse_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
