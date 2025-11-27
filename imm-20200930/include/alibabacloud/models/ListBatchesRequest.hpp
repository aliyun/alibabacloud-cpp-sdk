// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBATCHESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBATCHESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ListBatchesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBatchesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TagSelector, tagSelector_);
    };
    friend void from_json(const Darabonba::Json& j, ListBatchesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TagSelector, tagSelector_);
    };
    ListBatchesRequest() = default ;
    ListBatchesRequest(const ListBatchesRequest &) = default ;
    ListBatchesRequest(ListBatchesRequest &&) = default ;
    ListBatchesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBatchesRequest() = default ;
    ListBatchesRequest& operator=(const ListBatchesRequest &) = default ;
    ListBatchesRequest& operator=(ListBatchesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->order_ == nullptr && return this->projectName_ == nullptr && return this->sort_ == nullptr && return this->state_ == nullptr
        && return this->tagSelector_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListBatchesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListBatchesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListBatchesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListBatchesRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListBatchesRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListBatchesRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tagSelector Field Functions 
    bool hasTagSelector() const { return this->tagSelector_ != nullptr;};
    void deleteTagSelector() { this->tagSelector_ = nullptr;};
    inline string tagSelector() const { DARABONBA_PTR_GET_DEFAULT(tagSelector_, "") };
    inline ListBatchesRequest& setTagSelector(string tagSelector) { DARABONBA_PTR_SET_VALUE(tagSelector_, tagSelector) };


  protected:
    // The maximum number of results to return. Valid values: 0 to 100.
    // 
    // If you do not specify this parameter or set the parameter to 0, the default value of 100 is used.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token.
    // 
    // The pagination token is used in the next request to retrieve a new page of results if the total number of results exceeds the value of the MaxResults parameter. The next call to the operation returns results lexicographically after the NextToken parameter value.
    // 
    // You do not need to specify this parameter in your initial request.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The sort order. Valid values:
    // 
    // *   ASC: sorts the results in ascending order. This is the default sort order.
    // *   DES: sorts the results in descending order.
    std::shared_ptr<string> order_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The sort field. Valid values:
    // 
    // *   CreateTime
    // *   UpdateTime
    std::shared_ptr<string> sort_ = nullptr;
    // The task status.
    // 
    // *   Ready: The task is newly created and ready.
    // *   Running: The task is running.
    // *   Failed: The task failed and cannot be automatically recovered.
    // *   Suspended: The task is suspended.
    // *   Succeeded: The task is successful.
    std::shared_ptr<string> state_ = nullptr;
    // The custom tag. You can use this parameter to query tasks that have the specified tag.
    std::shared_ptr<string> tagSelector_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
