// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCEIPARRAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCEIPARRAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateDBInstanceIPArrayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceIPArrayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(IPArrayAttribute, IPArrayAttribute_);
      DARABONBA_PTR_TO_JSON(IPArrayName, IPArrayName_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceIPArrayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(IPArrayAttribute, IPArrayAttribute_);
      DARABONBA_PTR_FROM_JSON(IPArrayName, IPArrayName_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
    };
    CreateDBInstanceIPArrayRequest() = default ;
    CreateDBInstanceIPArrayRequest(const CreateDBInstanceIPArrayRequest &) = default ;
    CreateDBInstanceIPArrayRequest(CreateDBInstanceIPArrayRequest &&) = default ;
    CreateDBInstanceIPArrayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceIPArrayRequest() = default ;
    CreateDBInstanceIPArrayRequest& operator=(const CreateDBInstanceIPArrayRequest &) = default ;
    CreateDBInstanceIPArrayRequest& operator=(CreateDBInstanceIPArrayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->IPArrayAttribute_ == nullptr && this->IPArrayName_ == nullptr && this->securityIPList_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateDBInstanceIPArrayRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // IPArrayAttribute Field Functions 
    bool hasIPArrayAttribute() const { return this->IPArrayAttribute_ != nullptr;};
    void deleteIPArrayAttribute() { this->IPArrayAttribute_ = nullptr;};
    inline string getIPArrayAttribute() const { DARABONBA_PTR_GET_DEFAULT(IPArrayAttribute_, "") };
    inline CreateDBInstanceIPArrayRequest& setIPArrayAttribute(string IPArrayAttribute) { DARABONBA_PTR_SET_VALUE(IPArrayAttribute_, IPArrayAttribute) };


    // IPArrayName Field Functions 
    bool hasIPArrayName() const { return this->IPArrayName_ != nullptr;};
    void deleteIPArrayName() { this->IPArrayName_ = nullptr;};
    inline string getIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(IPArrayName_, "") };
    inline CreateDBInstanceIPArrayRequest& setIPArrayName(string IPArrayName) { DARABONBA_PTR_SET_VALUE(IPArrayName_, IPArrayName) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline const vector<string> & getSecurityIPList() const { DARABONBA_PTR_GET_CONST(securityIPList_, vector<string>) };
    inline vector<string> getSecurityIPList() { DARABONBA_PTR_GET(securityIPList_, vector<string>) };
    inline CreateDBInstanceIPArrayRequest& setSecurityIPList(const vector<string> & securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };
    inline CreateDBInstanceIPArrayRequest& setSecurityIPList(vector<string> && securityIPList) { DARABONBA_PTR_SET_RVALUE(securityIPList_, securityIPList) };


  protected:
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The attribute of the IP whitelist group.
    shared_ptr<string> IPArrayAttribute_ {};
    // The name of the IP whitelist group.
    // 
    // This parameter is required.
    shared_ptr<string> IPArrayName_ {};
    // The IP addresses in the IP whitelist group. A maximum of 1,000 IP addresses or CIDR blocks are allowed.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> securityIPList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
