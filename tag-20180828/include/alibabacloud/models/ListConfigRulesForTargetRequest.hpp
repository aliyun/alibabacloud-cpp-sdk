// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGRULESFORTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGRULESFORTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListConfigRulesForTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigRulesForTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResult, maxResult_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigRulesForTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResult, maxResult_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    ListConfigRulesForTargetRequest() = default ;
    ListConfigRulesForTargetRequest(const ListConfigRulesForTargetRequest &) = default ;
    ListConfigRulesForTargetRequest(ListConfigRulesForTargetRequest &&) = default ;
    ListConfigRulesForTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigRulesForTargetRequest() = default ;
    ListConfigRulesForTargetRequest& operator=(const ListConfigRulesForTargetRequest &) = default ;
    ListConfigRulesForTargetRequest& operator=(ListConfigRulesForTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResult_ != nullptr
        && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->policyType_ != nullptr && this->regionId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->tagKey_ != nullptr && this->targetId_ != nullptr && this->targetType_ != nullptr && this->userType_ != nullptr; };
    // maxResult Field Functions 
    bool hasMaxResult() const { return this->maxResult_ != nullptr;};
    void deleteMaxResult() { this->maxResult_ = nullptr;};
    inline int32_t maxResult() const { DARABONBA_PTR_GET_DEFAULT(maxResult_, 0) };
    inline ListConfigRulesForTargetRequest& setMaxResult(int32_t maxResult) { DARABONBA_PTR_SET_VALUE(maxResult_, maxResult) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListConfigRulesForTargetRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListConfigRulesForTargetRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListConfigRulesForTargetRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListConfigRulesForTargetRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListConfigRulesForTargetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListConfigRulesForTargetRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline ListConfigRulesForTargetRequest& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ListConfigRulesForTargetRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListConfigRulesForTargetRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline ListConfigRulesForTargetRequest& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // The number of entries to return on each page.
    // 
    // Default value: 50. Maximum value: 1000.
    std::shared_ptr<int32_t> maxResult_ = nullptr;
    // The token that is used to start the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The use scenario of the tag policy. This parameter specifies a filter condition for the query. Valid values:
    // 
    // *   tags: enables tags with specified tag values to be added to resources.
    // *   rg_inherit: enables resources in a resource group to automatically inherit tags from the resource group.
    std::shared_ptr<string> policyType_ = nullptr;
    // The region ID. Set the value to cn-shanghai.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The tag key. This parameter specifies a filter condition for the query.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The ID of the object. This parameter specifies a filter condition for the query.
    std::shared_ptr<string> targetId_ = nullptr;
    // The type of the object. This parameter specifies a filter condition for the query. Valid values:
    // 
    // *   USER: the current logon account. This value is available if you use the Tag Policy feature in single-account mode.
    // *   ROOT: the Root folder in a resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // *   FOLDER: a folder other than the Root folder in a resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // *   ACCOUNT: a member in a resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // 
    // >  The value of this parameter is not case-sensitive.
    std::shared_ptr<string> targetType_ = nullptr;
    // The mode of the Tag Policy feature. This parameter specifies a filter condition for the query. Valid values:
    // 
    // *   USER: single-account mode
    // *   RD: multi-account mode
    // 
    // For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
    // 
    // >  The value of this parameter is not case-sensitive.
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
