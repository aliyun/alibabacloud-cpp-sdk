// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSPORTLAYERAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSPORTLAYERAPPLICATIONRESPONSEBODY_HPP_
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
  class GetTransportLayerApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransportLayerApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(CrossBorderOptimization, crossBorderOptimization_);
      DARABONBA_PTR_TO_JSON(IpAccessRule, ipAccessRule_);
      DARABONBA_PTR_TO_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_TO_JSON(KeepAliveProtection, keepAliveProtection_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(RulesCount, rulesCount_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StaticIp, staticIp_);
      DARABONBA_PTR_TO_JSON(StaticIpV4List, staticIpV4List_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransportLayerApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(CrossBorderOptimization, crossBorderOptimization_);
      DARABONBA_PTR_FROM_JSON(IpAccessRule, ipAccessRule_);
      DARABONBA_PTR_FROM_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_FROM_JSON(KeepAliveProtection, keepAliveProtection_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(RulesCount, rulesCount_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StaticIp, staticIp_);
      DARABONBA_PTR_FROM_JSON(StaticIpV4List, staticIpV4List_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetTransportLayerApplicationResponseBody() = default ;
    GetTransportLayerApplicationResponseBody(const GetTransportLayerApplicationResponseBody &) = default ;
    GetTransportLayerApplicationResponseBody(GetTransportLayerApplicationResponseBody &&) = default ;
    GetTransportLayerApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransportLayerApplicationResponseBody() = default ;
    GetTransportLayerApplicationResponseBody& operator=(const GetTransportLayerApplicationResponseBody &) = default ;
    GetTransportLayerApplicationResponseBody& operator=(GetTransportLayerApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StaticIpV4List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StaticIpV4List& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, StaticIpV4List& obj) { 
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      StaticIpV4List() = default ;
      StaticIpV4List(const StaticIpV4List &) = default ;
      StaticIpV4List(StaticIpV4List &&) = default ;
      StaticIpV4List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StaticIpV4List() = default ;
      StaticIpV4List& operator=(const StaticIpV4List &) = default ;
      StaticIpV4List& operator=(StaticIpV4List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->address_ == nullptr
        && this->status_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline StaticIpV4List& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline StaticIpV4List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> address_ {};
      shared_ptr<string> status_ {};
    };

    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(ClientIPPassThroughMode, clientIPPassThroughMode_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(EdgePort, edgePort_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientIPPassThroughMode, clientIPPassThroughMode_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(EdgePort, edgePort_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
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
        && this->comment_ == nullptr && this->edgePort_ == nullptr && this->protocol_ == nullptr && this->ruleId_ == nullptr && this->source_ == nullptr
        && this->sourcePort_ == nullptr && this->sourceType_ == nullptr; };
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


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline Rules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


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
      // The client IP pass-through mode. Valid values:
      // 
      // - **off**: Client IP pass-through is disabled.
      // 
      // - **PPv1**: PROXY Protocol v1, which supports client IP pass-through for TCP.
      // 
      // - **PPv2**: PROXY Protocol v2, which supports client IP pass-through for both TCP and UDP.
      // 
      // - **SPP**: Simple Proxy Protocol, which supports client IP pass-through for UDP.
      shared_ptr<string> clientIPPassThroughMode_ {};
      // A comment about the forwarding rule.
      shared_ptr<string> comment_ {};
      // The edge port. The following formats are supported:
      // 
      // - A single port, for example, `80`.
      // 
      // - A port range, such as `81-85` (ports 81 to 85).
      // 
      // - A comma-separated list of ports and port ranges, such as `80,81-85,90`.
      shared_ptr<string> edgePort_ {};
      // The protocol for the forwarding rule. Valid values:
      // 
      // - **TCP**: For TCP traffic.
      // 
      // - **UDP**: For UDP traffic.
      shared_ptr<string> protocol_ {};
      // The rule ID.
      shared_ptr<int64_t> ruleId_ {};
      // The origin. This value must be consistent with the specified origin type.
      shared_ptr<string> source_ {};
      // The origin port. The following formats are supported:
      // 
      // - A single port. A single origin port can be mapped to one or more edge ports.
      // 
      // - A port range. When mapping a range of edge ports to a range of origin ports, both ranges must contain the same number of ports. For example, you cannot map edge ports `90-93` (4 ports) to origin ports `81-85` (5 ports).
      shared_ptr<string> sourcePort_ {};
      // The origin type. Valid values:
      // 
      // - **ip**: An IP address.
      // 
      // - **domain**: A domain name.
      // 
      // - **OP**: An origin address pool.
      // 
      // - **LB**: A load balancer.
      shared_ptr<string> sourceType_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->cname_ == nullptr && this->crossBorderOptimization_ == nullptr && this->ipAccessRule_ == nullptr && this->ipv6_ == nullptr && this->keepAliveProtection_ == nullptr
        && this->recordName_ == nullptr && this->requestId_ == nullptr && this->rules_ == nullptr && this->rulesCount_ == nullptr && this->siteId_ == nullptr
        && this->staticIp_ == nullptr && this->staticIpV4List_ == nullptr && this->status_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline int64_t getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, 0L) };
    inline GetTransportLayerApplicationResponseBody& setApplicationId(int64_t applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline GetTransportLayerApplicationResponseBody& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // crossBorderOptimization Field Functions 
    bool hasCrossBorderOptimization() const { return this->crossBorderOptimization_ != nullptr;};
    void deleteCrossBorderOptimization() { this->crossBorderOptimization_ = nullptr;};
    inline string getCrossBorderOptimization() const { DARABONBA_PTR_GET_DEFAULT(crossBorderOptimization_, "") };
    inline GetTransportLayerApplicationResponseBody& setCrossBorderOptimization(string crossBorderOptimization) { DARABONBA_PTR_SET_VALUE(crossBorderOptimization_, crossBorderOptimization) };


    // ipAccessRule Field Functions 
    bool hasIpAccessRule() const { return this->ipAccessRule_ != nullptr;};
    void deleteIpAccessRule() { this->ipAccessRule_ = nullptr;};
    inline string getIpAccessRule() const { DARABONBA_PTR_GET_DEFAULT(ipAccessRule_, "") };
    inline GetTransportLayerApplicationResponseBody& setIpAccessRule(string ipAccessRule) { DARABONBA_PTR_SET_VALUE(ipAccessRule_, ipAccessRule) };


    // ipv6 Field Functions 
    bool hasIpv6() const { return this->ipv6_ != nullptr;};
    void deleteIpv6() { this->ipv6_ = nullptr;};
    inline string getIpv6() const { DARABONBA_PTR_GET_DEFAULT(ipv6_, "") };
    inline GetTransportLayerApplicationResponseBody& setIpv6(string ipv6) { DARABONBA_PTR_SET_VALUE(ipv6_, ipv6) };


    // keepAliveProtection Field Functions 
    bool hasKeepAliveProtection() const { return this->keepAliveProtection_ != nullptr;};
    void deleteKeepAliveProtection() { this->keepAliveProtection_ = nullptr;};
    inline string getKeepAliveProtection() const { DARABONBA_PTR_GET_DEFAULT(keepAliveProtection_, "") };
    inline GetTransportLayerApplicationResponseBody& setKeepAliveProtection(string keepAliveProtection) { DARABONBA_PTR_SET_VALUE(keepAliveProtection_, keepAliveProtection) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline GetTransportLayerApplicationResponseBody& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTransportLayerApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<GetTransportLayerApplicationResponseBody::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<GetTransportLayerApplicationResponseBody::Rules>) };
    inline vector<GetTransportLayerApplicationResponseBody::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<GetTransportLayerApplicationResponseBody::Rules>) };
    inline GetTransportLayerApplicationResponseBody& setRules(const vector<GetTransportLayerApplicationResponseBody::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline GetTransportLayerApplicationResponseBody& setRules(vector<GetTransportLayerApplicationResponseBody::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // rulesCount Field Functions 
    bool hasRulesCount() const { return this->rulesCount_ != nullptr;};
    void deleteRulesCount() { this->rulesCount_ = nullptr;};
    inline int32_t getRulesCount() const { DARABONBA_PTR_GET_DEFAULT(rulesCount_, 0) };
    inline GetTransportLayerApplicationResponseBody& setRulesCount(int32_t rulesCount) { DARABONBA_PTR_SET_VALUE(rulesCount_, rulesCount) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetTransportLayerApplicationResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // staticIp Field Functions 
    bool hasStaticIp() const { return this->staticIp_ != nullptr;};
    void deleteStaticIp() { this->staticIp_ = nullptr;};
    inline string getStaticIp() const { DARABONBA_PTR_GET_DEFAULT(staticIp_, "") };
    inline GetTransportLayerApplicationResponseBody& setStaticIp(string staticIp) { DARABONBA_PTR_SET_VALUE(staticIp_, staticIp) };


    // staticIpV4List Field Functions 
    bool hasStaticIpV4List() const { return this->staticIpV4List_ != nullptr;};
    void deleteStaticIpV4List() { this->staticIpV4List_ = nullptr;};
    inline const vector<GetTransportLayerApplicationResponseBody::StaticIpV4List> & getStaticIpV4List() const { DARABONBA_PTR_GET_CONST(staticIpV4List_, vector<GetTransportLayerApplicationResponseBody::StaticIpV4List>) };
    inline vector<GetTransportLayerApplicationResponseBody::StaticIpV4List> getStaticIpV4List() { DARABONBA_PTR_GET(staticIpV4List_, vector<GetTransportLayerApplicationResponseBody::StaticIpV4List>) };
    inline GetTransportLayerApplicationResponseBody& setStaticIpV4List(const vector<GetTransportLayerApplicationResponseBody::StaticIpV4List> & staticIpV4List) { DARABONBA_PTR_SET_VALUE(staticIpV4List_, staticIpV4List) };
    inline GetTransportLayerApplicationResponseBody& setStaticIpV4List(vector<GetTransportLayerApplicationResponseBody::StaticIpV4List> && staticIpV4List) { DARABONBA_PTR_SET_RVALUE(staticIpV4List_, staticIpV4List) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTransportLayerApplicationResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the Transport Layer Application.
    shared_ptr<int64_t> applicationId_ {};
    // The CNAME domain name of the Transport Layer Application. This parameter is returned only if the Site was added using the CNAME method.
    shared_ptr<string> cname_ {};
    // Indicates whether network optimization for access from the Chinese mainland is enabled. This feature is disabled by default. Valid values:
    // 
    // - **on**: Enabled.
    // 
    // - **off**: Disabled.
    shared_ptr<string> crossBorderOptimization_ {};
    // Indicates whether the IP Access Rule feature is enabled. If enabled, IP Access Rules in Web Application Firewall (WAF) take effect for the Transport Layer Application. Valid values:
    // 
    // - **on**: Enabled.
    // 
    // - **off**: Disabled.
    shared_ptr<string> ipAccessRule_ {};
    // Indicates whether IPv6 is enabled.
    shared_ptr<string> ipv6_ {};
    // Indicates whether keep-alive protection is enabled.
    shared_ptr<string> keepAliveProtection_ {};
    // The domain name of the Transport Layer Application.
    shared_ptr<string> recordName_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // A list of forwarding rules.
    shared_ptr<vector<GetTransportLayerApplicationResponseBody::Rules>> rules_ {};
    // The number of forwarding rules in the Transport Layer Application.
    shared_ptr<int32_t> rulesCount_ {};
    // The ID of the Site.
    shared_ptr<int64_t> siteId_ {};
    shared_ptr<string> staticIp_ {};
    shared_ptr<vector<GetTransportLayerApplicationResponseBody::StaticIpV4List>> staticIpV4List_ {};
    // The status of the Transport Layer Application. Valid values:
    // 
    // - **deploying**: The application is deploying. You cannot modify or delete the application in this state.
    // 
    // - **active**: The application is active.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
