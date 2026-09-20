// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENDPOINTSRESPONSEBODY_HPP_
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
  class DescribeEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConnAddrs, connAddrs_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnAddrs, connAddrs_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeEndpointsResponseBody() = default ;
    DescribeEndpointsResponseBody(const DescribeEndpointsResponseBody &) = default ;
    DescribeEndpointsResponseBody(DescribeEndpointsResponseBody &&) = default ;
    DescribeEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEndpointsResponseBody() = default ;
    DescribeEndpointsResponseBody& operator=(const DescribeEndpointsResponseBody &) = default ;
    DescribeEndpointsResponseBody& operator=(DescribeEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConnAddrs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConnAddrs& obj) { 
        DARABONBA_PTR_TO_JSON(ConnAddrInfo, connAddrInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ConnAddrs& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnAddrInfo, connAddrInfo_);
      };
      ConnAddrs() = default ;
      ConnAddrs(const ConnAddrs &) = default ;
      ConnAddrs(ConnAddrs &&) = default ;
      ConnAddrs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConnAddrs() = default ;
      ConnAddrs& operator=(const ConnAddrs &) = default ;
      ConnAddrs& operator=(ConnAddrs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConnAddrInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConnAddrInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ConnAddr, connAddr_);
          DARABONBA_PTR_TO_JSON(ConnAddrPort, connAddrPort_);
          DARABONBA_PTR_TO_JSON(ConnType, connType_);
          DARABONBA_PTR_TO_JSON(NetType, netType_);
        };
        friend void from_json(const Darabonba::Json& j, ConnAddrInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnAddr, connAddr_);
          DARABONBA_PTR_FROM_JSON(ConnAddrPort, connAddrPort_);
          DARABONBA_PTR_FROM_JSON(ConnType, connType_);
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
        && this->connAddrPort_ == nullptr && this->connType_ == nullptr && this->netType_ == nullptr; };
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


        // connType Field Functions 
        bool hasConnType() const { return this->connType_ != nullptr;};
        void deleteConnType() { this->connType_ = nullptr;};
        inline string getConnType() const { DARABONBA_PTR_GET_DEFAULT(connType_, "") };
        inline ConnAddrInfo& setConnType(string connType) { DARABONBA_PTR_SET_VALUE(connType_, connType) };


        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline ConnAddrInfo& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


      protected:
        shared_ptr<string> connAddr_ {};
        shared_ptr<string> connAddrPort_ {};
        shared_ptr<string> connType_ {};
        shared_ptr<string> netType_ {};
      };

      virtual bool empty() const override { return this->connAddrInfo_ == nullptr; };
      // connAddrInfo Field Functions 
      bool hasConnAddrInfo() const { return this->connAddrInfo_ != nullptr;};
      void deleteConnAddrInfo() { this->connAddrInfo_ = nullptr;};
      inline const vector<ConnAddrs::ConnAddrInfo> & getConnAddrInfo() const { DARABONBA_PTR_GET_CONST(connAddrInfo_, vector<ConnAddrs::ConnAddrInfo>) };
      inline vector<ConnAddrs::ConnAddrInfo> getConnAddrInfo() { DARABONBA_PTR_GET(connAddrInfo_, vector<ConnAddrs::ConnAddrInfo>) };
      inline ConnAddrs& setConnAddrInfo(const vector<ConnAddrs::ConnAddrInfo> & connAddrInfo) { DARABONBA_PTR_SET_VALUE(connAddrInfo_, connAddrInfo) };
      inline ConnAddrs& setConnAddrInfo(vector<ConnAddrs::ConnAddrInfo> && connAddrInfo) { DARABONBA_PTR_SET_RVALUE(connAddrInfo_, connAddrInfo) };


    protected:
      shared_ptr<vector<ConnAddrs::ConnAddrInfo>> connAddrInfo_ {};
    };

    virtual bool empty() const override { return this->connAddrs_ == nullptr
        && this->engine_ == nullptr && this->netType_ == nullptr && this->requestId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // connAddrs Field Functions 
    bool hasConnAddrs() const { return this->connAddrs_ != nullptr;};
    void deleteConnAddrs() { this->connAddrs_ = nullptr;};
    inline const DescribeEndpointsResponseBody::ConnAddrs & getConnAddrs() const { DARABONBA_PTR_GET_CONST(connAddrs_, DescribeEndpointsResponseBody::ConnAddrs) };
    inline DescribeEndpointsResponseBody::ConnAddrs getConnAddrs() { DARABONBA_PTR_GET(connAddrs_, DescribeEndpointsResponseBody::ConnAddrs) };
    inline DescribeEndpointsResponseBody& setConnAddrs(const DescribeEndpointsResponseBody::ConnAddrs & connAddrs) { DARABONBA_PTR_SET_VALUE(connAddrs_, connAddrs) };
    inline DescribeEndpointsResponseBody& setConnAddrs(DescribeEndpointsResponseBody::ConnAddrs && connAddrs) { DARABONBA_PTR_SET_RVALUE(connAddrs_, connAddrs) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeEndpointsResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DescribeEndpointsResponseBody& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeEndpointsResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeEndpointsResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<DescribeEndpointsResponseBody::ConnAddrs> connAddrs_ {};
    // The engine type of the instance. Valid values:
    // 
    // - **hbaseue**
    // - **hbase**
    // - **spark**
    // - **geomesa**.
    shared_ptr<string> engine_ {};
    // The network type of the instance. Valid values:
    // - **VPC**: virtual private cloud.
    // - **CLASSIC**: classic network.
    shared_ptr<string> netType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The vSwitch ID. This parameter is returned only when NetType is set to **VPC**.
    shared_ptr<string> vSwitchId_ {};
    // The VPC ID. This parameter is returned only when NetType is set to **VPC**.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
