// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETTESTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETTESTRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeNetTestResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetTestResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CommTest, commTest_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DelayTest, delayTest_);
      DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(NetTestType, netTestType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultDetial, resultDetial_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TestId, testId_);
      DARABONBA_PTR_TO_JSON(TrafficTest, trafficTest_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetTestResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CommTest, commTest_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DelayTest, delayTest_);
      DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(NetTestType, netTestType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultDetial, resultDetial_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TestId, testId_);
      DARABONBA_PTR_FROM_JSON(TrafficTest, trafficTest_);
    };
    DescribeNetTestResultResponseBody() = default ;
    DescribeNetTestResultResponseBody(const DescribeNetTestResultResponseBody &) = default ;
    DescribeNetTestResultResponseBody(DescribeNetTestResultResponseBody &&) = default ;
    DescribeNetTestResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetTestResultResponseBody() = default ;
    DescribeNetTestResultResponseBody& operator=(const DescribeNetTestResultResponseBody &) = default ;
    DescribeNetTestResultResponseBody& operator=(DescribeNetTestResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficTest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficTest& obj) { 
        DARABONBA_PTR_TO_JSON(Clients, clients_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(GDR, GDR_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(QP, QP_);
        DARABONBA_PTR_TO_JSON(Servers, servers_);
        DARABONBA_PTR_TO_JSON(TrafficModel, trafficModel_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficTest& obj) { 
        DARABONBA_PTR_FROM_JSON(Clients, clients_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(GDR, GDR_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(QP, QP_);
        DARABONBA_PTR_FROM_JSON(Servers, servers_);
        DARABONBA_PTR_FROM_JSON(TrafficModel, trafficModel_);
      };
      TrafficTest() = default ;
      TrafficTest(const TrafficTest &) = default ;
      TrafficTest(TrafficTest &&) = default ;
      TrafficTest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficTest() = default ;
      TrafficTest& operator=(const TrafficTest &) = default ;
      TrafficTest& operator=(TrafficTest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Servers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Servers& obj) { 
          DARABONBA_PTR_TO_JSON(Bond, bond_);
          DARABONBA_PTR_TO_JSON(IP, IP_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ServerName, serverName_);
        };
        friend void from_json(const Darabonba::Json& j, Servers& obj) { 
          DARABONBA_PTR_FROM_JSON(Bond, bond_);
          DARABONBA_PTR_FROM_JSON(IP, IP_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ServerName, serverName_);
        };
        Servers() = default ;
        Servers(const Servers &) = default ;
        Servers(Servers &&) = default ;
        Servers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Servers() = default ;
        Servers& operator=(const Servers &) = default ;
        Servers& operator=(Servers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bond_ == nullptr
        && this->IP_ == nullptr && this->resourceId_ == nullptr && this->serverName_ == nullptr; };
        // bond Field Functions 
        bool hasBond() const { return this->bond_ != nullptr;};
        void deleteBond() { this->bond_ = nullptr;};
        inline string getBond() const { DARABONBA_PTR_GET_DEFAULT(bond_, "") };
        inline Servers& setBond(string bond) { DARABONBA_PTR_SET_VALUE(bond_, bond) };


        // IP Field Functions 
        bool hasIP() const { return this->IP_ != nullptr;};
        void deleteIP() { this->IP_ = nullptr;};
        inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
        inline Servers& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Servers& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // serverName Field Functions 
        bool hasServerName() const { return this->serverName_ != nullptr;};
        void deleteServerName() { this->serverName_ = nullptr;};
        inline string getServerName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
        inline Servers& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


      protected:
        // Network interface bond port
        shared_ptr<string> bond_ {};
        // The IP address.
        shared_ptr<string> IP_ {};
        // The resource ID.
        shared_ptr<string> resourceId_ {};
        // Service name.
        shared_ptr<string> serverName_ {};
      };

      class Clients : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Clients& obj) { 
          DARABONBA_PTR_TO_JSON(Bond, bond_);
          DARABONBA_PTR_TO_JSON(IP, IP_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ServerName, serverName_);
        };
        friend void from_json(const Darabonba::Json& j, Clients& obj) { 
          DARABONBA_PTR_FROM_JSON(Bond, bond_);
          DARABONBA_PTR_FROM_JSON(IP, IP_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ServerName, serverName_);
        };
        Clients() = default ;
        Clients(const Clients &) = default ;
        Clients(Clients &&) = default ;
        Clients(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Clients() = default ;
        Clients& operator=(const Clients &) = default ;
        Clients& operator=(Clients &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bond_ == nullptr
        && this->IP_ == nullptr && this->resourceId_ == nullptr && this->serverName_ == nullptr; };
        // bond Field Functions 
        bool hasBond() const { return this->bond_ != nullptr;};
        void deleteBond() { this->bond_ = nullptr;};
        inline string getBond() const { DARABONBA_PTR_GET_DEFAULT(bond_, "") };
        inline Clients& setBond(string bond) { DARABONBA_PTR_SET_VALUE(bond_, bond) };


        // IP Field Functions 
        bool hasIP() const { return this->IP_ != nullptr;};
        void deleteIP() { this->IP_ = nullptr;};
        inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
        inline Clients& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Clients& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // serverName Field Functions 
        bool hasServerName() const { return this->serverName_ != nullptr;};
        void deleteServerName() { this->serverName_ = nullptr;};
        inline string getServerName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
        inline Clients& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


      protected:
        // Network interface bond port
        shared_ptr<string> bond_ {};
        // IP address.
        shared_ptr<string> IP_ {};
        // The resource ID.
        shared_ptr<string> resourceId_ {};
        // The name of the service.
        shared_ptr<string> serverName_ {};
      };

      virtual bool empty() const override { return this->clients_ == nullptr
        && this->duration_ == nullptr && this->GDR_ == nullptr && this->protocol_ == nullptr && this->QP_ == nullptr && this->servers_ == nullptr
        && this->trafficModel_ == nullptr; };
      // clients Field Functions 
      bool hasClients() const { return this->clients_ != nullptr;};
      void deleteClients() { this->clients_ = nullptr;};
      inline const vector<TrafficTest::Clients> & getClients() const { DARABONBA_PTR_GET_CONST(clients_, vector<TrafficTest::Clients>) };
      inline vector<TrafficTest::Clients> getClients() { DARABONBA_PTR_GET(clients_, vector<TrafficTest::Clients>) };
      inline TrafficTest& setClients(const vector<TrafficTest::Clients> & clients) { DARABONBA_PTR_SET_VALUE(clients_, clients) };
      inline TrafficTest& setClients(vector<TrafficTest::Clients> && clients) { DARABONBA_PTR_SET_RVALUE(clients_, clients) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline TrafficTest& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // GDR Field Functions 
      bool hasGDR() const { return this->GDR_ != nullptr;};
      void deleteGDR() { this->GDR_ = nullptr;};
      inline string getGDR() const { DARABONBA_PTR_GET_DEFAULT(GDR_, "") };
      inline TrafficTest& setGDR(string GDR) { DARABONBA_PTR_SET_VALUE(GDR_, GDR) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline TrafficTest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // QP Field Functions 
      bool hasQP() const { return this->QP_ != nullptr;};
      void deleteQP() { this->QP_ = nullptr;};
      inline int64_t getQP() const { DARABONBA_PTR_GET_DEFAULT(QP_, 0L) };
      inline TrafficTest& setQP(int64_t QP) { DARABONBA_PTR_SET_VALUE(QP_, QP) };


      // servers Field Functions 
      bool hasServers() const { return this->servers_ != nullptr;};
      void deleteServers() { this->servers_ = nullptr;};
      inline const vector<TrafficTest::Servers> & getServers() const { DARABONBA_PTR_GET_CONST(servers_, vector<TrafficTest::Servers>) };
      inline vector<TrafficTest::Servers> getServers() { DARABONBA_PTR_GET(servers_, vector<TrafficTest::Servers>) };
      inline TrafficTest& setServers(const vector<TrafficTest::Servers> & servers) { DARABONBA_PTR_SET_VALUE(servers_, servers) };
      inline TrafficTest& setServers(vector<TrafficTest::Servers> && servers) { DARABONBA_PTR_SET_RVALUE(servers_, servers) };


      // trafficModel Field Functions 
      bool hasTrafficModel() const { return this->trafficModel_ != nullptr;};
      void deleteTrafficModel() { this->trafficModel_ = nullptr;};
      inline string getTrafficModel() const { DARABONBA_PTR_GET_DEFAULT(trafficModel_, "") };
      inline TrafficTest& setTrafficModel(string trafficModel) { DARABONBA_PTR_SET_VALUE(trafficModel_, trafficModel) };


    protected:
      // All clients information
      shared_ptr<vector<TrafficTest::Clients>> clients_ {};
      // Call duration, in seconds.
      shared_ptr<int64_t> duration_ {};
      // When the protocol is RDMA, fill in True/False,
      // when the protocol is TCP, this field is empty.
      shared_ptr<string> GDR_ {};
      // Network protocol, either RDMA or TCP.
      shared_ptr<string> protocol_ {};
      // When the protocol is TCP, fill in the number of concurrent connections; when the protocol is RDMA, fill in the configured QP value.
      shared_ptr<int64_t> QP_ {};
      // Servers infomation.
      shared_ptr<vector<TrafficTest::Servers>> servers_ {};
      // Traffic model, either MTON or Fullmesh.
      shared_ptr<string> trafficModel_ {};
    };

    class DelayTest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DelayTest& obj) { 
        DARABONBA_PTR_TO_JSON(Hosts, hosts_);
      };
      friend void from_json(const Darabonba::Json& j, DelayTest& obj) { 
        DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
      };
      DelayTest() = default ;
      DelayTest(const DelayTest &) = default ;
      DelayTest(DelayTest &&) = default ;
      DelayTest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DelayTest() = default ;
      DelayTest& operator=(const DelayTest &) = default ;
      DelayTest& operator=(DelayTest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Hosts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Hosts& obj) { 
          DARABONBA_PTR_TO_JSON(Bond, bond_);
          DARABONBA_PTR_TO_JSON(IP, IP_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ServerName, serverName_);
        };
        friend void from_json(const Darabonba::Json& j, Hosts& obj) { 
          DARABONBA_PTR_FROM_JSON(Bond, bond_);
          DARABONBA_PTR_FROM_JSON(IP, IP_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ServerName, serverName_);
        };
        Hosts() = default ;
        Hosts(const Hosts &) = default ;
        Hosts(Hosts &&) = default ;
        Hosts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Hosts() = default ;
        Hosts& operator=(const Hosts &) = default ;
        Hosts& operator=(Hosts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bond_ == nullptr
        && this->IP_ == nullptr && this->resourceId_ == nullptr && this->serverName_ == nullptr; };
        // bond Field Functions 
        bool hasBond() const { return this->bond_ != nullptr;};
        void deleteBond() { this->bond_ = nullptr;};
        inline string getBond() const { DARABONBA_PTR_GET_DEFAULT(bond_, "") };
        inline Hosts& setBond(string bond) { DARABONBA_PTR_SET_VALUE(bond_, bond) };


        // IP Field Functions 
        bool hasIP() const { return this->IP_ != nullptr;};
        void deleteIP() { this->IP_ = nullptr;};
        inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
        inline Hosts& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Hosts& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // serverName Field Functions 
        bool hasServerName() const { return this->serverName_ != nullptr;};
        void deleteServerName() { this->serverName_ = nullptr;};
        inline string getServerName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
        inline Hosts& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


      protected:
        // The bonding of network interface card.
        shared_ptr<string> bond_ {};
        // The IP address.
        shared_ptr<string> IP_ {};
        // The resource ID.
        shared_ptr<string> resourceId_ {};
        // Service name.
        shared_ptr<string> serverName_ {};
      };

      virtual bool empty() const override { return this->hosts_ == nullptr; };
      // hosts Field Functions 
      bool hasHosts() const { return this->hosts_ != nullptr;};
      void deleteHosts() { this->hosts_ = nullptr;};
      inline const vector<DelayTest::Hosts> & getHosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<DelayTest::Hosts>) };
      inline vector<DelayTest::Hosts> getHosts() { DARABONBA_PTR_GET(hosts_, vector<DelayTest::Hosts>) };
      inline DelayTest& setHosts(const vector<DelayTest::Hosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
      inline DelayTest& setHosts(vector<DelayTest::Hosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


    protected:
      // All hosts infomation
      shared_ptr<vector<DelayTest::Hosts>> hosts_ {};
    };

    class CommTest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CommTest& obj) { 
        DARABONBA_PTR_TO_JSON(GPUNum, GPUNum_);
        DARABONBA_PTR_TO_JSON(Hosts, hosts_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, CommTest& obj) { 
        DARABONBA_PTR_FROM_JSON(GPUNum, GPUNum_);
        DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      CommTest() = default ;
      CommTest(const CommTest &) = default ;
      CommTest(CommTest &&) = default ;
      CommTest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CommTest() = default ;
      CommTest& operator=(const CommTest &) = default ;
      CommTest& operator=(CommTest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Hosts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Hosts& obj) { 
          DARABONBA_PTR_TO_JSON(IP, IP_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ServerName, serverName_);
        };
        friend void from_json(const Darabonba::Json& j, Hosts& obj) { 
          DARABONBA_PTR_FROM_JSON(IP, IP_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ServerName, serverName_);
        };
        Hosts() = default ;
        Hosts(const Hosts &) = default ;
        Hosts(Hosts &&) = default ;
        Hosts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Hosts() = default ;
        Hosts& operator=(const Hosts &) = default ;
        Hosts& operator=(Hosts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->IP_ == nullptr
        && this->resourceId_ == nullptr && this->serverName_ == nullptr; };
        // IP Field Functions 
        bool hasIP() const { return this->IP_ != nullptr;};
        void deleteIP() { this->IP_ = nullptr;};
        inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
        inline Hosts& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Hosts& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // serverName Field Functions 
        bool hasServerName() const { return this->serverName_ != nullptr;};
        void deleteServerName() { this->serverName_ = nullptr;};
        inline string getServerName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
        inline Hosts& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


      protected:
        // The IP address.
        shared_ptr<string> IP_ {};
        // The resource ID.
        shared_ptr<string> resourceId_ {};
        // Service name.
        shared_ptr<string> serverName_ {};
      };

      virtual bool empty() const override { return this->GPUNum_ == nullptr
        && this->hosts_ == nullptr && this->model_ == nullptr && this->type_ == nullptr; };
      // GPUNum Field Functions 
      bool hasGPUNum() const { return this->GPUNum_ != nullptr;};
      void deleteGPUNum() { this->GPUNum_ = nullptr;};
      inline string getGPUNum() const { DARABONBA_PTR_GET_DEFAULT(GPUNum_, "") };
      inline CommTest& setGPUNum(string GPUNum) { DARABONBA_PTR_SET_VALUE(GPUNum_, GPUNum) };


      // hosts Field Functions 
      bool hasHosts() const { return this->hosts_ != nullptr;};
      void deleteHosts() { this->hosts_ = nullptr;};
      inline const vector<CommTest::Hosts> & getHosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<CommTest::Hosts>) };
      inline vector<CommTest::Hosts> getHosts() { DARABONBA_PTR_GET(hosts_, vector<CommTest::Hosts>) };
      inline CommTest& setHosts(const vector<CommTest::Hosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
      inline CommTest& setHosts(vector<CommTest::Hosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline CommTest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CommTest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Number of GPUs
      shared_ptr<string> GPUNum_ {};
      // All hosts infomation
      shared_ptr<vector<CommTest::Hosts>> hosts_ {};
      // The communication library model.
      shared_ptr<string> model_ {};
      // The CommTest type, which can be ACCL or NCCL.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->commTest_ == nullptr && this->creationTime_ == nullptr && this->delayTest_ == nullptr && this->finishedTime_ == nullptr
        && this->netTestType_ == nullptr && this->port_ == nullptr && this->requestId_ == nullptr && this->resultDetial_ == nullptr && this->status_ == nullptr
        && this->testId_ == nullptr && this->trafficTest_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeNetTestResultResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeNetTestResultResponseBody& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // commTest Field Functions 
    bool hasCommTest() const { return this->commTest_ != nullptr;};
    void deleteCommTest() { this->commTest_ = nullptr;};
    inline const DescribeNetTestResultResponseBody::CommTest & getCommTest() const { DARABONBA_PTR_GET_CONST(commTest_, DescribeNetTestResultResponseBody::CommTest) };
    inline DescribeNetTestResultResponseBody::CommTest getCommTest() { DARABONBA_PTR_GET(commTest_, DescribeNetTestResultResponseBody::CommTest) };
    inline DescribeNetTestResultResponseBody& setCommTest(const DescribeNetTestResultResponseBody::CommTest & commTest) { DARABONBA_PTR_SET_VALUE(commTest_, commTest) };
    inline DescribeNetTestResultResponseBody& setCommTest(DescribeNetTestResultResponseBody::CommTest && commTest) { DARABONBA_PTR_SET_RVALUE(commTest_, commTest) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeNetTestResultResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // delayTest Field Functions 
    bool hasDelayTest() const { return this->delayTest_ != nullptr;};
    void deleteDelayTest() { this->delayTest_ = nullptr;};
    inline const DescribeNetTestResultResponseBody::DelayTest & getDelayTest() const { DARABONBA_PTR_GET_CONST(delayTest_, DescribeNetTestResultResponseBody::DelayTest) };
    inline DescribeNetTestResultResponseBody::DelayTest getDelayTest() { DARABONBA_PTR_GET(delayTest_, DescribeNetTestResultResponseBody::DelayTest) };
    inline DescribeNetTestResultResponseBody& setDelayTest(const DescribeNetTestResultResponseBody::DelayTest & delayTest) { DARABONBA_PTR_SET_VALUE(delayTest_, delayTest) };
    inline DescribeNetTestResultResponseBody& setDelayTest(DescribeNetTestResultResponseBody::DelayTest && delayTest) { DARABONBA_PTR_SET_RVALUE(delayTest_, delayTest) };


    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline string getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
    inline DescribeNetTestResultResponseBody& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // netTestType Field Functions 
    bool hasNetTestType() const { return this->netTestType_ != nullptr;};
    void deleteNetTestType() { this->netTestType_ = nullptr;};
    inline string getNetTestType() const { DARABONBA_PTR_GET_DEFAULT(netTestType_, "") };
    inline DescribeNetTestResultResponseBody& setNetTestType(string netTestType) { DARABONBA_PTR_SET_VALUE(netTestType_, netTestType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeNetTestResultResponseBody& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetTestResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultDetial Field Functions 
    bool hasResultDetial() const { return this->resultDetial_ != nullptr;};
    void deleteResultDetial() { this->resultDetial_ = nullptr;};
    inline string getResultDetial() const { DARABONBA_PTR_GET_DEFAULT(resultDetial_, "") };
    inline DescribeNetTestResultResponseBody& setResultDetial(string resultDetial) { DARABONBA_PTR_SET_VALUE(resultDetial_, resultDetial) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNetTestResultResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // testId Field Functions 
    bool hasTestId() const { return this->testId_ != nullptr;};
    void deleteTestId() { this->testId_ = nullptr;};
    inline string getTestId() const { DARABONBA_PTR_GET_DEFAULT(testId_, "") };
    inline DescribeNetTestResultResponseBody& setTestId(string testId) { DARABONBA_PTR_SET_VALUE(testId_, testId) };


    // trafficTest Field Functions 
    bool hasTrafficTest() const { return this->trafficTest_ != nullptr;};
    void deleteTrafficTest() { this->trafficTest_ = nullptr;};
    inline const DescribeNetTestResultResponseBody::TrafficTest & getTrafficTest() const { DARABONBA_PTR_GET_CONST(trafficTest_, DescribeNetTestResultResponseBody::TrafficTest) };
    inline DescribeNetTestResultResponseBody::TrafficTest getTrafficTest() { DARABONBA_PTR_GET(trafficTest_, DescribeNetTestResultResponseBody::TrafficTest) };
    inline DescribeNetTestResultResponseBody& setTrafficTest(const DescribeNetTestResultResponseBody::TrafficTest & trafficTest) { DARABONBA_PTR_SET_VALUE(trafficTest_, trafficTest) };
    inline DescribeNetTestResultResponseBody& setTrafficTest(DescribeNetTestResultResponseBody::TrafficTest && trafficTest) { DARABONBA_PTR_SET_RVALUE(trafficTest_, trafficTest) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The cluster name.
    shared_ptr<string> clusterName_ {};
    // Specify when NetTestType is CommTest.
    shared_ptr<DescribeNetTestResultResponseBody::CommTest> commTest_ {};
    // create time
    shared_ptr<string> creationTime_ {};
    // Fill in when the network test type is a delay test.
    shared_ptr<DescribeNetTestResultResponseBody::DelayTest> delayTest_ {};
    // finish time
    shared_ptr<string> finishedTime_ {};
    // The type of the network test.
    shared_ptr<string> netTestType_ {};
    // Test port number.
    shared_ptr<string> port_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // result detail
    shared_ptr<string> resultDetial_ {};
    // status of session
    shared_ptr<string> status_ {};
    // The ID of the test task. The unique identifier of a network test task.
    shared_ptr<string> testId_ {};
    // Fill in when the network test type is a traffic test.
    shared_ptr<DescribeNetTestResultResponseBody::TrafficTest> trafficTest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
