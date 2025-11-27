// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFOFORCHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFOFORCHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceNetInfoForChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceNetInfoForChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceNetInfos, DBInstanceNetInfos_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceNetInfoForChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceNetInfos, DBInstanceNetInfos_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceNetInfoForChannelResponseBody() = default ;
    DescribeDBInstanceNetInfoForChannelResponseBody(const DescribeDBInstanceNetInfoForChannelResponseBody &) = default ;
    DescribeDBInstanceNetInfoForChannelResponseBody(DescribeDBInstanceNetInfoForChannelResponseBody &&) = default ;
    DescribeDBInstanceNetInfoForChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceNetInfoForChannelResponseBody() = default ;
    DescribeDBInstanceNetInfoForChannelResponseBody& operator=(const DescribeDBInstanceNetInfoForChannelResponseBody &) = default ;
    DescribeDBInstanceNetInfoForChannelResponseBody& operator=(DescribeDBInstanceNetInfoForChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceNetInfos_ == nullptr
        && return this->instanceNetworkType_ == nullptr && return this->requestId_ == nullptr; };
    // DBInstanceNetInfos Field Functions 
    bool hasDBInstanceNetInfos() const { return this->DBInstanceNetInfos_ != nullptr;};
    void deleteDBInstanceNetInfos() { this->DBInstanceNetInfos_ = nullptr;};
    inline const DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos & DBInstanceNetInfos() const { DARABONBA_PTR_GET_CONST(DBInstanceNetInfos_, DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos) };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos DBInstanceNetInfos() { DARABONBA_PTR_GET(DBInstanceNetInfos_, DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos) };
    inline DescribeDBInstanceNetInfoForChannelResponseBody& setDBInstanceNetInfos(const DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos & DBInstanceNetInfos) { DARABONBA_PTR_SET_VALUE(DBInstanceNetInfos_, DBInstanceNetInfos) };
    inline DescribeDBInstanceNetInfoForChannelResponseBody& setDBInstanceNetInfos(DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos && DBInstanceNetInfos) { DARABONBA_PTR_SET_RVALUE(DBInstanceNetInfos_, DBInstanceNetInfos) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBody& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the instance connection.
    std::shared_ptr<DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfos> DBInstanceNetInfos_ = nullptr;
    // The network type of the instance. Valid values:
    // 
    // *   **VPC**: a virtual private cloud (VPC)
    // *   **Classic**: classic network
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
