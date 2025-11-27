// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CharacterSetName, characterSetName_);
      DARABONBA_PTR_TO_JSON(DBDescription, DBDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CharacterSetName, characterSetName_);
      DARABONBA_PTR_FROM_JSON(DBDescription, DBDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateDatabaseRequest() = default ;
    CreateDatabaseRequest(const CreateDatabaseRequest &) = default ;
    CreateDatabaseRequest(CreateDatabaseRequest &&) = default ;
    CreateDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatabaseRequest() = default ;
    CreateDatabaseRequest& operator=(const CreateDatabaseRequest &) = default ;
    CreateDatabaseRequest& operator=(CreateDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->characterSetName_ == nullptr
        && return this->DBDescription_ == nullptr && return this->DBInstanceId_ == nullptr && return this->DBName_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // characterSetName Field Functions 
    bool hasCharacterSetName() const { return this->characterSetName_ != nullptr;};
    void deleteCharacterSetName() { this->characterSetName_ = nullptr;};
    inline string characterSetName() const { DARABONBA_PTR_GET_DEFAULT(characterSetName_, "") };
    inline CreateDatabaseRequest& setCharacterSetName(string characterSetName) { DARABONBA_PTR_SET_VALUE(characterSetName_, characterSetName) };


    // DBDescription Field Functions 
    bool hasDBDescription() const { return this->DBDescription_ != nullptr;};
    void deleteDBDescription() { this->DBDescription_ = nullptr;};
    inline string DBDescription() const { DARABONBA_PTR_GET_DEFAULT(DBDescription_, "") };
    inline CreateDatabaseRequest& setDBDescription(string DBDescription) { DARABONBA_PTR_SET_VALUE(DBDescription_, DBDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateDatabaseRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline CreateDatabaseRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateDatabaseRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDatabaseRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDatabaseRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDatabaseRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The character set.
    // 
    // *   Valid values for MySQL or MariaDB databases: **utf8, gbk, latin1, and utf8mb4**
    // 
    // *   Valid values for SQL Server databases: **Chinese_PRC_CI_AS, Chinese_PRC_CS_AS, SQL_Latin1_General_CP1_CI_AS, SQL_Latin1_General_CP1_CS_AS, and Chinese_PRC_BIN**
    // 
    // *   Valid values for PostgreSQL databases: a value in the `Character set,<Collate>,<Ctype>` format. Example: `UTF8,C,en_US.utf8`.
    // 
    //     *   Valid values for the character set: **KOI8U, UTF8, WIN866, WIN874, WIN1250, WIN1251, WIN1252, WIN1253, WIN1254, WIN1255, WIN1256, WIN1257, WIN1258, EUC_CN, EUC_KR, EUC_TW, EUC_JP, EUC_JIS_2004, KOI8R, MULE_INTERNAL, LATIN1, LATIN2, LATIN3, LATIN4, LATIN5, LATIN6, LATIN7, LATIN8, LATIN9, LATIN10, ISO_8859_5, ISO_8859_6, ISO_8859_7, ISO_8859_8, and SQL_ASCII**
    //     *   Valid values for the **Collate** field: You can execute the `SELECT DISTINCT collname FROM pg_collation;` statement to obtain the field value. The default value is **C**.
    //     *   Valid values for the **Ctype** field: You can execute the `SELECT DISTINCT collctype FROM pg_collation;` statement to obtain the field value. The default value is **en_US.utf8**.
    // 
    // This parameter is required.
    std::shared_ptr<string> characterSetName_ = nullptr;
    // The description of the database. The description must be 2 to 256 characters in length and can contain letters, digits, underscores (_), and hyphens (-). The description must start with a letter.
    // 
    // > The value cannot start with `http://` or `https://`.
    std::shared_ptr<string> DBDescription_ = nullptr;
    // The instance ID. You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/610396.html) operation to query the ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The name of the database.
    // 
    // > *   The name must be 2 to 64 characters in length.
    // > *   The name must start with a lowercase letter and end with a lowercase letter or digit.
    // > *   The name can contain lowercase letters, digits, underscores (_), and hyphens (-).
    // > *   The name must be unique within the instance.
    // > *   For more information about invalid characters, see [Forbidden keywords table](https://help.aliyun.com/document_detail/26317.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> DBName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
