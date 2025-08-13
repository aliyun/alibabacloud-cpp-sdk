// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class CreatePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PolicyContent, policyContent_);
      DARABONBA_PTR_TO_JSON(PolicyDesc, policyDesc_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PolicyContent, policyContent_);
      DARABONBA_PTR_FROM_JSON(PolicyDesc, policyDesc_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    CreatePolicyRequest() = default ;
    CreatePolicyRequest(const CreatePolicyRequest &) = default ;
    CreatePolicyRequest(CreatePolicyRequest &&) = default ;
    CreatePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyRequest() = default ;
    CreatePolicyRequest& operator=(const CreatePolicyRequest &) = default ;
    CreatePolicyRequest& operator=(CreatePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dryRun_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->policyContent_ != nullptr && this->policyDesc_ != nullptr && this->policyName_ != nullptr
        && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->userType_ != nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreatePolicyRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreatePolicyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreatePolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // policyContent Field Functions 
    bool hasPolicyContent() const { return this->policyContent_ != nullptr;};
    void deletePolicyContent() { this->policyContent_ = nullptr;};
    inline string policyContent() const { DARABONBA_PTR_GET_DEFAULT(policyContent_, "") };
    inline CreatePolicyRequest& setPolicyContent(string policyContent) { DARABONBA_PTR_SET_VALUE(policyContent_, policyContent) };


    // policyDesc Field Functions 
    bool hasPolicyDesc() const { return this->policyDesc_ != nullptr;};
    void deletePolicyDesc() { this->policyDesc_ = nullptr;};
    inline string policyDesc() const { DARABONBA_PTR_GET_DEFAULT(policyDesc_, "") };
    inline CreatePolicyRequest& setPolicyDesc(string policyDesc) { DARABONBA_PTR_SET_VALUE(policyDesc_, policyDesc) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreatePolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreatePolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline CreatePolicyRequest& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   false (default): performs a dry run and performs the actual request.
    // *   true: performs only a dry run.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The document of the tag policy.
    // 
    // For more information about the syntax of a tag policy, see [Syntax of a tag policy](https://help.aliyun.com/document_detail/417436.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> policyContent_ = nullptr;
    // The description of the tag policy.
    // 
    // The description must be 0 to 512 characters in length.
    std::shared_ptr<string> policyDesc_ = nullptr;
    // The name of the tag policy.
    // 
    // The name must be 1 to 128 characters in length and can contain letters, digits, and underscores (_).
    // 
    // This parameter is required.
    std::shared_ptr<string> policyName_ = nullptr;
    // The region ID. Set the value to cn-shanghai.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The mode of the Tag Policy feature. Valid values:
    // 
    // *   USER: single-account mode. Set the value to USER if you use an Alibaba Cloud account or a member of a resource directory to call this API operation to create a tag policy for the Alibaba Cloud account or member.
    // *   RD: multi-account mode. Set the value to RD if you use the management account of a resource directory to call this API operation to create a tag policy for the resource directory.
    // 
    // For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
