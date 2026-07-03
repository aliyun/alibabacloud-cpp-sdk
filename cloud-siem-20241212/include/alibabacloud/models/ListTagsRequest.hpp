// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(TargetRelation, targetRelation_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TargetUuid, targetUuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(TargetRelation, targetRelation_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TargetUuid, targetUuid_);
    };
    ListTagsRequest() = default ;
    ListTagsRequest(const ListTagsRequest &) = default ;
    ListTagsRequest(ListTagsRequest &&) = default ;
    ListTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagsRequest() = default ;
    ListTagsRequest& operator=(const ListTagsRequest &) = default ;
    ListTagsRequest& operator=(ListTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr
        && this->targetRelation_ == nullptr && this->targetType_ == nullptr && this->targetUuid_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListTagsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTagsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTagsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListTagsRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline ListTagsRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // targetRelation Field Functions 
    bool hasTargetRelation() const { return this->targetRelation_ != nullptr;};
    void deleteTargetRelation() { this->targetRelation_ = nullptr;};
    inline string getTargetRelation() const { DARABONBA_PTR_GET_DEFAULT(targetRelation_, "") };
    inline ListTagsRequest& setTargetRelation(string targetRelation) { DARABONBA_PTR_SET_VALUE(targetRelation_, targetRelation) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListTagsRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // targetUuid Field Functions 
    bool hasTargetUuid() const { return this->targetUuid_ != nullptr;};
    void deleteTargetUuid() { this->targetUuid_ = nullptr;};
    inline string getTargetUuid() const { DARABONBA_PTR_GET_DEFAULT(targetUuid_, "") };
    inline ListTagsRequest& setTargetUuid(string targetUuid) { DARABONBA_PTR_SET_VALUE(targetUuid_, targetUuid) };


  protected:
    // The language of the response. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The maximum number of results to return when using NextToken-based pagination. Valid values: 1 to 100. Default value: 50.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next query. Leave this parameter empty for the first query or if no more results exist. If a next query is available, set this parameter to the NextToken value returned by the previous API call.
    shared_ptr<string> nextToken_ {};
    // The region where the threat analysis data management center is located. Specify the management center based on the region of your assets. Valid values:
    // - cn-hangzhou: the asset is in the Chinese mainland.
    // - ap-southeast-1: the asset is outside China.
    shared_ptr<string> regionId_ {};
    // The user ID that the administrator switches to when viewing as another member.
    shared_ptr<int64_t> roleFor_ {};
    // The view type. Valid values:
    // - 0: the view of the current Alibaba Cloud account.
    // - 1: the view of all accounts in the enterprise.
    shared_ptr<int32_t> roleType_ {};
    // The target relationship.
    shared_ptr<string> targetRelation_ {};
    // The scan object type. Valid values:
    // 
    // - **1**: snapshot 
    // - **2**: image
    shared_ptr<string> targetType_ {};
    // The UUID of the target asset.
    shared_ptr<string> targetUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
