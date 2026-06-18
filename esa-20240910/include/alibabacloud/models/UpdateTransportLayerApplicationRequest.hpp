// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRANSPORTLAYERAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRANSPORTLAYERAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateTransportLayerApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTransportLayerApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(CrossBorderOptimization, crossBorderOptimization_);
      DARABONBA_PTR_TO_JSON(IpAccessRule, ipAccessRule_);
      DARABONBA_PTR_TO_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_TO_JSON(KeepAliveProtection, keepAliveProtection_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StaticIp, staticIp_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTransportLayerApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(CrossBorderOptimization, crossBorderOptimization_);
      DARABONBA_PTR_FROM_JSON(IpAccessRule, ipAccessRule_);
      DARABONBA_PTR_FROM_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_FROM_JSON(KeepAliveProtection, keepAliveProtection_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StaticIp, staticIp_);
    };
    UpdateTransportLayerApplicationRequest() = default ;
    UpdateTransportLayerApplicationRequest(const UpdateTransportLayerApplicationRequest &) = default ;
    UpdateTransportLayerApplicationRequest(UpdateTransportLayerApplicationRequest &&) = default ;
    UpdateTransportLayerApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTransportLayerApplicationRequest() = default ;
    UpdateTransportLayerApplicationRequest& operator=(const UpdateTransportLayerApplicationRequest &) = default ;
    UpdateTransportLayerApplicationRequest& operator=(UpdateTransportLayerApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(ClientIPPassThroughMode, clientIPPassThroughMode_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(EdgePort, edgePort_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientIPPassThroughMode, clientIPPassThroughMode_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(EdgePort, edgePort_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientIPPassThroughMode_ == nullptr
        && this->comment_ == nullptr && this->edgePort_ == nullptr && this->protocol_ == nullptr && this->source_ == nullptr && this->sourcePort_ == nullptr
        && this->sourceType_ == nullptr; };
      // clientIPPassThroughMode Field Functions 
      bool hasClientIPPassThroughMode() const { return this->clientIPPassThroughMode_ != nullptr;};
      void deleteClientIPPassThroughMode() { this->clientIPPassThroughMode_ = nullptr;};
      inline string getClientIPPassThroughMode() const { DARABONBA_PTR_GET_DEFAULT(clientIPPassThroughMode_, "") };
      inline Rules& setClientIPPassThroughMode(string clientIPPassThroughMode) { DARABONBA_PTR_SET_VALUE(clientIPPassThroughMode_, clientIPPassThroughMode) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Rules& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // edgePort Field Functions 
      bool hasEdgePort() const { return this->edgePort_ != nullptr;};
      void deleteEdgePort() { this->edgePort_ = nullptr;};
      inline string getEdgePort() const { DARABONBA_PTR_GET_DEFAULT(edgePort_, "") };
      inline Rules& setEdgePort(string edgePort) { DARABONBA_PTR_SET_VALUE(edgePort_, edgePort) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Rules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Rules& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourcePort Field Functions 
      bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
      void deleteSourcePort() { this->sourcePort_ = nullptr;};
      inline string getSourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, "") };
      inline Rules& setSourcePort(string sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Rules& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    protected:
      // Specifies the protocol for client IP pass-through. Valid values:
      // 
      // - **off**: Disables client IP pass-through.
      // 
      // - **PPv1**: PROXY Protocol v1. Supports client IP pass-through for the TCP protocol.
      // 
      // - **PPv2**: PROXY Protocol v2. Supports client IP pass-through for both TCP and UDP protocols.
      // 
      // - **SPP**: Simple Proxy Protocol. Supports client IP pass-through for the UDP protocol.
      shared_ptr<string> clientIPPassThroughMode_ {};
      // An optional comment for the forwarding rule.
      shared_ptr<string> comment_ {};
      // The edge port. The following formats are supported:
      // 
      // - A single port, for example, `80`.
      // 
      // - A port range, for example, `81-85`. This range includes ports 81, 82, 83, 84, and 85.
      // 
      // - A combination of ports and port ranges separated by commas, for example, `80,81-85,90`. This includes ports 80, 81, 82, 83, 84, 85, and 90.
      // 
      // - Edge ports cannot overlap within a single rule or across multiple rules.
      shared_ptr<string> edgePort_ {};
      // The forwarding protocol. Valid values:
      // 
      // - TCP: Transmission Control Protocol.
      // 
      // - UDP: User Datagram Protocol.
      shared_ptr<string> protocol_ {};
      // The source, which must correspond to the specified `SourceType`. For example, if `SourceType` is `ip`, this parameter must be an IP address.
      shared_ptr<string> source_ {};
      // The source port. The following formats are supported:
      // 
      // - A single port. When a single source port is used, any valid format can be used for the edge port.
      // 
      // - A port range. You can specify a port range for the source port only if the edge port is also a port range, and their sizes must match. For example, if `EdgePort` is `90-93`, you cannot set `SourcePort` to `81-85` because their sizes (4 and 5 ports, respectively) do not match.
      shared_ptr<string> sourcePort_ {};
      // The type of the source. Valid values:
      // 
      // - **ip**: An IP address.
      // 
      // - **domain**: A domain name.
      // 
      // - **OP**: An origin pool.
      // 
      // - **LB**: A load balancer.
      shared_ptr<string> sourceType_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->crossBorderOptimization_ == nullptr && this->ipAccessRule_ == nullptr && this->ipv6_ == nullptr && this->keepAliveProtection_ == nullptr && this->rules_ == nullptr
        && this->siteId_ == nullptr && this->staticIp_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline int64_t getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, 0L) };
    inline UpdateTransportLayerApplicationRequest& setApplicationId(int64_t applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // crossBorderOptimization Field Functions 
    bool hasCrossBorderOptimization() const { return this->crossBorderOptimization_ != nullptr;};
    void deleteCrossBorderOptimization() { this->crossBorderOptimization_ = nullptr;};
    inline string getCrossBorderOptimization() const { DARABONBA_PTR_GET_DEFAULT(crossBorderOptimization_, "") };
    inline UpdateTransportLayerApplicationRequest& setCrossBorderOptimization(string crossBorderOptimization) { DARABONBA_PTR_SET_VALUE(crossBorderOptimization_, crossBorderOptimization) };


    // ipAccessRule Field Functions 
    bool hasIpAccessRule() const { return this->ipAccessRule_ != nullptr;};
    void deleteIpAccessRule() { this->ipAccessRule_ = nullptr;};
    inline string getIpAccessRule() const { DARABONBA_PTR_GET_DEFAULT(ipAccessRule_, "") };
    inline UpdateTransportLayerApplicationRequest& setIpAccessRule(string ipAccessRule) { DARABONBA_PTR_SET_VALUE(ipAccessRule_, ipAccessRule) };


    // ipv6 Field Functions 
    bool hasIpv6() const { return this->ipv6_ != nullptr;};
    void deleteIpv6() { this->ipv6_ = nullptr;};
    inline string getIpv6() const { DARABONBA_PTR_GET_DEFAULT(ipv6_, "") };
    inline UpdateTransportLayerApplicationRequest& setIpv6(string ipv6) { DARABONBA_PTR_SET_VALUE(ipv6_, ipv6) };


    // keepAliveProtection Field Functions 
    bool hasKeepAliveProtection() const { return this->keepAliveProtection_ != nullptr;};
    void deleteKeepAliveProtection() { this->keepAliveProtection_ = nullptr;};
    inline string getKeepAliveProtection() const { DARABONBA_PTR_GET_DEFAULT(keepAliveProtection_, "") };
    inline UpdateTransportLayerApplicationRequest& setKeepAliveProtection(string keepAliveProtection) { DARABONBA_PTR_SET_VALUE(keepAliveProtection_, keepAliveProtection) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<UpdateTransportLayerApplicationRequest::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<UpdateTransportLayerApplicationRequest::Rules>) };
    inline vector<UpdateTransportLayerApplicationRequest::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<UpdateTransportLayerApplicationRequest::Rules>) };
    inline UpdateTransportLayerApplicationRequest& setRules(const vector<UpdateTransportLayerApplicationRequest::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline UpdateTransportLayerApplicationRequest& setRules(vector<UpdateTransportLayerApplicationRequest::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateTransportLayerApplicationRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // staticIp Field Functions 
    bool hasStaticIp() const { return this->staticIp_ != nullptr;};
    void deleteStaticIp() { this->staticIp_ = nullptr;};
    inline string getStaticIp() const { DARABONBA_PTR_GET_DEFAULT(staticIp_, "") };
    inline UpdateTransportLayerApplicationRequest& setStaticIp(string staticIp) { DARABONBA_PTR_SET_VALUE(staticIp_, staticIp) };


  protected:
    // The transport layer application ID. You can obtain this ID by calling the [ListTransportLayerApplications](~~ListTransportLayerApplications~~) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> applicationId_ {};
    // Specifies whether to enable cross-border optimization for network access from the Chinese mainland. This feature is disabled by default. Valid values:
    // 
    // - on: Enables the feature.
    // 
    // - off: Disables the feature.
    shared_ptr<string> crossBorderOptimization_ {};
    // Specifies whether to enable IP access rules. If enabled, the IP access rules in WAF apply to the transport layer application. Valid values:
    // 
    // - on: Enables the feature.
    // 
    // - off: Disables the feature.
    shared_ptr<string> ipAccessRule_ {};
    // Specifies whether to enable IPv6. Valid values: `on` and `off`.
    shared_ptr<string> ipv6_ {};
    shared_ptr<string> keepAliveProtection_ {};
    // A list of forwarding rules. For each rule, all parameters are required except for `Comment`.
    shared_ptr<vector<UpdateTransportLayerApplicationRequest::Rules>> rules_ {};
    // The site ID. You can obtain this ID by calling the [ListSites](~~ListSites~~) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    shared_ptr<string> staticIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
