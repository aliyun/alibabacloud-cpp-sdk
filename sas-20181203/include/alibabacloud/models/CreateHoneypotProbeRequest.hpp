// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHONEYPOTPROBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHONEYPOTPROBEREQUEST_HPP_
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
  class CreateHoneypotProbeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHoneypotProbeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Arp, arp_);
      DARABONBA_PTR_TO_JSON(BusinessGroupId, businessGroupId_);
      DARABONBA_PTR_TO_JSON(ControlNodeId, controlNodeId_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(HoneypotBindList, honeypotBindList_);
      DARABONBA_PTR_TO_JSON(Ping, ping_);
      DARABONBA_PTR_TO_JSON(ProbeType, probeType_);
      DARABONBA_PTR_TO_JSON(ProbeVersion, probeVersion_);
      DARABONBA_PTR_TO_JSON(ProxyIp, proxyIp_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHoneypotProbeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Arp, arp_);
      DARABONBA_PTR_FROM_JSON(BusinessGroupId, businessGroupId_);
      DARABONBA_PTR_FROM_JSON(ControlNodeId, controlNodeId_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(HoneypotBindList, honeypotBindList_);
      DARABONBA_PTR_FROM_JSON(Ping, ping_);
      DARABONBA_PTR_FROM_JSON(ProbeType, probeType_);
      DARABONBA_PTR_FROM_JSON(ProbeVersion, probeVersion_);
      DARABONBA_PTR_FROM_JSON(ProxyIp, proxyIp_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateHoneypotProbeRequest() = default ;
    CreateHoneypotProbeRequest(const CreateHoneypotProbeRequest &) = default ;
    CreateHoneypotProbeRequest(CreateHoneypotProbeRequest &&) = default ;
    CreateHoneypotProbeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHoneypotProbeRequest() = default ;
    CreateHoneypotProbeRequest& operator=(const CreateHoneypotProbeRequest &) = default ;
    CreateHoneypotProbeRequest& operator=(CreateHoneypotProbeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HoneypotBindList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HoneypotBindList& obj) { 
        DARABONBA_PTR_TO_JSON(BindPortList, bindPortList_);
        DARABONBA_PTR_TO_JSON(HoneypotId, honeypotId_);
      };
      friend void from_json(const Darabonba::Json& j, HoneypotBindList& obj) { 
        DARABONBA_PTR_FROM_JSON(BindPortList, bindPortList_);
        DARABONBA_PTR_FROM_JSON(HoneypotId, honeypotId_);
      };
      HoneypotBindList() = default ;
      HoneypotBindList(const HoneypotBindList &) = default ;
      HoneypotBindList(HoneypotBindList &&) = default ;
      HoneypotBindList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HoneypotBindList() = default ;
      HoneypotBindList& operator=(const HoneypotBindList &) = default ;
      HoneypotBindList& operator=(HoneypotBindList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BindPortList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BindPortList& obj) { 
          DARABONBA_PTR_TO_JSON(BindPort, bindPort_);
          DARABONBA_PTR_TO_JSON(EndPort, endPort_);
          DARABONBA_PTR_TO_JSON(Fixed, fixed_);
          DARABONBA_PTR_TO_JSON(StartPort, startPort_);
          DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
        };
        friend void from_json(const Darabonba::Json& j, BindPortList& obj) { 
          DARABONBA_PTR_FROM_JSON(BindPort, bindPort_);
          DARABONBA_PTR_FROM_JSON(EndPort, endPort_);
          DARABONBA_PTR_FROM_JSON(Fixed, fixed_);
          DARABONBA_PTR_FROM_JSON(StartPort, startPort_);
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
        && this->endPort_ == nullptr && this->fixed_ == nullptr && this->startPort_ == nullptr && this->targetPort_ == nullptr; };
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


        // fixed Field Functions 
        bool hasFixed() const { return this->fixed_ != nullptr;};
        void deleteFixed() { this->fixed_ = nullptr;};
        inline bool getFixed() const { DARABONBA_PTR_GET_DEFAULT(fixed_, false) };
        inline BindPortList& setFixed(bool fixed) { DARABONBA_PTR_SET_VALUE(fixed_, fixed) };


        // startPort Field Functions 
        bool hasStartPort() const { return this->startPort_ != nullptr;};
        void deleteStartPort() { this->startPort_ = nullptr;};
        inline int32_t getStartPort() const { DARABONBA_PTR_GET_DEFAULT(startPort_, 0) };
        inline BindPortList& setStartPort(int32_t startPort) { DARABONBA_PTR_SET_VALUE(startPort_, startPort) };


        // targetPort Field Functions 
        bool hasTargetPort() const { return this->targetPort_ != nullptr;};
        void deleteTargetPort() { this->targetPort_ = nullptr;};
        inline int32_t getTargetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
        inline BindPortList& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


      protected:
        // Specifies whether to bind a port. Valid values:
        // 
        // *   **true**: yes
        // *   **false**: no
        shared_ptr<bool> bindPort_ {};
        // The end of the port range.
        shared_ptr<int32_t> endPort_ {};
        // Specifies whether the port is a fixed port. Valid values:
        // 
        // *   **0**: no
        // *   **1**: yes
        shared_ptr<bool> fixed_ {};
        // The start of the port range.
        shared_ptr<int32_t> startPort_ {};
        // The destination port.
        // 
        // > If **HoneypotId** is specified, this parameter is required.
        shared_ptr<int32_t> targetPort_ {};
      };

      virtual bool empty() const override { return this->bindPortList_ == nullptr
        && this->honeypotId_ == nullptr; };
      // bindPortList Field Functions 
      bool hasBindPortList() const { return this->bindPortList_ != nullptr;};
      void deleteBindPortList() { this->bindPortList_ = nullptr;};
      inline const vector<HoneypotBindList::BindPortList> & getBindPortList() const { DARABONBA_PTR_GET_CONST(bindPortList_, vector<HoneypotBindList::BindPortList>) };
      inline vector<HoneypotBindList::BindPortList> getBindPortList() { DARABONBA_PTR_GET(bindPortList_, vector<HoneypotBindList::BindPortList>) };
      inline HoneypotBindList& setBindPortList(const vector<HoneypotBindList::BindPortList> & bindPortList) { DARABONBA_PTR_SET_VALUE(bindPortList_, bindPortList) };
      inline HoneypotBindList& setBindPortList(vector<HoneypotBindList::BindPortList> && bindPortList) { DARABONBA_PTR_SET_RVALUE(bindPortList_, bindPortList) };


      // honeypotId Field Functions 
      bool hasHoneypotId() const { return this->honeypotId_ != nullptr;};
      void deleteHoneypotId() { this->honeypotId_ = nullptr;};
      inline string getHoneypotId() const { DARABONBA_PTR_GET_DEFAULT(honeypotId_, "") };
      inline HoneypotBindList& setHoneypotId(string honeypotId) { DARABONBA_PTR_SET_VALUE(honeypotId_, honeypotId) };


    protected:
      // The listener ports.
      shared_ptr<vector<HoneypotBindList::BindPortList>> bindPortList_ {};
      // The ID of the honeypot.
      // 
      // > You can call the [ListHoneypot](~~ListHoneypot~~) operation to query the IDs of honeypots.
      shared_ptr<string> honeypotId_ {};
    };

    virtual bool empty() const override { return this->arp_ == nullptr
        && this->businessGroupId_ == nullptr && this->controlNodeId_ == nullptr && this->displayName_ == nullptr && this->honeypotBindList_ == nullptr && this->ping_ == nullptr
        && this->probeType_ == nullptr && this->probeVersion_ == nullptr && this->proxyIp_ == nullptr && this->uuid_ == nullptr && this->vpcId_ == nullptr; };
    // arp Field Functions 
    bool hasArp() const { return this->arp_ != nullptr;};
    void deleteArp() { this->arp_ = nullptr;};
    inline bool getArp() const { DARABONBA_PTR_GET_DEFAULT(arp_, false) };
    inline CreateHoneypotProbeRequest& setArp(bool arp) { DARABONBA_PTR_SET_VALUE(arp_, arp) };


    // businessGroupId Field Functions 
    bool hasBusinessGroupId() const { return this->businessGroupId_ != nullptr;};
    void deleteBusinessGroupId() { this->businessGroupId_ = nullptr;};
    inline string getBusinessGroupId() const { DARABONBA_PTR_GET_DEFAULT(businessGroupId_, "") };
    inline CreateHoneypotProbeRequest& setBusinessGroupId(string businessGroupId) { DARABONBA_PTR_SET_VALUE(businessGroupId_, businessGroupId) };


    // controlNodeId Field Functions 
    bool hasControlNodeId() const { return this->controlNodeId_ != nullptr;};
    void deleteControlNodeId() { this->controlNodeId_ = nullptr;};
    inline string getControlNodeId() const { DARABONBA_PTR_GET_DEFAULT(controlNodeId_, "") };
    inline CreateHoneypotProbeRequest& setControlNodeId(string controlNodeId) { DARABONBA_PTR_SET_VALUE(controlNodeId_, controlNodeId) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateHoneypotProbeRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // honeypotBindList Field Functions 
    bool hasHoneypotBindList() const { return this->honeypotBindList_ != nullptr;};
    void deleteHoneypotBindList() { this->honeypotBindList_ = nullptr;};
    inline const vector<CreateHoneypotProbeRequest::HoneypotBindList> & getHoneypotBindList() const { DARABONBA_PTR_GET_CONST(honeypotBindList_, vector<CreateHoneypotProbeRequest::HoneypotBindList>) };
    inline vector<CreateHoneypotProbeRequest::HoneypotBindList> getHoneypotBindList() { DARABONBA_PTR_GET(honeypotBindList_, vector<CreateHoneypotProbeRequest::HoneypotBindList>) };
    inline CreateHoneypotProbeRequest& setHoneypotBindList(const vector<CreateHoneypotProbeRequest::HoneypotBindList> & honeypotBindList) { DARABONBA_PTR_SET_VALUE(honeypotBindList_, honeypotBindList) };
    inline CreateHoneypotProbeRequest& setHoneypotBindList(vector<CreateHoneypotProbeRequest::HoneypotBindList> && honeypotBindList) { DARABONBA_PTR_SET_RVALUE(honeypotBindList_, honeypotBindList) };


    // ping Field Functions 
    bool hasPing() const { return this->ping_ != nullptr;};
    void deletePing() { this->ping_ = nullptr;};
    inline bool getPing() const { DARABONBA_PTR_GET_DEFAULT(ping_, false) };
    inline CreateHoneypotProbeRequest& setPing(bool ping) { DARABONBA_PTR_SET_VALUE(ping_, ping) };


    // probeType Field Functions 
    bool hasProbeType() const { return this->probeType_ != nullptr;};
    void deleteProbeType() { this->probeType_ = nullptr;};
    inline string getProbeType() const { DARABONBA_PTR_GET_DEFAULT(probeType_, "") };
    inline CreateHoneypotProbeRequest& setProbeType(string probeType) { DARABONBA_PTR_SET_VALUE(probeType_, probeType) };


    // probeVersion Field Functions 
    bool hasProbeVersion() const { return this->probeVersion_ != nullptr;};
    void deleteProbeVersion() { this->probeVersion_ = nullptr;};
    inline string getProbeVersion() const { DARABONBA_PTR_GET_DEFAULT(probeVersion_, "") };
    inline CreateHoneypotProbeRequest& setProbeVersion(string probeVersion) { DARABONBA_PTR_SET_VALUE(probeVersion_, probeVersion) };


    // proxyIp Field Functions 
    bool hasProxyIp() const { return this->proxyIp_ != nullptr;};
    void deleteProxyIp() { this->proxyIp_ = nullptr;};
    inline string getProxyIp() const { DARABONBA_PTR_GET_DEFAULT(proxyIp_, "") };
    inline CreateHoneypotProbeRequest& setProxyIp(string proxyIp) { DARABONBA_PTR_SET_VALUE(proxyIp_, proxyIp) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline CreateHoneypotProbeRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateHoneypotProbeRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Specifies whether to enable Address Resolution Protocol (ARP) spoofing. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<bool> arp_ {};
    // The ID of the business group.
    shared_ptr<string> businessGroupId_ {};
    // The ID of the management node.
    // 
    // > You can call the [ListHoneypotNode](~~ListHoneypotNode~~) operation to query the IDs of management nodes.
    // 
    // This parameter is required.
    shared_ptr<string> controlNodeId_ {};
    // The name of the probe.
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // The configuration of the probe.
    shared_ptr<vector<CreateHoneypotProbeRequest::HoneypotBindList>> honeypotBindList_ {};
    // Specifies whether to enable ping scan. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<bool> ping_ {};
    // The type of the probe. Valid values:
    // 
    // *   **host_probe**: host probe
    // *   **vpc_black_hole_probe**: virtual private cloud (VPC) probe
    // 
    // This parameter is required.
    shared_ptr<string> probeType_ {};
    // The version of the probe.
    shared_ptr<string> probeVersion_ {};
    // The IP address of the proxy.
    shared_ptr<string> proxyIp_ {};
    // The UUID of the instance.
    // 
    // > If **ProbeType** is set to **host_probe**, this parameter is required.
    shared_ptr<string> uuid_ {};
    // The ID of the VPC.
    // 
    // > If **ProbeType** is set to **vpc_black_hole_probe**, this parameter is required. You can call the [DescribeVpcHoneyPotList](~~DescribeVpcHoneyPotList~~) operation to query the IDs of VPCs.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
