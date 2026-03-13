// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      Filters() = default ;
      Filters(const Filters &) = default ;
      Filters(Filters &&) = default ;
      Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filters() = default ;
      Filters& operator=(const Filters &) = default ;
      Filters& operator=(Filters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->values_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
      inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
      inline Filters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline Filters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // The key of the filter condition. Valid values:
      // 
      // *   ResourceId: the resource ID.
      // *   ResourceName: the name of the resource.
      // *   ResourceType: the resource type.
      shared_ptr<string> key_ {};
      // The list of filter condition values.
      shared_ptr<vector<string>> values_ {};
    };

    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->filters_ == nullptr && this->lensCode_ == nullptr && this->regionId_ == nullptr && this->scope_ == nullptr && this->snapshotId_ == nullptr
        && this->topicCode_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline ListEvaluationResultsRequest& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<ListEvaluationResultsRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<ListEvaluationResultsRequest::Filters>) };
    inline vector<ListEvaluationResultsRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<ListEvaluationResultsRequest::Filters>) };
    inline ListEvaluationResultsRequest& setFilters(const vector<ListEvaluationResultsRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline ListEvaluationResultsRequest& setFilters(vector<ListEvaluationResultsRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // lensCode Field Functions 
    bool hasLensCode() const { return this->lensCode_ != nullptr;};
    void deleteLensCode() { this->lensCode_ = nullptr;};
    inline string getLensCode() const { DARABONBA_PTR_GET_DEFAULT(lensCode_, "") };
    inline ListEvaluationResultsRequest& setLensCode(string lensCode) { DARABONBA_PTR_SET_VALUE(lensCode_, lensCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEvaluationResultsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListEvaluationResultsRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline ListEvaluationResultsRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // topicCode Field Functions 
    bool hasTopicCode() const { return this->topicCode_ != nullptr;};
    void deleteTopicCode() { this->topicCode_ = nullptr;};
    inline string getTopicCode() const { DARABONBA_PTR_GET_DEFAULT(topicCode_, "") };
    inline ListEvaluationResultsRequest& setTopicCode(string topicCode) { DARABONBA_PTR_SET_VALUE(topicCode_, topicCode) };


  protected:
    // The Alibaba Cloud account ID of the member. This parameter takes effect only when a multi-account governance maturity check is performed.
    shared_ptr<int64_t> accountId_ {};
    // The filter conditions.
    shared_ptr<vector<ListEvaluationResultsRequest::Filters>> filters_ {};
    shared_ptr<string> lensCode_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> scope_ {};
    shared_ptr<string> snapshotId_ {};
    shared_ptr<string> topicCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
