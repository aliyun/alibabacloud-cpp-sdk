// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEMORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEMORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class SearchMemoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMemoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMemoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SearchMemoriesRequest() = default ;
    SearchMemoriesRequest(const SearchMemoriesRequest &) = default ;
    SearchMemoriesRequest(SearchMemoriesRequest &&) = default ;
    SearchMemoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMemoriesRequest() = default ;
    SearchMemoriesRequest& operator=(const SearchMemoriesRequest &) = default ;
    SearchMemoriesRequest& operator=(SearchMemoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(enableRerank, enableRerank_);
        DARABONBA_PTR_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(minScore, minScore_);
        DARABONBA_PTR_TO_JSON(minSimilarity, minSimilarity_);
        DARABONBA_PTR_TO_JSON(query, query_);
        DARABONBA_PTR_TO_JSON(scope, scope_);
        DARABONBA_PTR_TO_JSON(topK, topK_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(enableRerank, enableRerank_);
        DARABONBA_PTR_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(minScore, minScore_);
        DARABONBA_PTR_FROM_JSON(minSimilarity, minSimilarity_);
        DARABONBA_PTR_FROM_JSON(query, query_);
        DARABONBA_PTR_FROM_JSON(scope, scope_);
        DARABONBA_PTR_FROM_JSON(topK, topK_);
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
      class Scope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Scope& obj) { 
          DARABONBA_PTR_TO_JSON(agentId, agentId_);
          DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(userId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Scope& obj) { 
          DARABONBA_PTR_FROM_JSON(agentId, agentId_);
          DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
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
        && this->sessionId_ == nullptr && this->userId_ == nullptr; };
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


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Scope& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The agent ID. The ID must be 1 to 128 bytes in length and encoded in UTF-8. The ID cannot contain forward slashes (/) or asterisks (*). If the memory is not associated with an agent ID, this field is not returned.
        shared_ptr<string> agentId_ {};
        // The session ID. The ID must be 1 to 128 bytes in length and encoded in UTF-8. The ID cannot contain forward slashes (/) or asterisks (*). If the memory is not associated with a session ID, this field is not returned.
        shared_ptr<string> sessionId_ {};
        // The user ID. The ID must be 1 to 128 bytes in length and encoded in UTF-8. The ID cannot contain forward slashes (/) or asterisks (*). If the memory is not associated with a user ID, this field is not returned.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->enableRerank_ == nullptr
        && this->metadata_ == nullptr && this->minScore_ == nullptr && this->minSimilarity_ == nullptr && this->query_ == nullptr && this->scope_ == nullptr
        && this->topK_ == nullptr; };
      // enableRerank Field Functions 
      bool hasEnableRerank() const { return this->enableRerank_ != nullptr;};
      void deleteEnableRerank() { this->enableRerank_ = nullptr;};
      inline bool getEnableRerank() const { DARABONBA_PTR_GET_DEFAULT(enableRerank_, false) };
      inline Body& setEnableRerank(bool enableRerank) { DARABONBA_PTR_SET_VALUE(enableRerank_, enableRerank) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline const map<string, string> & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
      inline map<string, string> getMetadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
      inline Body& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
      inline Body& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


      // minScore Field Functions 
      bool hasMinScore() const { return this->minScore_ != nullptr;};
      void deleteMinScore() { this->minScore_ = nullptr;};
      inline float getMinScore() const { DARABONBA_PTR_GET_DEFAULT(minScore_, 0.0) };
      inline Body& setMinScore(float minScore) { DARABONBA_PTR_SET_VALUE(minScore_, minScore) };


      // minSimilarity Field Functions 
      bool hasMinSimilarity() const { return this->minSimilarity_ != nullptr;};
      void deleteMinSimilarity() { this->minSimilarity_ = nullptr;};
      inline float getMinSimilarity() const { DARABONBA_PTR_GET_DEFAULT(minSimilarity_, 0.0) };
      inline Body& setMinSimilarity(float minSimilarity) { DARABONBA_PTR_SET_VALUE(minSimilarity_, minSimilarity) };


      // query Field Functions 
      bool hasQuery() const { return this->query_ != nullptr;};
      void deleteQuery() { this->query_ = nullptr;};
      inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
      inline Body& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline const Body::Scope & getScope() const { DARABONBA_PTR_GET_CONST(scope_, Body::Scope) };
      inline Body::Scope getScope() { DARABONBA_PTR_GET(scope_, Body::Scope) };
      inline Body& setScope(const Body::Scope & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
      inline Body& setScope(Body::Scope && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


      // topK Field Functions 
      bool hasTopK() const { return this->topK_ != nullptr;};
      void deleteTopK() { this->topK_ = nullptr;};
      inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
      inline Body& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    protected:
      // Specifies whether to enable reranking. Default value: true.
      shared_ptr<bool> enableRerank_ {};
      // The string key-value metadata for exact match. You can specify up to 16 keys. Each key can be up to 64 characters in length, and each value can be up to 1,024 characters in length.
      shared_ptr<map<string, string>> metadata_ {};
      // The minimum relevance score. Valid values: 0 to 1. Default value: 0.2. If both minScore and minSimilarity are specified, the AND logic is applied for filtering.
      shared_ptr<float> minScore_ {};
      // The minimum similarity. Valid values: 0 to 1. Default value: 0.3. If both minScore and minSimilarity are specified, the AND logic is applied for filtering.
      shared_ptr<float> minSimilarity_ {};
      // The query text. The text can be up to 8,192 characters in length.
      // 
      // This parameter is required.
      shared_ptr<string> query_ {};
      // The retrieval scope. UserId, AgentId, and SessionId are all optional.
      shared_ptr<Body::Scope> scope_ {};
      // The number of results to return.
      shared_ptr<int32_t> topK_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SearchMemoriesRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, SearchMemoriesRequest::Body) };
    inline SearchMemoriesRequest::Body getBody() { DARABONBA_PTR_GET(body_, SearchMemoriesRequest::Body) };
    inline SearchMemoriesRequest& setBody(const SearchMemoriesRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SearchMemoriesRequest& setBody(SearchMemoriesRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The semantic retrieval request.
    // 
    // This parameter is required.
    shared_ptr<SearchMemoriesRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
