// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTEXTSTOREAPIKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTEXTSTOREAPIKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ListContextStoreAPIKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContextStoreAPIKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(results, results_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListContextStoreAPIKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(results, results_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListContextStoreAPIKeysResponseBody() = default ;
    ListContextStoreAPIKeysResponseBody(const ListContextStoreAPIKeysResponseBody &) = default ;
    ListContextStoreAPIKeysResponseBody(ListContextStoreAPIKeysResponseBody &&) = default ;
    ListContextStoreAPIKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContextStoreAPIKeysResponseBody() = default ;
    ListContextStoreAPIKeysResponseBody& operator=(const ListContextStoreAPIKeysResponseBody &) = default ;
    ListContextStoreAPIKeysResponseBody& operator=(ListContextStoreAPIKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
        DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(contextStoreName, contextStoreName_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
        DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(contextStoreName, contextStoreName_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->apiKey_ == nullptr && this->contextStoreName_ == nullptr && this->createTime_ == nullptr && this->name_ == nullptr; };
      // agentSpace Field Functions 
      bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
      void deleteAgentSpace() { this->agentSpace_ = nullptr;};
      inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
      inline Results& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline Results& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // contextStoreName Field Functions 
      bool hasContextStoreName() const { return this->contextStoreName_ != nullptr;};
      void deleteContextStoreName() { this->contextStoreName_ = nullptr;};
      inline string getContextStoreName() const { DARABONBA_PTR_GET_DEFAULT(contextStoreName_, "") };
      inline Results& setContextStoreName(string contextStoreName) { DARABONBA_PTR_SET_VALUE(contextStoreName_, contextStoreName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Results& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Results& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> agentSpace_ {};
      shared_ptr<string> apiKey_ {};
      shared_ptr<string> contextStoreName_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> createTime_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->results_ == nullptr && this->total_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListContextStoreAPIKeysResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListContextStoreAPIKeysResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContextStoreAPIKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<ListContextStoreAPIKeysResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<ListContextStoreAPIKeysResponseBody::Results>) };
    inline vector<ListContextStoreAPIKeysResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<ListContextStoreAPIKeysResponseBody::Results>) };
    inline ListContextStoreAPIKeysResponseBody& setResults(const vector<ListContextStoreAPIKeysResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ListContextStoreAPIKeysResponseBody& setResults(vector<ListContextStoreAPIKeysResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListContextStoreAPIKeysResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListContextStoreAPIKeysResponseBody::Results>> results_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
