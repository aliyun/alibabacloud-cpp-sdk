// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRIGGERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRIGGERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ListTriggersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTriggersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TagSelector, tagSelector_);
    };
    friend void from_json(const Darabonba::Json& j, ListTriggersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TagSelector, tagSelector_);
    };
    ListTriggersRequest() = default ;
    ListTriggersRequest(const ListTriggersRequest &) = default ;
    ListTriggersRequest(ListTriggersRequest &&) = default ;
    ListTriggersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTriggersRequest() = default ;
    ListTriggersRequest& operator=(const ListTriggersRequest &) = default ;
    ListTriggersRequest& operator=(ListTriggersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->order_ != nullptr && this->projectName_ != nullptr && this->sort_ != nullptr && this->state_ != nullptr
        && this->tagSelector_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTriggersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTriggersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListTriggersRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListTriggersRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListTriggersRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListTriggersRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tagSelector Field Functions 
    bool hasTagSelector() const { return this->tagSelector_ != nullptr;};
    void deleteTagSelector() { this->tagSelector_ = nullptr;};
    inline string tagSelector() const { DARABONBA_PTR_GET_DEFAULT(tagSelector_, "") };
    inline ListTriggersRequest& setTagSelector(string tagSelector) { DARABONBA_PTR_SET_VALUE(tagSelector_, tagSelector) };


  protected:
    // The maximum number of entries to return. Valid values: 0 to 100.
    // 
    // Default value: 100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    // 
    // If the total number of triggers is greater than the value of MaxResults, you must specify NextToken.
    // 
    // You do not need to specify this parameter for the first request.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The sort order. Default value: DESC.
    // 
    // *   ASC (default): ascending order.
    // *   DESC: descending order.
    std::shared_ptr<string> order_ = nullptr;
    // The name of the project. You can obtain the name of the project from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The sort field. Valid values:
    // 
    // *   CreateTime: the point in time when the trigger is created.
    // *   UpdateTime: the most recent point in time when the trigger is updated.
    std::shared_ptr<string> sort_ = nullptr;
    // The status of the trigger. Valid values:
    // 
    // *   Ready: The trigger is ready.
    // *   Running: The trigger is running.
    // *   Failed: The trigger failed and cannot be automatically recovered.
    // *   Suspended: The trigger is suspended.
    // *   Succeeded: The trigger is complete.
    std::shared_ptr<string> state_ = nullptr;
    // The custom tag. You can specify this parameter only if you specified Tags when you called the CreateTrigger operation.
    std::shared_ptr<string> tagSelector_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
