// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELRESTOREJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELRESTOREJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CancelRestoreJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelRestoreJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RestoreId, restoreId_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelRestoreJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RestoreId, restoreId_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    CancelRestoreJobRequest() = default ;
    CancelRestoreJobRequest(const CancelRestoreJobRequest &) = default ;
    CancelRestoreJobRequest(CancelRestoreJobRequest &&) = default ;
    CancelRestoreJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelRestoreJobRequest() = default ;
    CancelRestoreJobRequest& operator=(const CancelRestoreJobRequest &) = default ;
    CancelRestoreJobRequest& operator=(CancelRestoreJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->restoreId_ != nullptr
        && this->vaultId_ != nullptr; };
    // restoreId Field Functions 
    bool hasRestoreId() const { return this->restoreId_ != nullptr;};
    void deleteRestoreId() { this->restoreId_ = nullptr;};
    inline string restoreId() const { DARABONBA_PTR_GET_DEFAULT(restoreId_, "") };
    inline CancelRestoreJobRequest& setRestoreId(string restoreId) { DARABONBA_PTR_SET_VALUE(restoreId_, restoreId) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline CancelRestoreJobRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The ID of the restore job.
    // 
    // This parameter is required.
    std::shared_ptr<string> restoreId_ = nullptr;
    // The ID of the backup vault.
    // 
    // This parameter is required.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
