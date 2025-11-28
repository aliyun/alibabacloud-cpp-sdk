// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CharacterSetName, characterSetName_);
      DARABONBA_PTR_TO_JSON(Collate, collate_);
      DARABONBA_PTR_TO_JSON(Ctype, ctype_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CharacterSetName, characterSetName_);
      DARABONBA_PTR_FROM_JSON(Collate, collate_);
      DARABONBA_PTR_FROM_JSON(Ctype, ctype_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
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
        && return this->collate_ == nullptr && return this->ctype_ == nullptr && return this->DBInstanceId_ == nullptr && return this->databaseName_ == nullptr && return this->description_ == nullptr
        && return this->owner_ == nullptr; };
    // characterSetName Field Functions 
    bool hasCharacterSetName() const { return this->characterSetName_ != nullptr;};
    void deleteCharacterSetName() { this->characterSetName_ = nullptr;};
    inline string characterSetName() const { DARABONBA_PTR_GET_DEFAULT(characterSetName_, "") };
    inline CreateDatabaseRequest& setCharacterSetName(string characterSetName) { DARABONBA_PTR_SET_VALUE(characterSetName_, characterSetName) };


    // collate Field Functions 
    bool hasCollate() const { return this->collate_ != nullptr;};
    void deleteCollate() { this->collate_ = nullptr;};
    inline string collate() const { DARABONBA_PTR_GET_DEFAULT(collate_, "") };
    inline CreateDatabaseRequest& setCollate(string collate) { DARABONBA_PTR_SET_VALUE(collate_, collate) };


    // ctype Field Functions 
    bool hasCtype() const { return this->ctype_ != nullptr;};
    void deleteCtype() { this->ctype_ = nullptr;};
    inline string ctype() const { DARABONBA_PTR_GET_DEFAULT(ctype_, "") };
    inline CreateDatabaseRequest& setCtype(string ctype) { DARABONBA_PTR_SET_VALUE(ctype_, ctype) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateDatabaseRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline CreateDatabaseRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDatabaseRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline CreateDatabaseRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


  protected:
    // The character set.
    // 
    // For more information about the value range, see Document [https://www.postgresql.org/docs/current/multibyte.html](url).
    // 
    // Default value: UTF-8.
    std::shared_ptr<string> characterSetName_ = nullptr;
    // Database locale parameter (specifies string comparison/sorting rules).
    // 
    // > 
    // 
    // *   The locale must be compatible with the character set specified by the CharacterSetName parameter.
    // 
    // *   Valid values for the Collate field: You can execute the SELECT DISTINCT collname FROM pg_collation; statement to obtain the field value. The default value is en_US.utf8.
    std::shared_ptr<string> collate_ = nullptr;
    // Database locale parameter (defines character classification/case conversion rules).
    // 
    // > 
    // 
    // *   The locale must be compatible with the character set specified by the CharacterSetName parameter.
    // 
    // *   You can execute the SELECT DISTINCT collctype FROM pg_collation; statement to obtain the field value. The default value is en_US.utf8.
    std::shared_ptr<string> ctype_ = nullptr;
    // The cluster ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The name of the database.
    // 
    // *   Only contains letters, digits, and underscores (_).
    // *   Must start with a letter.
    // *   Up to 63 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The description of the database.
    // 
    // *   Must start with a letter.
    // *   Cannot start with http:// or https://.
    // *   Only contains letters, underscores (_), hyphens (-), and digits.
    // *   Must be 2 to 256 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The owner of the table.
    // 
    // *   Only contains lowercase letters, digits, and underscores (_).
    // *   Must start with a lowercase letter and end with a lowercase letter or a digit.
    // *   Cannot start with gp.
    // *   Must be 2 to 16 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> owner_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
