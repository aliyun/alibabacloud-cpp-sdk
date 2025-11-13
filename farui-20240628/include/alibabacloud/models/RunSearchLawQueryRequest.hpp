// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHLAWQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHLAWQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchLawQueryRequestFilterCondition.hpp>
#include <alibabacloud/models/RunSearchLawQueryRequestPageParam.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchLawQueryRequestThread.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunSearchLawQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchLawQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(filterCondition, filterCondition_);
      DARABONBA_PTR_TO_JSON(pageParam, pageParam_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(queryKeywords, queryKeywords_);
      DARABONBA_PTR_TO_JSON(thread, thread_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchLawQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(filterCondition, filterCondition_);
      DARABONBA_PTR_FROM_JSON(pageParam, pageParam_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(queryKeywords, queryKeywords_);
      DARABONBA_PTR_FROM_JSON(thread, thread_);
    };
    RunSearchLawQueryRequest() = default ;
    RunSearchLawQueryRequest(const RunSearchLawQueryRequest &) = default ;
    RunSearchLawQueryRequest(RunSearchLawQueryRequest &&) = default ;
    RunSearchLawQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchLawQueryRequest() = default ;
    RunSearchLawQueryRequest& operator=(const RunSearchLawQueryRequest &) = default ;
    RunSearchLawQueryRequest& operator=(RunSearchLawQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->filterCondition_ == nullptr && return this->pageParam_ == nullptr && return this->query_ == nullptr && return this->queryKeywords_ == nullptr && return this->thread_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RunSearchLawQueryRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // filterCondition Field Functions 
    bool hasFilterCondition() const { return this->filterCondition_ != nullptr;};
    void deleteFilterCondition() { this->filterCondition_ = nullptr;};
    inline const RunSearchLawQueryRequestFilterCondition & filterCondition() const { DARABONBA_PTR_GET_CONST(filterCondition_, RunSearchLawQueryRequestFilterCondition) };
    inline RunSearchLawQueryRequestFilterCondition filterCondition() { DARABONBA_PTR_GET(filterCondition_, RunSearchLawQueryRequestFilterCondition) };
    inline RunSearchLawQueryRequest& setFilterCondition(const RunSearchLawQueryRequestFilterCondition & filterCondition) { DARABONBA_PTR_SET_VALUE(filterCondition_, filterCondition) };
    inline RunSearchLawQueryRequest& setFilterCondition(RunSearchLawQueryRequestFilterCondition && filterCondition) { DARABONBA_PTR_SET_RVALUE(filterCondition_, filterCondition) };


    // pageParam Field Functions 
    bool hasPageParam() const { return this->pageParam_ != nullptr;};
    void deletePageParam() { this->pageParam_ = nullptr;};
    inline const RunSearchLawQueryRequestPageParam & pageParam() const { DARABONBA_PTR_GET_CONST(pageParam_, RunSearchLawQueryRequestPageParam) };
    inline RunSearchLawQueryRequestPageParam pageParam() { DARABONBA_PTR_GET(pageParam_, RunSearchLawQueryRequestPageParam) };
    inline RunSearchLawQueryRequest& setPageParam(const RunSearchLawQueryRequestPageParam & pageParam) { DARABONBA_PTR_SET_VALUE(pageParam_, pageParam) };
    inline RunSearchLawQueryRequest& setPageParam(RunSearchLawQueryRequestPageParam && pageParam) { DARABONBA_PTR_SET_RVALUE(pageParam_, pageParam) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RunSearchLawQueryRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryKeywords Field Functions 
    bool hasQueryKeywords() const { return this->queryKeywords_ != nullptr;};
    void deleteQueryKeywords() { this->queryKeywords_ = nullptr;};
    inline const vector<string> & queryKeywords() const { DARABONBA_PTR_GET_CONST(queryKeywords_, vector<string>) };
    inline vector<string> queryKeywords() { DARABONBA_PTR_GET(queryKeywords_, vector<string>) };
    inline RunSearchLawQueryRequest& setQueryKeywords(const vector<string> & queryKeywords) { DARABONBA_PTR_SET_VALUE(queryKeywords_, queryKeywords) };
    inline RunSearchLawQueryRequest& setQueryKeywords(vector<string> && queryKeywords) { DARABONBA_PTR_SET_RVALUE(queryKeywords_, queryKeywords) };


    // thread Field Functions 
    bool hasThread() const { return this->thread_ != nullptr;};
    void deleteThread() { this->thread_ = nullptr;};
    inline const RunSearchLawQueryRequestThread & thread() const { DARABONBA_PTR_GET_CONST(thread_, RunSearchLawQueryRequestThread) };
    inline RunSearchLawQueryRequestThread thread() { DARABONBA_PTR_GET(thread_, RunSearchLawQueryRequestThread) };
    inline RunSearchLawQueryRequest& setThread(const RunSearchLawQueryRequestThread & thread) { DARABONBA_PTR_SET_VALUE(thread_, thread) };
    inline RunSearchLawQueryRequest& setThread(RunSearchLawQueryRequestThread && thread) { DARABONBA_PTR_SET_RVALUE(thread_, thread) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<RunSearchLawQueryRequestFilterCondition> filterCondition_ = nullptr;
    std::shared_ptr<RunSearchLawQueryRequestPageParam> pageParam_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<vector<string>> queryKeywords_ = nullptr;
    std::shared_ptr<RunSearchLawQueryRequestThread> thread_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
