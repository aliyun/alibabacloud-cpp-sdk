// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHHISTORICALSNAPSHOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHHISTORICALSNAPSHOTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class SearchHistoricalSnapshotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchHistoricalSnapshotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, SearchHistoricalSnapshotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    SearchHistoricalSnapshotsRequest() = default ;
    SearchHistoricalSnapshotsRequest(const SearchHistoricalSnapshotsRequest &) = default ;
    SearchHistoricalSnapshotsRequest(SearchHistoricalSnapshotsRequest &&) = default ;
    SearchHistoricalSnapshotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchHistoricalSnapshotsRequest() = default ;
    SearchHistoricalSnapshotsRequest& operator=(const SearchHistoricalSnapshotsRequest &) = default ;
    SearchHistoricalSnapshotsRequest& operator=(SearchHistoricalSnapshotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->limit_ != nullptr
        && this->nextToken_ != nullptr && this->order_ != nullptr && this->query_ != nullptr && this->sortBy_ != nullptr && this->sourceType_ != nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline SearchHistoricalSnapshotsRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchHistoricalSnapshotsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline SearchHistoricalSnapshotsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline const vector<Darabonba::Json> & query() const { DARABONBA_PTR_GET_CONST(query_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> query() { DARABONBA_PTR_GET(query_, vector<Darabonba::Json>) };
    inline SearchHistoricalSnapshotsRequest& setQuery(const vector<Darabonba::Json> & query) { DARABONBA_PTR_SET_VALUE(query_, query) };
    inline SearchHistoricalSnapshotsRequest& setQuery(vector<Darabonba::Json> && query) { DARABONBA_PTR_SET_RVALUE(query_, query) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline SearchHistoricalSnapshotsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline SearchHistoricalSnapshotsRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The maximum number of rows that you want the current query to return. To query only the number of matched rows without the need to return specific data, you can set the Limit parameter to `0`. Then, the operation returns only the number of matched rows.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // The token that is required to obtain the next page of backup snapshots.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ordering mode. Valid values:
    // 
    // *   ASC (default): ascending order
    // *   DESC: descending order
    std::shared_ptr<string> order_ = nullptr;
    // The query conditions. Example:
    // 
    //     [
    //       {
    //         "field": "VaultId",
    //         "value": "v-0003rf9m*****qx5",
    //         "operation": "MATCH_TERM"
    //       },
    //       {
    //         "field": "InstanceId",
    //         "value": "i-bp1i20zq2*****e9368m",
    //         "operation": "MATCH_TERM"
    //       },
    //       {
    //         "field": "PlanId",
    //         "value": "plan-0005vk*****gkd1iu4f",
    //         "operation": "MATCH_TERM"
    //       },
    //       {
    //         "field": "CompleteTime",
    //         "value": "1626769913",
    //         "operation": "GREATER_THAN_OR_EQUAL"
    //       }
    //     ]
    // 
    // *   The following fields are supported:
    // 
    //     *   VaultId: specifies the ID of the backup vault. This field is required.
    //     *   InstanceId: specifies the ID of the Elastic Compute Service (ECS) instance. If the SourceType parameter is set to ECS_FILE, this field is required.
    //     *   Bucket: specifies the name of the Object Storage Service (OSS) bucket. If the SourceType parameter is set to OSS, this field is required.
    //     *   FileSystemId: specifies the ID of the File Storage NAS (NAS) file system. If the SourceType parameter is set to NAS, this field is required.
    //     *   CreateTime: specifies the time when the NAS file system was created. If the SourceType parameter is set to NAS, this field is required.
    //     *   CompleteTime: specifies the time when the backup snapshot was completed.
    //     *   PlanId: the ID of a backup plan.
    // 
    // *   The following operations are supported:
    // 
    //     *   MATCH_TERM: exact match.
    //     *   GREATER_THAN: greater than.
    //     *   GREATER_THAN_OR_EQUAL: greater than or equal to.
    //     *   LESS_THAN: less than.
    //     *   LESS_THAN_OR_EQUAL: less than or equal to.
    //     *   BETWEEN: specifies a JSON array as a range. The results must fall within the range in the `[Minimum value,Maximum value]` format.
    //     *   IN: specifies an array as a collection. The results must fall within the collection.
    //     *   NOT_IN: specifies an array as a collection. The results cannot fall within the collection.
    std::shared_ptr<vector<Darabonba::Json>> query_ = nullptr;
    // The field that is used to sort data.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: backup snapshots for Elastic Compute Service (ECS) files
    // *   **OSS**: backup snapshots for Object Storage Service (OSS) buckets
    // *   **NAS**: backup snapshots for Apsara File Storage NAS file systems
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
