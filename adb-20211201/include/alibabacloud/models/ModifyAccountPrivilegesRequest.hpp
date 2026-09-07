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
      DARABONBA_PTR_TO_JSON(PromqlInsertPrivileges, promqlInsertPrivileges_);
      DARABONBA_PTR_TO_JSON(PromqlSelectNodePercentage, promqlSelectNodePercentage_);
      DARABONBA_PTR_TO_JSON(PromqlSelectPrivileges, promqlSelectPrivileges_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountPrivilegesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPrivileges, accountPrivileges_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PromqlInsertPrivileges, promqlInsertPrivileges_);
      DARABONBA_PTR_FROM_JSON(PromqlSelectNodePercentage, promqlSelectNodePercentage_);
      DARABONBA_PTR_FROM_JSON(PromqlSelectPrivileges, promqlSelectPrivileges_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
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
        // The column to which permissions are granted. This parameter is required when the privilege level is column.
        shared_ptr<string> column_ {};
        // The database to which permissions are granted. This parameter is required when the privilege level is database, table, or column.
        shared_ptr<string> database_ {};
        // The table to which permissions are granted. This parameter is required when the privilege level is table or column.
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
      // The privilege object, which is a tuple of database, table, and column.
      shared_ptr<AccountPrivileges::PrivilegeObject> privilegeObject_ {};
      // The privilege level, obtained from the `DescribeEnabledPrivileges` operation.
      shared_ptr<string> privilegeType_ {};
      // The list of granted permissions.
      shared_ptr<vector<string>> privileges_ {};
    };

    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountPrivileges_ == nullptr && this->DBClusterId_ == nullptr && this->promqlInsertPrivileges_ == nullptr && this->promqlSelectNodePercentage_ == nullptr && this->promqlSelectPrivileges_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupName_ == nullptr; };
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


    // promqlInsertPrivileges Field Functions 
    bool hasPromqlInsertPrivileges() const { return this->promqlInsertPrivileges_ != nullptr;};
    void deletePromqlInsertPrivileges() { this->promqlInsertPrivileges_ = nullptr;};
    inline const vector<string> & getPromqlInsertPrivileges() const { DARABONBA_PTR_GET_CONST(promqlInsertPrivileges_, vector<string>) };
    inline vector<string> getPromqlInsertPrivileges() { DARABONBA_PTR_GET(promqlInsertPrivileges_, vector<string>) };
    inline ModifyAccountPrivilegesRequest& setPromqlInsertPrivileges(const vector<string> & promqlInsertPrivileges) { DARABONBA_PTR_SET_VALUE(promqlInsertPrivileges_, promqlInsertPrivileges) };
    inline ModifyAccountPrivilegesRequest& setPromqlInsertPrivileges(vector<string> && promqlInsertPrivileges) { DARABONBA_PTR_SET_RVALUE(promqlInsertPrivileges_, promqlInsertPrivileges) };


    // promqlSelectNodePercentage Field Functions 
    bool hasPromqlSelectNodePercentage() const { return this->promqlSelectNodePercentage_ != nullptr;};
    void deletePromqlSelectNodePercentage() { this->promqlSelectNodePercentage_ = nullptr;};
    inline double getPromqlSelectNodePercentage() const { DARABONBA_PTR_GET_DEFAULT(promqlSelectNodePercentage_, 0.0) };
    inline ModifyAccountPrivilegesRequest& setPromqlSelectNodePercentage(double promqlSelectNodePercentage) { DARABONBA_PTR_SET_VALUE(promqlSelectNodePercentage_, promqlSelectNodePercentage) };


    // promqlSelectPrivileges Field Functions 
    bool hasPromqlSelectPrivileges() const { return this->promqlSelectPrivileges_ != nullptr;};
    void deletePromqlSelectPrivileges() { this->promqlSelectPrivileges_ = nullptr;};
    inline const vector<string> & getPromqlSelectPrivileges() const { DARABONBA_PTR_GET_CONST(promqlSelectPrivileges_, vector<string>) };
    inline vector<string> getPromqlSelectPrivileges() { DARABONBA_PTR_GET(promqlSelectPrivileges_, vector<string>) };
    inline ModifyAccountPrivilegesRequest& setPromqlSelectPrivileges(const vector<string> & promqlSelectPrivileges) { DARABONBA_PTR_SET_VALUE(promqlSelectPrivileges_, promqlSelectPrivileges) };
    inline ModifyAccountPrivilegesRequest& setPromqlSelectPrivileges(vector<string> && promqlSelectPrivileges) { DARABONBA_PTR_SET_RVALUE(promqlSelectPrivileges_, promqlSelectPrivileges) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAccountPrivilegesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline ModifyAccountPrivilegesRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


  protected:
    // The name of the database account.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // The list of granted permissions.
    shared_ptr<vector<ModifyAccountPrivilegesRequest::AccountPrivileges>> accountPrivileges_ {};
    // <props="china">The cluster ID of the Enterprise Edition, Basic Edition, or Data Lakehouse Edition cluster.
    // <props="intl">The cluster ID of the Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<vector<string>> promqlInsertPrivileges_ {};
    shared_ptr<double> promqlSelectNodePercentage_ {};
    shared_ptr<vector<string>> promqlSelectPrivileges_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
