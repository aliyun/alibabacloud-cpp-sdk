// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTPROBERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTPROBERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneypotProbeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotProbeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotProbeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetHoneypotProbeResponseBody() = default ;
    GetHoneypotProbeResponseBody(const GetHoneypotProbeResponseBody &) = default ;
    GetHoneypotProbeResponseBody(GetHoneypotProbeResponseBody &&) = default ;
    GetHoneypotProbeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotProbeResponseBody() = default ;
    GetHoneypotProbeResponseBody& operator=(const GetHoneypotProbeResponseBody &) = default ;
    GetHoneypotProbeResponseBody& operator=(GetHoneypotProbeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Arp, arp_);
        DARABONBA_PTR_TO_JSON(CanListenIpList, canListenIpList_);
        DARABONBA_PTR_TO_JSON(CidrList, cidrList_);
        DARABONBA_PTR_TO_JSON(ControlNode, controlNode_);
        DARABONBA_PTR_TO_JSON(CpuLoad, cpuLoad_);
        DARABONBA_PTR_TO_JSON(DeployTime, deployTime_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(HoneyPotProbeScanPort, honeyPotProbeScanPort_);
        DARABONBA_PTR_TO_JSON(HoneypotProbeBindList, honeypotProbeBindList_);
        DARABONBA_PTR_TO_JSON(HostIp, hostIp_);
        DARABONBA_PTR_TO_JSON(ListenIpList, listenIpList_);
        DARABONBA_PTR_TO_JSON(MemoryLoad, memoryLoad_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(Ping, ping_);
        DARABONBA_PTR_TO_JSON(ProbeId, probeId_);
        DARABONBA_PTR_TO_JSON(ProbeType, probeType_);
        DARABONBA_PTR_TO_JSON(ProbeVersion, probeVersion_);
        DARABONBA_PTR_TO_JSON(ProxyIp, proxyIp_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Arp, arp_);
        DARABONBA_PTR_FROM_JSON(CanListenIpList, canListenIpList_);
        DARABONBA_PTR_FROM_JSON(CidrList, cidrList_);
        DARABONBA_PTR_FROM_JSON(ControlNode, controlNode_);
        DARABONBA_PTR_FROM_JSON(CpuLoad, cpuLoad_);
        DARABONBA_PTR_FROM_JSON(DeployTime, deployTime_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(HoneyPotProbeScanPort, honeyPotProbeScanPort_);
        DARABONBA_PTR_FROM_JSON(HoneypotProbeBindList, honeypotProbeBindList_);
        DARABONBA_PTR_FROM_JSON(HostIp, hostIp_);
        DARABONBA_PTR_FROM_JSON(ListenIpList, listenIpList_);
        DARABONBA_PTR_FROM_JSON(MemoryLoad, memoryLoad_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(Ping, ping_);
        DARABONBA_PTR_FROM_JSON(ProbeId, probeId_);
        DARABONBA_PTR_FROM_JSON(ProbeType, probeType_);
        DARABONBA_PTR_FROM_JSON(ProbeVersion, probeVersion_);
        DARABONBA_PTR_FROM_JSON(ProxyIp, proxyIp_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
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
      class HoneypotProbeBindList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HoneypotProbeBindList& obj) { 
          DARABONBA_PTR_TO_JSON(BindId, bindId_);
          DARABONBA_PTR_TO_JSON(BindPortList, bindPortList_);
          DARABONBA_PTR_TO_JSON(HoneypotId, honeypotId_);
          DARABONBA_PTR_TO_JSON(ServiceIpList, serviceIpList_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, HoneypotProbeBindList& obj) { 
          DARABONBA_PTR_FROM_JSON(BindId, bindId_);
          DARABONBA_PTR_FROM_JSON(BindPortList, bindPortList_);
          DARABONBA_PTR_FROM_JSON(HoneypotId, honeypotId_);
          DARABONBA_PTR_FROM_JSON(ServiceIpList, serviceIpList_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        HoneypotProbeBindList() = default ;
        HoneypotProbeBindList(const HoneypotProbeBindList &) = default ;
        HoneypotProbeBindList(HoneypotProbeBindList &&) = default ;
        HoneypotProbeBindList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HoneypotProbeBindList() = default ;
        HoneypotProbeBindList& operator=(const HoneypotProbeBindList &) = default ;
        HoneypotProbeBindList& operator=(HoneypotProbeBindList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class BindPortList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BindPortList& obj) { 
            DARABONBA_PTR_TO_JSON(BindPort, bindPort_);
            DARABONBA_PTR_TO_JSON(EndPort, endPort_);
            DARABONBA_PTR_TO_JSON(Err, err_);
            DARABONBA_PTR_TO_JSON(Fixed, fixed_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Msg, msg_);
            DARABONBA_PTR_TO_JSON(Proto, proto_);
            DARABONBA_PTR_TO_JSON(StartPort, startPort_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
          };
          friend void from_json(const Darabonba::Json& j, BindPortList& obj) { 
            DARABONBA_PTR_FROM_JSON(BindPort, bindPort_);
            DARABONBA_PTR_FROM_JSON(EndPort, endPort_);
            DARABONBA_PTR_FROM_JSON(Err, err_);
            DARABONBA_PTR_FROM_JSON(Fixed, fixed_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Msg, msg_);
            DARABONBA_PTR_FROM_JSON(Proto, proto_);
            DARABONBA_PTR_FROM_JSON(StartPort, startPort_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
          };
          BindPortList() = default ;
          BindPortList(const BindPortList &) = default ;
          BindPortList(BindPortList &&) = default ;
          BindPortList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BindPortList() = default ;
          BindPortList& operator=(const BindPortList &) = default ;
          BindPortList& operator=(BindPortList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bindPort_ == nullptr
        && this->endPort_ == nullptr && this->err_ == nullptr && this->fixed_ == nullptr && this->id_ == nullptr && this->msg_ == nullptr
        && this->proto_ == nullptr && this->startPort_ == nullptr && this->status_ == nullptr && this->targetPort_ == nullptr; };
          // bindPort Field Functions 
          bool hasBindPort() const { return this->bindPort_ != nullptr;};
          void deleteBindPort() { this->bindPort_ = nullptr;};
          inline bool getBindPort() const { DARABONBA_PTR_GET_DEFAULT(bindPort_, false) };
          inline BindPortList& setBindPort(bool bindPort) { DARABONBA_PTR_SET_VALUE(bindPort_, bindPort) };


          // endPort Field Functions 
          bool hasEndPort() const { return this->endPort_ != nullptr;};
          void deleteEndPort() { this->endPort_ = nullptr;};
          inline int32_t getEndPort() const { DARABONBA_PTR_GET_DEFAULT(endPort_, 0) };
          inline BindPortList& setEndPort(int32_t endPort) { DARABONBA_PTR_SET_VALUE(endPort_, endPort) };


          // err Field Functions 
          bool hasErr() const { return this->err_ != nullptr;};
          void deleteErr() { this->err_ = nullptr;};
          inline string getErr() const { DARABONBA_PTR_GET_DEFAULT(err_, "") };
          inline BindPortList& setErr(string err) { DARABONBA_PTR_SET_VALUE(err_, err) };


          // fixed Field Functions 
          bool hasFixed() const { return this->fixed_ != nullptr;};
          void deleteFixed() { this->fixed_ = nullptr;};
          inline bool getFixed() const { DARABONBA_PTR_GET_DEFAULT(fixed_, false) };
          inline BindPortList& setFixed(bool fixed) { DARABONBA_PTR_SET_VALUE(fixed_, fixed) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline BindPortList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // msg Field Functions 
          bool hasMsg() const { return this->msg_ != nullptr;};
          void deleteMsg() { this->msg_ = nullptr;};
          inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
          inline BindPortList& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


          // proto Field Functions 
          bool hasProto() const { return this->proto_ != nullptr;};
          void deleteProto() { this->proto_ = nullptr;};
          inline string getProto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
          inline BindPortList& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


          // startPort Field Functions 
          bool hasStartPort() const { return this->startPort_ != nullptr;};
          void deleteStartPort() { this->startPort_ = nullptr;};
          inline int32_t getStartPort() const { DARABONBA_PTR_GET_DEFAULT(startPort_, 0) };
          inline BindPortList& setStartPort(int32_t startPort) { DARABONBA_PTR_SET_VALUE(startPort_, startPort) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline BindPortList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // targetPort Field Functions 
          bool hasTargetPort() const { return this->targetPort_ != nullptr;};
          void deleteTargetPort() { this->targetPort_ = nullptr;};
          inline int32_t getTargetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
          inline BindPortList& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


        protected:
          // Indicates whether the port is bound.
          shared_ptr<bool> bindPort_ {};
          // The end port on which the probe monitors.
          shared_ptr<int32_t> endPort_ {};
          // The error that is returned if an error occurred in the port of the honeypot that is bound to the probe.
          shared_ptr<string> err_ {};
          // Indicates whether the port is a fixed port.
          shared_ptr<bool> fixed_ {};
          // The unique ID of the port binding record.
          shared_ptr<int64_t> id_ {};
          // The error message that is returned if an error occurred in the port of the honeypot that is bound to the probe.
          shared_ptr<string> msg_ {};
          // The type of the protocol.
          shared_ptr<string> proto_ {};
          // The start port on which the probe monitors.
          shared_ptr<int32_t> startPort_ {};
          // The status of the port of the honeypot that is bound to the probe. Valid values:
          // 
          // *   **1**: abnormal
          // *   **3**: normal
          shared_ptr<int32_t> status_ {};
          // The destination port.
          shared_ptr<int32_t> targetPort_ {};
        };

        virtual bool empty() const override { return this->bindId_ == nullptr
        && this->bindPortList_ == nullptr && this->honeypotId_ == nullptr && this->serviceIpList_ == nullptr && this->status_ == nullptr; };
        // bindId Field Functions 
        bool hasBindId() const { return this->bindId_ != nullptr;};
        void deleteBindId() { this->bindId_ = nullptr;};
        inline string getBindId() const { DARABONBA_PTR_GET_DEFAULT(bindId_, "") };
        inline HoneypotProbeBindList& setBindId(string bindId) { DARABONBA_PTR_SET_VALUE(bindId_, bindId) };


        // bindPortList Field Functions 
        bool hasBindPortList() const { return this->bindPortList_ != nullptr;};
        void deleteBindPortList() { this->bindPortList_ = nullptr;};
        inline const vector<HoneypotProbeBindList::BindPortList> & getBindPortList() const { DARABONBA_PTR_GET_CONST(bindPortList_, vector<HoneypotProbeBindList::BindPortList>) };
        inline vector<HoneypotProbeBindList::BindPortList> getBindPortList() { DARABONBA_PTR_GET(bindPortList_, vector<HoneypotProbeBindList::BindPortList>) };
        inline HoneypotProbeBindList& setBindPortList(const vector<HoneypotProbeBindList::BindPortList> & bindPortList) { DARABONBA_PTR_SET_VALUE(bindPortList_, bindPortList) };
        inline HoneypotProbeBindList& setBindPortList(vector<HoneypotProbeBindList::BindPortList> && bindPortList) { DARABONBA_PTR_SET_RVALUE(bindPortList_, bindPortList) };


        // honeypotId Field Functions 
        bool hasHoneypotId() const { return this->honeypotId_ != nullptr;};
        void deleteHoneypotId() { this->honeypotId_ = nullptr;};
        inline string getHoneypotId() const { DARABONBA_PTR_GET_DEFAULT(honeypotId_, "") };
        inline HoneypotProbeBindList& setHoneypotId(string honeypotId) { DARABONBA_PTR_SET_VALUE(honeypotId_, honeypotId) };


        // serviceIpList Field Functions 
        bool hasServiceIpList() const { return this->serviceIpList_ != nullptr;};
        void deleteServiceIpList() { this->serviceIpList_ = nullptr;};
        inline const vector<string> & getServiceIpList() const { DARABONBA_PTR_GET_CONST(serviceIpList_, vector<string>) };
        inline vector<string> getServiceIpList() { DARABONBA_PTR_GET(serviceIpList_, vector<string>) };
        inline HoneypotProbeBindList& setServiceIpList(const vector<string> & serviceIpList) { DARABONBA_PTR_SET_VALUE(serviceIpList_, serviceIpList) };
        inline HoneypotProbeBindList& setServiceIpList(vector<string> && serviceIpList) { DARABONBA_PTR_SET_RVALUE(serviceIpList_, serviceIpList) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline HoneypotProbeBindList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The unique ID of the honeypot that is bound to the probe.
        shared_ptr<string> bindId_ {};
        // The ports that are bound to the probe.
        shared_ptr<vector<HoneypotProbeBindList::BindPortList>> bindPortList_ {};
        // The honeypot ID.
        shared_ptr<string> honeypotId_ {};
        // The IP addresses that are monitored.
        shared_ptr<vector<string>> serviceIpList_ {};
        // The status of the honeypot that is bound to the probe. Valid values:
        // 
        // *   **1**: abnormal
        // *   **3**: normal
        shared_ptr<int32_t> status_ {};
      };

      class HoneyPotProbeScanPort : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HoneyPotProbeScanPort& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Ports, ports_);
          DARABONBA_PTR_TO_JSON(ProbeId, probeId_);
          DARABONBA_PTR_TO_JSON(ServiceIpList, serviceIpList_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, HoneyPotProbeScanPort& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Ports, ports_);
          DARABONBA_PTR_FROM_JSON(ProbeId, probeId_);
          DARABONBA_PTR_FROM_JSON(ServiceIpList, serviceIpList_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        HoneyPotProbeScanPort() = default ;
        HoneyPotProbeScanPort(const HoneyPotProbeScanPort &) = default ;
        HoneyPotProbeScanPort(HoneyPotProbeScanPort &&) = default ;
        HoneyPotProbeScanPort(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HoneyPotProbeScanPort() = default ;
        HoneyPotProbeScanPort& operator=(const HoneyPotProbeScanPort &) = default ;
        HoneyPotProbeScanPort& operator=(HoneyPotProbeScanPort &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->ports_ == nullptr && this->probeId_ == nullptr && this->serviceIpList_ == nullptr && this->status_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline HoneyPotProbeScanPort& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // ports Field Functions 
        bool hasPorts() const { return this->ports_ != nullptr;};
        void deletePorts() { this->ports_ = nullptr;};
        inline string getPorts() const { DARABONBA_PTR_GET_DEFAULT(ports_, "") };
        inline HoneyPotProbeScanPort& setPorts(string ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };


        // probeId Field Functions 
        bool hasProbeId() const { return this->probeId_ != nullptr;};
        void deleteProbeId() { this->probeId_ = nullptr;};
        inline string getProbeId() const { DARABONBA_PTR_GET_DEFAULT(probeId_, "") };
        inline HoneyPotProbeScanPort& setProbeId(string probeId) { DARABONBA_PTR_SET_VALUE(probeId_, probeId) };


        // serviceIpList Field Functions 
        bool hasServiceIpList() const { return this->serviceIpList_ != nullptr;};
        void deleteServiceIpList() { this->serviceIpList_ = nullptr;};
        inline const vector<string> & getServiceIpList() const { DARABONBA_PTR_GET_CONST(serviceIpList_, vector<string>) };
        inline vector<string> getServiceIpList() { DARABONBA_PTR_GET(serviceIpList_, vector<string>) };
        inline HoneyPotProbeScanPort& setServiceIpList(const vector<string> & serviceIpList) { DARABONBA_PTR_SET_VALUE(serviceIpList_, serviceIpList) };
        inline HoneyPotProbeScanPort& setServiceIpList(vector<string> && serviceIpList) { DARABONBA_PTR_SET_RVALUE(serviceIpList_, serviceIpList) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline HoneyPotProbeScanPort& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The unique ID of the service that is monitored.
        shared_ptr<int64_t> id_ {};
        // The ports that are monitored.
        shared_ptr<string> ports_ {};
        // The ID of the probe.
        shared_ptr<string> probeId_ {};
        // The IP addresses that are monitored.
        shared_ptr<vector<string>> serviceIpList_ {};
        // The monitoring status. Valid values:
        // 
        // *   **1**: abnormal
        // *   **3**: normal
        shared_ptr<int32_t> status_ {};
      };

      class ControlNode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ControlNode& obj) { 
          DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        };
        friend void from_json(const Darabonba::Json& j, ControlNode& obj) { 
          DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        };
        ControlNode() = default ;
        ControlNode(const ControlNode &) = default ;
        ControlNode(ControlNode &&) = default ;
        ControlNode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ControlNode() = default ;
        ControlNode& operator=(const ControlNode &) = default ;
        ControlNode& operator=(ControlNode &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ecsInstanceId_ == nullptr
        && this->nodeId_ == nullptr && this->nodeName_ == nullptr; };
        // ecsInstanceId Field Functions 
        bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
        void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
        inline string getEcsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
        inline ControlNode& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline ControlNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline ControlNode& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      protected:
        // The instance ID of the management node.
        shared_ptr<string> ecsInstanceId_ {};
        // The ID of the management node.
        shared_ptr<string> nodeId_ {};
        // The name of the management node.
        shared_ptr<string> nodeName_ {};
      };

      virtual bool empty() const override { return this->arp_ == nullptr
        && this->canListenIpList_ == nullptr && this->cidrList_ == nullptr && this->controlNode_ == nullptr && this->cpuLoad_ == nullptr && this->deployTime_ == nullptr
        && this->displayName_ == nullptr && this->honeyPotProbeScanPort_ == nullptr && this->honeypotProbeBindList_ == nullptr && this->hostIp_ == nullptr && this->listenIpList_ == nullptr
        && this->memoryLoad_ == nullptr && this->osType_ == nullptr && this->ping_ == nullptr && this->probeId_ == nullptr && this->probeType_ == nullptr
        && this->probeVersion_ == nullptr && this->proxyIp_ == nullptr && this->status_ == nullptr && this->uuid_ == nullptr && this->vpcId_ == nullptr; };
      // arp Field Functions 
      bool hasArp() const { return this->arp_ != nullptr;};
      void deleteArp() { this->arp_ = nullptr;};
      inline bool getArp() const { DARABONBA_PTR_GET_DEFAULT(arp_, false) };
      inline Data& setArp(bool arp) { DARABONBA_PTR_SET_VALUE(arp_, arp) };


      // canListenIpList Field Functions 
      bool hasCanListenIpList() const { return this->canListenIpList_ != nullptr;};
      void deleteCanListenIpList() { this->canListenIpList_ = nullptr;};
      inline const vector<string> & getCanListenIpList() const { DARABONBA_PTR_GET_CONST(canListenIpList_, vector<string>) };
      inline vector<string> getCanListenIpList() { DARABONBA_PTR_GET(canListenIpList_, vector<string>) };
      inline Data& setCanListenIpList(const vector<string> & canListenIpList) { DARABONBA_PTR_SET_VALUE(canListenIpList_, canListenIpList) };
      inline Data& setCanListenIpList(vector<string> && canListenIpList) { DARABONBA_PTR_SET_RVALUE(canListenIpList_, canListenIpList) };


      // cidrList Field Functions 
      bool hasCidrList() const { return this->cidrList_ != nullptr;};
      void deleteCidrList() { this->cidrList_ = nullptr;};
      inline const vector<string> & getCidrList() const { DARABONBA_PTR_GET_CONST(cidrList_, vector<string>) };
      inline vector<string> getCidrList() { DARABONBA_PTR_GET(cidrList_, vector<string>) };
      inline Data& setCidrList(const vector<string> & cidrList) { DARABONBA_PTR_SET_VALUE(cidrList_, cidrList) };
      inline Data& setCidrList(vector<string> && cidrList) { DARABONBA_PTR_SET_RVALUE(cidrList_, cidrList) };


      // controlNode Field Functions 
      bool hasControlNode() const { return this->controlNode_ != nullptr;};
      void deleteControlNode() { this->controlNode_ = nullptr;};
      inline const Data::ControlNode & getControlNode() const { DARABONBA_PTR_GET_CONST(controlNode_, Data::ControlNode) };
      inline Data::ControlNode getControlNode() { DARABONBA_PTR_GET(controlNode_, Data::ControlNode) };
      inline Data& setControlNode(const Data::ControlNode & controlNode) { DARABONBA_PTR_SET_VALUE(controlNode_, controlNode) };
      inline Data& setControlNode(Data::ControlNode && controlNode) { DARABONBA_PTR_SET_RVALUE(controlNode_, controlNode) };


      // cpuLoad Field Functions 
      bool hasCpuLoad() const { return this->cpuLoad_ != nullptr;};
      void deleteCpuLoad() { this->cpuLoad_ = nullptr;};
      inline double getCpuLoad() const { DARABONBA_PTR_GET_DEFAULT(cpuLoad_, 0.0) };
      inline Data& setCpuLoad(double cpuLoad) { DARABONBA_PTR_SET_VALUE(cpuLoad_, cpuLoad) };


      // deployTime Field Functions 
      bool hasDeployTime() const { return this->deployTime_ != nullptr;};
      void deleteDeployTime() { this->deployTime_ = nullptr;};
      inline int64_t getDeployTime() const { DARABONBA_PTR_GET_DEFAULT(deployTime_, 0L) };
      inline Data& setDeployTime(int64_t deployTime) { DARABONBA_PTR_SET_VALUE(deployTime_, deployTime) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Data& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // honeyPotProbeScanPort Field Functions 
      bool hasHoneyPotProbeScanPort() const { return this->honeyPotProbeScanPort_ != nullptr;};
      void deleteHoneyPotProbeScanPort() { this->honeyPotProbeScanPort_ = nullptr;};
      inline const Data::HoneyPotProbeScanPort & getHoneyPotProbeScanPort() const { DARABONBA_PTR_GET_CONST(honeyPotProbeScanPort_, Data::HoneyPotProbeScanPort) };
      inline Data::HoneyPotProbeScanPort getHoneyPotProbeScanPort() { DARABONBA_PTR_GET(honeyPotProbeScanPort_, Data::HoneyPotProbeScanPort) };
      inline Data& setHoneyPotProbeScanPort(const Data::HoneyPotProbeScanPort & honeyPotProbeScanPort) { DARABONBA_PTR_SET_VALUE(honeyPotProbeScanPort_, honeyPotProbeScanPort) };
      inline Data& setHoneyPotProbeScanPort(Data::HoneyPotProbeScanPort && honeyPotProbeScanPort) { DARABONBA_PTR_SET_RVALUE(honeyPotProbeScanPort_, honeyPotProbeScanPort) };


      // honeypotProbeBindList Field Functions 
      bool hasHoneypotProbeBindList() const { return this->honeypotProbeBindList_ != nullptr;};
      void deleteHoneypotProbeBindList() { this->honeypotProbeBindList_ = nullptr;};
      inline const vector<Data::HoneypotProbeBindList> & getHoneypotProbeBindList() const { DARABONBA_PTR_GET_CONST(honeypotProbeBindList_, vector<Data::HoneypotProbeBindList>) };
      inline vector<Data::HoneypotProbeBindList> getHoneypotProbeBindList() { DARABONBA_PTR_GET(honeypotProbeBindList_, vector<Data::HoneypotProbeBindList>) };
      inline Data& setHoneypotProbeBindList(const vector<Data::HoneypotProbeBindList> & honeypotProbeBindList) { DARABONBA_PTR_SET_VALUE(honeypotProbeBindList_, honeypotProbeBindList) };
      inline Data& setHoneypotProbeBindList(vector<Data::HoneypotProbeBindList> && honeypotProbeBindList) { DARABONBA_PTR_SET_RVALUE(honeypotProbeBindList_, honeypotProbeBindList) };


      // hostIp Field Functions 
      bool hasHostIp() const { return this->hostIp_ != nullptr;};
      void deleteHostIp() { this->hostIp_ = nullptr;};
      inline string getHostIp() const { DARABONBA_PTR_GET_DEFAULT(hostIp_, "") };
      inline Data& setHostIp(string hostIp) { DARABONBA_PTR_SET_VALUE(hostIp_, hostIp) };


      // listenIpList Field Functions 
      bool hasListenIpList() const { return this->listenIpList_ != nullptr;};
      void deleteListenIpList() { this->listenIpList_ = nullptr;};
      inline const vector<string> & getListenIpList() const { DARABONBA_PTR_GET_CONST(listenIpList_, vector<string>) };
      inline vector<string> getListenIpList() { DARABONBA_PTR_GET(listenIpList_, vector<string>) };
      inline Data& setListenIpList(const vector<string> & listenIpList) { DARABONBA_PTR_SET_VALUE(listenIpList_, listenIpList) };
      inline Data& setListenIpList(vector<string> && listenIpList) { DARABONBA_PTR_SET_RVALUE(listenIpList_, listenIpList) };


      // memoryLoad Field Functions 
      bool hasMemoryLoad() const { return this->memoryLoad_ != nullptr;};
      void deleteMemoryLoad() { this->memoryLoad_ = nullptr;};
      inline double getMemoryLoad() const { DARABONBA_PTR_GET_DEFAULT(memoryLoad_, 0.0) };
      inline Data& setMemoryLoad(double memoryLoad) { DARABONBA_PTR_SET_VALUE(memoryLoad_, memoryLoad) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Data& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // ping Field Functions 
      bool hasPing() const { return this->ping_ != nullptr;};
      void deletePing() { this->ping_ = nullptr;};
      inline bool getPing() const { DARABONBA_PTR_GET_DEFAULT(ping_, false) };
      inline Data& setPing(bool ping) { DARABONBA_PTR_SET_VALUE(ping_, ping) };


      // probeId Field Functions 
      bool hasProbeId() const { return this->probeId_ != nullptr;};
      void deleteProbeId() { this->probeId_ = nullptr;};
      inline string getProbeId() const { DARABONBA_PTR_GET_DEFAULT(probeId_, "") };
      inline Data& setProbeId(string probeId) { DARABONBA_PTR_SET_VALUE(probeId_, probeId) };


      // probeType Field Functions 
      bool hasProbeType() const { return this->probeType_ != nullptr;};
      void deleteProbeType() { this->probeType_ = nullptr;};
      inline string getProbeType() const { DARABONBA_PTR_GET_DEFAULT(probeType_, "") };
      inline Data& setProbeType(string probeType) { DARABONBA_PTR_SET_VALUE(probeType_, probeType) };


      // probeVersion Field Functions 
      bool hasProbeVersion() const { return this->probeVersion_ != nullptr;};
      void deleteProbeVersion() { this->probeVersion_ = nullptr;};
      inline string getProbeVersion() const { DARABONBA_PTR_GET_DEFAULT(probeVersion_, "") };
      inline Data& setProbeVersion(string probeVersion) { DARABONBA_PTR_SET_VALUE(probeVersion_, probeVersion) };


      // proxyIp Field Functions 
      bool hasProxyIp() const { return this->proxyIp_ != nullptr;};
      void deleteProxyIp() { this->proxyIp_ = nullptr;};
      inline string getProxyIp() const { DARABONBA_PTR_GET_DEFAULT(proxyIp_, "") };
      inline Data& setProxyIp(string proxyIp) { DARABONBA_PTR_SET_VALUE(proxyIp_, proxyIp) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // Indicates whether address resolution protocol (ARP) is enabled for the check type.
      shared_ptr<bool> arp_ {};
      // An array consisting of the IP addresses that can be monitored.
      shared_ptr<vector<string>> canListenIpList_ {};
      // The CIDR blocks of the probe deployed in a virtual private cloud (VPC).
      shared_ptr<vector<string>> cidrList_ {};
      // The information about the management node.
      shared_ptr<Data::ControlNode> controlNode_ {};
      // The CPU utilization.
      shared_ptr<double> cpuLoad_ {};
      // The time when the probe was deployed.
      shared_ptr<int64_t> deployTime_ {};
      // The name of the probe.
      shared_ptr<string> displayName_ {};
      // The ports that the honeypot monitors.
      shared_ptr<Data::HoneyPotProbeScanPort> honeyPotProbeScanPort_ {};
      // The honeypots that are bound to the probe.
      shared_ptr<vector<Data::HoneypotProbeBindList>> honeypotProbeBindList_ {};
      // The IP address of the server on which the probe is deployed.
      shared_ptr<string> hostIp_ {};
      // An array consisting of the IP addresses that can be monitored.
      shared_ptr<vector<string>> listenIpList_ {};
      // The memory usage.
      shared_ptr<double> memoryLoad_ {};
      // The operating system of the server on which the probe is deployed. Valid values:
      // 
      // *   windows
      // *   linux
      shared_ptr<string> osType_ {};
      // Indicates whether ping is enabled for the check type.
      shared_ptr<bool> ping_ {};
      // The ID of the probe.
      shared_ptr<string> probeId_ {};
      // The type of the probe. Valid values:
      // 
      // *   **host_probe**: host probe
      // *   **vpc_black_hole_probe**: virtual private cloud (VPC) probe
      shared_ptr<string> probeType_ {};
      // The version of the probe.
      shared_ptr<string> probeVersion_ {};
      // The IP address of the proxy server.
      shared_ptr<string> proxyIp_ {};
      // The status of the probe. Valid values:
      // 
      // *   **installed**: installed
      // *   **install_failed**: installation failed
      // *   **online**: online
      // *   **offline**: offline
      // *   **unnormal**: abnormal
      // *   **unprobe**: unauthorized
      // *   **uninstalling**: being uninstalled
      // *   **uninstalled**: uninstalled
      // *   **uninstall_failed**: uninstallation failed
      // *   **not_exist**: not installed
      shared_ptr<int32_t> status_ {};
      // The UUID of the asset on which the host probe is deployed.
      shared_ptr<string> uuid_ {};
      // The ID of the VPC in which the probe is deployed.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHoneypotProbeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHoneypotProbeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHoneypotProbeResponseBody::Data) };
    inline GetHoneypotProbeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHoneypotProbeResponseBody::Data) };
    inline GetHoneypotProbeResponseBody& setData(const GetHoneypotProbeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHoneypotProbeResponseBody& setData(GetHoneypotProbeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetHoneypotProbeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHoneypotProbeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHoneypotProbeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetHoneypotProbeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The information about the probe.
    shared_ptr<GetHoneypotProbeResponseBody::Data> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
