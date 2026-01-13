// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEIPHOSTNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEIPHOSTNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceIpHostnameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceIpHostnameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(IpHostnameInfos, ipHostnameInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceIpHostnameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(IpHostnameInfos, ipHostnameInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceIpHostnameResponseBody() = default ;
    DescribeDBInstanceIpHostnameResponseBody(const DescribeDBInstanceIpHostnameResponseBody &) = default ;
    DescribeDBInstanceIpHostnameResponseBody(DescribeDBInstanceIpHostnameResponseBody &&) = default ;
    DescribeDBInstanceIpHostnameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceIpHostnameResponseBody() = default ;
    DescribeDBInstanceIpHostnameResponseBody& operator=(const DescribeDBInstanceIpHostnameResponseBody &) = default ;
    DescribeDBInstanceIpHostnameResponseBody& operator=(DescribeDBInstanceIpHostnameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->ipHostnameInfos_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceIpHostnameResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ipHostnameInfos Field Functions 
    bool hasIpHostnameInfos() const { return this->ipHostnameInfos_ != nullptr;};
    void deleteIpHostnameInfos() { this->ipHostnameInfos_ = nullptr;};
    inline string getIpHostnameInfos() const { DARABONBA_PTR_GET_DEFAULT(ipHostnameInfos_, "") };
    inline DescribeDBInstanceIpHostnameResponseBody& setIpHostnameInfos(string ipHostnameInfos) { DARABONBA_PTR_SET_VALUE(ipHostnameInfos_, ipHostnameInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceIpHostnameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The internal IP addresses and hostnames of the ECS instance on which a primary ApsaraDB RDS for SQL Server instance and its secondary RDS instance reside. Format: `IP address 1, Hostname 1; IP address 2, Hostname 2`.
    shared_ptr<string> ipHostnameInfos_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
