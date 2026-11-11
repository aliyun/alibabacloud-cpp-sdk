// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDACCOUNTRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDACCOUNTRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListCloudAccountResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAccountResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_TO_JSON(CloudAccountResourceEntityType, cloudAccountResourceEntityType_);
      DARABONBA_PTR_TO_JSON(CloudAccountResourceNameContains, cloudAccountResourceNameContains_);
      DARABONBA_PTR_TO_JSON(CloudAccountResourceNamePrefix, cloudAccountResourceNamePrefix_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAccountResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_FROM_JSON(CloudAccountResourceEntityType, cloudAccountResourceEntityType_);
      DARABONBA_PTR_FROM_JSON(CloudAccountResourceNameContains, cloudAccountResourceNameContains_);
      DARABONBA_PTR_FROM_JSON(CloudAccountResourceNamePrefix, cloudAccountResourceNamePrefix_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListCloudAccountResourcesRequest() = default ;
    ListCloudAccountResourcesRequest(const ListCloudAccountResourcesRequest &) = default ;
    ListCloudAccountResourcesRequest(ListCloudAccountResourcesRequest &&) = default ;
    ListCloudAccountResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAccountResourcesRequest() = default ;
    ListCloudAccountResourcesRequest& operator=(const ListCloudAccountResourcesRequest &) = default ;
    ListCloudAccountResourcesRequest& operator=(ListCloudAccountResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudAccountId_ == nullptr
        && this->cloudAccountResourceEntityType_ == nullptr && this->cloudAccountResourceNameContains_ == nullptr && this->cloudAccountResourceNamePrefix_ == nullptr && this->instanceId_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr; };
    // cloudAccountId Field Functions 
    bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
    void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
    inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
    inline ListCloudAccountResourcesRequest& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


    // cloudAccountResourceEntityType Field Functions 
    bool hasCloudAccountResourceEntityType() const { return this->cloudAccountResourceEntityType_ != nullptr;};
    void deleteCloudAccountResourceEntityType() { this->cloudAccountResourceEntityType_ = nullptr;};
    inline string getCloudAccountResourceEntityType() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountResourceEntityType_, "") };
    inline ListCloudAccountResourcesRequest& setCloudAccountResourceEntityType(string cloudAccountResourceEntityType) { DARABONBA_PTR_SET_VALUE(cloudAccountResourceEntityType_, cloudAccountResourceEntityType) };


    // cloudAccountResourceNameContains Field Functions 
    bool hasCloudAccountResourceNameContains() const { return this->cloudAccountResourceNameContains_ != nullptr;};
    void deleteCloudAccountResourceNameContains() { this->cloudAccountResourceNameContains_ = nullptr;};
    inline string getCloudAccountResourceNameContains() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountResourceNameContains_, "") };
    inline ListCloudAccountResourcesRequest& setCloudAccountResourceNameContains(string cloudAccountResourceNameContains) { DARABONBA_PTR_SET_VALUE(cloudAccountResourceNameContains_, cloudAccountResourceNameContains) };


    // cloudAccountResourceNamePrefix Field Functions 
    bool hasCloudAccountResourceNamePrefix() const { return this->cloudAccountResourceNamePrefix_ != nullptr;};
    void deleteCloudAccountResourceNamePrefix() { this->cloudAccountResourceNamePrefix_ = nullptr;};
    inline string getCloudAccountResourceNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountResourceNamePrefix_, "") };
    inline ListCloudAccountResourcesRequest& setCloudAccountResourceNamePrefix(string cloudAccountResourceNamePrefix) { DARABONBA_PTR_SET_VALUE(cloudAccountResourceNamePrefix_, cloudAccountResourceNamePrefix) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCloudAccountResourcesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListCloudAccountResourcesRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCloudAccountResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The ID of the cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> cloudAccountId_ {};
    // Filters resources by entity type. Valid values: ram_policy.
    shared_ptr<string> cloudAccountResourceEntityType_ {};
    // Performs a fuzzy match on the resource name, which is equivalent to LIKE \\"%value%\\".
    shared_ptr<string> cloudAccountResourceNameContains_ {};
    // Matches resources by resource name prefix.
    shared_ptr<string> cloudAccountResourceNamePrefix_ {};
    // The ID of the IDaaS EIAM instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The maximum number of entries to return per page for paging in a paged query. Default value: 20. Maximum value: 100.
    shared_ptr<int64_t> maxResults_ {};
    // The query token. The value is the NextToken parameter value returned by the previous API call.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
