// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeDBInstanceNetInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceNetInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(NetInfoItems, netInfoItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceNetInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(NetInfoItems, netInfoItems_);
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
    class NetInfoItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetInfoItems& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceNetInfo, instanceNetInfo_);
      };
      friend void from_json(const Darabonba::Json& j, NetInfoItems& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceNetInfo, instanceNetInfo_);
      };
      NetInfoItems() = default ;
      NetInfoItems(const NetInfoItems &) = default ;
      NetInfoItems(NetInfoItems &&) = default ;
      NetInfoItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetInfoItems() = default ;
      NetInfoItems& operator=(const NetInfoItems &) = default ;
      NetInfoItems& operator=(NetInfoItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceNetInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceNetInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
          DARABONBA_PTR_TO_JSON(DirectConnection, directConnection_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_TO_JSON(IPType, IPType_);
          DARABONBA_PTR_TO_JSON(IsSlaveProxy, isSlaveProxy_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Upgradeable, upgradeable_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VPCInstanceId, VPCInstanceId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceNetInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
          DARABONBA_PTR_FROM_JSON(DirectConnection, directConnection_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_FROM_JSON(IPType, IPType_);
          DARABONBA_PTR_FROM_JSON(IsSlaveProxy, isSlaveProxy_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Upgradeable, upgradeable_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VPCInstanceId, VPCInstanceId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        };
        InstanceNetInfo() = default ;
        InstanceNetInfo(const InstanceNetInfo &) = default ;
        InstanceNetInfo(InstanceNetInfo &&) = default ;
        InstanceNetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceNetInfo() = default ;
        InstanceNetInfo& operator=(const InstanceNetInfo &) = default ;
        InstanceNetInfo& operator=(InstanceNetInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->DBInstanceNetType_ == nullptr && this->directConnection_ == nullptr && this->expiredTime_ == nullptr && this->IPAddress_ == nullptr && this->IPType_ == nullptr
        && this->isSlaveProxy_ == nullptr && this->port_ == nullptr && this->upgradeable_ == nullptr && this->VPCId_ == nullptr && this->VPCInstanceId_ == nullptr
        && this->vSwitchId_ == nullptr; };
        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline InstanceNetInfo& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // DBInstanceNetType Field Functions 
        bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
        void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
        inline string getDBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, "") };
        inline InstanceNetInfo& setDBInstanceNetType(string DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


        // directConnection Field Functions 
        bool hasDirectConnection() const { return this->directConnection_ != nullptr;};
        void deleteDirectConnection() { this->directConnection_ = nullptr;};
        inline int32_t getDirectConnection() const { DARABONBA_PTR_GET_DEFAULT(directConnection_, 0) };
        inline InstanceNetInfo& setDirectConnection(int32_t directConnection) { DARABONBA_PTR_SET_VALUE(directConnection_, directConnection) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline InstanceNetInfo& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // IPAddress Field Functions 
        bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
        void deleteIPAddress() { this->IPAddress_ = nullptr;};
        inline string getIPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
        inline InstanceNetInfo& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


        // IPType Field Functions 
        bool hasIPType() const { return this->IPType_ != nullptr;};
        void deleteIPType() { this->IPType_ = nullptr;};
        inline string getIPType() const { DARABONBA_PTR_GET_DEFAULT(IPType_, "") };
        inline InstanceNetInfo& setIPType(string IPType) { DARABONBA_PTR_SET_VALUE(IPType_, IPType) };


        // isSlaveProxy Field Functions 
        bool hasIsSlaveProxy() const { return this->isSlaveProxy_ != nullptr;};
        void deleteIsSlaveProxy() { this->isSlaveProxy_ = nullptr;};
        inline int32_t getIsSlaveProxy() const { DARABONBA_PTR_GET_DEFAULT(isSlaveProxy_, 0) };
        inline InstanceNetInfo& setIsSlaveProxy(int32_t isSlaveProxy) { DARABONBA_PTR_SET_VALUE(isSlaveProxy_, isSlaveProxy) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline InstanceNetInfo& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // upgradeable Field Functions 
        bool hasUpgradeable() const { return this->upgradeable_ != nullptr;};
        void deleteUpgradeable() { this->upgradeable_ = nullptr;};
        inline string getUpgradeable() const { DARABONBA_PTR_GET_DEFAULT(upgradeable_, "") };
        inline InstanceNetInfo& setUpgradeable(string upgradeable) { DARABONBA_PTR_SET_VALUE(upgradeable_, upgradeable) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline InstanceNetInfo& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // VPCInstanceId Field Functions 
        bool hasVPCInstanceId() const { return this->VPCInstanceId_ != nullptr;};
        void deleteVPCInstanceId() { this->VPCInstanceId_ = nullptr;};
        inline string getVPCInstanceId() const { DARABONBA_PTR_GET_DEFAULT(VPCInstanceId_, "") };
        inline InstanceNetInfo& setVPCInstanceId(string VPCInstanceId) { DARABONBA_PTR_SET_VALUE(VPCInstanceId_, VPCInstanceId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline InstanceNetInfo& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      protected:
        // The endpoint of the instance.
        shared_ptr<string> connectionString_ {};
        // The network type of the instance. Valid values:
        // 
        // *   **0**: Internet
        // *   **1**: classic network
        // *   **2**: Virtual Private Cloud (VPC)
        shared_ptr<string> DBInstanceNetType_ {};
        // Indicates whether the address is a private endpoint. Valid values:
        // 
        // *   **0**: The address is not a private endpoint.
        // *   **1**: The address is a private endpoint.
        shared_ptr<int32_t> directConnection_ {};
        // The expiration time of the classic network endpoint. Unit: seconds.
        shared_ptr<string> expiredTime_ {};
        // The IP address.
        shared_ptr<string> IPAddress_ {};
        // The network type of the IP address. Valid values:
        // 
        // *   **Public**: Internet
        // *   **Inner**: classic network
        // *   **Private**: VPC
        shared_ptr<string> IPType_ {};
        // Indicates whether the address is the endpoint for the secondary zone. Valid values: 1 and 0. A value of 1 indicates that the address is the endpoint for the secondary zone.
        // 
        // >  This parameter is returned only after you enable the multi-zone read/write splitting architecture for the instance.
        shared_ptr<int32_t> isSlaveProxy_ {};
        // The service port of the instance.
        shared_ptr<string> port_ {};
        // The remaining validity period of the classic network endpoint. Unit: seconds.
        // 
        // >  **A value of 0 indicates that the endpoint never expires.
        shared_ptr<string> upgradeable_ {};
        // The ID of the VPC to which the instance belongs.
        shared_ptr<string> VPCId_ {};
        // The instance ID.
        shared_ptr<string> VPCInstanceId_ {};
        // The ID of the vSwitch.
        shared_ptr<string> vSwitchId_ {};
      };

      virtual bool empty() const override { return this->instanceNetInfo_ == nullptr; };
      // instanceNetInfo Field Functions 
      bool hasInstanceNetInfo() const { return this->instanceNetInfo_ != nullptr;};
      void deleteInstanceNetInfo() { this->instanceNetInfo_ = nullptr;};
      inline const vector<NetInfoItems::InstanceNetInfo> & getInstanceNetInfo() const { DARABONBA_PTR_GET_CONST(instanceNetInfo_, vector<NetInfoItems::InstanceNetInfo>) };
      inline vector<NetInfoItems::InstanceNetInfo> getInstanceNetInfo() { DARABONBA_PTR_GET(instanceNetInfo_, vector<NetInfoItems::InstanceNetInfo>) };
      inline NetInfoItems& setInstanceNetInfo(const vector<NetInfoItems::InstanceNetInfo> & instanceNetInfo) { DARABONBA_PTR_SET_VALUE(instanceNetInfo_, instanceNetInfo) };
      inline NetInfoItems& setInstanceNetInfo(vector<NetInfoItems::InstanceNetInfo> && instanceNetInfo) { DARABONBA_PTR_SET_RVALUE(instanceNetInfo_, instanceNetInfo) };


    protected:
      shared_ptr<vector<NetInfoItems::InstanceNetInfo>> instanceNetInfo_ {};
    };

    virtual bool empty() const override { return this->instanceNetworkType_ == nullptr
        && this->netInfoItems_ == nullptr && this->requestId_ == nullptr; };
    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeDBInstanceNetInfoResponseBody& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // netInfoItems Field Functions 
    bool hasNetInfoItems() const { return this->netInfoItems_ != nullptr;};
    void deleteNetInfoItems() { this->netInfoItems_ = nullptr;};
    inline const DescribeDBInstanceNetInfoResponseBody::NetInfoItems & getNetInfoItems() const { DARABONBA_PTR_GET_CONST(netInfoItems_, DescribeDBInstanceNetInfoResponseBody::NetInfoItems) };
    inline DescribeDBInstanceNetInfoResponseBody::NetInfoItems getNetInfoItems() { DARABONBA_PTR_GET(netInfoItems_, DescribeDBInstanceNetInfoResponseBody::NetInfoItems) };
    inline DescribeDBInstanceNetInfoResponseBody& setNetInfoItems(const DescribeDBInstanceNetInfoResponseBody::NetInfoItems & netInfoItems) { DARABONBA_PTR_SET_VALUE(netInfoItems_, netInfoItems) };
    inline DescribeDBInstanceNetInfoResponseBody& setNetInfoItems(DescribeDBInstanceNetInfoResponseBody::NetInfoItems && netInfoItems) { DARABONBA_PTR_SET_RVALUE(netInfoItems_, netInfoItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceNetInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The network type. Valid values:
    // 
    // *   **CLASSIC**: The instance runs in a classic network.
    // *   **VPC**: The instance runs in a virtual private cloud (VPC).
    shared_ptr<string> instanceNetworkType_ {};
    // The network information about the instance.
    shared_ptr<DescribeDBInstanceNetInfoResponseBody::NetInfoItems> netInfoItems_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
