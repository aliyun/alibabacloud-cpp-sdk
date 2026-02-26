// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLEQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SIMPLEQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SimpleQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SimpleQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimpleQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregations, aggregations_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(WithFields, withFields_);
      DARABONBA_PTR_TO_JSON(WithoutTotalHits, withoutTotalHits_);
    };
    friend void from_json(const Darabonba::Json& j, SimpleQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregations, aggregations_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(WithFields, withFields_);
      DARABONBA_PTR_FROM_JSON(WithoutTotalHits, withoutTotalHits_);
    };
    SimpleQueryRequest() = default ;
    SimpleQueryRequest(const SimpleQueryRequest &) = default ;
    SimpleQueryRequest(SimpleQueryRequest &&) = default ;
    SimpleQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimpleQueryRequest() = default ;
    SimpleQueryRequest& operator=(const SimpleQueryRequest &) = default ;
    SimpleQueryRequest& operator=(SimpleQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Aggregations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Aggregations& obj) { 
        DARABONBA_PTR_TO_JSON(Field, field_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
      };
      friend void from_json(const Darabonba::Json& j, Aggregations& obj) { 
        DARABONBA_PTR_FROM_JSON(Field, field_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
      };
      Aggregations() = default ;
      Aggregations(const Aggregations &) = default ;
      Aggregations(Aggregations &&) = default ;
      Aggregations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Aggregations() = default ;
      Aggregations& operator=(const Aggregations &) = default ;
      Aggregations& operator=(Aggregations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->field_ == nullptr
        && this->operation_ == nullptr; };
      // field Field Functions 
      bool hasField() const { return this->field_ != nullptr;};
      void deleteField() { this->field_ = nullptr;};
      inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
      inline Aggregations& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline Aggregations& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    protected:
      // The name of the field. For more information about supported fields, see [Supported fields and operators](https://help.aliyun.com/document_detail/2743991.html).
      shared_ptr<string> field_ {};
      // The operator.
      // 
      // Enumerated values:
      // 
      // *   average: calculates the average number.
      // *   min: finds the minimum value.
      // *   max: finds the maximum value.
      // *   count: counts the number of results.
      // *   distinct: counts the number of distinct results.
      // *   sum: calculates the sum of all matching results..
      // *   group: counts the number of results by group. The results are sorted by the count number in descending order.
      shared_ptr<string> operation_ {};
    };

    virtual bool empty() const override { return this->aggregations_ == nullptr
        && this->datasetName_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->order_ == nullptr && this->projectName_ == nullptr
        && this->query_ == nullptr && this->sort_ == nullptr && this->withFields_ == nullptr && this->withoutTotalHits_ == nullptr; };
    // aggregations Field Functions 
    bool hasAggregations() const { return this->aggregations_ != nullptr;};
    void deleteAggregations() { this->aggregations_ = nullptr;};
    inline const vector<SimpleQueryRequest::Aggregations> & getAggregations() const { DARABONBA_PTR_GET_CONST(aggregations_, vector<SimpleQueryRequest::Aggregations>) };
    inline vector<SimpleQueryRequest::Aggregations> getAggregations() { DARABONBA_PTR_GET(aggregations_, vector<SimpleQueryRequest::Aggregations>) };
    inline SimpleQueryRequest& setAggregations(const vector<SimpleQueryRequest::Aggregations> & aggregations) { DARABONBA_PTR_SET_VALUE(aggregations_, aggregations) };
    inline SimpleQueryRequest& setAggregations(vector<SimpleQueryRequest::Aggregations> && aggregations) { DARABONBA_PTR_SET_RVALUE(aggregations_, aggregations) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline SimpleQueryRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SimpleQueryRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SimpleQueryRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline SimpleQueryRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline SimpleQueryRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline const SimpleQuery & getQuery() const { DARABONBA_PTR_GET_CONST(query_, SimpleQuery) };
    inline SimpleQuery getQuery() { DARABONBA_PTR_GET(query_, SimpleQuery) };
    inline SimpleQueryRequest& setQuery(const SimpleQuery & query) { DARABONBA_PTR_SET_VALUE(query_, query) };
    inline SimpleQueryRequest& setQuery(SimpleQuery && query) { DARABONBA_PTR_SET_RVALUE(query_, query) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline SimpleQueryRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // withFields Field Functions 
    bool hasWithFields() const { return this->withFields_ != nullptr;};
    void deleteWithFields() { this->withFields_ = nullptr;};
    inline const vector<string> & getWithFields() const { DARABONBA_PTR_GET_CONST(withFields_, vector<string>) };
    inline vector<string> getWithFields() { DARABONBA_PTR_GET(withFields_, vector<string>) };
    inline SimpleQueryRequest& setWithFields(const vector<string> & withFields) { DARABONBA_PTR_SET_VALUE(withFields_, withFields) };
    inline SimpleQueryRequest& setWithFields(vector<string> && withFields) { DARABONBA_PTR_SET_RVALUE(withFields_, withFields) };


    // withoutTotalHits Field Functions 
    bool hasWithoutTotalHits() const { return this->withoutTotalHits_ != nullptr;};
    void deleteWithoutTotalHits() { this->withoutTotalHits_ = nullptr;};
    inline bool getWithoutTotalHits() const { DARABONBA_PTR_GET_DEFAULT(withoutTotalHits_, false) };
    inline SimpleQueryRequest& setWithoutTotalHits(bool withoutTotalHits) { DARABONBA_PTR_SET_VALUE(withoutTotalHits_, withoutTotalHits) };


  protected:
    // The aggregations.
    // 
    // >  If you perform an aggregate query, the aggregation returned in the response contains only statistical results, not the actual metadata.
    shared_ptr<vector<SimpleQueryRequest::Aggregations>> aggregations_ {};
    // The name of the dataset.[](~~478160~~)
    // 
    // This parameter is required.
    shared_ptr<string> datasetName_ {};
    // *   If the Aggregations parameter is not specified, this parameter specifies the maximum number of files that can be returned. Valid values: 1 to 100.
    // *   If the Aggregations parameter is specified, this parameter specifies the maximum number of aggregation groups that can be returned. Valid values: 0 to 2000.
    // *   If you do not specify this parameter or set the parameter to 0, the default value of 100 is used.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token is used in the next request to retrieve a new page of results if the total number of results exceeds the value of the MaxResults parameter.
    // 
    // The next call to the operation returns results lexicographically after the NextToken parameter value.
    // 
    // You do not need to specify this parameter in your initial request.
    shared_ptr<string> nextToken_ {};
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
    shared_ptr<string> order_ {};
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The query conditions.
    shared_ptr<SimpleQuery> query_ {};
    // The sort fields. For more information, see [Supported fields and operators](https://help.aliyun.com/document_detail/2743991.html).
    // 
    // > 
    // 
    // *   If you specify multiple sort fields, separate them with commas (,), as in Size,Filename.
    // 
    // *   You can specify up to five sort fields.
    // 
    // *   The order of the sort fields determines their precedence in the sorting process.
    shared_ptr<string> sort_ {};
    // The fields that you want to include in the response. You can use this parameter to reduce the size of the response.
    // 
    // If you do not specify this parameter or leave this parameter empty, the operation returns all metadata fields.
    shared_ptr<vector<string>> withFields_ {};
    // Specifies whether to return the total number of hits. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> withoutTotalHits_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
