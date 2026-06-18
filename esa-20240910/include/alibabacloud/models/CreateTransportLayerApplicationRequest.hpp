// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSPORTLAYERAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSPORTLAYERAPPLICATIONREQUEST_HPP_
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
  class CreateTransportLayerApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransportLayerApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrossBorderOptimization, crossBorderOptimization_);
      DARABONBA_PTR_TO_JSON(IpAccessRule, ipAccessRule_);
      DARABONBA_PTR_TO_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_TO_JSON(KeepAliveProtection, keepAliveProtection_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StaticIp, staticIp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransportLayerApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossBorderOptimization, crossBorderOptimization_);
      DARABONBA_PTR_FROM_JSON(IpAccessRule, ipAccessRule_);
      DARABONBA_PTR_FROM_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_FROM_JSON(KeepAliveProtection, keepAliveProtection_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StaticIp, staticIp_);
    };
    CreateTransportLayerApplicationRequest() = default ;
    CreateTransportLayerApplicationRequest(const CreateTransportLayerApplicationRequest &) = default ;
    CreateTransportLayerApplicationRequest(CreateTransportLayerApplicationRequest &&) = default ;
    CreateTransportLayerApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransportLayerApplicationRequest() = default ;
    CreateTransportLayerApplicationRequest& operator=(const CreateTransportLayerApplicationRequest &) = default ;
    CreateTransportLayerApplicationRequest& operator=(CreateTransportLayerApplicationRequest &&) = default ;
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
      // The client IP passthrough protocol. Valid values:
      // 
      // - **off**: Disables client IP passthrough.
      // 
      // - **PPv1**: PROXY Protocol v1. Preserves the client IP address for TCP connections.
      // 
      // - **PPv2**: PROXY Protocol v2. Preserves the client IP address for TCP and UDP connections.
      // 
      // - **SPP**: Simple Proxy Protocol. Preserves the client IP address for UDP connections.
      // 
      // This parameter is required.
      shared_ptr<string> clientIPPassThroughMode_ {};
      // An optional comment for the rule.
      shared_ptr<string> comment_ {};
      // The edge port. Supported formats:
      // 
      // - A single port, for example, `80`.
      // 
      // - A port range, for example, `81-85`, which includes ports 81, 82, 83, 84, and 85.
      // 
      // - A combination of ports and port ranges separated by commas, for example, `80,81-85,90`, which includes ports 80, 81, 82, 83, 84, 85, and 90.
      // 
      // Edge ports cannot overlap within a single rule or across multiple rules.
      // 
      // This parameter is required.
      shared_ptr<string> edgePort_ {};
      // The forwarding protocol. Valid values:
      // 
      // - `TCP`: The TCP protocol.
      // 
      // - `UDP`: The UDP protocol.
      // 
      // This parameter is required.
      shared_ptr<string> protocol_ {};
      // The origin address. The value must match the specified `SourceType`.
      // 
      // This parameter is required.
      shared_ptr<string> source_ {};
      // The origin port. Supported formats:
      // 
      // - A single port, which supports any valid combination of edge ports.
      // 
      // - A port range. You can specify a port range only if the edge port is also a port range. The origin and edge port ranges must be the same size. For example, if the edge port range is `90-93` (4 ports), the origin port range cannot be `81-85` (5 ports).
      // 
      // This parameter is required.
      shared_ptr<string> sourcePort_ {};
      // The origin type. Valid values:
      // 
      // - **ip**: An IP address.
      // 
      // - **domain**: A domain name.
      // 
      // - **OP**: An origin pool.
      // 
      // - **LB**: A load balancer.
      // 
      // This parameter is required.
      shared_ptr<string> sourceType_ {};
    };

    virtual bool empty() const override { return this->crossBorderOptimization_ == nullptr
        && this->ipAccessRule_ == nullptr && this->ipv6_ == nullptr && this->keepAliveProtection_ == nullptr && this->recordName_ == nullptr && this->rules_ == nullptr
        && this->siteId_ == nullptr && this->staticIp_ == nullptr; };
    // crossBorderOptimization Field Functions 
    bool hasCrossBorderOptimization() const { return this->crossBorderOptimization_ != nullptr;};
    void deleteCrossBorderOptimization() { this->crossBorderOptimization_ = nullptr;};
    inline string getCrossBorderOptimization() const { DARABONBA_PTR_GET_DEFAULT(crossBorderOptimization_, "") };
    inline CreateTransportLayerApplicationRequest& setCrossBorderOptimization(string crossBorderOptimization) { DARABONBA_PTR_SET_VALUE(crossBorderOptimization_, crossBorderOptimization) };


    // ipAccessRule Field Functions 
    bool hasIpAccessRule() const { return this->ipAccessRule_ != nullptr;};
    void deleteIpAccessRule() { this->ipAccessRule_ = nullptr;};
    inline string getIpAccessRule() const { DARABONBA_PTR_GET_DEFAULT(ipAccessRule_, "") };
    inline CreateTransportLayerApplicationRequest& setIpAccessRule(string ipAccessRule) { DARABONBA_PTR_SET_VALUE(ipAccessRule_, ipAccessRule) };


    // ipv6 Field Functions 
    bool hasIpv6() const { return this->ipv6_ != nullptr;};
    void deleteIpv6() { this->ipv6_ = nullptr;};
    inline string getIpv6() const { DARABONBA_PTR_GET_DEFAULT(ipv6_, "") };
    inline CreateTransportLayerApplicationRequest& setIpv6(string ipv6) { DARABONBA_PTR_SET_VALUE(ipv6_, ipv6) };


    // keepAliveProtection Field Functions 
    bool hasKeepAliveProtection() const { return this->keepAliveProtection_ != nullptr;};
    void deleteKeepAliveProtection() { this->keepAliveProtection_ = nullptr;};
    inline string getKeepAliveProtection() const { DARABONBA_PTR_GET_DEFAULT(keepAliveProtection_, "") };
    inline CreateTransportLayerApplicationRequest& setKeepAliveProtection(string keepAliveProtection) { DARABONBA_PTR_SET_VALUE(keepAliveProtection_, keepAliveProtection) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline CreateTransportLayerApplicationRequest& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<CreateTransportLayerApplicationRequest::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<CreateTransportLayerApplicationRequest::Rules>) };
    inline vector<CreateTransportLayerApplicationRequest::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<CreateTransportLayerApplicationRequest::Rules>) };
    inline CreateTransportLayerApplicationRequest& setRules(const vector<CreateTransportLayerApplicationRequest::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline CreateTransportLayerApplicationRequest& setRules(vector<CreateTransportLayerApplicationRequest::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateTransportLayerApplicationRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // staticIp Field Functions 
    bool hasStaticIp() const { return this->staticIp_ != nullptr;};
    void deleteStaticIp() { this->staticIp_ = nullptr;};
    inline string getStaticIp() const { DARABONBA_PTR_GET_DEFAULT(staticIp_, "") };
    inline CreateTransportLayerApplicationRequest& setStaticIp(string staticIp) { DARABONBA_PTR_SET_VALUE(staticIp_, staticIp) };


  protected:
    // Enables or disables network optimization for access from the Chinese mainland. This feature is disabled by default. Valid values:
    // 
    // - `on`: Enables the optimization.
    // 
    // - `off`: Disables the optimization.
    shared_ptr<string> crossBorderOptimization_ {};
    // Applies IP access rules from Web Application Firewall (WAF) to this Transport Layer Application. Valid values:
    // 
    // - `on`: Enables the feature.
    // 
    // - `off`: Disables the feature.
    shared_ptr<string> ipAccessRule_ {};
    // Enables or disables IPv6 support.
    shared_ptr<string> ipv6_ {};
    // Enables or disables keep-alive protection.
    shared_ptr<string> keepAliveProtection_ {};
    // The domain name of the Transport Layer Application.
    // 
    // This parameter is required.
    shared_ptr<string> recordName_ {};
    // The list of forwarding rules.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateTransportLayerApplicationRequest::Rules>> rules_ {};
    // The site ID. You can call the [ListSites](~~ListSites~~) operation to obtain the site ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    shared_ptr<string> staticIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
