// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSIMILARIMAGECLUSTERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSIMILARIMAGECLUSTERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class QuerySimilarImageClustersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySimilarImageClustersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySimilarImageClustersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
    };
    QuerySimilarImageClustersRequest() = default ;
    QuerySimilarImageClustersRequest(const QuerySimilarImageClustersRequest &) = default ;
    QuerySimilarImageClustersRequest(QuerySimilarImageClustersRequest &&) = default ;
    QuerySimilarImageClustersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySimilarImageClustersRequest() = default ;
    QuerySimilarImageClustersRequest& operator=(const QuerySimilarImageClustersRequest &) = default ;
    QuerySimilarImageClustersRequest& operator=(QuerySimilarImageClustersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customLabels_ == nullptr
        && return this->datasetName_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->order_ == nullptr && return this->projectName_ == nullptr
        && return this->sort_ == nullptr; };
    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline string customLabels() const { DARABONBA_PTR_GET_DEFAULT(customLabels_, "") };
    inline QuerySimilarImageClustersRequest& setCustomLabels(string customLabels) { DARABONBA_PTR_SET_VALUE(customLabels_, customLabels) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline QuerySimilarImageClustersRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QuerySimilarImageClustersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QuerySimilarImageClustersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline QuerySimilarImageClustersRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline QuerySimilarImageClustersRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline QuerySimilarImageClustersRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


  protected:
    // The custom tags, which are used to filter tasks.
    std::shared_ptr<string> customLabels_ = nullptr;
    // The name of the dataset. For more information, see [Create a dataset](https://help.aliyun.com/document_detail/478160.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The number of entries per page. Value range: 0 to 100. Default value: 100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token.
    // 
    // If the total number of clusters is greater than the value of MaxResults, you must specify this parameter. The next call to the operation returns results lexicographically after the NextToken parameter value.
    // 
    // >  The first time you call this operation in a query, set this parameter to null.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The sorting order. Valid values:
    // 
    // *   asc: ascending order.
    // *   desc: descending order. This is the default value.
    std::shared_ptr<string> order_ = nullptr;
    // The name of the project. For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The sorting field.
    // 
    // *   CreateTime: the time when the clusters were created.
    // *   UpdateTime: the time when the clusters were updated. This is the default value.
    std::shared_ptr<string> sort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
