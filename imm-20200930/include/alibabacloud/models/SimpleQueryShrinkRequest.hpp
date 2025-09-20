// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLEQUERYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SIMPLEQUERYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SimpleQueryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimpleQueryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregations, aggregationsShrink_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Query, queryShrink_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(WithFields, withFieldsShrink_);
      DARABONBA_PTR_TO_JSON(WithoutTotalHits, withoutTotalHits_);
    };
    friend void from_json(const Darabonba::Json& j, SimpleQueryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregations, aggregationsShrink_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Query, queryShrink_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(WithFields, withFieldsShrink_);
      DARABONBA_PTR_FROM_JSON(WithoutTotalHits, withoutTotalHits_);
    };
    SimpleQueryShrinkRequest() = default ;
    SimpleQueryShrinkRequest(const SimpleQueryShrinkRequest &) = default ;
    SimpleQueryShrinkRequest(SimpleQueryShrinkRequest &&) = default ;
    SimpleQueryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimpleQueryShrinkRequest() = default ;
    SimpleQueryShrinkRequest& operator=(const SimpleQueryShrinkRequest &) = default ;
    SimpleQueryShrinkRequest& operator=(SimpleQueryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggregationsShrink_ != nullptr
        && this->datasetName_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->order_ != nullptr && this->projectName_ != nullptr
        && this->queryShrink_ != nullptr && this->sort_ != nullptr && this->withFieldsShrink_ != nullptr && this->withoutTotalHits_ != nullptr; };
    // aggregationsShrink Field Functions 
    bool hasAggregationsShrink() const { return this->aggregationsShrink_ != nullptr;};
    void deleteAggregationsShrink() { this->aggregationsShrink_ = nullptr;};
    inline string aggregationsShrink() const { DARABONBA_PTR_GET_DEFAULT(aggregationsShrink_, "") };
    inline SimpleQueryShrinkRequest& setAggregationsShrink(string aggregationsShrink) { DARABONBA_PTR_SET_VALUE(aggregationsShrink_, aggregationsShrink) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline SimpleQueryShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SimpleQueryShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SimpleQueryShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline SimpleQueryShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline SimpleQueryShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // queryShrink Field Functions 
    bool hasQueryShrink() const { return this->queryShrink_ != nullptr;};
    void deleteQueryShrink() { this->queryShrink_ = nullptr;};
    inline string queryShrink() const { DARABONBA_PTR_GET_DEFAULT(queryShrink_, "") };
    inline SimpleQueryShrinkRequest& setQueryShrink(string queryShrink) { DARABONBA_PTR_SET_VALUE(queryShrink_, queryShrink) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline SimpleQueryShrinkRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // withFieldsShrink Field Functions 
    bool hasWithFieldsShrink() const { return this->withFieldsShrink_ != nullptr;};
    void deleteWithFieldsShrink() { this->withFieldsShrink_ = nullptr;};
    inline string withFieldsShrink() const { DARABONBA_PTR_GET_DEFAULT(withFieldsShrink_, "") };
    inline SimpleQueryShrinkRequest& setWithFieldsShrink(string withFieldsShrink) { DARABONBA_PTR_SET_VALUE(withFieldsShrink_, withFieldsShrink) };


    // withoutTotalHits Field Functions 
    bool hasWithoutTotalHits() const { return this->withoutTotalHits_ != nullptr;};
    void deleteWithoutTotalHits() { this->withoutTotalHits_ = nullptr;};
    inline bool withoutTotalHits() const { DARABONBA_PTR_GET_DEFAULT(withoutTotalHits_, false) };
    inline SimpleQueryShrinkRequest& setWithoutTotalHits(bool withoutTotalHits) { DARABONBA_PTR_SET_VALUE(withoutTotalHits_, withoutTotalHits) };


  protected:
    // The aggregations.
    // 
    // >  If you perform an aggregate query, the aggregation returned in the response contains only statistical results, not the actual metadata.
    std::shared_ptr<string> aggregationsShrink_ = nullptr;
    // The name of the dataset.[](~~478160~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // *   If the Aggregations parameter is not specified, this parameter specifies the maximum number of files that can be returned. Valid values: 1 to 100.
    // *   If the Aggregations parameter is specified, this parameter specifies the maximum number of aggregation groups that can be returned. Valid values: 0 to 2000.
    // *   If you do not specify this parameter or set the parameter to 0, the default value of 100 is used.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token is used in the next request to retrieve a new page of results if the total number of results exceeds the value of the MaxResults parameter.
    // 
    // The next call to the operation returns results lexicographically after the NextToken parameter value.
    // 
    // You do not need to specify this parameter in your initial request.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The sort order. Valid values:
    // 
    // *   asc: sorts the results in ascending order.
    // *   desc: sorts the results in descending order. This is the default value.
    // 
    // *   You can specify multiple sort orders that are separated by commas. Example: asc,desc.
    // 
    // *   The number of elements in the Order parameter must be less than or equal to the number of elements in the Sort parameter. For example, if the value of the Sort parameter is Size,Filename, you can set the Order parameter to desc,asc.
    // 
    // *   If the number of sort orders is less than the number of sort fields, the sort fields for which no sorting orders are explicitly specified use the asc order by default. For example, if you set Sort to Size,Filename and Order to asc, the Filename field defaults to the value of asc.
    std::shared_ptr<string> order_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The query conditions.
    std::shared_ptr<string> queryShrink_ = nullptr;
    // The sort fields. For more information, see [Supported fields and operators](https://help.aliyun.com/document_detail/2743991.html).
    // 
    // > 
    // 
    // *   If you specify multiple sort fields, separate them with commas (,), as in Size,Filename.
    // 
    // *   You can specify up to five sort fields.
    // 
    // *   The order of the sort fields determines their precedence in the sorting process.
    std::shared_ptr<string> sort_ = nullptr;
    // The fields that you want to include in the response. You can use this parameter to reduce the size of the response.
    // 
    // If you do not specify this parameter or leave this parameter empty, the operation returns all metadata fields.
    std::shared_ptr<string> withFieldsShrink_ = nullptr;
    // Specifies whether to return the total number of hits. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> withoutTotalHits_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
