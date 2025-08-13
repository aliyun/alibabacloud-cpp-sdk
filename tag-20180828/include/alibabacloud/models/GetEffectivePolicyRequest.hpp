// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEFFECTIVEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEFFECTIVEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class GetEffectivePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEffectivePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, GetEffectivePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeys_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    GetEffectivePolicyRequest() = default ;
    GetEffectivePolicyRequest(const GetEffectivePolicyRequest &) = default ;
    GetEffectivePolicyRequest(GetEffectivePolicyRequest &&) = default ;
    GetEffectivePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEffectivePolicyRequest() = default ;
    GetEffectivePolicyRequest& operator=(const GetEffectivePolicyRequest &) = default ;
    GetEffectivePolicyRequest& operator=(GetEffectivePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->tagKeys_ != nullptr && this->targetId_ != nullptr
        && this->targetType_ != nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline GetEffectivePolicyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetEffectivePolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetEffectivePolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetEffectivePolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline const vector<string> & tagKeys() const { DARABONBA_PTR_GET_CONST(tagKeys_, vector<string>) };
    inline vector<string> tagKeys() { DARABONBA_PTR_GET(tagKeys_, vector<string>) };
    inline GetEffectivePolicyRequest& setTagKeys(const vector<string> & tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };
    inline GetEffectivePolicyRequest& setTagKeys(vector<string> && tagKeys) { DARABONBA_PTR_SET_RVALUE(tagKeys_, tagKeys) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline GetEffectivePolicyRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline GetEffectivePolicyRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID. Set the value to cn-shanghai.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<vector<string>> tagKeys_ = nullptr;
    // The ID of the object.
    // 
    // >  If you use the Tag Policy feature in single-account mode, this parameter is optional. If you use the Tag Policy feature in multi-account mode, this feature is required.
    std::shared_ptr<string> targetId_ = nullptr;
    // The type of the object. Valid values:
    // 
    // *   USER: the current logon account. This value is available if you use the Tag Policy feature in single-account mode.
    // *   ROOT: the Root folder in a resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // *   FOLDER: a folder other than the Root folder in a resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // *   ACCOUNT: a member in a resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // 
    // >  If you use the Tag Policy feature in single-account mode, this parameter is optional. If you use the Tag Policy feature in multi-account mode, this feature is required. The value of this parameter is not case-sensitive.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
