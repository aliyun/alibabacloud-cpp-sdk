// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANABACKUPSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANABACKUPSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaBackupSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaBackupSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaBackupSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    DescribeHanaBackupSettingRequest() = default ;
    DescribeHanaBackupSettingRequest(const DescribeHanaBackupSettingRequest &) = default ;
    DescribeHanaBackupSettingRequest(DescribeHanaBackupSettingRequest &&) = default ;
    DescribeHanaBackupSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaBackupSettingRequest() = default ;
    DescribeHanaBackupSettingRequest& operator=(const DescribeHanaBackupSettingRequest &) = default ;
    DescribeHanaBackupSettingRequest& operator=(DescribeHanaBackupSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->databaseName_ != nullptr && this->vaultId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeHanaBackupSettingRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeHanaBackupSettingRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeHanaBackupSettingRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The ID of the SAP HANA instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
