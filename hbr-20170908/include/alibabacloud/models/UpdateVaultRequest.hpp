// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVAULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVAULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdateVaultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVaultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
      DARABONBA_PTR_TO_JSON(VaultName, vaultName_);
      DARABONBA_PTR_TO_JSON(WormEnabled, wormEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVaultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
      DARABONBA_PTR_FROM_JSON(VaultName, vaultName_);
      DARABONBA_PTR_FROM_JSON(WormEnabled, wormEnabled_);
    };
    UpdateVaultRequest() = default ;
    UpdateVaultRequest(const UpdateVaultRequest &) = default ;
    UpdateVaultRequest(UpdateVaultRequest &&) = default ;
    UpdateVaultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVaultRequest() = default ;
    UpdateVaultRequest& operator=(const UpdateVaultRequest &) = default ;
    UpdateVaultRequest& operator=(UpdateVaultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->resourceGroupId_ != nullptr && this->vaultId_ != nullptr && this->vaultName_ != nullptr && this->wormEnabled_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateVaultRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateVaultRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline UpdateVaultRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


    // vaultName Field Functions 
    bool hasVaultName() const { return this->vaultName_ != nullptr;};
    void deleteVaultName() { this->vaultName_ = nullptr;};
    inline string vaultName() const { DARABONBA_PTR_GET_DEFAULT(vaultName_, "") };
    inline UpdateVaultRequest& setVaultName(string vaultName) { DARABONBA_PTR_SET_VALUE(vaultName_, vaultName) };


    // wormEnabled Field Functions 
    bool hasWormEnabled() const { return this->wormEnabled_ != nullptr;};
    void deleteWormEnabled() { this->wormEnabled_ = nullptr;};
    inline bool wormEnabled() const { DARABONBA_PTR_GET_DEFAULT(wormEnabled_, false) };
    inline UpdateVaultRequest& setWormEnabled(bool wormEnabled) { DARABONBA_PTR_SET_VALUE(wormEnabled_, wormEnabled) };


  protected:
    // The description of the backup vault. The description must be 0 to 255 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the backup vault.
    // 
    // This parameter is required.
    std::shared_ptr<string> vaultId_ = nullptr;
    // The name of the backup vault. The name must be 1 to 64 characters in length.
    std::shared_ptr<string> vaultName_ = nullptr;
    // Specifies whether to enable the immutable backup feature for storage vaults. After the immutable backup feature is enabled, backup vaults and all backup data cannot be deleted until the retention period expires. The immutable backup feature cannot be disabled after it is enabled. Only standard backup vaults and archive vaults support the immutable backup feature.
    std::shared_ptr<bool> wormEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
