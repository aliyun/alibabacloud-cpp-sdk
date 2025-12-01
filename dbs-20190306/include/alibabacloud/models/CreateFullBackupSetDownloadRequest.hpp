// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFULLBACKUPSETDOWNLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFULLBACKUPSETDOWNLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class CreateFullBackupSetDownloadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFullBackupSetDownloadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSetDataFormat, backupSetDataFormat_);
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFullBackupSetDownloadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSetDataFormat, backupSetDataFormat_);
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    CreateFullBackupSetDownloadRequest() = default ;
    CreateFullBackupSetDownloadRequest(const CreateFullBackupSetDownloadRequest &) = default ;
    CreateFullBackupSetDownloadRequest(CreateFullBackupSetDownloadRequest &&) = default ;
    CreateFullBackupSetDownloadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFullBackupSetDownloadRequest() = default ;
    CreateFullBackupSetDownloadRequest& operator=(const CreateFullBackupSetDownloadRequest &) = default ;
    CreateFullBackupSetDownloadRequest& operator=(CreateFullBackupSetDownloadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupSetDataFormat_ == nullptr
        && return this->backupSetId_ == nullptr && return this->clientToken_ == nullptr && return this->ownerId_ == nullptr; };
    // backupSetDataFormat Field Functions 
    bool hasBackupSetDataFormat() const { return this->backupSetDataFormat_ != nullptr;};
    void deleteBackupSetDataFormat() { this->backupSetDataFormat_ = nullptr;};
    inline string backupSetDataFormat() const { DARABONBA_PTR_GET_DEFAULT(backupSetDataFormat_, "") };
    inline CreateFullBackupSetDownloadRequest& setBackupSetDataFormat(string backupSetDataFormat) { DARABONBA_PTR_SET_VALUE(backupSetDataFormat_, backupSetDataFormat) };


    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string backupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline CreateFullBackupSetDownloadRequest& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateFullBackupSetDownloadRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateFullBackupSetDownloadRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // The format in which the full backup set is downloaded. Valid values:
    // 
    // *   **Native**
    // *   **SQL**
    // *   **CSV**(Default value)
    // *   **JSON**
    std::shared_ptr<string> backupSetDataFormat_ = nullptr;
    // The ID of the full backup set.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupSetId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
