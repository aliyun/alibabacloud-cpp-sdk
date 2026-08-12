// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODEGROUPREFRESHTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODEGROUPREFRESHTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeNodeGroupRefreshTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeGroupRefreshTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeGroupRefreshTaskId, nodeGroupRefreshTaskId_);
      DARABONBA_PTR_TO_JSON(NodeStatuses, nodeStatusesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeGroupRefreshTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeGroupRefreshTaskId, nodeGroupRefreshTaskId_);
      DARABONBA_PTR_FROM_JSON(NodeStatuses, nodeStatusesShrink_);
    };
    DescribeNodeGroupRefreshTaskShrinkRequest() = default ;
    DescribeNodeGroupRefreshTaskShrinkRequest(const DescribeNodeGroupRefreshTaskShrinkRequest &) = default ;
    DescribeNodeGroupRefreshTaskShrinkRequest(DescribeNodeGroupRefreshTaskShrinkRequest &&) = default ;
    DescribeNodeGroupRefreshTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeGroupRefreshTaskShrinkRequest() = default ;
    DescribeNodeGroupRefreshTaskShrinkRequest& operator=(const DescribeNodeGroupRefreshTaskShrinkRequest &) = default ;
    DescribeNodeGroupRefreshTaskShrinkRequest& operator=(DescribeNodeGroupRefreshTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->nodeGroupRefreshTaskId_ == nullptr && this->nodeStatusesShrink_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeNodeGroupRefreshTaskShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNodeGroupRefreshTaskShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeGroupRefreshTaskId Field Functions 
    bool hasNodeGroupRefreshTaskId() const { return this->nodeGroupRefreshTaskId_ != nullptr;};
    void deleteNodeGroupRefreshTaskId() { this->nodeGroupRefreshTaskId_ = nullptr;};
    inline string getNodeGroupRefreshTaskId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupRefreshTaskId_, "") };
    inline DescribeNodeGroupRefreshTaskShrinkRequest& setNodeGroupRefreshTaskId(string nodeGroupRefreshTaskId) { DARABONBA_PTR_SET_VALUE(nodeGroupRefreshTaskId_, nodeGroupRefreshTaskId) };


    // nodeStatusesShrink Field Functions 
    bool hasNodeStatusesShrink() const { return this->nodeStatusesShrink_ != nullptr;};
    void deleteNodeStatusesShrink() { this->nodeStatusesShrink_ = nullptr;};
    inline string getNodeStatusesShrink() const { DARABONBA_PTR_GET_DEFAULT(nodeStatusesShrink_, "") };
    inline DescribeNodeGroupRefreshTaskShrinkRequest& setNodeStatusesShrink(string nodeStatusesShrink) { DARABONBA_PTR_SET_VALUE(nodeStatusesShrink_, nodeStatusesShrink) };


  protected:
    // The maximum number of entries per page for a paged query. Valid values: 1 to 500. Default value: 100. For more information about paging, set this parameter together with NextToken.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Set this parameter to the NextToken value returned in the previous call. You do not need to set this parameter for the first request. This parameter is used to paginate through the node list in the current refresh task.
    shared_ptr<string> nextToken_ {};
    // The ID of the refresh task.
    // 
    // This parameter is required.
    shared_ptr<string> nodeGroupRefreshTaskId_ {};
    // The node refresh statuses to filter by. Valid values:
    // - Pending: the node is waiting to be refreshed.
    // - InProgress: the node is being refreshed.
    // - Success: the node is refreshed.
    // - Failed: the node failed to be refreshed.
    // - Skipped: all properties to be refreshed on the node exceeded the MaxDisruptiveAction constraint and were skipped.
    shared_ptr<string> nodeStatusesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
