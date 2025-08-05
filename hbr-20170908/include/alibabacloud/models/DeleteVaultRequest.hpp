// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVAULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVAULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DeleteVaultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVaultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVaultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    DeleteVaultRequest() = default ;
    DeleteVaultRequest(const DeleteVaultRequest &) = default ;
    DeleteVaultRequest(DeleteVaultRequest &&) = default ;
    DeleteVaultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVaultRequest() = default ;
    DeleteVaultRequest& operator=(const DeleteVaultRequest &) = default ;
    DeleteVaultRequest& operator=(DeleteVaultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceGroupId_ != nullptr
        && this->token_ != nullptr && this->vaultId_ != nullptr; };
    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DeleteVaultRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline DeleteVaultRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DeleteVaultRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The token.
    std::shared_ptr<string> token_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
