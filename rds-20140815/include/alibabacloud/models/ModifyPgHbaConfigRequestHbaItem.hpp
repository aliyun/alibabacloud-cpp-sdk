// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPGHBACONFIGREQUESTHBAITEM_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPGHBACONFIGREQUESTHBAITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyPGHbaConfigRequestHbaItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPGHbaConfigRequestHbaItem& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(PriorityId, priorityId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPGHbaConfigRequestHbaItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(PriorityId, priorityId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    ModifyPGHbaConfigRequestHbaItem() = default ;
    ModifyPGHbaConfigRequestHbaItem(const ModifyPGHbaConfigRequestHbaItem &) = default ;
    ModifyPGHbaConfigRequestHbaItem(ModifyPGHbaConfigRequestHbaItem &&) = default ;
    ModifyPGHbaConfigRequestHbaItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPGHbaConfigRequestHbaItem() = default ;
    ModifyPGHbaConfigRequestHbaItem& operator=(const ModifyPGHbaConfigRequestHbaItem &) = default ;
    ModifyPGHbaConfigRequestHbaItem& operator=(ModifyPGHbaConfigRequestHbaItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->database_ == nullptr && return this->mask_ == nullptr && return this->method_ == nullptr && return this->option_ == nullptr && return this->priorityId_ == nullptr
        && return this->type_ == nullptr && return this->user_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ModifyPGHbaConfigRequestHbaItem& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline ModifyPGHbaConfigRequestHbaItem& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string mask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline ModifyPGHbaConfigRequestHbaItem& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline ModifyPGHbaConfigRequestHbaItem& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string option() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline ModifyPGHbaConfigRequestHbaItem& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // priorityId Field Functions 
    bool hasPriorityId() const { return this->priorityId_ != nullptr;};
    void deletePriorityId() { this->priorityId_ = nullptr;};
    inline int32_t priorityId() const { DARABONBA_PTR_GET_DEFAULT(priorityId_, 0) };
    inline ModifyPGHbaConfigRequestHbaItem& setPriorityId(int32_t priorityId) { DARABONBA_PTR_SET_VALUE(priorityId_, priorityId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyPGHbaConfigRequestHbaItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline ModifyPGHbaConfigRequestHbaItem& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The IP addresses from which the specified users can access the specified databases. If you set this parameter to 0.0.0.0/0, the specified users are allowed to access the specified databases from all IP addresses.
    // 
    // This parameter is required.
    std::shared_ptr<string> address_ = nullptr;
    // The name of the database. If you set this parameter to all, the specified users are allowed to access all databases on the instance.
    // 
    // If you specify multiple entries, separate the entries with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> database_ = nullptr;
    // The mask of the IP address. If the value of the **Address** parameter is an IP address, you can use this parameter to specify the mask of the IP address.
    std::shared_ptr<string> mask_ = nullptr;
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
    std::shared_ptr<string> method_ = nullptr;
    // The options of the authentication method. In this topic, LDAP is used as an example. You must configure this parameter. For more information, see [Authentication Methods](https://www.postgresql.org/docs/11/auth-methods.html).
    std::shared_ptr<string> option_ = nullptr;
    // The priority of the record. If you set this parameter to 0, the record has the highest priority. Valid values: 0 to 10000.
    // 
    // This parameter is used to identify each record. When you add a record, the value of the PriorityId parameter for the new record must be different from the value of the PriorityId parameter of any existing record. When you modify or delete a record, you must also modify or delete the value of the PriorityId parameter for this record.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> priorityId_ = nullptr;
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
    std::shared_ptr<string> type_ = nullptr;
    // The user who is allowed to access the specified databases. You must specify the user that is used to log on to the RDS instance. If you specify multiple entries, separate the entries with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
