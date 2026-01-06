// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPHANADATABASEASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPHANADATABASEASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class StopHanaDatabaseAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopHanaDatabaseAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, StopHanaDatabaseAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    StopHanaDatabaseAsyncRequest() = default ;
    StopHanaDatabaseAsyncRequest(const StopHanaDatabaseAsyncRequest &) = default ;
    StopHanaDatabaseAsyncRequest(StopHanaDatabaseAsyncRequest &&) = default ;
    StopHanaDatabaseAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopHanaDatabaseAsyncRequest() = default ;
    StopHanaDatabaseAsyncRequest& operator=(const StopHanaDatabaseAsyncRequest &) = default ;
    StopHanaDatabaseAsyncRequest& operator=(StopHanaDatabaseAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->databaseName_ == nullptr && this->vaultId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline StopHanaDatabaseAsyncRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline StopHanaDatabaseAsyncRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline StopHanaDatabaseAsyncRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The ID of the SAP HANA instance.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The database name.
    // 
    // This parameter is required.
    shared_ptr<string> databaseName_ {};
    // The ID of the backup vault.
    // 
    // This parameter is required.
    shared_ptr<string> vaultId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
