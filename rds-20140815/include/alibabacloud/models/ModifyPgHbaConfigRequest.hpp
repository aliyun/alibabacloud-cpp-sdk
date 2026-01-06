// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPGHBACONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPGHBACONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyPGHbaConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPGHbaConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(HbaItem, hbaItem_);
      DARABONBA_PTR_TO_JSON(OpsType, opsType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPGHbaConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(HbaItem, hbaItem_);
      DARABONBA_PTR_FROM_JSON(OpsType, opsType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyPGHbaConfigRequest() = default ;
    ModifyPGHbaConfigRequest(const ModifyPGHbaConfigRequest &) = default ;
    ModifyPGHbaConfigRequest(ModifyPGHbaConfigRequest &&) = default ;
    ModifyPGHbaConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPGHbaConfigRequest() = default ;
    ModifyPGHbaConfigRequest& operator=(const ModifyPGHbaConfigRequest &) = default ;
    ModifyPGHbaConfigRequest& operator=(ModifyPGHbaConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HbaItem : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HbaItem& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(Database, database_);
        DARABONBA_PTR_TO_JSON(Mask, mask_);
        DARABONBA_PTR_TO_JSON(Method, method_);
        DARABONBA_PTR_TO_JSON(Option, option_);
        DARABONBA_PTR_TO_JSON(PriorityId, priorityId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, HbaItem& obj) { 
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(Database, database_);
        DARABONBA_PTR_FROM_JSON(Mask, mask_);
        DARABONBA_PTR_FROM_JSON(Method, method_);
        DARABONBA_PTR_FROM_JSON(Option, option_);
        DARABONBA_PTR_FROM_JSON(PriorityId, priorityId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(User, user_);
      };
      HbaItem() = default ;
      HbaItem(const HbaItem &) = default ;
      HbaItem(HbaItem &&) = default ;
      HbaItem(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HbaItem() = default ;
      HbaItem& operator=(const HbaItem &) = default ;
      HbaItem& operator=(HbaItem &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->address_ == nullptr
        && this->database_ == nullptr && this->mask_ == nullptr && this->method_ == nullptr && this->option_ == nullptr && this->priorityId_ == nullptr
        && this->type_ == nullptr && this->user_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline HbaItem& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
      inline HbaItem& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


      // mask Field Functions 
      bool hasMask() const { return this->mask_ != nullptr;};
      void deleteMask() { this->mask_ = nullptr;};
      inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
      inline HbaItem& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
      inline HbaItem& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


      // option Field Functions 
      bool hasOption() const { return this->option_ != nullptr;};
      void deleteOption() { this->option_ = nullptr;};
      inline string getOption() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
      inline HbaItem& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


      // priorityId Field Functions 
      bool hasPriorityId() const { return this->priorityId_ != nullptr;};
      void deletePriorityId() { this->priorityId_ = nullptr;};
      inline int32_t getPriorityId() const { DARABONBA_PTR_GET_DEFAULT(priorityId_, 0) };
      inline HbaItem& setPriorityId(int32_t priorityId) { DARABONBA_PTR_SET_VALUE(priorityId_, priorityId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline HbaItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline HbaItem& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The IP addresses from which the specified users can access the specified databases. If you set this parameter to 0.0.0.0/0, the specified users are allowed to access the specified databases from all IP addresses.
      // 
      // This parameter is required.
      shared_ptr<string> address_ {};
      // The name of the database. If you set this parameter to all, the specified users are allowed to access all databases on the instance.
      // 
      // If you specify multiple entries, separate the entries with commas (,).
      // 
      // This parameter is required.
      shared_ptr<string> database_ {};
      // The mask of the IP address. If the value of the **Address** parameter is an IP address, you can use this parameter to specify the mask of the IP address.
      shared_ptr<string> mask_ {};
      // The authentication method. Valid values:
      // 
      // *   **trust**
      // *   **reject**
      // *   **scram-sha-256**
      // *   **md5**
      // *   **password**
      // *   **gss**
      // *   **sspi**
      // *   **ldap**
      // *   **radius**
      // *   **cert**
      // *   **pam**
      // 
      // This parameter is required.
      shared_ptr<string> method_ {};
      // The options of the authentication method. In this topic, LDAP is used as an example. You must configure this parameter. For more information, see [Authentication Methods](https://www.postgresql.org/docs/11/auth-methods.html).
      shared_ptr<string> option_ {};
      // The priority of the record. If you set this parameter to 0, the record has the highest priority. Valid values: 0 to 10000.
      // 
      // This parameter is used to identify each record. When you add a record, the value of the PriorityId parameter for the new record must be different from the value of the PriorityId parameter of any existing record. When you modify or delete a record, you must also modify or delete the value of the PriorityId parameter for this record.
      // 
      // This parameter is required.
      shared_ptr<int32_t> priorityId_ {};
      // The connection type.
      // 
      // Valid values:
      // 
      // *   **host**: The record matches TCP/IP connections, including SSL connections and non-SSL connections.
      // *   **hostssl**: The record matches only TCP/IP connections that are established over SSL.
      // *   **hostnossl**: The record matches only TCP/IP connections that are not established over SSL connections.
      // 
      // >  You can set this parameter to hostssl only when SSL encryption is enabled for the instance. For more information, see Configure SSL encryption for an ApsaraDB RDS for PostgreSQL instance.[](~~229518~~)
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
      // The user who is allowed to access the specified databases. You must specify the user that is used to log on to the RDS instance. If you specify multiple entries, separate the entries with commas (,).
      // 
      // This parameter is required.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->DBInstanceId_ == nullptr && this->hbaItem_ == nullptr && this->opsType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyPGHbaConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyPGHbaConfigRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // hbaItem Field Functions 
    bool hasHbaItem() const { return this->hbaItem_ != nullptr;};
    void deleteHbaItem() { this->hbaItem_ = nullptr;};
    inline const vector<ModifyPGHbaConfigRequest::HbaItem> & getHbaItem() const { DARABONBA_PTR_GET_CONST(hbaItem_, vector<ModifyPGHbaConfigRequest::HbaItem>) };
    inline vector<ModifyPGHbaConfigRequest::HbaItem> getHbaItem() { DARABONBA_PTR_GET(hbaItem_, vector<ModifyPGHbaConfigRequest::HbaItem>) };
    inline ModifyPGHbaConfigRequest& setHbaItem(const vector<ModifyPGHbaConfigRequest::HbaItem> & hbaItem) { DARABONBA_PTR_SET_VALUE(hbaItem_, hbaItem) };
    inline ModifyPGHbaConfigRequest& setHbaItem(vector<ModifyPGHbaConfigRequest::HbaItem> && hbaItem) { DARABONBA_PTR_SET_RVALUE(hbaItem_, hbaItem) };


    // opsType Field Functions 
    bool hasOpsType() const { return this->opsType_ != nullptr;};
    void deleteOpsType() { this->opsType_ = nullptr;};
    inline string getOpsType() const { DARABONBA_PTR_GET_DEFAULT(opsType_, "") };
    inline ModifyPGHbaConfigRequest& setOpsType(string opsType) { DARABONBA_PTR_SET_VALUE(opsType_, opsType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyPGHbaConfigRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyPGHbaConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyPGHbaConfigRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyPGHbaConfigRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // A reserved parameter. You do not need to specify this parameter.
    shared_ptr<string> clientToken_ {};
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // An array that consists of the details of the AD domain services.
    // 
    // This parameter is required.
    shared_ptr<vector<ModifyPGHbaConfigRequest::HbaItem>> hbaItem_ {};
    // The method that you use to modify the pg_hba.conf file. Valid values:
    // 
    // *   **add**: adds one or more records. If you use this method, make sure that the value of the PriorityId parameter for each new record is different from the value of the PriorityId parameter for any existing record.
    // *   **delete**: deletes one or more records. If you use this method, the record that corresponds to the specified value of the **PriorityId** parameter is deleted from the pg_hba.conf file.
    // *   **modify**: modifies one or more records. If you use this method, the record that corresponds to the specified value of the **PriorityId** parameter is modified.
    // *   **update**: overwrites the existing configuration in the pg_hba.conf file by using the new configuration.
    // 
    // This parameter is required.
    shared_ptr<string> opsType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
