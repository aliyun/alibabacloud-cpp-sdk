// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDACCOUNTRESOURCESFORCLOUDPERMISSIONTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDACCOUNTRESOURCESFORCLOUDPERMISSIONTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListCloudAccountResourcesForCloudPermissionTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAccountResourcesForCloudPermissionTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_TO_JSON(CloudAccountResourceEntityType, cloudAccountResourceEntityType_);
      DARABONBA_PTR_TO_JSON(CloudPermissionTemplateId, cloudPermissionTemplateId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAccountResourcesForCloudPermissionTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_FROM_JSON(CloudAccountResourceEntityType, cloudAccountResourceEntityType_);
      DARABONBA_PTR_FROM_JSON(CloudPermissionTemplateId, cloudPermissionTemplateId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListCloudAccountResourcesForCloudPermissionTemplateRequest() = default ;
    ListCloudAccountResourcesForCloudPermissionTemplateRequest(const ListCloudAccountResourcesForCloudPermissionTemplateRequest &) = default ;
    ListCloudAccountResourcesForCloudPermissionTemplateRequest(ListCloudAccountResourcesForCloudPermissionTemplateRequest &&) = default ;
    ListCloudAccountResourcesForCloudPermissionTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAccountResourcesForCloudPermissionTemplateRequest() = default ;
    ListCloudAccountResourcesForCloudPermissionTemplateRequest& operator=(const ListCloudAccountResourcesForCloudPermissionTemplateRequest &) = default ;
    ListCloudAccountResourcesForCloudPermissionTemplateRequest& operator=(ListCloudAccountResourcesForCloudPermissionTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudAccountId_ == nullptr
        && this->cloudAccountResourceEntityType_ == nullptr && this->cloudPermissionTemplateId_ == nullptr && this->instanceId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // cloudAccountId Field Functions 
    bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
    void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
    inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
    inline ListCloudAccountResourcesForCloudPermissionTemplateRequest& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


    // cloudAccountResourceEntityType Field Functions 
    bool hasCloudAccountResourceEntityType() const { return this->cloudAccountResourceEntityType_ != nullptr;};
    void deleteCloudAccountResourceEntityType() { this->cloudAccountResourceEntityType_ = nullptr;};
    inline string getCloudAccountResourceEntityType() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountResourceEntityType_, "") };
    inline ListCloudAccountResourcesForCloudPermissionTemplateRequest& setCloudAccountResourceEntityType(string cloudAccountResourceEntityType) { DARABONBA_PTR_SET_VALUE(cloudAccountResourceEntityType_, cloudAccountResourceEntityType) };


    // cloudPermissionTemplateId Field Functions 
    bool hasCloudPermissionTemplateId() const { return this->cloudPermissionTemplateId_ != nullptr;};
    void deleteCloudPermissionTemplateId() { this->cloudPermissionTemplateId_ = nullptr;};
    inline string getCloudPermissionTemplateId() const { DARABONBA_PTR_GET_DEFAULT(cloudPermissionTemplateId_, "") };
    inline ListCloudAccountResourcesForCloudPermissionTemplateRequest& setCloudPermissionTemplateId(string cloudPermissionTemplateId) { DARABONBA_PTR_SET_VALUE(cloudPermissionTemplateId_, cloudPermissionTemplateId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCloudAccountResourcesForCloudPermissionTemplateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListCloudAccountResourcesForCloudPermissionTemplateRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCloudAccountResourcesForCloudPermissionTemplateRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The ID of the cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> cloudAccountId_ {};
    // The resource entity type used for filtering. Valid values: ram_policy.
    shared_ptr<string> cloudAccountResourceEntityType_ {};
    // The ID of the permission template.
    // 
    // This parameter is required.
    shared_ptr<string> cloudPermissionTemplateId_ {};
    // The ID of the IDaaS EIAM instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The number of entries per page in a paging query. Default value: 20. Maximum value: 100.
    shared_ptr<int64_t> maxResults_ {};
    // The query token. Set the value to the NextToken value returned from the previous API call.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
