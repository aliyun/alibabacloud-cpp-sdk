// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTPRIVILEGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTPRIVILEGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyAccountPrivilegesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountPrivilegesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPrivileges, accountPrivileges_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountPrivilegesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPrivileges, accountPrivileges_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyAccountPrivilegesRequest() = default ;
    ModifyAccountPrivilegesRequest(const ModifyAccountPrivilegesRequest &) = default ;
    ModifyAccountPrivilegesRequest(ModifyAccountPrivilegesRequest &&) = default ;
    ModifyAccountPrivilegesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountPrivilegesRequest() = default ;
    ModifyAccountPrivilegesRequest& operator=(const ModifyAccountPrivilegesRequest &) = default ;
    ModifyAccountPrivilegesRequest& operator=(ModifyAccountPrivilegesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccountPrivileges : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountPrivileges& obj) { 
        DARABONBA_PTR_TO_JSON(PrivilegeObject, privilegeObject_);
        DARABONBA_PTR_TO_JSON(PrivilegeType, privilegeType_);
        DARABONBA_PTR_TO_JSON(Privileges, privileges_);
      };
      friend void from_json(const Darabonba::Json& j, AccountPrivileges& obj) { 
        DARABONBA_PTR_FROM_JSON(PrivilegeObject, privilegeObject_);
        DARABONBA_PTR_FROM_JSON(PrivilegeType, privilegeType_);
        DARABONBA_PTR_FROM_JSON(Privileges, privileges_);
      };
      AccountPrivileges() = default ;
      AccountPrivileges(const AccountPrivileges &) = default ;
      AccountPrivileges(AccountPrivileges &&) = default ;
      AccountPrivileges(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccountPrivileges() = default ;
      AccountPrivileges& operator=(const AccountPrivileges &) = default ;
      AccountPrivileges& operator=(AccountPrivileges &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PrivilegeObject : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrivilegeObject& obj) { 
          DARABONBA_PTR_TO_JSON(Column, column_);
          DARABONBA_PTR_TO_JSON(Database, database_);
          DARABONBA_PTR_TO_JSON(Table, table_);
        };
        friend void from_json(const Darabonba::Json& j, PrivilegeObject& obj) { 
          DARABONBA_PTR_FROM_JSON(Column, column_);
          DARABONBA_PTR_FROM_JSON(Database, database_);
          DARABONBA_PTR_FROM_JSON(Table, table_);
        };
        PrivilegeObject() = default ;
        PrivilegeObject(const PrivilegeObject &) = default ;
        PrivilegeObject(PrivilegeObject &&) = default ;
        PrivilegeObject(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrivilegeObject() = default ;
        PrivilegeObject& operator=(const PrivilegeObject &) = default ;
        PrivilegeObject& operator=(PrivilegeObject &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->column_ == nullptr
        && this->database_ == nullptr && this->table_ == nullptr; };
        // column Field Functions 
        bool hasColumn() const { return this->column_ != nullptr;};
        void deleteColumn() { this->column_ = nullptr;};
        inline string getColumn() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
        inline PrivilegeObject& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


        // database Field Functions 
        bool hasDatabase() const { return this->database_ != nullptr;};
        void deleteDatabase() { this->database_ = nullptr;};
        inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
        inline PrivilegeObject& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


        // table Field Functions 
        bool hasTable() const { return this->table_ != nullptr;};
        void deleteTable() { this->table_ = nullptr;};
        inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
        inline PrivilegeObject& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


      protected:
        // The columns on which you want to grant permissions. This parameter must be specified when the PrivilegeType parameter is set to Column.
        shared_ptr<string> column_ {};
        // The databases on which you want to grant permissions. This parameter must be specified when the PrivilegeType parameter is set to Database, Table, or Column.
        shared_ptr<string> database_ {};
        // The tables on which you want to grant permissions. This parameter must be specified when the PrivilegeType parameter is set to Table or Column.
        shared_ptr<string> table_ {};
      };

      virtual bool empty() const override { return this->privilegeObject_ == nullptr
        && this->privilegeType_ == nullptr && this->privileges_ == nullptr; };
      // privilegeObject Field Functions 
      bool hasPrivilegeObject() const { return this->privilegeObject_ != nullptr;};
      void deletePrivilegeObject() { this->privilegeObject_ = nullptr;};
      inline const AccountPrivileges::PrivilegeObject & getPrivilegeObject() const { DARABONBA_PTR_GET_CONST(privilegeObject_, AccountPrivileges::PrivilegeObject) };
      inline AccountPrivileges::PrivilegeObject getPrivilegeObject() { DARABONBA_PTR_GET(privilegeObject_, AccountPrivileges::PrivilegeObject) };
      inline AccountPrivileges& setPrivilegeObject(const AccountPrivileges::PrivilegeObject & privilegeObject) { DARABONBA_PTR_SET_VALUE(privilegeObject_, privilegeObject) };
      inline AccountPrivileges& setPrivilegeObject(AccountPrivileges::PrivilegeObject && privilegeObject) { DARABONBA_PTR_SET_RVALUE(privilegeObject_, privilegeObject) };


      // privilegeType Field Functions 
      bool hasPrivilegeType() const { return this->privilegeType_ != nullptr;};
      void deletePrivilegeType() { this->privilegeType_ = nullptr;};
      inline string getPrivilegeType() const { DARABONBA_PTR_GET_DEFAULT(privilegeType_, "") };
      inline AccountPrivileges& setPrivilegeType(string privilegeType) { DARABONBA_PTR_SET_VALUE(privilegeType_, privilegeType) };


      // privileges Field Functions 
      bool hasPrivileges() const { return this->privileges_ != nullptr;};
      void deletePrivileges() { this->privileges_ = nullptr;};
      inline const vector<string> & getPrivileges() const { DARABONBA_PTR_GET_CONST(privileges_, vector<string>) };
      inline vector<string> getPrivileges() { DARABONBA_PTR_GET(privileges_, vector<string>) };
      inline AccountPrivileges& setPrivileges(const vector<string> & privileges) { DARABONBA_PTR_SET_VALUE(privileges_, privileges) };
      inline AccountPrivileges& setPrivileges(vector<string> && privileges) { DARABONBA_PTR_SET_RVALUE(privileges_, privileges) };


    protected:
      // The objects on which you want to grant permissions, including databases, tables, and columns.
      shared_ptr<AccountPrivileges::PrivilegeObject> privilegeObject_ {};
      // The permission level that you want to assign to the database account. You can call the `DescribeEnabledPrivileges` operation to query the permission level that can be assigned to the database account.
      shared_ptr<string> privilegeType_ {};
      // The permissions that you want to grant to the database account.
      shared_ptr<vector<string>> privileges_ {};
    };

    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountPrivileges_ == nullptr && this->DBClusterId_ == nullptr && this->regionId_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ModifyAccountPrivilegesRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPrivileges Field Functions 
    bool hasAccountPrivileges() const { return this->accountPrivileges_ != nullptr;};
    void deleteAccountPrivileges() { this->accountPrivileges_ = nullptr;};
    inline const vector<ModifyAccountPrivilegesRequest::AccountPrivileges> & getAccountPrivileges() const { DARABONBA_PTR_GET_CONST(accountPrivileges_, vector<ModifyAccountPrivilegesRequest::AccountPrivileges>) };
    inline vector<ModifyAccountPrivilegesRequest::AccountPrivileges> getAccountPrivileges() { DARABONBA_PTR_GET(accountPrivileges_, vector<ModifyAccountPrivilegesRequest::AccountPrivileges>) };
    inline ModifyAccountPrivilegesRequest& setAccountPrivileges(const vector<ModifyAccountPrivilegesRequest::AccountPrivileges> & accountPrivileges) { DARABONBA_PTR_SET_VALUE(accountPrivileges_, accountPrivileges) };
    inline ModifyAccountPrivilegesRequest& setAccountPrivileges(vector<ModifyAccountPrivilegesRequest::AccountPrivileges> && accountPrivileges) { DARABONBA_PTR_SET_RVALUE(accountPrivileges_, accountPrivileges) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyAccountPrivilegesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAccountPrivilegesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the database account.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // The permissions that you want to grant to the database account.
    // 
    // This parameter is required.
    shared_ptr<vector<ModifyAccountPrivilegesRequest::AccountPrivileges>> accountPrivileges_ {};
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
