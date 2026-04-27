// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEMORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEMORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class SearchMemoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMemoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_ANY_TO_JSON(filters, filters_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(rerank, rerank_);
      DARABONBA_PTR_TO_JSON(retrievalOption, retrievalOption_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(searchType, searchType_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
      DARABONBA_PTR_TO_JSON(topK, topK_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMemoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_ANY_FROM_JSON(filters, filters_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(rerank, rerank_);
      DARABONBA_PTR_FROM_JSON(retrievalOption, retrievalOption_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_PTR_FROM_JSON(searchType, searchType_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(topK, topK_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
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
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->appId_ == nullptr && this->filters_ == nullptr && this->query_ == nullptr && this->rerank_ == nullptr && this->retrievalOption_ == nullptr
        && this->runId_ == nullptr && this->searchType_ == nullptr && this->threshold_ == nullptr && this->topK_ == nullptr && this->userId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline SearchMemoriesRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SearchMemoriesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline     const Darabonba::Json & getFilters() const { DARABONBA_GET(filters_) };
    Darabonba::Json & getFilters() { DARABONBA_GET(filters_) };
    inline SearchMemoriesRequest& setFilters(const Darabonba::Json & filters) { DARABONBA_SET_VALUE(filters_, filters) };
    inline SearchMemoriesRequest& setFilters(Darabonba::Json && filters) { DARABONBA_SET_RVALUE(filters_, filters) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SearchMemoriesRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // rerank Field Functions 
    bool hasRerank() const { return this->rerank_ != nullptr;};
    void deleteRerank() { this->rerank_ = nullptr;};
    inline bool getRerank() const { DARABONBA_PTR_GET_DEFAULT(rerank_, false) };
    inline SearchMemoriesRequest& setRerank(bool rerank) { DARABONBA_PTR_SET_VALUE(rerank_, rerank) };


    // retrievalOption Field Functions 
    bool hasRetrievalOption() const { return this->retrievalOption_ != nullptr;};
    void deleteRetrievalOption() { this->retrievalOption_ = nullptr;};
    inline string getRetrievalOption() const { DARABONBA_PTR_GET_DEFAULT(retrievalOption_, "") };
    inline SearchMemoriesRequest& setRetrievalOption(string retrievalOption) { DARABONBA_PTR_SET_VALUE(retrievalOption_, retrievalOption) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline SearchMemoriesRequest& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string getSearchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline SearchMemoriesRequest& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline SearchMemoriesRequest& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline SearchMemoriesRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SearchMemoriesRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> agentId_ {};
    shared_ptr<string> appId_ {};
    Darabonba::Json filters_ {};
    shared_ptr<string> query_ {};
    shared_ptr<bool> rerank_ {};
    shared_ptr<string> retrievalOption_ {};
    shared_ptr<string> runId_ {};
    shared_ptr<string> searchType_ {};
    shared_ptr<double> threshold_ {};
    shared_ptr<int32_t> topK_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
