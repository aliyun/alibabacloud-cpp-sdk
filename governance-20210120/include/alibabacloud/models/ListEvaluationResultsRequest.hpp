// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEvaluationResultsRequestFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(LensCode, lensCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(TopicCode, topicCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(LensCode, lensCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(TopicCode, topicCode_);
    };
    ListEvaluationResultsRequest() = default ;
    ListEvaluationResultsRequest(const ListEvaluationResultsRequest &) = default ;
    ListEvaluationResultsRequest(ListEvaluationResultsRequest &&) = default ;
    ListEvaluationResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationResultsRequest() = default ;
    ListEvaluationResultsRequest& operator=(const ListEvaluationResultsRequest &) = default ;
    ListEvaluationResultsRequest& operator=(ListEvaluationResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->filters_ == nullptr && return this->lensCode_ == nullptr && return this->regionId_ == nullptr && return this->scope_ == nullptr && return this->snapshotId_ == nullptr
        && return this->topicCode_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline ListEvaluationResultsRequest& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<ListEvaluationResultsRequestFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<ListEvaluationResultsRequestFilters>) };
    inline vector<ListEvaluationResultsRequestFilters> filters() { DARABONBA_PTR_GET(filters_, vector<ListEvaluationResultsRequestFilters>) };
    inline ListEvaluationResultsRequest& setFilters(const vector<ListEvaluationResultsRequestFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline ListEvaluationResultsRequest& setFilters(vector<ListEvaluationResultsRequestFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // lensCode Field Functions 
    bool hasLensCode() const { return this->lensCode_ != nullptr;};
    void deleteLensCode() { this->lensCode_ = nullptr;};
    inline string lensCode() const { DARABONBA_PTR_GET_DEFAULT(lensCode_, "") };
    inline ListEvaluationResultsRequest& setLensCode(string lensCode) { DARABONBA_PTR_SET_VALUE(lensCode_, lensCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEvaluationResultsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListEvaluationResultsRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline ListEvaluationResultsRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // topicCode Field Functions 
    bool hasTopicCode() const { return this->topicCode_ != nullptr;};
    void deleteTopicCode() { this->topicCode_ = nullptr;};
    inline string topicCode() const { DARABONBA_PTR_GET_DEFAULT(topicCode_, "") };
    inline ListEvaluationResultsRequest& setTopicCode(string topicCode) { DARABONBA_PTR_SET_VALUE(topicCode_, topicCode) };


  protected:
    // The Alibaba Cloud account ID of the member. This parameter takes effect only when a multi-account governance maturity check is performed.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The filter conditions.
    std::shared_ptr<vector<ListEvaluationResultsRequestFilters>> filters_ = nullptr;
    std::shared_ptr<string> lensCode_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> scope_ = nullptr;
    std::shared_ptr<string> snapshotId_ = nullptr;
    std::shared_ptr<string> topicCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
