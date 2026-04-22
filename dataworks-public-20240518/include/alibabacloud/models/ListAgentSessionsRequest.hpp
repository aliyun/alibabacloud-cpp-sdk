// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSESSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSESSIONSREQUEST_HPP_
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
  class ListAgentSessionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentSessionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentSessionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    ListAgentSessionsRequest() = default ;
    ListAgentSessionsRequest(const ListAgentSessionsRequest &) = default ;
    ListAgentSessionsRequest(ListAgentSessionsRequest &&) = default ;
    ListAgentSessionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentSessionsRequest() = default ;
    ListAgentSessionsRequest& operator=(const ListAgentSessionsRequest &) = default ;
    ListAgentSessionsRequest& operator=(ListAgentSessionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(AgentName, agentName_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(SessionSourceList, sessionSourceList_);
        DARABONBA_PTR_TO_JSON(SessionTitle, sessionTitle_);
        DARABONBA_PTR_TO_JSON(TagList, tagList_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(SessionSourceList, sessionSourceList_);
        DARABONBA_PTR_FROM_JSON(SessionTitle, sessionTitle_);
        DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      };
      Params() = default ;
      Params(const Params &) = default ;
      Params(Params &&) = default ;
      Params(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Params() = default ;
      Params& operator=(const Params &) = default ;
      Params& operator=(Params &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentName_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->sessionId_ == nullptr && this->sessionSourceList_ == nullptr && this->sessionTitle_ == nullptr
        && this->tagList_ == nullptr; };
      // agentName Field Functions 
      bool hasAgentName() const { return this->agentName_ != nullptr;};
      void deleteAgentName() { this->agentName_ = nullptr;};
      inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
      inline Params& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Params& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Params& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Params& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // sessionSourceList Field Functions 
      bool hasSessionSourceList() const { return this->sessionSourceList_ != nullptr;};
      void deleteSessionSourceList() { this->sessionSourceList_ = nullptr;};
      inline const vector<string> & getSessionSourceList() const { DARABONBA_PTR_GET_CONST(sessionSourceList_, vector<string>) };
      inline vector<string> getSessionSourceList() { DARABONBA_PTR_GET(sessionSourceList_, vector<string>) };
      inline Params& setSessionSourceList(const vector<string> & sessionSourceList) { DARABONBA_PTR_SET_VALUE(sessionSourceList_, sessionSourceList) };
      inline Params& setSessionSourceList(vector<string> && sessionSourceList) { DARABONBA_PTR_SET_RVALUE(sessionSourceList_, sessionSourceList) };


      // sessionTitle Field Functions 
      bool hasSessionTitle() const { return this->sessionTitle_ != nullptr;};
      void deleteSessionTitle() { this->sessionTitle_ = nullptr;};
      inline string getSessionTitle() const { DARABONBA_PTR_GET_DEFAULT(sessionTitle_, "") };
      inline Params& setSessionTitle(string sessionTitle) { DARABONBA_PTR_SET_VALUE(sessionTitle_, sessionTitle) };


      // tagList Field Functions 
      bool hasTagList() const { return this->tagList_ != nullptr;};
      void deleteTagList() { this->tagList_ = nullptr;};
      inline const vector<string> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<string>) };
      inline vector<string> getTagList() { DARABONBA_PTR_GET(tagList_, vector<string>) };
      inline Params& setTagList(const vector<string> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
      inline Params& setTagList(vector<string> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    protected:
      shared_ptr<string> agentName_ {};
      shared_ptr<int32_t> maxResults_ {};
      shared_ptr<string> nextToken_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<vector<string>> sessionSourceList_ {};
      shared_ptr<string> sessionTitle_ {};
      shared_ptr<vector<string>> tagList_ {};
    };

    virtual bool empty() const override { return this->id_ == nullptr
        && this->jsonrpc_ == nullptr && this->params_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListAgentSessionsRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonrpc Field Functions 
    bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
    void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
    inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
    inline ListAgentSessionsRequest& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const ListAgentSessionsRequest::Params & getParams() const { DARABONBA_PTR_GET_CONST(params_, ListAgentSessionsRequest::Params) };
    inline ListAgentSessionsRequest::Params getParams() { DARABONBA_PTR_GET(params_, ListAgentSessionsRequest::Params) };
    inline ListAgentSessionsRequest& setParams(const ListAgentSessionsRequest::Params & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListAgentSessionsRequest& setParams(ListAgentSessionsRequest::Params && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


  protected:
    shared_ptr<string> id_ {};
    shared_ptr<string> jsonrpc_ {};
    shared_ptr<ListAgentSessionsRequest::Params> params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
