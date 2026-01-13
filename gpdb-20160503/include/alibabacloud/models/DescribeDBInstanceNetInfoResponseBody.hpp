// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODY_HPP_
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
    class DBInstanceNetInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBInstanceNetInfos& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceNetInfo, DBInstanceNetInfo_);
      };
      friend void from_json(const Darabonba::Json& j, DBInstanceNetInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceNetInfo, DBInstanceNetInfo_);
      };
      DBInstanceNetInfos() = default ;
      DBInstanceNetInfos(const DBInstanceNetInfos &) = default ;
      DBInstanceNetInfos(DBInstanceNetInfos &&) = default ;
      DBInstanceNetInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBInstanceNetInfos() = default ;
      DBInstanceNetInfos& operator=(const DBInstanceNetInfos &) = default ;
      DBInstanceNetInfos& operator=(DBInstanceNetInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBInstanceNetInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstanceNetInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AddressType, addressType_);
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_TO_JSON(IPType, IPType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstanceNetInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_FROM_JSON(IPType, IPType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
        };
        DBInstanceNetInfo() = default ;
        DBInstanceNetInfo(const DBInstanceNetInfo &) = default ;
        DBInstanceNetInfo(DBInstanceNetInfo &&) = default ;
        DBInstanceNetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstanceNetInfo() = default ;
        DBInstanceNetInfo& operator=(const DBInstanceNetInfo &) = default ;
        DBInstanceNetInfo& operator=(DBInstanceNetInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addressType_ == nullptr
        && this->connectionString_ == nullptr && this->IPAddress_ == nullptr && this->IPType_ == nullptr && this->port_ == nullptr && this->VPCId_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcInstanceId_ == nullptr; };
        // addressType Field Functions 
        bool hasAddressType() const { return this->addressType_ != nullptr;};
        void deleteAddressType() { this->addressType_ = nullptr;};
        inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
        inline DBInstanceNetInfo& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline DBInstanceNetInfo& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // IPAddress Field Functions 
        bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
        void deleteIPAddress() { this->IPAddress_ = nullptr;};
        inline string getIPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
        inline DBInstanceNetInfo& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


        // IPType Field Functions 
        bool hasIPType() const { return this->IPType_ != nullptr;};
        void deleteIPType() { this->IPType_ = nullptr;};
        inline string getIPType() const { DARABONBA_PTR_GET_DEFAULT(IPType_, "") };
        inline DBInstanceNetInfo& setIPType(string IPType) { DARABONBA_PTR_SET_VALUE(IPType_, IPType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline DBInstanceNetInfo& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline DBInstanceNetInfo& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline DBInstanceNetInfo& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcInstanceId Field Functions 
        bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
        void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
        inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
        inline DBInstanceNetInfo& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


      protected:
        // The type of the endpoint.
        shared_ptr<string> addressType_ {};
        // The endpoint that is used to connect to the instance.
        shared_ptr<string> connectionString_ {};
        // The IP address.
        shared_ptr<string> IPAddress_ {};
        // The type of the IP address.
        // 
        // *   Valid values for instances in the classic network: Inner and Public.
        // *   Valid values for instances in a virtual private cloud (VPC): Private and Public.
        shared_ptr<string> IPType_ {};
        // The port number.
        shared_ptr<string> port_ {};
        // The VPC ID of the instance.
        shared_ptr<string> VPCId_ {};
        // The vSwitch ID. Multiple IDs are separated by commas (,).
        shared_ptr<string> vSwitchId_ {};
        // The ID of the instance that is deployed in a VPC.
        shared_ptr<string> vpcInstanceId_ {};
      };

      virtual bool empty() const override { return this->DBInstanceNetInfo_ == nullptr; };
      // DBInstanceNetInfo Field Functions 
      bool hasDBInstanceNetInfo() const { return this->DBInstanceNetInfo_ != nullptr;};
      void deleteDBInstanceNetInfo() { this->DBInstanceNetInfo_ = nullptr;};
      inline const vector<DBInstanceNetInfos::DBInstanceNetInfo> & getDBInstanceNetInfo() const { DARABONBA_PTR_GET_CONST(DBInstanceNetInfo_, vector<DBInstanceNetInfos::DBInstanceNetInfo>) };
      inline vector<DBInstanceNetInfos::DBInstanceNetInfo> getDBInstanceNetInfo() { DARABONBA_PTR_GET(DBInstanceNetInfo_, vector<DBInstanceNetInfos::DBInstanceNetInfo>) };
      inline DBInstanceNetInfos& setDBInstanceNetInfo(const vector<DBInstanceNetInfos::DBInstanceNetInfo> & dBInstanceNetInfo) { DARABONBA_PTR_SET_VALUE(DBInstanceNetInfo_, dBInstanceNetInfo) };
      inline DBInstanceNetInfos& setDBInstanceNetInfo(vector<DBInstanceNetInfos::DBInstanceNetInfo> && dBInstanceNetInfo) { DARABONBA_PTR_SET_RVALUE(DBInstanceNetInfo_, dBInstanceNetInfo) };


    protected:
      shared_ptr<vector<DBInstanceNetInfos::DBInstanceNetInfo>> DBInstanceNetInfo_ {};
    };

    virtual bool empty() const override { return this->DBInstanceNetInfos_ == nullptr
        && this->instanceNetworkType_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceNetInfos Field Functions 
    bool hasDBInstanceNetInfos() const { return this->DBInstanceNetInfos_ != nullptr;};
    void deleteDBInstanceNetInfos() { this->DBInstanceNetInfos_ = nullptr;};
    inline const DescribeDBInstanceNetInfoResponseBody::DBInstanceNetInfos & getDBInstanceNetInfos() const { DARABONBA_PTR_GET_CONST(DBInstanceNetInfos_, DescribeDBInstanceNetInfoResponseBody::DBInstanceNetInfos) };
    inline DescribeDBInstanceNetInfoResponseBody::DBInstanceNetInfos getDBInstanceNetInfos() { DARABONBA_PTR_GET(DBInstanceNetInfos_, DescribeDBInstanceNetInfoResponseBody::DBInstanceNetInfos) };
    inline DescribeDBInstanceNetInfoResponseBody& setDBInstanceNetInfos(const DescribeDBInstanceNetInfoResponseBody::DBInstanceNetInfos & dBInstanceNetInfos) { DARABONBA_PTR_SET_VALUE(DBInstanceNetInfos_, dBInstanceNetInfos) };
    inline DescribeDBInstanceNetInfoResponseBody& setDBInstanceNetInfos(DescribeDBInstanceNetInfoResponseBody::DBInstanceNetInfos && dBInstanceNetInfos) { DARABONBA_PTR_SET_RVALUE(DBInstanceNetInfos_, dBInstanceNetInfos) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeDBInstanceNetInfoResponseBody& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceNetInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The connection information of the instance.
    shared_ptr<DescribeDBInstanceNetInfoResponseBody::DBInstanceNetInfos> DBInstanceNetInfos_ {};
    // The network type of the instance. Valid values:
    // 
    // *   Classic: classic network.
    // *   VPC: VPC.
    shared_ptr<string> instanceNetworkType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
