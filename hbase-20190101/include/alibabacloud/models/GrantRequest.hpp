// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class GrantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AclActions, aclActions_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GrantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AclActions, aclActions_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GrantRequest() = default ;
    GrantRequest(const GrantRequest &) = default ;
    GrantRequest(GrantRequest &&) = default ;
    GrantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantRequest() = default ;
    GrantRequest& operator=(const GrantRequest &) = default ;
    GrantRequest& operator=(GrantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->aclActions_ == nullptr && this->clusterId_ == nullptr && this->namespace_ == nullptr && this->tableName_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline GrantRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // aclActions Field Functions 
    bool hasAclActions() const { return this->aclActions_ != nullptr;};
    void deleteAclActions() { this->aclActions_ = nullptr;};
    inline string getAclActions() const { DARABONBA_PTR_GET_DEFAULT(aclActions_, "") };
    inline GrantRequest& setAclActions(string aclActions) { DARABONBA_PTR_SET_VALUE(aclActions_, aclActions) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GrantRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GrantRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GrantRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The name of the account.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // The permission list. Separate multiple permissions with commas (,). Valid values:
    // - READ: read permission.
    // - WRITE: write permission.
    // - ADMIN: admin permission.
    // - TRASH: purge permission.
    // 
    // This parameter is required.
    shared_ptr<string> aclActions_ {};
    // The ID of target instance. You can call the DescribeInstances operation to obtain target instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The namespace. An asterisk (*) indicates global, which means all namespaces.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The table name. An asterisk (*) indicates global, which means all tables.
    // 
    // This parameter is required.
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
