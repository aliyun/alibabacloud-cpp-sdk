// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHCASEFULLTEXTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHCASEFULLTEXTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunSearchCaseFullTextShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchCaseFullTextShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(filterCondition, filterConditionShrink_);
      DARABONBA_PTR_TO_JSON(pageParam, pageParamShrink_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(queryKeywords, queryKeywordsShrink_);
      DARABONBA_PTR_TO_JSON(referLevel, referLevel_);
      DARABONBA_PTR_TO_JSON(sortKeyAndDirection, sortKeyAndDirectionShrink_);
      DARABONBA_PTR_TO_JSON(thread, threadShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchCaseFullTextShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(filterCondition, filterConditionShrink_);
      DARABONBA_PTR_FROM_JSON(pageParam, pageParamShrink_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(queryKeywords, queryKeywordsShrink_);
      DARABONBA_PTR_FROM_JSON(referLevel, referLevel_);
      DARABONBA_PTR_FROM_JSON(sortKeyAndDirection, sortKeyAndDirectionShrink_);
      DARABONBA_PTR_FROM_JSON(thread, threadShrink_);
    };
    RunSearchCaseFullTextShrinkRequest() = default ;
    RunSearchCaseFullTextShrinkRequest(const RunSearchCaseFullTextShrinkRequest &) = default ;
    RunSearchCaseFullTextShrinkRequest(RunSearchCaseFullTextShrinkRequest &&) = default ;
    RunSearchCaseFullTextShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchCaseFullTextShrinkRequest() = default ;
    RunSearchCaseFullTextShrinkRequest& operator=(const RunSearchCaseFullTextShrinkRequest &) = default ;
    RunSearchCaseFullTextShrinkRequest& operator=(RunSearchCaseFullTextShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->filterConditionShrink_ == nullptr && return this->pageParamShrink_ == nullptr && return this->query_ == nullptr && return this->queryKeywordsShrink_ == nullptr && return this->referLevel_ == nullptr
        && return this->sortKeyAndDirectionShrink_ == nullptr && return this->threadShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RunSearchCaseFullTextShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // filterConditionShrink Field Functions 
    bool hasFilterConditionShrink() const { return this->filterConditionShrink_ != nullptr;};
    void deleteFilterConditionShrink() { this->filterConditionShrink_ = nullptr;};
    inline string filterConditionShrink() const { DARABONBA_PTR_GET_DEFAULT(filterConditionShrink_, "") };
    inline RunSearchCaseFullTextShrinkRequest& setFilterConditionShrink(string filterConditionShrink) { DARABONBA_PTR_SET_VALUE(filterConditionShrink_, filterConditionShrink) };


    // pageParamShrink Field Functions 
    bool hasPageParamShrink() const { return this->pageParamShrink_ != nullptr;};
    void deletePageParamShrink() { this->pageParamShrink_ = nullptr;};
    inline string pageParamShrink() const { DARABONBA_PTR_GET_DEFAULT(pageParamShrink_, "") };
    inline RunSearchCaseFullTextShrinkRequest& setPageParamShrink(string pageParamShrink) { DARABONBA_PTR_SET_VALUE(pageParamShrink_, pageParamShrink) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RunSearchCaseFullTextShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryKeywordsShrink Field Functions 
    bool hasQueryKeywordsShrink() const { return this->queryKeywordsShrink_ != nullptr;};
    void deleteQueryKeywordsShrink() { this->queryKeywordsShrink_ = nullptr;};
    inline string queryKeywordsShrink() const { DARABONBA_PTR_GET_DEFAULT(queryKeywordsShrink_, "") };
    inline RunSearchCaseFullTextShrinkRequest& setQueryKeywordsShrink(string queryKeywordsShrink) { DARABONBA_PTR_SET_VALUE(queryKeywordsShrink_, queryKeywordsShrink) };


    // referLevel Field Functions 
    bool hasReferLevel() const { return this->referLevel_ != nullptr;};
    void deleteReferLevel() { this->referLevel_ = nullptr;};
    inline string referLevel() const { DARABONBA_PTR_GET_DEFAULT(referLevel_, "") };
    inline RunSearchCaseFullTextShrinkRequest& setReferLevel(string referLevel) { DARABONBA_PTR_SET_VALUE(referLevel_, referLevel) };


    // sortKeyAndDirectionShrink Field Functions 
    bool hasSortKeyAndDirectionShrink() const { return this->sortKeyAndDirectionShrink_ != nullptr;};
    void deleteSortKeyAndDirectionShrink() { this->sortKeyAndDirectionShrink_ = nullptr;};
    inline string sortKeyAndDirectionShrink() const { DARABONBA_PTR_GET_DEFAULT(sortKeyAndDirectionShrink_, "") };
    inline RunSearchCaseFullTextShrinkRequest& setSortKeyAndDirectionShrink(string sortKeyAndDirectionShrink) { DARABONBA_PTR_SET_VALUE(sortKeyAndDirectionShrink_, sortKeyAndDirectionShrink) };


    // threadShrink Field Functions 
    bool hasThreadShrink() const { return this->threadShrink_ != nullptr;};
    void deleteThreadShrink() { this->threadShrink_ = nullptr;};
    inline string threadShrink() const { DARABONBA_PTR_GET_DEFAULT(threadShrink_, "") };
    inline RunSearchCaseFullTextShrinkRequest& setThreadShrink(string threadShrink) { DARABONBA_PTR_SET_VALUE(threadShrink_, threadShrink) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> filterConditionShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pageParamShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<string> queryKeywordsShrink_ = nullptr;
    std::shared_ptr<string> referLevel_ = nullptr;
    std::shared_ptr<string> sortKeyAndDirectionShrink_ = nullptr;
    std::shared_ptr<string> threadShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
