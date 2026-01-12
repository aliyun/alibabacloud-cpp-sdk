// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeInstanceEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceEndpoints, DBInstanceEndpoints_);
      DARABONBA_PTR_TO_JSON(InstanceEndpoints, instanceEndpoints_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceEndpoints, DBInstanceEndpoints_);
      DARABONBA_PTR_FROM_JSON(InstanceEndpoints, instanceEndpoints_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceEndpointsResponseBody() = default ;
    DescribeInstanceEndpointsResponseBody(const DescribeInstanceEndpointsResponseBody &) = default ;
    DescribeInstanceEndpointsResponseBody(DescribeInstanceEndpointsResponseBody &&) = default ;
    DescribeInstanceEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceEndpointsResponseBody() = default ;
    DescribeInstanceEndpointsResponseBody& operator=(const DescribeInstanceEndpointsResponseBody &) = default ;
    DescribeInstanceEndpointsResponseBody& operator=(DescribeInstanceEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceEndpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceEndpoints& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_TO_JSON(IP, IP_);
        DARABONBA_PTR_TO_JSON(IpType, ipType_);
        DARABONBA_PTR_TO_JSON(Port, port_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceEndpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_FROM_JSON(IP, IP_);
        DARABONBA_PTR_FROM_JSON(IpType, ipType_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
      };
      InstanceEndpoints() = default ;
      InstanceEndpoints(const InstanceEndpoints &) = default ;
      InstanceEndpoints(InstanceEndpoints &&) = default ;
      InstanceEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceEndpoints() = default ;
      InstanceEndpoints& operator=(const InstanceEndpoints &) = default ;
      InstanceEndpoints& operator=(InstanceEndpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->IP_ == nullptr && this->ipType_ == nullptr && this->port_ == nullptr; };
      // connectionString Field Functions 
      bool hasConnectionString() const { return this->connectionString_ != nullptr;};
      void deleteConnectionString() { this->connectionString_ = nullptr;};
      inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
      inline InstanceEndpoints& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


      // IP Field Functions 
      bool hasIP() const { return this->IP_ != nullptr;};
      void deleteIP() { this->IP_ = nullptr;};
      inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
      inline InstanceEndpoints& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


      // ipType Field Functions 
      bool hasIpType() const { return this->ipType_ != nullptr;};
      void deleteIpType() { this->ipType_ = nullptr;};
      inline string getIpType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
      inline InstanceEndpoints& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline InstanceEndpoints& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    protected:
      // The endpoint of the RDS Supabase instance.
      shared_ptr<string> connectionString_ {};
      // The IP address used to access the RDS Supabase instance.
      shared_ptr<string> IP_ {};
      // The network type of the RDS Supabase instance. Valid values:
      // 
      // *   **public**: Internet
      // *   **vpc**: VPC
      shared_ptr<string> ipType_ {};
      // The port used to access the RDS Supabase instance.
      shared_ptr<string> port_ {};
    };

    class DBInstanceEndpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBInstanceEndpoints& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_TO_JSON(IpType, ipType_);
        DARABONBA_PTR_TO_JSON(Port, port_);
      };
      friend void from_json(const Darabonba::Json& j, DBInstanceEndpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_FROM_JSON(IpType, ipType_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
      };
      DBInstanceEndpoints() = default ;
      DBInstanceEndpoints(const DBInstanceEndpoints &) = default ;
      DBInstanceEndpoints(DBInstanceEndpoints &&) = default ;
      DBInstanceEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBInstanceEndpoints() = default ;
      DBInstanceEndpoints& operator=(const DBInstanceEndpoints &) = default ;
      DBInstanceEndpoints& operator=(DBInstanceEndpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->ipType_ == nullptr && this->port_ == nullptr; };
      // connectionString Field Functions 
      bool hasConnectionString() const { return this->connectionString_ != nullptr;};
      void deleteConnectionString() { this->connectionString_ = nullptr;};
      inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
      inline DBInstanceEndpoints& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


      // ipType Field Functions 
      bool hasIpType() const { return this->ipType_ != nullptr;};
      void deleteIpType() { this->ipType_ = nullptr;};
      inline string getIpType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
      inline DBInstanceEndpoints& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline DBInstanceEndpoints& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    protected:
      // The endpoint of the RDS instance.
      shared_ptr<string> connectionString_ {};
      // The network type of the RDS instance. Valid values:
      // 
      // *   **public**: Internet
      // *   **vpc**: VPC
      shared_ptr<string> ipType_ {};
      // The port used to access the RDS instance.
      shared_ptr<string> port_ {};
    };

    virtual bool empty() const override { return this->DBInstanceEndpoints_ == nullptr
        && this->instanceEndpoints_ == nullptr && this->instanceName_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceEndpoints Field Functions 
    bool hasDBInstanceEndpoints() const { return this->DBInstanceEndpoints_ != nullptr;};
    void deleteDBInstanceEndpoints() { this->DBInstanceEndpoints_ = nullptr;};
    inline const vector<DescribeInstanceEndpointsResponseBody::DBInstanceEndpoints> & getDBInstanceEndpoints() const { DARABONBA_PTR_GET_CONST(DBInstanceEndpoints_, vector<DescribeInstanceEndpointsResponseBody::DBInstanceEndpoints>) };
    inline vector<DescribeInstanceEndpointsResponseBody::DBInstanceEndpoints> getDBInstanceEndpoints() { DARABONBA_PTR_GET(DBInstanceEndpoints_, vector<DescribeInstanceEndpointsResponseBody::DBInstanceEndpoints>) };
    inline DescribeInstanceEndpointsResponseBody& setDBInstanceEndpoints(const vector<DescribeInstanceEndpointsResponseBody::DBInstanceEndpoints> & dBInstanceEndpoints) { DARABONBA_PTR_SET_VALUE(DBInstanceEndpoints_, dBInstanceEndpoints) };
    inline DescribeInstanceEndpointsResponseBody& setDBInstanceEndpoints(vector<DescribeInstanceEndpointsResponseBody::DBInstanceEndpoints> && dBInstanceEndpoints) { DARABONBA_PTR_SET_RVALUE(DBInstanceEndpoints_, dBInstanceEndpoints) };


    // instanceEndpoints Field Functions 
    bool hasInstanceEndpoints() const { return this->instanceEndpoints_ != nullptr;};
    void deleteInstanceEndpoints() { this->instanceEndpoints_ = nullptr;};
    inline const vector<DescribeInstanceEndpointsResponseBody::InstanceEndpoints> & getInstanceEndpoints() const { DARABONBA_PTR_GET_CONST(instanceEndpoints_, vector<DescribeInstanceEndpointsResponseBody::InstanceEndpoints>) };
    inline vector<DescribeInstanceEndpointsResponseBody::InstanceEndpoints> getInstanceEndpoints() { DARABONBA_PTR_GET(instanceEndpoints_, vector<DescribeInstanceEndpointsResponseBody::InstanceEndpoints>) };
    inline DescribeInstanceEndpointsResponseBody& setInstanceEndpoints(const vector<DescribeInstanceEndpointsResponseBody::InstanceEndpoints> & instanceEndpoints) { DARABONBA_PTR_SET_VALUE(instanceEndpoints_, instanceEndpoints) };
    inline DescribeInstanceEndpointsResponseBody& setInstanceEndpoints(vector<DescribeInstanceEndpointsResponseBody::InstanceEndpoints> && instanceEndpoints) { DARABONBA_PTR_SET_RVALUE(instanceEndpoints_, instanceEndpoints) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstanceEndpointsResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the endpoints of the RDS instance.
    shared_ptr<vector<DescribeInstanceEndpointsResponseBody::DBInstanceEndpoints>> DBInstanceEndpoints_ {};
    // The information about the endpoints of the RDS Supabase instance.
    shared_ptr<vector<DescribeInstanceEndpointsResponseBody::InstanceEndpoints>> instanceEndpoints_ {};
    // The ID of the RDS Supabase instance.
    shared_ptr<string> instanceName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
