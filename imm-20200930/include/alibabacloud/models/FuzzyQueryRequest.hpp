// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUZZYQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FUZZYQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class FuzzyQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FuzzyQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(WithFields, withFields_);
    };
    friend void from_json(const Darabonba::Json& j, FuzzyQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(WithFields, withFields_);
    };
    FuzzyQueryRequest() = default ;
    FuzzyQueryRequest(const FuzzyQueryRequest &) = default ;
    FuzzyQueryRequest(FuzzyQueryRequest &&) = default ;
    FuzzyQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FuzzyQueryRequest() = default ;
    FuzzyQueryRequest& operator=(const FuzzyQueryRequest &) = default ;
    FuzzyQueryRequest& operator=(FuzzyQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->order_ == nullptr && this->projectName_ == nullptr && this->query_ == nullptr
        && this->sort_ == nullptr && this->withFields_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline FuzzyQueryRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline FuzzyQueryRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline FuzzyQueryRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline FuzzyQueryRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline FuzzyQueryRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline FuzzyQueryRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline FuzzyQueryRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // withFields Field Functions 
    bool hasWithFields() const { return this->withFields_ != nullptr;};
    void deleteWithFields() { this->withFields_ = nullptr;};
    inline const vector<string> & getWithFields() const { DARABONBA_PTR_GET_CONST(withFields_, vector<string>) };
    inline vector<string> getWithFields() { DARABONBA_PTR_GET(withFields_, vector<string>) };
    inline FuzzyQueryRequest& setWithFields(const vector<string> & withFields) { DARABONBA_PTR_SET_VALUE(withFields_, withFields) };
    inline FuzzyQueryRequest& setWithFields(vector<string> && withFields) { DARABONBA_PTR_SET_RVALUE(withFields_, withFields) };


  protected:
    // The name of the dataset. For more information about how to obtain the dataset name, see [Create a dataset](https://help.aliyun.com/document_detail/478160.html).
    // 
    // This parameter is required.
    shared_ptr<string> datasetName_ {};
    // The maximum number of files to return. Valid values: 0 to 200.
    // 
    // If you do not set this parameter or set it to 0, the default value is 100.
    shared_ptr<int64_t> maxResults_ {};
    // The token used for pagination when the total number of files exceeds the value of MaxResults.
    // 
    // The list of file information is returned in lexicographical order starting from NextToken.
    // 
    // Set this parameter to empty when you call this operation for the first time.
    shared_ptr<string> nextToken_ {};
    // The sort order of the sort fields. Valid values:
    // 
    // - asc: Ascending order.
    // 
    // - desc: Descending order. This is the default value.
    // 
    // > - You can separate multiple sort orders with commas (,), such as asc,desc.
    // > - The number of sort orders cannot exceed the number of sort fields. That is, the number of elements in the Order parameter must be less than or equal to the number of elements in the Sort parameter. For example, if Sort is set to Size,Filename, Order can be set to desc or asc.
    // > - If the number of sort orders is less than the number of sort fields, the default sort order for the unspecified fields is asc. For example, if Sort is set to Size,Filename and Order is set to asc, the default sort order for Filename is asc, which means ascending order.
    shared_ptr<string> order_ {};
    // The name of the project. For more information about how to obtain the project name, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The string used for the query. The string cannot exceed 1 MB in size.
    // 
    // This parameter is required.
    shared_ptr<string> query_ {};
    // The list of fields by which to sort the results. For more information, see the [list of supported fields and operators](https://help.aliyun.com/document_detail/2743991.html).
    // 
    // - You can separate multiple sort fields with commas (,), such as `Size,Filename`.
    // 
    // - You can specify up to 5 sort fields.
    // 
    // - The order of the sort fields determines the sorting priority.
    shared_ptr<string> sort_ {};
    // Specifies the fields to return. Only the values of the specified fields are returned instead of all existing metadata fields. You can use this parameter to reduce the size of the returned struct.
    // 
    // If you do not specify this parameter or leave it empty, all fields are returned.
    shared_ptr<vector<string>> withFields_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
