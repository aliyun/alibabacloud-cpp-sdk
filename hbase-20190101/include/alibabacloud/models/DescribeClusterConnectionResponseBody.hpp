// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeClusterConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterConnectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(IsMultimod, isMultimod_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceConnAddrs, serviceConnAddrs_);
      DARABONBA_PTR_TO_JSON(SlbConnAddrs, slbConnAddrs_);
      DARABONBA_PTR_TO_JSON(ThriftConn, thriftConn_);
      DARABONBA_PTR_TO_JSON(UiProxyConnAddrInfo, uiProxyConnAddrInfo_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZkConnAddrs, zkConnAddrs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterConnectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(IsMultimod, isMultimod_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceConnAddrs, serviceConnAddrs_);
      DARABONBA_PTR_FROM_JSON(SlbConnAddrs, slbConnAddrs_);
      DARABONBA_PTR_FROM_JSON(ThriftConn, thriftConn_);
      DARABONBA_PTR_FROM_JSON(UiProxyConnAddrInfo, uiProxyConnAddrInfo_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZkConnAddrs, zkConnAddrs_);
    };
    DescribeClusterConnectionResponseBody() = default ;
    DescribeClusterConnectionResponseBody(const DescribeClusterConnectionResponseBody &) = default ;
    DescribeClusterConnectionResponseBody(DescribeClusterConnectionResponseBody &&) = default ;
    DescribeClusterConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterConnectionResponseBody() = default ;
    DescribeClusterConnectionResponseBody& operator=(const DescribeClusterConnectionResponseBody &) = default ;
    DescribeClusterConnectionResponseBody& operator=(DescribeClusterConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZkConnAddrs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZkConnAddrs& obj) { 
        DARABONBA_PTR_TO_JSON(ZkConnAddr, zkConnAddr_);
      };
      friend void from_json(const Darabonba::Json& j, ZkConnAddrs& obj) { 
        DARABONBA_PTR_FROM_JSON(ZkConnAddr, zkConnAddr_);
      };
      ZkConnAddrs() = default ;
      ZkConnAddrs(const ZkConnAddrs &) = default ;
      ZkConnAddrs(ZkConnAddrs &&) = default ;
      ZkConnAddrs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ZkConnAddrs() = default ;
      ZkConnAddrs& operator=(const ZkConnAddrs &) = default ;
      ZkConnAddrs& operator=(ZkConnAddrs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ZkConnAddr : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ZkConnAddr& obj) { 
          DARABONBA_PTR_TO_JSON(ConnAddr, connAddr_);
          DARABONBA_PTR_TO_JSON(ConnAddrPort, connAddrPort_);
          DARABONBA_PTR_TO_JSON(NetType, netType_);
        };
        friend void from_json(const Darabonba::Json& j, ZkConnAddr& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnAddr, connAddr_);
          DARABONBA_PTR_FROM_JSON(ConnAddrPort, connAddrPort_);
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
        };
        ZkConnAddr() = default ;
        ZkConnAddr(const ZkConnAddr &) = default ;
        ZkConnAddr(ZkConnAddr &&) = default ;
        ZkConnAddr(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ZkConnAddr() = default ;
        ZkConnAddr& operator=(const ZkConnAddr &) = default ;
        ZkConnAddr& operator=(ZkConnAddr &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connAddr_ == nullptr
        && this->connAddrPort_ == nullptr && this->netType_ == nullptr; };
        // connAddr Field Functions 
        bool hasConnAddr() const { return this->connAddr_ != nullptr;};
        void deleteConnAddr() { this->connAddr_ = nullptr;};
        inline string getConnAddr() const { DARABONBA_PTR_GET_DEFAULT(connAddr_, "") };
        inline ZkConnAddr& setConnAddr(string connAddr) { DARABONBA_PTR_SET_VALUE(connAddr_, connAddr) };


        // connAddrPort Field Functions 
        bool hasConnAddrPort() const { return this->connAddrPort_ != nullptr;};
        void deleteConnAddrPort() { this->connAddrPort_ = nullptr;};
        inline string getConnAddrPort() const { DARABONBA_PTR_GET_DEFAULT(connAddrPort_, "") };
        inline ZkConnAddr& setConnAddrPort(string connAddrPort) { DARABONBA_PTR_SET_VALUE(connAddrPort_, connAddrPort) };


        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline ZkConnAddr& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


      protected:
        shared_ptr<string> connAddr_ {};
        shared_ptr<string> connAddrPort_ {};
        shared_ptr<string> netType_ {};
      };

      virtual bool empty() const override { return this->zkConnAddr_ == nullptr; };
      // zkConnAddr Field Functions 
      bool hasZkConnAddr() const { return this->zkConnAddr_ != nullptr;};
      void deleteZkConnAddr() { this->zkConnAddr_ = nullptr;};
      inline const vector<ZkConnAddrs::ZkConnAddr> & getZkConnAddr() const { DARABONBA_PTR_GET_CONST(zkConnAddr_, vector<ZkConnAddrs::ZkConnAddr>) };
      inline vector<ZkConnAddrs::ZkConnAddr> getZkConnAddr() { DARABONBA_PTR_GET(zkConnAddr_, vector<ZkConnAddrs::ZkConnAddr>) };
      inline ZkConnAddrs& setZkConnAddr(const vector<ZkConnAddrs::ZkConnAddr> & zkConnAddr) { DARABONBA_PTR_SET_VALUE(zkConnAddr_, zkConnAddr) };
      inline ZkConnAddrs& setZkConnAddr(vector<ZkConnAddrs::ZkConnAddr> && zkConnAddr) { DARABONBA_PTR_SET_RVALUE(zkConnAddr_, zkConnAddr) };


    protected:
      shared_ptr<vector<ZkConnAddrs::ZkConnAddr>> zkConnAddr_ {};
    };

    class UiProxyConnAddrInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UiProxyConnAddrInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ConnAddr, connAddr_);
        DARABONBA_PTR_TO_JSON(ConnAddrPort, connAddrPort_);
        DARABONBA_PTR_TO_JSON(NetType, netType_);
      };
      friend void from_json(const Darabonba::Json& j, UiProxyConnAddrInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnAddr, connAddr_);
        DARABONBA_PTR_FROM_JSON(ConnAddrPort, connAddrPort_);
        DARABONBA_PTR_FROM_JSON(NetType, netType_);
      };
      UiProxyConnAddrInfo() = default ;
      UiProxyConnAddrInfo(const UiProxyConnAddrInfo &) = default ;
      UiProxyConnAddrInfo(UiProxyConnAddrInfo &&) = default ;
      UiProxyConnAddrInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UiProxyConnAddrInfo() = default ;
      UiProxyConnAddrInfo& operator=(const UiProxyConnAddrInfo &) = default ;
      UiProxyConnAddrInfo& operator=(UiProxyConnAddrInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connAddr_ == nullptr
        && this->connAddrPort_ == nullptr && this->netType_ == nullptr; };
      // connAddr Field Functions 
      bool hasConnAddr() const { return this->connAddr_ != nullptr;};
      void deleteConnAddr() { this->connAddr_ = nullptr;};
      inline string getConnAddr() const { DARABONBA_PTR_GET_DEFAULT(connAddr_, "") };
      inline UiProxyConnAddrInfo& setConnAddr(string connAddr) { DARABONBA_PTR_SET_VALUE(connAddr_, connAddr) };


      // connAddrPort Field Functions 
      bool hasConnAddrPort() const { return this->connAddrPort_ != nullptr;};
      void deleteConnAddrPort() { this->connAddrPort_ = nullptr;};
      inline string getConnAddrPort() const { DARABONBA_PTR_GET_DEFAULT(connAddrPort_, "") };
      inline UiProxyConnAddrInfo& setConnAddrPort(string connAddrPort) { DARABONBA_PTR_SET_VALUE(connAddrPort_, connAddrPort) };


      // netType Field Functions 
      bool hasNetType() const { return this->netType_ != nullptr;};
      void deleteNetType() { this->netType_ = nullptr;};
      inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
      inline UiProxyConnAddrInfo& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    protected:
      // The endpoint.
      shared_ptr<string> connAddr_ {};
      // The connection port.
      shared_ptr<string> connAddrPort_ {};
      // The access type of the endpoint, which is public network access.
      shared_ptr<string> netType_ {};
    };

    class ThriftConn : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ThriftConn& obj) { 
        DARABONBA_PTR_TO_JSON(ConnAddr, connAddr_);
        DARABONBA_PTR_TO_JSON(ConnAddrPort, connAddrPort_);
        DARABONBA_PTR_TO_JSON(NetType, netType_);
      };
      friend void from_json(const Darabonba::Json& j, ThriftConn& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnAddr, connAddr_);
        DARABONBA_PTR_FROM_JSON(ConnAddrPort, connAddrPort_);
        DARABONBA_PTR_FROM_JSON(NetType, netType_);
      };
      ThriftConn() = default ;
      ThriftConn(const ThriftConn &) = default ;
      ThriftConn(ThriftConn &&) = default ;
      ThriftConn(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ThriftConn() = default ;
      ThriftConn& operator=(const ThriftConn &) = default ;
      ThriftConn& operator=(ThriftConn &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connAddr_ == nullptr
        && this->connAddrPort_ == nullptr && this->netType_ == nullptr; };
      // connAddr Field Functions 
      bool hasConnAddr() const { return this->connAddr_ != nullptr;};
      void deleteConnAddr() { this->connAddr_ = nullptr;};
      inline string getConnAddr() const { DARABONBA_PTR_GET_DEFAULT(connAddr_, "") };
      inline ThriftConn& setConnAddr(string connAddr) { DARABONBA_PTR_SET_VALUE(connAddr_, connAddr) };


      // connAddrPort Field Functions 
      bool hasConnAddrPort() const { return this->connAddrPort_ != nullptr;};
      void deleteConnAddrPort() { this->connAddrPort_ = nullptr;};
      inline string getConnAddrPort() const { DARABONBA_PTR_GET_DEFAULT(connAddrPort_, "") };
      inline ThriftConn& setConnAddrPort(string connAddrPort) { DARABONBA_PTR_SET_VALUE(connAddrPort_, connAddrPort) };


      // netType Field Functions 
      bool hasNetType() const { return this->netType_ != nullptr;};
      void deleteNetType() { this->netType_ = nullptr;};
      inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
      inline ThriftConn& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    protected:
      // The endpoint.
      shared_ptr<string> connAddr_ {};
      // The connection port.
      shared_ptr<string> connAddrPort_ {};
      // The access type of the endpoint. Valid values:
      // 
      // - **2**: internal network access.
      // - **0**: public network access.
      shared_ptr<string> netType_ {};
    };

    class SlbConnAddrs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlbConnAddrs& obj) { 
        DARABONBA_PTR_TO_JSON(SlbConnAddr, slbConnAddr_);
      };
      friend void from_json(const Darabonba::Json& j, SlbConnAddrs& obj) { 
        DARABONBA_PTR_FROM_JSON(SlbConnAddr, slbConnAddr_);
      };
      SlbConnAddrs() = default ;
      SlbConnAddrs(const SlbConnAddrs &) = default ;
      SlbConnAddrs(SlbConnAddrs &&) = default ;
      SlbConnAddrs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlbConnAddrs() = default ;
      SlbConnAddrs& operator=(const SlbConnAddrs &) = default ;
      SlbConnAddrs& operator=(SlbConnAddrs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SlbConnAddr : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlbConnAddr& obj) { 
          DARABONBA_PTR_TO_JSON(ConnAddrInfo, connAddrInfo_);
          DARABONBA_PTR_TO_JSON(SlbType, slbType_);
        };
        friend void from_json(const Darabonba::Json& j, SlbConnAddr& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnAddrInfo, connAddrInfo_);
          DARABONBA_PTR_FROM_JSON(SlbType, slbType_);
        };
        SlbConnAddr() = default ;
        SlbConnAddr(const SlbConnAddr &) = default ;
        SlbConnAddr(SlbConnAddr &&) = default ;
        SlbConnAddr(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlbConnAddr() = default ;
        SlbConnAddr& operator=(const SlbConnAddr &) = default ;
        SlbConnAddr& operator=(SlbConnAddr &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ConnAddrInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConnAddrInfo& obj) { 
            DARABONBA_PTR_TO_JSON(ConnAddr, connAddr_);
            DARABONBA_PTR_TO_JSON(ConnAddrPort, connAddrPort_);
            DARABONBA_PTR_TO_JSON(NetType, netType_);
          };
          friend void from_json(const Darabonba::Json& j, ConnAddrInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(ConnAddr, connAddr_);
            DARABONBA_PTR_FROM_JSON(ConnAddrPort, connAddrPort_);
            DARABONBA_PTR_FROM_JSON(NetType, netType_);
          };
          ConnAddrInfo() = default ;
          ConnAddrInfo(const ConnAddrInfo &) = default ;
          ConnAddrInfo(ConnAddrInfo &&) = default ;
          ConnAddrInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConnAddrInfo() = default ;
          ConnAddrInfo& operator=(const ConnAddrInfo &) = default ;
          ConnAddrInfo& operator=(ConnAddrInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->connAddr_ == nullptr
        && this->connAddrPort_ == nullptr && this->netType_ == nullptr; };
          // connAddr Field Functions 
          bool hasConnAddr() const { return this->connAddr_ != nullptr;};
          void deleteConnAddr() { this->connAddr_ = nullptr;};
          inline string getConnAddr() const { DARABONBA_PTR_GET_DEFAULT(connAddr_, "") };
          inline ConnAddrInfo& setConnAddr(string connAddr) { DARABONBA_PTR_SET_VALUE(connAddr_, connAddr) };


          // connAddrPort Field Functions 
          bool hasConnAddrPort() const { return this->connAddrPort_ != nullptr;};
          void deleteConnAddrPort() { this->connAddrPort_ = nullptr;};
          inline string getConnAddrPort() const { DARABONBA_PTR_GET_DEFAULT(connAddrPort_, "") };
          inline ConnAddrInfo& setConnAddrPort(string connAddrPort) { DARABONBA_PTR_SET_VALUE(connAddrPort_, connAddrPort) };


          // netType Field Functions 
          bool hasNetType() const { return this->netType_ != nullptr;};
          void deleteNetType() { this->netType_ = nullptr;};
          inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
          inline ConnAddrInfo& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        protected:
          shared_ptr<string> connAddr_ {};
          shared_ptr<string> connAddrPort_ {};
          shared_ptr<string> netType_ {};
        };

        virtual bool empty() const override { return this->connAddrInfo_ == nullptr
        && this->slbType_ == nullptr; };
        // connAddrInfo Field Functions 
        bool hasConnAddrInfo() const { return this->connAddrInfo_ != nullptr;};
        void deleteConnAddrInfo() { this->connAddrInfo_ = nullptr;};
        inline const SlbConnAddr::ConnAddrInfo & getConnAddrInfo() const { DARABONBA_PTR_GET_CONST(connAddrInfo_, SlbConnAddr::ConnAddrInfo) };
        inline SlbConnAddr::ConnAddrInfo getConnAddrInfo() { DARABONBA_PTR_GET(connAddrInfo_, SlbConnAddr::ConnAddrInfo) };
        inline SlbConnAddr& setConnAddrInfo(const SlbConnAddr::ConnAddrInfo & connAddrInfo) { DARABONBA_PTR_SET_VALUE(connAddrInfo_, connAddrInfo) };
        inline SlbConnAddr& setConnAddrInfo(SlbConnAddr::ConnAddrInfo && connAddrInfo) { DARABONBA_PTR_SET_RVALUE(connAddrInfo_, connAddrInfo) };


        // slbType Field Functions 
        bool hasSlbType() const { return this->slbType_ != nullptr;};
        void deleteSlbType() { this->slbType_ = nullptr;};
        inline string getSlbType() const { DARABONBA_PTR_GET_DEFAULT(slbType_, "") };
        inline SlbConnAddr& setSlbType(string slbType) { DARABONBA_PTR_SET_VALUE(slbType_, slbType) };


      protected:
        shared_ptr<SlbConnAddr::ConnAddrInfo> connAddrInfo_ {};
        shared_ptr<string> slbType_ {};
      };

      virtual bool empty() const override { return this->slbConnAddr_ == nullptr; };
      // slbConnAddr Field Functions 
      bool hasSlbConnAddr() const { return this->slbConnAddr_ != nullptr;};
      void deleteSlbConnAddr() { this->slbConnAddr_ = nullptr;};
      inline const vector<SlbConnAddrs::SlbConnAddr> & getSlbConnAddr() const { DARABONBA_PTR_GET_CONST(slbConnAddr_, vector<SlbConnAddrs::SlbConnAddr>) };
      inline vector<SlbConnAddrs::SlbConnAddr> getSlbConnAddr() { DARABONBA_PTR_GET(slbConnAddr_, vector<SlbConnAddrs::SlbConnAddr>) };
      inline SlbConnAddrs& setSlbConnAddr(const vector<SlbConnAddrs::SlbConnAddr> & slbConnAddr) { DARABONBA_PTR_SET_VALUE(slbConnAddr_, slbConnAddr) };
      inline SlbConnAddrs& setSlbConnAddr(vector<SlbConnAddrs::SlbConnAddr> && slbConnAddr) { DARABONBA_PTR_SET_RVALUE(slbConnAddr_, slbConnAddr) };


    protected:
      shared_ptr<vector<SlbConnAddrs::SlbConnAddr>> slbConnAddr_ {};
    };

    class ServiceConnAddrs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceConnAddrs& obj) { 
        DARABONBA_PTR_TO_JSON(ServiceConnAddr, serviceConnAddr_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceConnAddrs& obj) { 
        DARABONBA_PTR_FROM_JSON(ServiceConnAddr, serviceConnAddr_);
      };
      ServiceConnAddrs() = default ;
      ServiceConnAddrs(const ServiceConnAddrs &) = default ;
      ServiceConnAddrs(ServiceConnAddrs &&) = default ;
      ServiceConnAddrs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceConnAddrs() = default ;
      ServiceConnAddrs& operator=(const ServiceConnAddrs &) = default ;
      ServiceConnAddrs& operator=(ServiceConnAddrs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ServiceConnAddr : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServiceConnAddr& obj) { 
          DARABONBA_PTR_TO_JSON(ConnAddrInfo, connAddrInfo_);
          DARABONBA_PTR_TO_JSON(ConnType, connType_);
        };
        friend void from_json(const Darabonba::Json& j, ServiceConnAddr& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnAddrInfo, connAddrInfo_);
          DARABONBA_PTR_FROM_JSON(ConnType, connType_);
        };
        ServiceConnAddr() = default ;
        ServiceConnAddr(const ServiceConnAddr &) = default ;
        ServiceConnAddr(ServiceConnAddr &&) = default ;
        ServiceConnAddr(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServiceConnAddr() = default ;
        ServiceConnAddr& operator=(const ServiceConnAddr &) = default ;
        ServiceConnAddr& operator=(ServiceConnAddr &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ConnAddrInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConnAddrInfo& obj) { 
            DARABONBA_PTR_TO_JSON(ConnAddr, connAddr_);
            DARABONBA_PTR_TO_JSON(ConnAddrPort, connAddrPort_);
            DARABONBA_PTR_TO_JSON(NetType, netType_);
          };
          friend void from_json(const Darabonba::Json& j, ConnAddrInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(ConnAddr, connAddr_);
            DARABONBA_PTR_FROM_JSON(ConnAddrPort, connAddrPort_);
            DARABONBA_PTR_FROM_JSON(NetType, netType_);
          };
          ConnAddrInfo() = default ;
          ConnAddrInfo(const ConnAddrInfo &) = default ;
          ConnAddrInfo(ConnAddrInfo &&) = default ;
          ConnAddrInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConnAddrInfo() = default ;
          ConnAddrInfo& operator=(const ConnAddrInfo &) = default ;
          ConnAddrInfo& operator=(ConnAddrInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->connAddr_ == nullptr
        && this->connAddrPort_ == nullptr && this->netType_ == nullptr; };
          // connAddr Field Functions 
          bool hasConnAddr() const { return this->connAddr_ != nullptr;};
          void deleteConnAddr() { this->connAddr_ = nullptr;};
          inline string getConnAddr() const { DARABONBA_PTR_GET_DEFAULT(connAddr_, "") };
          inline ConnAddrInfo& setConnAddr(string connAddr) { DARABONBA_PTR_SET_VALUE(connAddr_, connAddr) };


          // connAddrPort Field Functions 
          bool hasConnAddrPort() const { return this->connAddrPort_ != nullptr;};
          void deleteConnAddrPort() { this->connAddrPort_ = nullptr;};
          inline string getConnAddrPort() const { DARABONBA_PTR_GET_DEFAULT(connAddrPort_, "") };
          inline ConnAddrInfo& setConnAddrPort(string connAddrPort) { DARABONBA_PTR_SET_VALUE(connAddrPort_, connAddrPort) };


          // netType Field Functions 
          bool hasNetType() const { return this->netType_ != nullptr;};
          void deleteNetType() { this->netType_ = nullptr;};
          inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
          inline ConnAddrInfo& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        protected:
          shared_ptr<string> connAddr_ {};
          shared_ptr<string> connAddrPort_ {};
          shared_ptr<string> netType_ {};
        };

        virtual bool empty() const override { return this->connAddrInfo_ == nullptr
        && this->connType_ == nullptr; };
        // connAddrInfo Field Functions 
        bool hasConnAddrInfo() const { return this->connAddrInfo_ != nullptr;};
        void deleteConnAddrInfo() { this->connAddrInfo_ = nullptr;};
        inline const ServiceConnAddr::ConnAddrInfo & getConnAddrInfo() const { DARABONBA_PTR_GET_CONST(connAddrInfo_, ServiceConnAddr::ConnAddrInfo) };
        inline ServiceConnAddr::ConnAddrInfo getConnAddrInfo() { DARABONBA_PTR_GET(connAddrInfo_, ServiceConnAddr::ConnAddrInfo) };
        inline ServiceConnAddr& setConnAddrInfo(const ServiceConnAddr::ConnAddrInfo & connAddrInfo) { DARABONBA_PTR_SET_VALUE(connAddrInfo_, connAddrInfo) };
        inline ServiceConnAddr& setConnAddrInfo(ServiceConnAddr::ConnAddrInfo && connAddrInfo) { DARABONBA_PTR_SET_RVALUE(connAddrInfo_, connAddrInfo) };


        // connType Field Functions 
        bool hasConnType() const { return this->connType_ != nullptr;};
        void deleteConnType() { this->connType_ = nullptr;};
        inline string getConnType() const { DARABONBA_PTR_GET_DEFAULT(connType_, "") };
        inline ServiceConnAddr& setConnType(string connType) { DARABONBA_PTR_SET_VALUE(connType_, connType) };


      protected:
        shared_ptr<ServiceConnAddr::ConnAddrInfo> connAddrInfo_ {};
        shared_ptr<string> connType_ {};
      };

      virtual bool empty() const override { return this->serviceConnAddr_ == nullptr; };
      // serviceConnAddr Field Functions 
      bool hasServiceConnAddr() const { return this->serviceConnAddr_ != nullptr;};
      void deleteServiceConnAddr() { this->serviceConnAddr_ = nullptr;};
      inline const vector<ServiceConnAddrs::ServiceConnAddr> & getServiceConnAddr() const { DARABONBA_PTR_GET_CONST(serviceConnAddr_, vector<ServiceConnAddrs::ServiceConnAddr>) };
      inline vector<ServiceConnAddrs::ServiceConnAddr> getServiceConnAddr() { DARABONBA_PTR_GET(serviceConnAddr_, vector<ServiceConnAddrs::ServiceConnAddr>) };
      inline ServiceConnAddrs& setServiceConnAddr(const vector<ServiceConnAddrs::ServiceConnAddr> & serviceConnAddr) { DARABONBA_PTR_SET_VALUE(serviceConnAddr_, serviceConnAddr) };
      inline ServiceConnAddrs& setServiceConnAddr(vector<ServiceConnAddrs::ServiceConnAddr> && serviceConnAddr) { DARABONBA_PTR_SET_RVALUE(serviceConnAddr_, serviceConnAddr) };


    protected:
      shared_ptr<vector<ServiceConnAddrs::ServiceConnAddr>> serviceConnAddr_ {};
    };

    virtual bool empty() const override { return this->dbType_ == nullptr
        && this->isMultimod_ == nullptr && this->netType_ == nullptr && this->requestId_ == nullptr && this->serviceConnAddrs_ == nullptr && this->slbConnAddrs_ == nullptr
        && this->thriftConn_ == nullptr && this->uiProxyConnAddrInfo_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zkConnAddrs_ == nullptr; };
    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DescribeClusterConnectionResponseBody& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // isMultimod Field Functions 
    bool hasIsMultimod() const { return this->isMultimod_ != nullptr;};
    void deleteIsMultimod() { this->isMultimod_ = nullptr;};
    inline string getIsMultimod() const { DARABONBA_PTR_GET_DEFAULT(isMultimod_, "") };
    inline DescribeClusterConnectionResponseBody& setIsMultimod(string isMultimod) { DARABONBA_PTR_SET_VALUE(isMultimod_, isMultimod) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DescribeClusterConnectionResponseBody& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceConnAddrs Field Functions 
    bool hasServiceConnAddrs() const { return this->serviceConnAddrs_ != nullptr;};
    void deleteServiceConnAddrs() { this->serviceConnAddrs_ = nullptr;};
    inline const DescribeClusterConnectionResponseBody::ServiceConnAddrs & getServiceConnAddrs() const { DARABONBA_PTR_GET_CONST(serviceConnAddrs_, DescribeClusterConnectionResponseBody::ServiceConnAddrs) };
    inline DescribeClusterConnectionResponseBody::ServiceConnAddrs getServiceConnAddrs() { DARABONBA_PTR_GET(serviceConnAddrs_, DescribeClusterConnectionResponseBody::ServiceConnAddrs) };
    inline DescribeClusterConnectionResponseBody& setServiceConnAddrs(const DescribeClusterConnectionResponseBody::ServiceConnAddrs & serviceConnAddrs) { DARABONBA_PTR_SET_VALUE(serviceConnAddrs_, serviceConnAddrs) };
    inline DescribeClusterConnectionResponseBody& setServiceConnAddrs(DescribeClusterConnectionResponseBody::ServiceConnAddrs && serviceConnAddrs) { DARABONBA_PTR_SET_RVALUE(serviceConnAddrs_, serviceConnAddrs) };


    // slbConnAddrs Field Functions 
    bool hasSlbConnAddrs() const { return this->slbConnAddrs_ != nullptr;};
    void deleteSlbConnAddrs() { this->slbConnAddrs_ = nullptr;};
    inline const DescribeClusterConnectionResponseBody::SlbConnAddrs & getSlbConnAddrs() const { DARABONBA_PTR_GET_CONST(slbConnAddrs_, DescribeClusterConnectionResponseBody::SlbConnAddrs) };
    inline DescribeClusterConnectionResponseBody::SlbConnAddrs getSlbConnAddrs() { DARABONBA_PTR_GET(slbConnAddrs_, DescribeClusterConnectionResponseBody::SlbConnAddrs) };
    inline DescribeClusterConnectionResponseBody& setSlbConnAddrs(const DescribeClusterConnectionResponseBody::SlbConnAddrs & slbConnAddrs) { DARABONBA_PTR_SET_VALUE(slbConnAddrs_, slbConnAddrs) };
    inline DescribeClusterConnectionResponseBody& setSlbConnAddrs(DescribeClusterConnectionResponseBody::SlbConnAddrs && slbConnAddrs) { DARABONBA_PTR_SET_RVALUE(slbConnAddrs_, slbConnAddrs) };


    // thriftConn Field Functions 
    bool hasThriftConn() const { return this->thriftConn_ != nullptr;};
    void deleteThriftConn() { this->thriftConn_ = nullptr;};
    inline const DescribeClusterConnectionResponseBody::ThriftConn & getThriftConn() const { DARABONBA_PTR_GET_CONST(thriftConn_, DescribeClusterConnectionResponseBody::ThriftConn) };
    inline DescribeClusterConnectionResponseBody::ThriftConn getThriftConn() { DARABONBA_PTR_GET(thriftConn_, DescribeClusterConnectionResponseBody::ThriftConn) };
    inline DescribeClusterConnectionResponseBody& setThriftConn(const DescribeClusterConnectionResponseBody::ThriftConn & thriftConn) { DARABONBA_PTR_SET_VALUE(thriftConn_, thriftConn) };
    inline DescribeClusterConnectionResponseBody& setThriftConn(DescribeClusterConnectionResponseBody::ThriftConn && thriftConn) { DARABONBA_PTR_SET_RVALUE(thriftConn_, thriftConn) };


    // uiProxyConnAddrInfo Field Functions 
    bool hasUiProxyConnAddrInfo() const { return this->uiProxyConnAddrInfo_ != nullptr;};
    void deleteUiProxyConnAddrInfo() { this->uiProxyConnAddrInfo_ = nullptr;};
    inline const DescribeClusterConnectionResponseBody::UiProxyConnAddrInfo & getUiProxyConnAddrInfo() const { DARABONBA_PTR_GET_CONST(uiProxyConnAddrInfo_, DescribeClusterConnectionResponseBody::UiProxyConnAddrInfo) };
    inline DescribeClusterConnectionResponseBody::UiProxyConnAddrInfo getUiProxyConnAddrInfo() { DARABONBA_PTR_GET(uiProxyConnAddrInfo_, DescribeClusterConnectionResponseBody::UiProxyConnAddrInfo) };
    inline DescribeClusterConnectionResponseBody& setUiProxyConnAddrInfo(const DescribeClusterConnectionResponseBody::UiProxyConnAddrInfo & uiProxyConnAddrInfo) { DARABONBA_PTR_SET_VALUE(uiProxyConnAddrInfo_, uiProxyConnAddrInfo) };
    inline DescribeClusterConnectionResponseBody& setUiProxyConnAddrInfo(DescribeClusterConnectionResponseBody::UiProxyConnAddrInfo && uiProxyConnAddrInfo) { DARABONBA_PTR_SET_RVALUE(uiProxyConnAddrInfo_, uiProxyConnAddrInfo) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeClusterConnectionResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeClusterConnectionResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zkConnAddrs Field Functions 
    bool hasZkConnAddrs() const { return this->zkConnAddrs_ != nullptr;};
    void deleteZkConnAddrs() { this->zkConnAddrs_ = nullptr;};
    inline const DescribeClusterConnectionResponseBody::ZkConnAddrs & getZkConnAddrs() const { DARABONBA_PTR_GET_CONST(zkConnAddrs_, DescribeClusterConnectionResponseBody::ZkConnAddrs) };
    inline DescribeClusterConnectionResponseBody::ZkConnAddrs getZkConnAddrs() { DARABONBA_PTR_GET(zkConnAddrs_, DescribeClusterConnectionResponseBody::ZkConnAddrs) };
    inline DescribeClusterConnectionResponseBody& setZkConnAddrs(const DescribeClusterConnectionResponseBody::ZkConnAddrs & zkConnAddrs) { DARABONBA_PTR_SET_VALUE(zkConnAddrs_, zkConnAddrs) };
    inline DescribeClusterConnectionResponseBody& setZkConnAddrs(DescribeClusterConnectionResponseBody::ZkConnAddrs && zkConnAddrs) { DARABONBA_PTR_SET_RVALUE(zkConnAddrs_, zkConnAddrs) };


  protected:
    // The database engine type. Valid values:
    // 
    // - **hbaseue**: ApsaraDB for HBase Performance-enhanced Edition.
    // - **hbase**: ApsaraDB for HBase Standard Edition or ApsaraDB for HBase single-node edition.
    // - **bds**: a BDS instance.
    shared_ptr<string> dbType_ {};
    // Indicates whether multi-model management is enabled. Valid values:
    // 
    // - **true**: Multi-model management is enabled.
    // - **false**: Multi-model management is not enabled.
    shared_ptr<string> isMultimod_ {};
    // The network type of the instance. Valid values:
    // 
    // - **VPC**: Virtual Private Cloud (VPC).
    // - **CLASSIC**: classic network.
    shared_ptr<string> netType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeClusterConnectionResponseBody::ServiceConnAddrs> serviceConnAddrs_ {};
    shared_ptr<DescribeClusterConnectionResponseBody::SlbConnAddrs> slbConnAddrs_ {};
    // The Thrift endpoint information list.
    // 
    // > This parameter list is returned only when the database DPI engine type is **hbase**.
    shared_ptr<DescribeClusterConnectionResponseBody::ThriftConn> thriftConn_ {};
    // The WebUI connection information list.
    shared_ptr<DescribeClusterConnectionResponseBody::UiProxyConnAddrInfo> uiProxyConnAddrInfo_ {};
    // The vSwitch ID in the VPC.
    shared_ptr<string> vSwitchId_ {};
    // The VPC ID.
    shared_ptr<string> vpcId_ {};
    shared_ptr<DescribeClusterConnectionResponseBody::ZkConnAddrs> zkConnAddrs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
