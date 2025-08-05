// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceNetInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceNetInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceNetInfos, DBInstanceNetInfos_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceNetInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceNetInfos, DBInstanceNetInfos_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceNetInfoResponseBody() = default ;
    DescribeDBInstanceNetInfoResponseBody(const DescribeDBInstanceNetInfoResponseBody &) = default ;
    DescribeDBInstanceNetInfoResponseBody(DescribeDBInstanceNetInfoResponseBody &&) = default ;
    DescribeDBInstanceNetInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceNetInfoResponseBody() = default ;
    DescribeDBInstanceNetInfoResponseBody& operator=(const DescribeDBInstanceNetInfoResponseBody &) = default ;
    DescribeDBInstanceNetInfoResponseBody& operator=(DescribeDBInstanceNetInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceNetInfos_ != nullptr
        && this->instanceNetworkType_ != nullptr && this->requestId_ != nullptr; };
    // DBInstanceNetInfos Field Functions 
    bool hasDBInstanceNetInfos() const { return this->DBInstanceNetInfos_ != nullptr;};
    void deleteDBInstanceNetInfos() { this->DBInstanceNetInfos_ = nullptr;};
    inline const DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos & DBInstanceNetInfos() const { DARABONBA_PTR_GET_CONST(DBInstanceNetInfos_, DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos) };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos DBInstanceNetInfos() { DARABONBA_PTR_GET(DBInstanceNetInfos_, DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos) };
    inline DescribeDBInstanceNetInfoResponseBody& setDBInstanceNetInfos(const DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos & DBInstanceNetInfos) { DARABONBA_PTR_SET_VALUE(DBInstanceNetInfos_, DBInstanceNetInfos) };
    inline DescribeDBInstanceNetInfoResponseBody& setDBInstanceNetInfos(DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos && DBInstanceNetInfos) { DARABONBA_PTR_SET_RVALUE(DBInstanceNetInfos_, DBInstanceNetInfos) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeDBInstanceNetInfoResponseBody& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceNetInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The connection information of the instance.
    std::shared_ptr<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos> DBInstanceNetInfos_ = nullptr;
    // The network type of the instance. Valid values:
    // 
    // *   Classic: classic network.
    // *   VPC: VPC.
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
