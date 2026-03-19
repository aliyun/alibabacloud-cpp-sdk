// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEBACKUPLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEBACKUPLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class EnableBackupLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableBackupLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EnableMysqlPhysicalBackupBinlog, enableMysqlPhysicalBackupBinlog_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableBackupLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EnableMysqlPhysicalBackupBinlog, enableMysqlPhysicalBackupBinlog_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    EnableBackupLogRequest() = default ;
    EnableBackupLogRequest(const EnableBackupLogRequest &) = default ;
    EnableBackupLogRequest(EnableBackupLogRequest &&) = default ;
    EnableBackupLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableBackupLogRequest() = default ;
    EnableBackupLogRequest& operator=(const EnableBackupLogRequest &) = default ;
    EnableBackupLogRequest& operator=(EnableBackupLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPlanId_ == nullptr
        && this->clientToken_ == nullptr && this->enableMysqlPhysicalBackupBinlog_ == nullptr && this->ownerId_ == nullptr; };
    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline EnableBackupLogRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline EnableBackupLogRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enableMysqlPhysicalBackupBinlog Field Functions 
    bool hasEnableMysqlPhysicalBackupBinlog() const { return this->enableMysqlPhysicalBackupBinlog_ != nullptr;};
    void deleteEnableMysqlPhysicalBackupBinlog() { this->enableMysqlPhysicalBackupBinlog_ = nullptr;};
    inline string getEnableMysqlPhysicalBackupBinlog() const { DARABONBA_PTR_GET_DEFAULT(enableMysqlPhysicalBackupBinlog_, "") };
    inline EnableBackupLogRequest& setEnableMysqlPhysicalBackupBinlog(string enableMysqlPhysicalBackupBinlog) { DARABONBA_PTR_SET_VALUE(enableMysqlPhysicalBackupBinlog_, enableMysqlPhysicalBackupBinlog) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline EnableBackupLogRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // The ID of the backup plan. Call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> backupPlanId_ {};
    // Any string value.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> enableMysqlPhysicalBackupBinlog_ {};
    shared_ptr<string> ownerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
