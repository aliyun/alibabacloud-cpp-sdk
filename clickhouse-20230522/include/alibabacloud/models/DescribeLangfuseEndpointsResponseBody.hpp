// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELANGFUSEENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELANGFUSEENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeLangfuseEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLangfuseEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLangfuseEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLangfuseEndpointsResponseBody() = default ;
    DescribeLangfuseEndpointsResponseBody(const DescribeLangfuseEndpointsResponseBody &) = default ;
    DescribeLangfuseEndpointsResponseBody(DescribeLangfuseEndpointsResponseBody &&) = default ;
    DescribeLangfuseEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLangfuseEndpointsResponseBody() = default ;
    DescribeLangfuseEndpointsResponseBody& operator=(const DescribeLangfuseEndpointsResponseBody &) = default ;
    DescribeLangfuseEndpointsResponseBody& operator=(DescribeLangfuseEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Endpoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
          DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(Ports, ports_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
          DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(Ports, ports_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        Endpoints() = default ;
        Endpoints(const Endpoints &) = default ;
        Endpoints(Endpoints &&) = default ;
        Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Endpoints() = default ;
        Endpoints& operator=(const Endpoints &) = default ;
        Endpoints& operator=(Endpoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Ports : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ports& obj) { 
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          };
          friend void from_json(const Darabonba::Json& j, Ports& obj) { 
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          };
          Ports() = default ;
          Ports(const Ports &) = default ;
          Ports(Ports &&) = default ;
          Ports(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ports() = default ;
          Ports& operator=(const Ports &) = default ;
          Ports& operator=(Ports &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr; };
          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline Ports& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // protocol Field Functions 
          bool hasProtocol() const { return this->protocol_ != nullptr;};
          void deleteProtocol() { this->protocol_ = nullptr;};
          inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
          inline Ports& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        protected:
          // The access port. Valid values:
          // 
          // - http: 3000
          shared_ptr<int32_t> port_ {};
          // The protocol type. Valid values:
          // 
          // - http: HTTP port.
          shared_ptr<string> protocol_ {};
        };

        virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->endpointName_ == nullptr && this->IPAddress_ == nullptr && this->netType_ == nullptr && this->ports_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr; };
        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline Endpoints& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // endpointName Field Functions 
        bool hasEndpointName() const { return this->endpointName_ != nullptr;};
        void deleteEndpointName() { this->endpointName_ = nullptr;};
        inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
        inline Endpoints& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


        // IPAddress Field Functions 
        bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
        void deleteIPAddress() { this->IPAddress_ = nullptr;};
        inline string getIPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
        inline Endpoints& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline Endpoints& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // ports Field Functions 
        bool hasPorts() const { return this->ports_ != nullptr;};
        void deletePorts() { this->ports_ = nullptr;};
        inline const vector<Endpoints::Ports> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<Endpoints::Ports>) };
        inline vector<Endpoints::Ports> getPorts() { DARABONBA_PTR_GET(ports_, vector<Endpoints::Ports>) };
        inline Endpoints& setPorts(const vector<Endpoints::Ports> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
        inline Endpoints& setPorts(vector<Endpoints::Ports> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline Endpoints& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Endpoints& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The endpoint of the instance.
        shared_ptr<string> connectionString_ {};
        // The endpoint name.
        shared_ptr<string> endpointName_ {};
        // The IP address.
        shared_ptr<string> IPAddress_ {};
        // The network type of the endpoint. Valid values:
        // 
        // - VPC: VPC.
        // - PUBLIC: Internet.
        shared_ptr<string> netType_ {};
        // The port details.
        shared_ptr<vector<Endpoints::Ports>> ports_ {};
        // The vSwitch ID.
        shared_ptr<string> vSwitchId_ {};
        // VPC ID。
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->endpoints_ == nullptr
        && this->instanceNetworkType_ == nullptr; };
      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline const vector<Data::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<Data::Endpoints>) };
      inline vector<Data::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<Data::Endpoints>) };
      inline Data& setEndpoints(const vector<Data::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
      inline Data& setEndpoints(vector<Data::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


      // instanceNetworkType Field Functions 
      bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
      void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
      inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
      inline Data& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    protected:
      // The list of endpoints.
      shared_ptr<vector<Data::Endpoints>> endpoints_ {};
      // The network type of the instance. Valid values:
      // 
      // * **VPC**: virtual private cloud (VPC).
      shared_ptr<string> instanceNetworkType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeLangfuseEndpointsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeLangfuseEndpointsResponseBody::Data) };
    inline DescribeLangfuseEndpointsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeLangfuseEndpointsResponseBody::Data) };
    inline DescribeLangfuseEndpointsResponseBody& setData(const DescribeLangfuseEndpointsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeLangfuseEndpointsResponseBody& setData(DescribeLangfuseEndpointsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLangfuseEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<DescribeLangfuseEndpointsResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
