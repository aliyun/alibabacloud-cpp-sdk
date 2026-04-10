// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEMORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEMORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class SearchMemoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMemoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMemoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
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
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(MemoryAgentId, memoryAgentId_);
        DARABONBA_PTR_TO_JSON(MemoryUserId, memoryUserId_);
        DARABONBA_PTR_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(MemoryAgentId, memoryAgentId_);
        DARABONBA_PTR_FROM_JSON(MemoryUserId, memoryUserId_);
        DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->id_ == nullptr && this->memory_ == nullptr && this->memoryAgentId_ == nullptr && this->memoryUserId_ == nullptr && this->metadata_ == nullptr
        && this->score_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Results& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


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


      // memoryAgentId Field Functions 
      bool hasMemoryAgentId() const { return this->memoryAgentId_ != nullptr;};
      void deleteMemoryAgentId() { this->memoryAgentId_ = nullptr;};
      inline string getMemoryAgentId() const { DARABONBA_PTR_GET_DEFAULT(memoryAgentId_, "") };
      inline Results& setMemoryAgentId(string memoryAgentId) { DARABONBA_PTR_SET_VALUE(memoryAgentId_, memoryAgentId) };


      // memoryUserId Field Functions 
      bool hasMemoryUserId() const { return this->memoryUserId_ != nullptr;};
      void deleteMemoryUserId() { this->memoryUserId_ = nullptr;};
      inline string getMemoryUserId() const { DARABONBA_PTR_GET_DEFAULT(memoryUserId_, "") };
      inline Results& setMemoryUserId(string memoryUserId) { DARABONBA_PTR_SET_VALUE(memoryUserId_, memoryUserId) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
      inline Results& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
      inline Results& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Results& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> memory_ {};
      shared_ptr<string> memoryAgentId_ {};
      shared_ptr<string> memoryUserId_ {};
      shared_ptr<string> metadata_ {};
      shared_ptr<string> score_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
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
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<SearchMemoriesResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
