// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEGROUPREFRESHTASKSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEGROUPREFRESHTASKSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListNodeGroupRefreshTasksShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeGroupRefreshTasksShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(Statuses, statusesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeGroupRefreshTasksShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(Statuses, statusesShrink_);
    };
    ListNodeGroupRefreshTasksShrinkRequest() = default ;
    ListNodeGroupRefreshTasksShrinkRequest(const ListNodeGroupRefreshTasksShrinkRequest &) = default ;
    ListNodeGroupRefreshTasksShrinkRequest(ListNodeGroupRefreshTasksShrinkRequest &&) = default ;
    ListNodeGroupRefreshTasksShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeGroupRefreshTasksShrinkRequest() = default ;
    ListNodeGroupRefreshTasksShrinkRequest& operator=(const ListNodeGroupRefreshTasksShrinkRequest &) = default ;
    ListNodeGroupRefreshTasksShrinkRequest& operator=(ListNodeGroupRefreshTasksShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->nodeGroupId_ == nullptr && this->statusesShrink_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListNodeGroupRefreshTasksShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNodeGroupRefreshTasksShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNodeGroupRefreshTasksShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ListNodeGroupRefreshTasksShrinkRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // statusesShrink Field Functions 
    bool hasStatusesShrink() const { return this->statusesShrink_ != nullptr;};
    void deleteStatusesShrink() { this->statusesShrink_ = nullptr;};
    inline string getStatusesShrink() const { DARABONBA_PTR_GET_DEFAULT(statusesShrink_, "") };
    inline ListNodeGroupRefreshTasksShrinkRequest& setStatusesShrink(string statusesShrink) { DARABONBA_PTR_SET_VALUE(statusesShrink_, statusesShrink) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The maximum number of entries per page for a paging query. Valid values: 1 to 500. Default value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Set this parameter to the NextToken value returned in the previous call. You do not need to set this parameter for the first request.
    shared_ptr<string> nextToken_ {};
    // The node group ID.
    shared_ptr<string> nodeGroupId_ {};
    // The list of task statuses. Valid values:
    // - Pending: The refresh task is created and waiting to be executed.
    // - InProgress: The refresh task is being processed.
    // - Success: The refresh task is executed.
    // - Failed: The refresh task failed.
    shared_ptr<string> statusesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
