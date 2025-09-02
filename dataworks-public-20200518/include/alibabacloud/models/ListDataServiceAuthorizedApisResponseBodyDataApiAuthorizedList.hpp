// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAUTHORIZEDAPISRESPONSEBODYDATAAPIAUTHORIZEDLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAUTHORIZEDAPISRESPONSEBODYDATAAPIAUTHORIZEDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(ApiPath, apiPath_);
      DARABONBA_PTR_TO_JSON(ApiStatus, apiStatus_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(GrantCreatedTime, grantCreatedTime_);
      DARABONBA_PTR_TO_JSON(GrantEndTime, grantEndTime_);
      DARABONBA_PTR_TO_JSON(GrantOperatorId, grantOperatorId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(ApiPath, apiPath_);
      DARABONBA_PTR_FROM_JSON(ApiStatus, apiStatus_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(GrantCreatedTime, grantCreatedTime_);
      DARABONBA_PTR_FROM_JSON(GrantEndTime, grantEndTime_);
      DARABONBA_PTR_FROM_JSON(GrantOperatorId, grantOperatorId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList() = default ;
    ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList(const ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList &) = default ;
    ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList(ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList &&) = default ;
    ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList() = default ;
    ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList& operator=(const ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList &) = default ;
    ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList& operator=(ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiId_ != nullptr
        && this->apiName_ != nullptr && this->apiPath_ != nullptr && this->apiStatus_ != nullptr && this->createdTime_ != nullptr && this->creatorId_ != nullptr
        && this->grantCreatedTime_ != nullptr && this->grantEndTime_ != nullptr && this->grantOperatorId_ != nullptr && this->groupId_ != nullptr && this->modifiedTime_ != nullptr
        && this->projectId_ != nullptr && this->tenantId_ != nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiPath Field Functions 
    bool hasApiPath() const { return this->apiPath_ != nullptr;};
    void deleteApiPath() { this->apiPath_ = nullptr;};
    inline string apiPath() const { DARABONBA_PTR_GET_DEFAULT(apiPath_, "") };
    inline ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList& setApiPath(string apiPath) { DARABONBA_PTR_SET_VALUE(apiPath_, apiPath) };


    // apiStatus Field Functions 
    bool hasApiStatus() const { return this->apiStatus_ != nullptr;};
    void deleteApiStatus() { this->apiStatus_ = nullptr;};
    inline int32_t apiStatus() const { DARABONBA_PTR_GET_DEFAULT(apiStatus_, 0) };
    inline ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList& setApiStatus(int32_t apiStatus) { DARABONBA_PTR_SET_VALUE(apiStatus_, apiStatus) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // grantCreatedTime Field Functions 
    bool hasGrantCreatedTime() const { return this->grantCreatedTime_ != nullptr;};
    void deleteGrantCreatedTime() { this->grantCreatedTime_ = nullptr;};
    inline string grantCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(grantCreatedTime_, "") };
    inline ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList& setGrantCreatedTime(string grantCreatedTime) { DARABONBA_PTR_SET_VALUE(grantCreatedTime_, grantCreatedTime) };


    // grantEndTime Field Functions 
    bool hasGrantEndTime() const { return this->grantEndTime_ != nullptr;};
    void deleteGrantEndTime() { this->grantEndTime_ = nullptr;};
    inline string grantEndTime() const { DARABONBA_PTR_GET_DEFAULT(grantEndTime_, "") };
    inline ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList& setGrantEndTime(string grantEndTime) { DARABONBA_PTR_SET_VALUE(grantEndTime_, grantEndTime) };


    // grantOperatorId Field Functions 
    bool hasGrantOperatorId() const { return this->grantOperatorId_ != nullptr;};
    void deleteGrantOperatorId() { this->grantOperatorId_ = nullptr;};
    inline string grantOperatorId() const { DARABONBA_PTR_GET_DEFAULT(grantOperatorId_, "") };
    inline ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList& setGrantOperatorId(string grantOperatorId) { DARABONBA_PTR_SET_VALUE(grantOperatorId_, grantOperatorId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The API ID.
    std::shared_ptr<int64_t> apiId_ = nullptr;
    // The name of the API.
    std::shared_ptr<string> apiName_ = nullptr;
    // The path of the API.
    std::shared_ptr<string> apiPath_ = nullptr;
    // The status of the API. Valid values: 0 and 1. The value 0 indicates that the API is not published. The value 1 indicates that the API is published.
    std::shared_ptr<int32_t> apiStatus_ = nullptr;
    // The time when the API was created.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The ID of the Alibaba Cloud account used by the API owner.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The time when the access permissions on the API were granted.
    std::shared_ptr<string> grantCreatedTime_ = nullptr;
    // The expiration time of the access permissions granted on the API.
    std::shared_ptr<string> grantEndTime_ = nullptr;
    // The ID of the Alibaba Cloud account used by the user who granted the access permissions on the API.
    std::shared_ptr<string> grantOperatorId_ = nullptr;
    // The group ID.
    std::shared_ptr<string> groupId_ = nullptr;
    // The time when the API was last updated.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The tenant ID.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
