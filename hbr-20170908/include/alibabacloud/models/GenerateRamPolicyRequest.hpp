// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATERAMPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATERAMPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class GenerateRamPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateRamPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(RequireBasePolicy, requireBasePolicy_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateRamPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(RequireBasePolicy, requireBasePolicy_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    GenerateRamPolicyRequest() = default ;
    GenerateRamPolicyRequest(const GenerateRamPolicyRequest &) = default ;
    GenerateRamPolicyRequest(GenerateRamPolicyRequest &&) = default ;
    GenerateRamPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateRamPolicyRequest() = default ;
    GenerateRamPolicyRequest& operator=(const GenerateRamPolicyRequest &) = default ;
    GenerateRamPolicyRequest& operator=(GenerateRamPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionType_ != nullptr
        && this->requireBasePolicy_ != nullptr && this->resourceGroupId_ != nullptr && this->vaultId_ != nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline GenerateRamPolicyRequest& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // requireBasePolicy Field Functions 
    bool hasRequireBasePolicy() const { return this->requireBasePolicy_ != nullptr;};
    void deleteRequireBasePolicy() { this->requireBasePolicy_ = nullptr;};
    inline bool requireBasePolicy() const { DARABONBA_PTR_GET_DEFAULT(requireBasePolicy_, false) };
    inline GenerateRamPolicyRequest& setRequireBasePolicy(bool requireBasePolicy) { DARABONBA_PTR_SET_VALUE(requireBasePolicy_, requireBasePolicy) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GenerateRamPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline GenerateRamPolicyRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The type of policy that you want to generate. Valid values:
    // 
    // *   BACKUP: the permission to back up data to a backup vault
    // *   RESTORE: the permission to restore data from a backup vault
    // 
    // This parameter is required.
    std::shared_ptr<string> actionType_ = nullptr;
    // Specifies whether to generate the policy based on an existing instance-specific rule. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> requireBasePolicy_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the backup vault.
    // 
    // This parameter is required.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
