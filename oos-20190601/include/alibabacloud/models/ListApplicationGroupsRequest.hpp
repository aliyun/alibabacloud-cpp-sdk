// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListApplicationGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(DeployRegionId, deployRegionId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceProduct, resourceProduct_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(DeployRegionId, deployRegionId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceProduct, resourceProduct_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ListApplicationGroupsRequest() = default ;
    ListApplicationGroupsRequest(const ListApplicationGroupsRequest &) = default ;
    ListApplicationGroupsRequest(ListApplicationGroupsRequest &&) = default ;
    ListApplicationGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationGroupsRequest() = default ;
    ListApplicationGroupsRequest& operator=(const ListApplicationGroupsRequest &) = default ;
    ListApplicationGroupsRequest& operator=(ListApplicationGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->deployRegionId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr
        && this->resourceProduct_ == nullptr && this->resourceType_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListApplicationGroupsRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // deployRegionId Field Functions 
    bool hasDeployRegionId() const { return this->deployRegionId_ != nullptr;};
    void deleteDeployRegionId() { this->deployRegionId_ = nullptr;};
    inline string getDeployRegionId() const { DARABONBA_PTR_GET_DEFAULT(deployRegionId_, "") };
    inline ListApplicationGroupsRequest& setDeployRegionId(string deployRegionId) { DARABONBA_PTR_SET_VALUE(deployRegionId_, deployRegionId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListApplicationGroupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApplicationGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListApplicationGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListApplicationGroupsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceProduct Field Functions 
    bool hasResourceProduct() const { return this->resourceProduct_ != nullptr;};
    void deleteResourceProduct() { this->resourceProduct_ = nullptr;};
    inline string getResourceProduct() const { DARABONBA_PTR_GET_DEFAULT(resourceProduct_, "") };
    inline ListApplicationGroupsRequest& setResourceProduct(string resourceProduct) { DARABONBA_PTR_SET_VALUE(resourceProduct_, resourceProduct) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListApplicationGroupsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The name of the application.
    shared_ptr<string> applicationName_ {};
    // The ID of the region in which the related resources reside.
    shared_ptr<string> deployRegionId_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the region. Set the value to cn-hangzhou.
    shared_ptr<string> regionId_ {};
    // The ID of the cloud resource.
    shared_ptr<string> resourceId_ {};
    // The code of the product to which the cloud resource belongs.
    shared_ptr<string> resourceProduct_ {};
    // The type of the cloud resource.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
