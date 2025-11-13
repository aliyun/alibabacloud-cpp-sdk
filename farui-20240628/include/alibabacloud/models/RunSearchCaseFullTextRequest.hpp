// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHCASEFULLTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHCASEFULLTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchCaseFullTextRequestFilterCondition.hpp>
#include <alibabacloud/models/RunSearchCaseFullTextRequestPageParam.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/RunSearchCaseFullTextRequestThread.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunSearchCaseFullTextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchCaseFullTextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(filterCondition, filterCondition_);
      DARABONBA_PTR_TO_JSON(pageParam, pageParam_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(queryKeywords, queryKeywords_);
      DARABONBA_PTR_TO_JSON(referLevel, referLevel_);
      DARABONBA_PTR_TO_JSON(sortKeyAndDirection, sortKeyAndDirection_);
      DARABONBA_PTR_TO_JSON(thread, thread_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchCaseFullTextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(filterCondition, filterCondition_);
      DARABONBA_PTR_FROM_JSON(pageParam, pageParam_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(queryKeywords, queryKeywords_);
      DARABONBA_PTR_FROM_JSON(referLevel, referLevel_);
      DARABONBA_PTR_FROM_JSON(sortKeyAndDirection, sortKeyAndDirection_);
      DARABONBA_PTR_FROM_JSON(thread, thread_);
    };
    RunSearchCaseFullTextRequest() = default ;
    RunSearchCaseFullTextRequest(const RunSearchCaseFullTextRequest &) = default ;
    RunSearchCaseFullTextRequest(RunSearchCaseFullTextRequest &&) = default ;
    RunSearchCaseFullTextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchCaseFullTextRequest() = default ;
    RunSearchCaseFullTextRequest& operator=(const RunSearchCaseFullTextRequest &) = default ;
    RunSearchCaseFullTextRequest& operator=(RunSearchCaseFullTextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->filterCondition_ == nullptr && return this->pageParam_ == nullptr && return this->query_ == nullptr && return this->queryKeywords_ == nullptr && return this->referLevel_ == nullptr
        && return this->sortKeyAndDirection_ == nullptr && return this->thread_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RunSearchCaseFullTextRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // filterCondition Field Functions 
    bool hasFilterCondition() const { return this->filterCondition_ != nullptr;};
    void deleteFilterCondition() { this->filterCondition_ = nullptr;};
    inline const RunSearchCaseFullTextRequestFilterCondition & filterCondition() const { DARABONBA_PTR_GET_CONST(filterCondition_, RunSearchCaseFullTextRequestFilterCondition) };
    inline RunSearchCaseFullTextRequestFilterCondition filterCondition() { DARABONBA_PTR_GET(filterCondition_, RunSearchCaseFullTextRequestFilterCondition) };
    inline RunSearchCaseFullTextRequest& setFilterCondition(const RunSearchCaseFullTextRequestFilterCondition & filterCondition) { DARABONBA_PTR_SET_VALUE(filterCondition_, filterCondition) };
    inline RunSearchCaseFullTextRequest& setFilterCondition(RunSearchCaseFullTextRequestFilterCondition && filterCondition) { DARABONBA_PTR_SET_RVALUE(filterCondition_, filterCondition) };


    // pageParam Field Functions 
    bool hasPageParam() const { return this->pageParam_ != nullptr;};
    void deletePageParam() { this->pageParam_ = nullptr;};
    inline const RunSearchCaseFullTextRequestPageParam & pageParam() const { DARABONBA_PTR_GET_CONST(pageParam_, RunSearchCaseFullTextRequestPageParam) };
    inline RunSearchCaseFullTextRequestPageParam pageParam() { DARABONBA_PTR_GET(pageParam_, RunSearchCaseFullTextRequestPageParam) };
    inline RunSearchCaseFullTextRequest& setPageParam(const RunSearchCaseFullTextRequestPageParam & pageParam) { DARABONBA_PTR_SET_VALUE(pageParam_, pageParam) };
    inline RunSearchCaseFullTextRequest& setPageParam(RunSearchCaseFullTextRequestPageParam && pageParam) { DARABONBA_PTR_SET_RVALUE(pageParam_, pageParam) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RunSearchCaseFullTextRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryKeywords Field Functions 
    bool hasQueryKeywords() const { return this->queryKeywords_ != nullptr;};
    void deleteQueryKeywords() { this->queryKeywords_ = nullptr;};
    inline const vector<string> & queryKeywords() const { DARABONBA_PTR_GET_CONST(queryKeywords_, vector<string>) };
    inline vector<string> queryKeywords() { DARABONBA_PTR_GET(queryKeywords_, vector<string>) };
    inline RunSearchCaseFullTextRequest& setQueryKeywords(const vector<string> & queryKeywords) { DARABONBA_PTR_SET_VALUE(queryKeywords_, queryKeywords) };
    inline RunSearchCaseFullTextRequest& setQueryKeywords(vector<string> && queryKeywords) { DARABONBA_PTR_SET_RVALUE(queryKeywords_, queryKeywords) };


    // referLevel Field Functions 
    bool hasReferLevel() const { return this->referLevel_ != nullptr;};
    void deleteReferLevel() { this->referLevel_ = nullptr;};
    inline string referLevel() const { DARABONBA_PTR_GET_DEFAULT(referLevel_, "") };
    inline RunSearchCaseFullTextRequest& setReferLevel(string referLevel) { DARABONBA_PTR_SET_VALUE(referLevel_, referLevel) };


    // sortKeyAndDirection Field Functions 
    bool hasSortKeyAndDirection() const { return this->sortKeyAndDirection_ != nullptr;};
    void deleteSortKeyAndDirection() { this->sortKeyAndDirection_ = nullptr;};
    inline const map<string, string> & sortKeyAndDirection() const { DARABONBA_PTR_GET_CONST(sortKeyAndDirection_, map<string, string>) };
    inline map<string, string> sortKeyAndDirection() { DARABONBA_PTR_GET(sortKeyAndDirection_, map<string, string>) };
    inline RunSearchCaseFullTextRequest& setSortKeyAndDirection(const map<string, string> & sortKeyAndDirection) { DARABONBA_PTR_SET_VALUE(sortKeyAndDirection_, sortKeyAndDirection) };
    inline RunSearchCaseFullTextRequest& setSortKeyAndDirection(map<string, string> && sortKeyAndDirection) { DARABONBA_PTR_SET_RVALUE(sortKeyAndDirection_, sortKeyAndDirection) };


    // thread Field Functions 
    bool hasThread() const { return this->thread_ != nullptr;};
    void deleteThread() { this->thread_ = nullptr;};
    inline const RunSearchCaseFullTextRequestThread & thread() const { DARABONBA_PTR_GET_CONST(thread_, RunSearchCaseFullTextRequestThread) };
    inline RunSearchCaseFullTextRequestThread thread() { DARABONBA_PTR_GET(thread_, RunSearchCaseFullTextRequestThread) };
    inline RunSearchCaseFullTextRequest& setThread(const RunSearchCaseFullTextRequestThread & thread) { DARABONBA_PTR_SET_VALUE(thread_, thread) };
    inline RunSearchCaseFullTextRequest& setThread(RunSearchCaseFullTextRequestThread && thread) { DARABONBA_PTR_SET_RVALUE(thread_, thread) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<RunSearchCaseFullTextRequestFilterCondition> filterCondition_ = nullptr;
    // This parameter is required.
    std::shared_ptr<RunSearchCaseFullTextRequestPageParam> pageParam_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<vector<string>> queryKeywords_ = nullptr;
    std::shared_ptr<string> referLevel_ = nullptr;
    std::shared_ptr<map<string, string>> sortKeyAndDirection_ = nullptr;
    std::shared_ptr<RunSearchCaseFullTextRequestThread> thread_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
