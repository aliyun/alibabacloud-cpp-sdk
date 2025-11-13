// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODYDBINSTANCENETINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODYDBINSTANCENETINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosPortList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(PortList, portList_);
      DARABONBA_PTR_TO_JSON(UserVisible, userVisible_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(PortList, portList_);
      DARABONBA_PTR_FROM_JSON(UserVisible, userVisible_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos() = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos(const DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos &) = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos(DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos &&) = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos() = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& operator=(const DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos &) = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& operator=(DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->connectionString_ == nullptr && return this->ip_ == nullptr && return this->netType_ == nullptr && return this->portList_ == nullptr && return this->userVisible_ == nullptr
        && return this->vpcId_ == nullptr && return this->vpcInstanceId_ == nullptr && return this->vswitchId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // portList Field Functions 
    bool hasPortList() const { return this->portList_ != nullptr;};
    void deletePortList() { this->portList_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosPortList> & portList() const { DARABONBA_PTR_GET_CONST(portList_, vector<Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosPortList>) };
    inline vector<Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosPortList> portList() { DARABONBA_PTR_GET(portList_, vector<Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosPortList>) };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& setPortList(const vector<Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosPortList> & portList) { DARABONBA_PTR_SET_VALUE(portList_, portList) };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& setPortList(vector<Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosPortList> && portList) { DARABONBA_PTR_SET_RVALUE(portList_, portList) };


    // userVisible Field Functions 
    bool hasUserVisible() const { return this->userVisible_ != nullptr;};
    void deleteUserVisible() { this->userVisible_ = nullptr;};
    inline bool userVisible() const { DARABONBA_PTR_GET_DEFAULT(userVisible_, false) };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& setUserVisible(bool userVisible) { DARABONBA_PTR_SET_VALUE(userVisible_, userVisible) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The connection string of the instance.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The IP address of the instance.
    std::shared_ptr<string> ip_ = nullptr;
    // The network type of the instance. Valid values:
    // 
    // *   **VPC**: indicates a virtual private cloud (VPC)-connected instance.
    // *   **PUBLIC**: indicates an Internet-connected instance.
    std::shared_ptr<string> netType_ = nullptr;
    // The ports.
    std::shared_ptr<vector<Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosPortList>> portList_ = nullptr;
    // Indicates whether the network information is visible to users. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> userVisible_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the VPC-connected instance.
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
