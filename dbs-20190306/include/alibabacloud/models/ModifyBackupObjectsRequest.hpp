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
        && this->backupPlanId_ == nullptr && this->clientToken_ == nullptr && this->ownerId_ == nullptr; };
    // backupObjects Field Functions 
    bool hasBackupObjects() const { return this->backupObjects_ != nullptr;};
    void deleteBackupObjects() { this->backupObjects_ = nullptr;};
    inline string getBackupObjects() const { DARABONBA_PTR_GET_DEFAULT(backupObjects_, "") };
    inline ModifyBackupObjectsRequest& setBackupObjects(string backupObjects) { DARABONBA_PTR_SET_VALUE(backupObjects_, backupObjects) };


    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline ModifyBackupObjectsRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyBackupObjectsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ModifyBackupObjectsRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // The backup objects, specified as a JSON string. The structure is as follows:
    // 
    // ```
    // [
    //     {
    //         "DBName":"The name of the database to back up",
    //         "SchemaName":"The name of the schema to back up",
    //         "TableIncludes":[{
    //         	"TableName":"The name of the table to back up"
    //         }],
    //         "TableExcludes":[{
    //             "TableName":"The name of a table in the database that you do not want to back up"
    //         }]
    //     }
    // ]
    // ```
    // 
    // - If you specify only `DBName` without configuring rules for sub-objects, all objects in the database are backed up.
    // 
    // - If you specify `DBName` and configure rules for some objects, any objects without configured rules are not backed up by default. The following regular expressions are supported for defining object names:
    // 
    //   - A period (`.`) matches any single character except `
    // `.
    // 
    //   - An asterisk (`*`) matches the preceding subexpression zero or more times. For example, `h*llo` matches `hllo` and `heeeello`.
    // 
    //   - A question mark (`?`) matches the preceding subexpression zero or one time. For example, `h.?llo` matches `hllo` and `hello`, but not `haello`.
    // 
    //   - A character set `[characters]` matches any single character within the brackets. For example, `h[aello]` matches `hallo` and `hello`.
    // 
    //   - A negated character set `[^characters]` matches any single character not within the brackets. For example, `h[^ae]llo` matches `hcllo` and `hdllo`, but not `hallo` or `hello`.
    // 
    //   - A character range `[character1-character2]` matches any character within the specified range, such as `[0-9]` or `[a-z]`.
    // 
    // > `SchemaName` and `NewSchemaName` are used only for SQL Server. For other database engines, use `DBName` and `NewDBName` to specify database names.
    // 
    // This parameter is required.
    shared_ptr<string> backupObjects_ {};
    // The ID of the backup plan.
    // 
    // This parameter is required.
    shared_ptr<string> backupPlanId_ {};
    // A client token to ensure the request is idempotent. This prevents the same request from being submitted multiple times.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> ownerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
