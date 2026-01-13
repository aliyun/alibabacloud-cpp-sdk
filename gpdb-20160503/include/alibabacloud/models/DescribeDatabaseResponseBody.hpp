// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPrivilege, accessPrivilege_);
      DARABONBA_PTR_TO_JSON(CharacterSetName, characterSetName_);
      DARABONBA_PTR_TO_JSON(Collate, collate_);
      DARABONBA_PTR_TO_JSON(ConnLimit, connLimit_);
      DARABONBA_PTR_TO_JSON(Ctype, ctype_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(TableSpace, tableSpace_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPrivilege, accessPrivilege_);
      DARABONBA_PTR_FROM_JSON(CharacterSetName, characterSetName_);
      DARABONBA_PTR_FROM_JSON(Collate, collate_);
      DARABONBA_PTR_FROM_JSON(ConnLimit, connLimit_);
      DARABONBA_PTR_FROM_JSON(Ctype, ctype_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(TableSpace, tableSpace_);
    };
    DescribeDatabaseResponseBody() = default ;
    DescribeDatabaseResponseBody(const DescribeDatabaseResponseBody &) = default ;
    DescribeDatabaseResponseBody(DescribeDatabaseResponseBody &&) = default ;
    DescribeDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabaseResponseBody() = default ;
    DescribeDatabaseResponseBody& operator=(const DescribeDatabaseResponseBody &) = default ;
    DescribeDatabaseResponseBody& operator=(DescribeDatabaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPrivilege_ == nullptr
        && this->characterSetName_ == nullptr && this->collate_ == nullptr && this->connLimit_ == nullptr && this->ctype_ == nullptr && this->DBInstanceId_ == nullptr
        && this->databaseName_ == nullptr && this->description_ == nullptr && this->owner_ == nullptr && this->requestId_ == nullptr && this->size_ == nullptr
        && this->tableSpace_ == nullptr; };
    // accessPrivilege Field Functions 
    bool hasAccessPrivilege() const { return this->accessPrivilege_ != nullptr;};
    void deleteAccessPrivilege() { this->accessPrivilege_ = nullptr;};
    inline string getAccessPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accessPrivilege_, "") };
    inline DescribeDatabaseResponseBody& setAccessPrivilege(string accessPrivilege) { DARABONBA_PTR_SET_VALUE(accessPrivilege_, accessPrivilege) };


    // characterSetName Field Functions 
    bool hasCharacterSetName() const { return this->characterSetName_ != nullptr;};
    void deleteCharacterSetName() { this->characterSetName_ = nullptr;};
    inline string getCharacterSetName() const { DARABONBA_PTR_GET_DEFAULT(characterSetName_, "") };
    inline DescribeDatabaseResponseBody& setCharacterSetName(string characterSetName) { DARABONBA_PTR_SET_VALUE(characterSetName_, characterSetName) };


    // collate Field Functions 
    bool hasCollate() const { return this->collate_ != nullptr;};
    void deleteCollate() { this->collate_ = nullptr;};
    inline string getCollate() const { DARABONBA_PTR_GET_DEFAULT(collate_, "") };
    inline DescribeDatabaseResponseBody& setCollate(string collate) { DARABONBA_PTR_SET_VALUE(collate_, collate) };


    // connLimit Field Functions 
    bool hasConnLimit() const { return this->connLimit_ != nullptr;};
    void deleteConnLimit() { this->connLimit_ = nullptr;};
    inline string getConnLimit() const { DARABONBA_PTR_GET_DEFAULT(connLimit_, "") };
    inline DescribeDatabaseResponseBody& setConnLimit(string connLimit) { DARABONBA_PTR_SET_VALUE(connLimit_, connLimit) };


    // ctype Field Functions 
    bool hasCtype() const { return this->ctype_ != nullptr;};
    void deleteCtype() { this->ctype_ = nullptr;};
    inline string getCtype() const { DARABONBA_PTR_GET_DEFAULT(ctype_, "") };
    inline DescribeDatabaseResponseBody& setCtype(string ctype) { DARABONBA_PTR_SET_VALUE(ctype_, ctype) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDatabaseResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeDatabaseResponseBody& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDatabaseResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DescribeDatabaseResponseBody& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatabaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline DescribeDatabaseResponseBody& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // tableSpace Field Functions 
    bool hasTableSpace() const { return this->tableSpace_ != nullptr;};
    void deleteTableSpace() { this->tableSpace_ = nullptr;};
    inline string getTableSpace() const { DARABONBA_PTR_GET_DEFAULT(tableSpace_, "") };
    inline DescribeDatabaseResponseBody& setTableSpace(string tableSpace) { DARABONBA_PTR_SET_VALUE(tableSpace_, tableSpace) };


  protected:
    // The permission control information.
    shared_ptr<string> accessPrivilege_ {};
    // The character set.
    // 
    // For more information about the value range, see Document https://www.postgresql.org/docs/current/multibyte.html.
    shared_ptr<string> characterSetName_ {};
    // Database locale parameter that specifies string comparison and sorting rules.
    // 
    // > 
    // 
    // *   The locale must be compatible with the character set specified by the CharacterSetName parameter.
    // 
    // *   Collate: You can query available collations using the command SELECT DISTINCT collname FROM pg_collation;. If not specified, the default value is en_US.utf8.
    shared_ptr<string> collate_ {};
    // Limits the number of concurrent connections. -1 indicates unlimited.
    shared_ptr<string> connLimit_ {};
    // Database locale parameter that specifies character classification and case conversion rules.
    // 
    // > 
    // 
    // *   The locale must be compatible with the character set specified by the CharacterSetName parameter.
    // 
    // *   You can execute the SELECT DISTINCT collctype FROM pg_collation; statement to obtain the field value. The default value is en_US.utf8.
    shared_ptr<string> ctype_ {};
    // The cluster ID.
    shared_ptr<string> DBInstanceId_ {};
    // The database name.
    // 
    // *   Only contain letters, digits, and underscores (_).
    // *   Must start with a letter.
    // *   Up to 63 characters in length.
    shared_ptr<string> databaseName_ {};
    // The database comment.
    shared_ptr<string> description_ {};
    // The owner of the table.
    // 
    // *   Contain lowercase letters, digits, and underscores (_).
    // *   Must start with a lowercase letter and end with a lowercase letter or a digit.
    // *   Cannot start with gp.
    // *   Must be 2 to 16 characters in length.
    shared_ptr<string> owner_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // The database size.
    shared_ptr<string> size_ {};
    // The database tablespace.
    shared_ptr<string> tableSpace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
