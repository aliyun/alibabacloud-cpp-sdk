// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDPERMISSIONTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDPERMISSIONTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListCloudPermissionTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudPermissionTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_TO_JSON(CloudPermissionTemplateNamePrefix, cloudPermissionTemplateNamePrefix_);
      DARABONBA_PTR_TO_JSON(CloudPermissionTemplateSharingMode, cloudPermissionTemplateSharingMode_);
      DARABONBA_PTR_TO_JSON(CloudPermissionTemplateUsageType, cloudPermissionTemplateUsageType_);
      DARABONBA_PTR_TO_JSON(CreatorType, creatorType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudPermissionTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_FROM_JSON(CloudPermissionTemplateNamePrefix, cloudPermissionTemplateNamePrefix_);
      DARABONBA_PTR_FROM_JSON(CloudPermissionTemplateSharingMode, cloudPermissionTemplateSharingMode_);
      DARABONBA_PTR_FROM_JSON(CloudPermissionTemplateUsageType, cloudPermissionTemplateUsageType_);
      DARABONBA_PTR_FROM_JSON(CreatorType, creatorType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListCloudPermissionTemplatesRequest() = default ;
    ListCloudPermissionTemplatesRequest(const ListCloudPermissionTemplatesRequest &) = default ;
    ListCloudPermissionTemplatesRequest(ListCloudPermissionTemplatesRequest &&) = default ;
    ListCloudPermissionTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudPermissionTemplatesRequest() = default ;
    ListCloudPermissionTemplatesRequest& operator=(const ListCloudPermissionTemplatesRequest &) = default ;
    ListCloudPermissionTemplatesRequest& operator=(ListCloudPermissionTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudAccountId_ == nullptr
        && this->cloudPermissionTemplateNamePrefix_ == nullptr && this->cloudPermissionTemplateSharingMode_ == nullptr && this->cloudPermissionTemplateUsageType_ == nullptr && this->creatorType_ == nullptr && this->instanceId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // cloudAccountId Field Functions 
    bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
    void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
    inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
    inline ListCloudPermissionTemplatesRequest& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


    // cloudPermissionTemplateNamePrefix Field Functions 
    bool hasCloudPermissionTemplateNamePrefix() const { return this->cloudPermissionTemplateNamePrefix_ != nullptr;};
    void deleteCloudPermissionTemplateNamePrefix() { this->cloudPermissionTemplateNamePrefix_ = nullptr;};
    inline string getCloudPermissionTemplateNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(cloudPermissionTemplateNamePrefix_, "") };
    inline ListCloudPermissionTemplatesRequest& setCloudPermissionTemplateNamePrefix(string cloudPermissionTemplateNamePrefix) { DARABONBA_PTR_SET_VALUE(cloudPermissionTemplateNamePrefix_, cloudPermissionTemplateNamePrefix) };


    // cloudPermissionTemplateSharingMode Field Functions 
    bool hasCloudPermissionTemplateSharingMode() const { return this->cloudPermissionTemplateSharingMode_ != nullptr;};
    void deleteCloudPermissionTemplateSharingMode() { this->cloudPermissionTemplateSharingMode_ = nullptr;};
    inline string getCloudPermissionTemplateSharingMode() const { DARABONBA_PTR_GET_DEFAULT(cloudPermissionTemplateSharingMode_, "") };
    inline ListCloudPermissionTemplatesRequest& setCloudPermissionTemplateSharingMode(string cloudPermissionTemplateSharingMode) { DARABONBA_PTR_SET_VALUE(cloudPermissionTemplateSharingMode_, cloudPermissionTemplateSharingMode) };


    // cloudPermissionTemplateUsageType Field Functions 
    bool hasCloudPermissionTemplateUsageType() const { return this->cloudPermissionTemplateUsageType_ != nullptr;};
    void deleteCloudPermissionTemplateUsageType() { this->cloudPermissionTemplateUsageType_ = nullptr;};
    inline string getCloudPermissionTemplateUsageType() const { DARABONBA_PTR_GET_DEFAULT(cloudPermissionTemplateUsageType_, "") };
    inline ListCloudPermissionTemplatesRequest& setCloudPermissionTemplateUsageType(string cloudPermissionTemplateUsageType) { DARABONBA_PTR_SET_VALUE(cloudPermissionTemplateUsageType_, cloudPermissionTemplateUsageType) };


    // creatorType Field Functions 
    bool hasCreatorType() const { return this->creatorType_ != nullptr;};
    void deleteCreatorType() { this->creatorType_ = nullptr;};
    inline string getCreatorType() const { DARABONBA_PTR_GET_DEFAULT(creatorType_, "") };
    inline ListCloudPermissionTemplatesRequest& setCreatorType(string creatorType) { DARABONBA_PTR_SET_VALUE(creatorType_, creatorType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCloudPermissionTemplatesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListCloudPermissionTemplatesRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCloudPermissionTemplatesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The cloud account ID.
    // 
    // This parameter is required.
    shared_ptr<string> cloudAccountId_ {};
    // Filters the results by template name prefix.
    shared_ptr<string> cloudPermissionTemplateNamePrefix_ {};
    // Filters the results by permission template sharing mode. Valid values: shared and exclusive. If this parameter is not specified, no filtering is applied.
    shared_ptr<string> cloudPermissionTemplateSharingMode_ {};
    // Filters the results by permission template usage type. Valid values: user (privilege escalation for human users) and application (privilege escalation for M2M applications).
    shared_ptr<string> cloudPermissionTemplateUsageType_ {};
    // Filters the results by creator type. Valid values: idaas_admin and idaas_user.
    shared_ptr<string> creatorType_ {};
    // The ID of the IDaaS EIAM instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The number of entries per page for paging. Default value: 20. Maximum value: 100.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token. Set this parameter to the NextToken value returned from the previous API call.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
