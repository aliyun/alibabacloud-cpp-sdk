// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPOBJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPOBJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class ModifyBackupObjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupObjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupObjects, backupObjects_);
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupObjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupObjects, backupObjects_);
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    ModifyBackupObjectsRequest() = default ;
    ModifyBackupObjectsRequest(const ModifyBackupObjectsRequest &) = default ;
    ModifyBackupObjectsRequest(ModifyBackupObjectsRequest &&) = default ;
    ModifyBackupObjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupObjectsRequest() = default ;
    ModifyBackupObjectsRequest& operator=(const ModifyBackupObjectsRequest &) = default ;
    ModifyBackupObjectsRequest& operator=(ModifyBackupObjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupObjects_ == nullptr
        && return this->backupPlanId_ == nullptr && return this->clientToken_ == nullptr && return this->ownerId_ == nullptr; };
    // backupObjects Field Functions 
    bool hasBackupObjects() const { return this->backupObjects_ != nullptr;};
    void deleteBackupObjects() { this->backupObjects_ = nullptr;};
    inline string backupObjects() const { DARABONBA_PTR_GET_DEFAULT(backupObjects_, "") };
    inline ModifyBackupObjectsRequest& setBackupObjects(string backupObjects) { DARABONBA_PTR_SET_VALUE(backupObjects_, backupObjects) };


    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string backupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline ModifyBackupObjectsRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyBackupObjectsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ModifyBackupObjectsRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // The backup objects that are defined in a JSON string in the following format:
    // 
    //     [
    //         {
    //             "DBName":"The name of the database that you want to back up",
    //             "SchemaName":"The name of the schema that you want to back up",
    //             "TableIncludes":[{
    //             	"TableName":"The name of the table that you want to back up"
    //             }],
    //             "TableExcludes":[{
    //                 "TableName":"The name of the table that you want to exclude during the backup"
    //             }]
    //         }
    //     ]
    // 
    // *   If you specify only `DBName` and do not specify objects of lower levels, all objects in the database are backed up.
    // 
    // *   If you specify `DBName` and some objects of lower levels, only the specified objects are backed up by default. You can use the following regular expressions to define object names:
    // 
    //     *   A period `.` matches any single character except `\\r\\n`.
    //     *   An asterisk `*` matches zero or more occurrences of a preceding subexpression. For example, `h.*llo` matches strings such as `hllo` and `heeeello`.
    //     *   A question mark `?` matches zero or one occurrence of a preceding subexpression. For example, `h.?llo` matches strings such as `hllo` and `hello`, but not `haello`.
    //     *   Character set `[Characters]` matches a character included in the brackets ([ ]). For example, `h[ae]llo` matches `hallo` and `hello`.
    //     *   Negative character set `[^Characters]` does not match a character in the brackets ([ ]). For example, `h[^ae]llo` matches `hcllo` and `hdllo`, but not `hallo` or `hello`.
    //     *   Character range `[character1-character2]` matches any character included in the range from `character1 to character2`, such as `[0-9]` and `[a-z]`.
    // 
    // >  `SchemaName` and `NewSchemaName` apply only to SQL Server databases. Use `DBName` and `NewDBName` to specify the names of other databases.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupObjects_ = nullptr;
    // The ID of the backup schedule.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupPlanId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
