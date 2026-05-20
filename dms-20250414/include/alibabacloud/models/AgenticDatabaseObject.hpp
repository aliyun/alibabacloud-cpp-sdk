// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTICDATABASEOBJECT_HPP_
#define ALIBABACLOUD_MODELS_AGENTICDATABASEOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class AgenticDatabaseObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgenticDatabaseObject& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseQualifiedName, databaseQualifiedName_);
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(DdlSql, ddlSql_);
      DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
      DARABONBA_PTR_TO_JSON(ObjectQualifiedName, objectQualifiedName_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
    };
    friend void from_json(const Darabonba::Json& j, AgenticDatabaseObject& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseQualifiedName, databaseQualifiedName_);
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_FROM_JSON(DdlSql, ddlSql_);
      DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
      DARABONBA_PTR_FROM_JSON(ObjectQualifiedName, objectQualifiedName_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
    };
    AgenticDatabaseObject() = default ;
    AgenticDatabaseObject(const AgenticDatabaseObject &) = default ;
    AgenticDatabaseObject(AgenticDatabaseObject &&) = default ;
    AgenticDatabaseObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgenticDatabaseObject() = default ;
    AgenticDatabaseObject& operator=(const AgenticDatabaseObject &) = default ;
    AgenticDatabaseObject& operator=(AgenticDatabaseObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseQualifiedName_ == nullptr
        && this->databaseUuid_ == nullptr && this->ddlSql_ == nullptr && this->objectName_ == nullptr && this->objectQualifiedName_ == nullptr && this->objectType_ == nullptr; };
    // databaseQualifiedName Field Functions 
    bool hasDatabaseQualifiedName() const { return this->databaseQualifiedName_ != nullptr;};
    void deleteDatabaseQualifiedName() { this->databaseQualifiedName_ = nullptr;};
    inline string getDatabaseQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(databaseQualifiedName_, "") };
    inline AgenticDatabaseObject& setDatabaseQualifiedName(string databaseQualifiedName) { DARABONBA_PTR_SET_VALUE(databaseQualifiedName_, databaseQualifiedName) };


    // databaseUuid Field Functions 
    bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
    void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
    inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
    inline AgenticDatabaseObject& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


    // ddlSql Field Functions 
    bool hasDdlSql() const { return this->ddlSql_ != nullptr;};
    void deleteDdlSql() { this->ddlSql_ = nullptr;};
    inline string getDdlSql() const { DARABONBA_PTR_GET_DEFAULT(ddlSql_, "") };
    inline AgenticDatabaseObject& setDdlSql(string ddlSql) { DARABONBA_PTR_SET_VALUE(ddlSql_, ddlSql) };


    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline AgenticDatabaseObject& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


    // objectQualifiedName Field Functions 
    bool hasObjectQualifiedName() const { return this->objectQualifiedName_ != nullptr;};
    void deleteObjectQualifiedName() { this->objectQualifiedName_ = nullptr;};
    inline string getObjectQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(objectQualifiedName_, "") };
    inline AgenticDatabaseObject& setObjectQualifiedName(string objectQualifiedName) { DARABONBA_PTR_SET_VALUE(objectQualifiedName_, objectQualifiedName) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline AgenticDatabaseObject& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


  protected:
    shared_ptr<string> databaseQualifiedName_ {};
    shared_ptr<string> databaseUuid_ {};
    shared_ptr<string> ddlSql_ {};
    shared_ptr<string> objectName_ {};
    shared_ptr<string> objectQualifiedName_ {};
    shared_ptr<string> objectType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
