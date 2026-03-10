// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEMORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEMORIESRESPONSEBODY_HPP_
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
  class SearchMemoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMemoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(relations, relations_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(results, results_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMemoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(relations, relations_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(results, results_);
    };
    SearchMemoriesResponseBody() = default ;
    SearchMemoriesResponseBody(const SearchMemoriesResponseBody &) = default ;
    SearchMemoriesResponseBody(SearchMemoriesResponseBody &&) = default ;
    SearchMemoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMemoriesResponseBody() = default ;
    SearchMemoriesResponseBody& operator=(const SearchMemoriesResponseBody &) = default ;
    SearchMemoriesResponseBody& operator=(SearchMemoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(actorId, actorId_);
        DARABONBA_PTR_TO_JSON(agentId, agentId_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(hash, hash_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(memory, memory_);
        DARABONBA_PTR_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(role, role_);
        DARABONBA_PTR_TO_JSON(runId, runId_);
        DARABONBA_PTR_TO_JSON(score, score_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(actorId, actorId_);
        DARABONBA_PTR_FROM_JSON(agentId, agentId_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(hash, hash_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(memory, memory_);
        DARABONBA_PTR_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(role, role_);
        DARABONBA_PTR_FROM_JSON(runId, runId_);
        DARABONBA_PTR_FROM_JSON(score, score_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
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
      virtual bool empty() const override { return this->actorId_ == nullptr
        && this->agentId_ == nullptr && this->createdAt_ == nullptr && this->hash_ == nullptr && this->id_ == nullptr && this->memory_ == nullptr
        && this->metadata_ == nullptr && this->role_ == nullptr && this->runId_ == nullptr && this->score_ == nullptr && this->updatedAt_ == nullptr
        && this->userId_ == nullptr; };
      // actorId Field Functions 
      bool hasActorId() const { return this->actorId_ != nullptr;};
      void deleteActorId() { this->actorId_ = nullptr;};
      inline string getActorId() const { DARABONBA_PTR_GET_DEFAULT(actorId_, "") };
      inline Results& setActorId(string actorId) { DARABONBA_PTR_SET_VALUE(actorId_, actorId) };


      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Results& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Results& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // hash Field Functions 
      bool hasHash() const { return this->hash_ != nullptr;};
      void deleteHash() { this->hash_ = nullptr;};
      inline string getHash() const { DARABONBA_PTR_GET_DEFAULT(hash_, "") };
      inline Results& setHash(string hash) { DARABONBA_PTR_SET_VALUE(hash_, hash) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Results& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
      inline Results& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
      inline Results& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Results& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // runId Field Functions 
      bool hasRunId() const { return this->runId_ != nullptr;};
      void deleteRunId() { this->runId_ = nullptr;};
      inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
      inline Results& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
      inline Results& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Results& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Results& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> actorId_ {};
      shared_ptr<string> agentId_ {};
      shared_ptr<string> createdAt_ {};
      shared_ptr<string> hash_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> memory_ {};
      shared_ptr<string> metadata_ {};
      shared_ptr<string> role_ {};
      shared_ptr<string> runId_ {};
      shared_ptr<double> score_ {};
      shared_ptr<string> updatedAt_ {};
      shared_ptr<string> userId_ {};
    };

    class Relations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Relations& obj) { 
        DARABONBA_PTR_TO_JSON(destination, destination_);
        DARABONBA_PTR_TO_JSON(relationship, relationship_);
        DARABONBA_PTR_TO_JSON(source, source_);
      };
      friend void from_json(const Darabonba::Json& j, Relations& obj) { 
        DARABONBA_PTR_FROM_JSON(destination, destination_);
        DARABONBA_PTR_FROM_JSON(relationship, relationship_);
        DARABONBA_PTR_FROM_JSON(source, source_);
      };
      Relations() = default ;
      Relations(const Relations &) = default ;
      Relations(Relations &&) = default ;
      Relations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Relations() = default ;
      Relations& operator=(const Relations &) = default ;
      Relations& operator=(Relations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->destination_ == nullptr
        && this->relationship_ == nullptr && this->source_ == nullptr; };
      // destination Field Functions 
      bool hasDestination() const { return this->destination_ != nullptr;};
      void deleteDestination() { this->destination_ = nullptr;};
      inline string getDestination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
      inline Relations& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


      // relationship Field Functions 
      bool hasRelationship() const { return this->relationship_ != nullptr;};
      void deleteRelationship() { this->relationship_ = nullptr;};
      inline string getRelationship() const { DARABONBA_PTR_GET_DEFAULT(relationship_, "") };
      inline Relations& setRelationship(string relationship) { DARABONBA_PTR_SET_VALUE(relationship_, relationship) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Relations& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    protected:
      shared_ptr<string> destination_ {};
      shared_ptr<string> relationship_ {};
      shared_ptr<string> source_ {};
    };

    virtual bool empty() const override { return this->relations_ == nullptr
        && this->requestId_ == nullptr && this->results_ == nullptr; };
    // relations Field Functions 
    bool hasRelations() const { return this->relations_ != nullptr;};
    void deleteRelations() { this->relations_ = nullptr;};
    inline const vector<SearchMemoriesResponseBody::Relations> & getRelations() const { DARABONBA_PTR_GET_CONST(relations_, vector<SearchMemoriesResponseBody::Relations>) };
    inline vector<SearchMemoriesResponseBody::Relations> getRelations() { DARABONBA_PTR_GET(relations_, vector<SearchMemoriesResponseBody::Relations>) };
    inline SearchMemoriesResponseBody& setRelations(const vector<SearchMemoriesResponseBody::Relations> & relations) { DARABONBA_PTR_SET_VALUE(relations_, relations) };
    inline SearchMemoriesResponseBody& setRelations(vector<SearchMemoriesResponseBody::Relations> && relations) { DARABONBA_PTR_SET_RVALUE(relations_, relations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchMemoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<SearchMemoriesResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<SearchMemoriesResponseBody::Results>) };
    inline vector<SearchMemoriesResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<SearchMemoriesResponseBody::Results>) };
    inline SearchMemoriesResponseBody& setResults(const vector<SearchMemoriesResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline SearchMemoriesResponseBody& setResults(vector<SearchMemoriesResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    shared_ptr<vector<SearchMemoriesResponseBody::Relations>> relations_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<SearchMemoriesResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
