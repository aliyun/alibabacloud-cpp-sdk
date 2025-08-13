// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYENABLESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYENABLESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class GetPolicyEnableStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyEnableStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpenType, openType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyEnableStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenType, openType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    GetPolicyEnableStatusRequest() = default ;
    GetPolicyEnableStatusRequest(const GetPolicyEnableStatusRequest &) = default ;
    GetPolicyEnableStatusRequest(GetPolicyEnableStatusRequest &&) = default ;
    GetPolicyEnableStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyEnableStatusRequest() = default ;
    GetPolicyEnableStatusRequest& operator=(const GetPolicyEnableStatusRequest &) = default ;
    GetPolicyEnableStatusRequest& operator=(GetPolicyEnableStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->openType_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->userType_ != nullptr; };
    // openType Field Functions 
    bool hasOpenType() const { return this->openType_ != nullptr;};
    void deleteOpenType() { this->openType_ = nullptr;};
    inline string openType() const { DARABONBA_PTR_GET_DEFAULT(openType_, "") };
    inline GetPolicyEnableStatusRequest& setOpenType(string openType) { DARABONBA_PTR_SET_VALUE(openType_, openType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline GetPolicyEnableStatusRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetPolicyEnableStatusRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetPolicyEnableStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetPolicyEnableStatusRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline GetPolicyEnableStatusRequest& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline GetPolicyEnableStatusRequest& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // The enabling type. Valid values:
    // 
    // *   TAG_POLICY: the Tag Policy feature.
    // *   VERIFY_NO_TAG: the strong verification feature.
    std::shared_ptr<string> openType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID. Set the value to cn-shanghai.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<string> resourceOwnerId_ = nullptr;
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
