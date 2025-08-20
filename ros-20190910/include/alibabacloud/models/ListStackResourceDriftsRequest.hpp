// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKRESOURCEDRIFTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKRESOURCEDRIFTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackResourceDriftsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackResourceDriftsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceDriftStatus, resourceDriftStatus_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackResourceDriftsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceDriftStatus, resourceDriftStatus_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
    };
    ListStackResourceDriftsRequest() = default ;
    ListStackResourceDriftsRequest(const ListStackResourceDriftsRequest &) = default ;
    ListStackResourceDriftsRequest(ListStackResourceDriftsRequest &&) = default ;
    ListStackResourceDriftsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackResourceDriftsRequest() = default ;
    ListStackResourceDriftsRequest& operator=(const ListStackResourceDriftsRequest &) = default ;
    ListStackResourceDriftsRequest& operator=(ListStackResourceDriftsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->regionId_ != nullptr && this->resourceDriftStatus_ != nullptr && this->stackId_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListStackResourceDriftsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListStackResourceDriftsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListStackResourceDriftsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceDriftStatus Field Functions 
    bool hasResourceDriftStatus() const { return this->resourceDriftStatus_ != nullptr;};
    void deleteResourceDriftStatus() { this->resourceDriftStatus_ = nullptr;};
    inline const vector<string> & resourceDriftStatus() const { DARABONBA_PTR_GET_CONST(resourceDriftStatus_, vector<string>) };
    inline vector<string> resourceDriftStatus() { DARABONBA_PTR_GET(resourceDriftStatus_, vector<string>) };
    inline ListStackResourceDriftsRequest& setResourceDriftStatus(const vector<string> & resourceDriftStatus) { DARABONBA_PTR_SET_VALUE(resourceDriftStatus_, resourceDriftStatus) };
    inline ListStackResourceDriftsRequest& setResourceDriftStatus(vector<string> && resourceDriftStatus) { DARABONBA_PTR_SET_RVALUE(resourceDriftStatus_, resourceDriftStatus) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline ListStackResourceDriftsRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


  protected:
    // The time when the resource drift detection operation was initiated.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The physical ID of the resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource properties as defined in the template, in JSON format.
    std::shared_ptr<vector<string>> resourceDriftStatus_ = nullptr;
    // The ID of the stack.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
