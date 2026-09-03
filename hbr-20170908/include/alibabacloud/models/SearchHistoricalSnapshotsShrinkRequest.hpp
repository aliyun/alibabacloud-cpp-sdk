// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHHISTORICALSNAPSHOTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHHISTORICALSNAPSHOTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class SearchHistoricalSnapshotsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchHistoricalSnapshotsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Query, queryShrink_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, SearchHistoricalSnapshotsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Query, queryShrink_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    SearchHistoricalSnapshotsShrinkRequest() = default ;
    SearchHistoricalSnapshotsShrinkRequest(const SearchHistoricalSnapshotsShrinkRequest &) = default ;
    SearchHistoricalSnapshotsShrinkRequest(SearchHistoricalSnapshotsShrinkRequest &&) = default ;
    SearchHistoricalSnapshotsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchHistoricalSnapshotsShrinkRequest() = default ;
    SearchHistoricalSnapshotsShrinkRequest& operator=(const SearchHistoricalSnapshotsShrinkRequest &) = default ;
    SearchHistoricalSnapshotsShrinkRequest& operator=(SearchHistoricalSnapshotsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edition_ == nullptr
        && this->limit_ == nullptr && this->nextToken_ == nullptr && this->order_ == nullptr && this->queryShrink_ == nullptr && this->sortBy_ == nullptr
        && this->sourceType_ == nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline SearchHistoricalSnapshotsShrinkRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline SearchHistoricalSnapshotsShrinkRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchHistoricalSnapshotsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline SearchHistoricalSnapshotsShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // queryShrink Field Functions 
    bool hasQueryShrink() const { return this->queryShrink_ != nullptr;};
    void deleteQueryShrink() { this->queryShrink_ = nullptr;};
    inline string getQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(queryShrink_, "") };
    inline SearchHistoricalSnapshotsShrinkRequest& setQueryShrink(string queryShrink) { DARABONBA_PTR_SET_VALUE(queryShrink_, queryShrink) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline SearchHistoricalSnapshotsShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline SearchHistoricalSnapshotsShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The edition type. Valid values: BASIC and STANDARD. Default value: STANDARD.
    shared_ptr<string> edition_ {};
    // The maximum number of results to return for this query.
    // If you only want to obtain the row count without actual data, set `limit=0` to return no rows.
    shared_ptr<int32_t> limit_ {};
    // The token required to retrieve the next page of snapshots.
    shared_ptr<string> nextToken_ {};
    // The sort order. Default value: ASC.
    // - ASC: ascending order.
    // - DESC: descending order.
    shared_ptr<string> order_ {};
    // The query conditions. Example of Query:
    // 
    // ```
    // [
    //   {
    //     "field": "VaultId",
    //     "value": "v-0003rf9m*****qx5",
    //     "operation": "MATCH_TERM"
    //   },
    //   {
    //     "field": "InstanceId",
    //     "value": "i-bp1i20zq2*****e9368m",
    //     "operation": "MATCH_TERM"
    //   },
    //   {
    //     "field": "PlanId",
    //     "value": "plan-0005vk*****gkd1iu4f",
    //     "operation": "MATCH_TERM"
    //   },
    //   {
    //     "field": "CompleteTime",
    //     "value": "1626769913",
    //     "operation": "GREATER_THAN_OR_EQUAL"
    //   }
    // ]
    // ```
    // 
    // - Supported fields:
    // 
    //     - VaultId: required. The vault ID.
    //     - InstanceId: required only when SourceType=ECS_FILE. The ECS instance ID.
    //     - Bucket: required only when SourceType=OSS. The OSS bucket name.
    //     - FileSystemId: required only when SourceType=NAS. The NAS file system ID.
    //     - CreateTime: required only when SourceType=NAS. The creation time of the NAS file system.
    //     - CompleteTime: the time when the snapshot is completed.
    //     - PlanId: the backup plan ID.
    // 
    // - Supported operations:
    // 
    //     - MATCH_TERM: exact match.
    //     - GREATER_THAN: greater than.
    //     - GREATER_THAN_OR_EQUAL: greater than or equal to.
    //     - LESS_THAN: less than.
    //     - LESS_THAN_OR_EQUAL: less than or equal to.
    //     - BETWEEN: range. The value is a JSON array `[lower bound, upper bound]`.
    //     - IN: in the set. The value is an array.
    //     - NOT_IN: not in the set. The value is an array.
    shared_ptr<string> queryShrink_ {};
    // The field used for sorting.
    shared_ptr<string> sortBy_ {};
    // The type of the data source. Valid values:
    // * **ECS_FILE**: backup snapshots of ECS files.
    // * **OSS**: backup snapshots of Alibaba Cloud OSS.
    // * **NAS**: backup snapshots of Alibaba Cloud NAS.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
