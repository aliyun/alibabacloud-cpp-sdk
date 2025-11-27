// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYRESPONSEBODYDBPROXYCONNECTSTRINGITEMSDBPROXYCONNECTSTRINGITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYRESPONSEBODYDBPROXYCONNECTSTRINGITEMSDBPROXYCONNECTSTRINGITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBProxyConnectString, DBProxyConnectString_);
      DARABONBA_PTR_TO_JSON(DBProxyConnectStringNetType, DBProxyConnectStringNetType_);
      DARABONBA_PTR_TO_JSON(DBProxyConnectStringNetWorkType, DBProxyConnectStringNetWorkType_);
      DARABONBA_PTR_TO_JSON(DBProxyConnectStringPort, DBProxyConnectStringPort_);
      DARABONBA_PTR_TO_JSON(DBProxyEndpointId, DBProxyEndpointId_);
      DARABONBA_PTR_TO_JSON(DBProxyEndpointName, DBProxyEndpointName_);
      DARABONBA_PTR_TO_JSON(DBProxyVpcId, DBProxyVpcId_);
      DARABONBA_PTR_TO_JSON(DBProxyVpcInstanceId, DBProxyVpcInstanceId_);
      DARABONBA_PTR_TO_JSON(DBProxyVswitchId, DBProxyVswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBProxyConnectString, DBProxyConnectString_);
      DARABONBA_PTR_FROM_JSON(DBProxyConnectStringNetType, DBProxyConnectStringNetType_);
      DARABONBA_PTR_FROM_JSON(DBProxyConnectStringNetWorkType, DBProxyConnectStringNetWorkType_);
      DARABONBA_PTR_FROM_JSON(DBProxyConnectStringPort, DBProxyConnectStringPort_);
      DARABONBA_PTR_FROM_JSON(DBProxyEndpointId, DBProxyEndpointId_);
      DARABONBA_PTR_FROM_JSON(DBProxyEndpointName, DBProxyEndpointName_);
      DARABONBA_PTR_FROM_JSON(DBProxyVpcId, DBProxyVpcId_);
      DARABONBA_PTR_FROM_JSON(DBProxyVpcInstanceId, DBProxyVpcInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBProxyVswitchId, DBProxyVswitchId_);
    };
    DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems() = default ;
    DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems(const DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems &) = default ;
    DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems(DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems &&) = default ;
    DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems() = default ;
    DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems& operator=(const DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems &) = default ;
    DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems& operator=(DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBProxyConnectString_ == nullptr
        && return this->DBProxyConnectStringNetType_ == nullptr && return this->DBProxyConnectStringNetWorkType_ == nullptr && return this->DBProxyConnectStringPort_ == nullptr && return this->DBProxyEndpointId_ == nullptr && return this->DBProxyEndpointName_ == nullptr
        && return this->DBProxyVpcId_ == nullptr && return this->DBProxyVpcInstanceId_ == nullptr && return this->DBProxyVswitchId_ == nullptr; };
    // DBProxyConnectString Field Functions 
    bool hasDBProxyConnectString() const { return this->DBProxyConnectString_ != nullptr;};
    void deleteDBProxyConnectString() { this->DBProxyConnectString_ = nullptr;};
    inline string DBProxyConnectString() const { DARABONBA_PTR_GET_DEFAULT(DBProxyConnectString_, "") };
    inline DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems& setDBProxyConnectString(string DBProxyConnectString) { DARABONBA_PTR_SET_VALUE(DBProxyConnectString_, DBProxyConnectString) };


    // DBProxyConnectStringNetType Field Functions 
    bool hasDBProxyConnectStringNetType() const { return this->DBProxyConnectStringNetType_ != nullptr;};
    void deleteDBProxyConnectStringNetType() { this->DBProxyConnectStringNetType_ = nullptr;};
    inline string DBProxyConnectStringNetType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyConnectStringNetType_, "") };
    inline DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems& setDBProxyConnectStringNetType(string DBProxyConnectStringNetType) { DARABONBA_PTR_SET_VALUE(DBProxyConnectStringNetType_, DBProxyConnectStringNetType) };


    // DBProxyConnectStringNetWorkType Field Functions 
    bool hasDBProxyConnectStringNetWorkType() const { return this->DBProxyConnectStringNetWorkType_ != nullptr;};
    void deleteDBProxyConnectStringNetWorkType() { this->DBProxyConnectStringNetWorkType_ = nullptr;};
    inline string DBProxyConnectStringNetWorkType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyConnectStringNetWorkType_, "") };
    inline DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems& setDBProxyConnectStringNetWorkType(string DBProxyConnectStringNetWorkType) { DARABONBA_PTR_SET_VALUE(DBProxyConnectStringNetWorkType_, DBProxyConnectStringNetWorkType) };


    // DBProxyConnectStringPort Field Functions 
    bool hasDBProxyConnectStringPort() const { return this->DBProxyConnectStringPort_ != nullptr;};
    void deleteDBProxyConnectStringPort() { this->DBProxyConnectStringPort_ = nullptr;};
    inline string DBProxyConnectStringPort() const { DARABONBA_PTR_GET_DEFAULT(DBProxyConnectStringPort_, "") };
    inline DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems& setDBProxyConnectStringPort(string DBProxyConnectStringPort) { DARABONBA_PTR_SET_VALUE(DBProxyConnectStringPort_, DBProxyConnectStringPort) };


    // DBProxyEndpointId Field Functions 
    bool hasDBProxyEndpointId() const { return this->DBProxyEndpointId_ != nullptr;};
    void deleteDBProxyEndpointId() { this->DBProxyEndpointId_ = nullptr;};
    inline string DBProxyEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEndpointId_, "") };
    inline DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems& setDBProxyEndpointId(string DBProxyEndpointId) { DARABONBA_PTR_SET_VALUE(DBProxyEndpointId_, DBProxyEndpointId) };


    // DBProxyEndpointName Field Functions 
    bool hasDBProxyEndpointName() const { return this->DBProxyEndpointName_ != nullptr;};
    void deleteDBProxyEndpointName() { this->DBProxyEndpointName_ = nullptr;};
    inline string DBProxyEndpointName() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEndpointName_, "") };
    inline DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems& setDBProxyEndpointName(string DBProxyEndpointName) { DARABONBA_PTR_SET_VALUE(DBProxyEndpointName_, DBProxyEndpointName) };


    // DBProxyVpcId Field Functions 
    bool hasDBProxyVpcId() const { return this->DBProxyVpcId_ != nullptr;};
    void deleteDBProxyVpcId() { this->DBProxyVpcId_ = nullptr;};
    inline string DBProxyVpcId() const { DARABONBA_PTR_GET_DEFAULT(DBProxyVpcId_, "") };
    inline DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems& setDBProxyVpcId(string DBProxyVpcId) { DARABONBA_PTR_SET_VALUE(DBProxyVpcId_, DBProxyVpcId) };


    // DBProxyVpcInstanceId Field Functions 
    bool hasDBProxyVpcInstanceId() const { return this->DBProxyVpcInstanceId_ != nullptr;};
    void deleteDBProxyVpcInstanceId() { this->DBProxyVpcInstanceId_ = nullptr;};
    inline string DBProxyVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBProxyVpcInstanceId_, "") };
    inline DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems& setDBProxyVpcInstanceId(string DBProxyVpcInstanceId) { DARABONBA_PTR_SET_VALUE(DBProxyVpcInstanceId_, DBProxyVpcInstanceId) };


    // DBProxyVswitchId Field Functions 
    bool hasDBProxyVswitchId() const { return this->DBProxyVswitchId_ != nullptr;};
    void deleteDBProxyVswitchId() { this->DBProxyVswitchId_ = nullptr;};
    inline string DBProxyVswitchId() const { DARABONBA_PTR_GET_DEFAULT(DBProxyVswitchId_, "") };
    inline DescribeDBProxyResponseBodyDBProxyConnectStringItemsDBProxyConnectStringItems& setDBProxyVswitchId(string DBProxyVswitchId) { DARABONBA_PTR_SET_VALUE(DBProxyVswitchId_, DBProxyVswitchId) };


  protected:
    // The database proxy endpoint.
    std::shared_ptr<string> DBProxyConnectString_ = nullptr;
    // The network type of the database proxy endpoint. A database proxy endpoint is formerly referred to as a proxy terminal. Valid values:
    // 
    // *   OuterString: Internet
    // *   InnerString: internal network
    std::shared_ptr<string> DBProxyConnectStringNetType_ = nullptr;
    // The network type of the database proxy. Valid values:
    // 
    // *   0: Internet
    // *   1: classic network
    // *   2: virtual private cloud (VPC)
    std::shared_ptr<string> DBProxyConnectStringNetWorkType_ = nullptr;
    // The port that is associated with the database proxy endpoint.
    std::shared_ptr<string> DBProxyConnectStringPort_ = nullptr;
    // The ID of the backend database proxy endpoint.
    std::shared_ptr<string> DBProxyEndpointId_ = nullptr;
    // The name of the database proxy endpoint. The name can be replaced by the ID of the database proxy endpoint.
    std::shared_ptr<string> DBProxyEndpointName_ = nullptr;
    // The VPC of the database proxy.
    std::shared_ptr<string> DBProxyVpcId_ = nullptr;
    // The ID of the database proxy instance.
    std::shared_ptr<string> DBProxyVpcInstanceId_ = nullptr;
    // The vSwitch of the database proxy.
    std::shared_ptr<string> DBProxyVswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
