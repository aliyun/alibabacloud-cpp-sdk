// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSPORTLAYERAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSPORTLAYERAPPLICATIONSRESPONSEBODY_HPP_
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
  class ListTransportLayerApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransportLayerApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransportLayerApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTransportLayerApplicationsResponseBody() = default ;
    ListTransportLayerApplicationsResponseBody(const ListTransportLayerApplicationsResponseBody &) = default ;
    ListTransportLayerApplicationsResponseBody(ListTransportLayerApplicationsResponseBody &&) = default ;
    ListTransportLayerApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransportLayerApplicationsResponseBody() = default ;
    ListTransportLayerApplicationsResponseBody& operator=(const ListTransportLayerApplicationsResponseBody &) = default ;
    ListTransportLayerApplicationsResponseBody& operator=(ListTransportLayerApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Applications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Applications& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(Cname, cname_);
        DARABONBA_PTR_TO_JSON(CrossBorderOptimization, crossBorderOptimization_);
        DARABONBA_PTR_TO_JSON(IpAccessRule, ipAccessRule_);
        DARABONBA_PTR_TO_JSON(Ipv6, ipv6_);
        DARABONBA_PTR_TO_JSON(KeepAliveProtection, keepAliveProtection_);
        DARABONBA_PTR_TO_JSON(RecordName, recordName_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(RulesCount, rulesCount_);
        DARABONBA_PTR_TO_JSON(SiteId, siteId_);
        DARABONBA_PTR_TO_JSON(StaticIp, staticIp_);
        DARABONBA_PTR_TO_JSON(StaticIpV4List, staticIpV4List_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Applications& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(Cname, cname_);
        DARABONBA_PTR_FROM_JSON(CrossBorderOptimization, crossBorderOptimization_);
        DARABONBA_PTR_FROM_JSON(IpAccessRule, ipAccessRule_);
        DARABONBA_PTR_FROM_JSON(Ipv6, ipv6_);
        DARABONBA_PTR_FROM_JSON(KeepAliveProtection, keepAliveProtection_);
        DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
        DARABONBA_PTR_FROM_JSON(RulesCount, rulesCount_);
        DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
        DARABONBA_PTR_FROM_JSON(StaticIp, staticIp_);
        DARABONBA_PTR_FROM_JSON(StaticIpV4List, staticIpV4List_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Applications() = default ;
      Applications(const Applications &) = default ;
      Applications(Applications &&) = default ;
      Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Applications() = default ;
      Applications& operator=(const Applications &) = default ;
      Applications& operator=(Applications &&) = default ;
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
        // The IP address.
        shared_ptr<string> address_ {};
        // The health status of the IP address. Valid values:
        // 
        // - healthy: The IP address is passing health checks.
        // 
        // - unhealthy: The IP address is failing health checks.
        // 
        // - unknown: The IP address is being provisioned.
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
        // Specifies whether and how to pass the client\\"s IP address to the origin server. Valid values:
        // 
        // - **off**: Disables client IP pass-through.
        // 
        // - **PPv1**: The PROXY Protocol v1, which supports client IP pass-through for TCP traffic.
        // 
        // - **PPv2**: The PROXY Protocol v2, which supports client IP pass-through for both TCP and UDP traffic.
        // 
        // - **SPP**: The Simple Proxy Protocol, which supports client IP pass-through for UDP traffic.
        shared_ptr<string> clientIPPassThroughMode_ {};
        // The comment for the rule.
        shared_ptr<string> comment_ {};
        // The edge port. The following formats are supported:
        // 
        // - A single port, for example, `80`.
        // 
        // - A port range, for example, `81-85`, which includes ports 81, 82, 83, 84, and 85.
        // 
        // - A combination of ports and port ranges separated by commas, for example, `80,81-85,90`, which includes ports 80, 81, 82, 83, 84, 85, and 90.
        shared_ptr<string> edgePort_ {};
        // The protocol of the forwarding rule. Valid values:
        // 
        // - **TCP**: The TCP protocol.
        // 
        // - **UDP**: The UDP protocol.
        shared_ptr<string> protocol_ {};
        // The unique ID of the forwarding rule.
        shared_ptr<int64_t> ruleId_ {};
        // The origin address. The value of this parameter must match the `SourceType`.
        shared_ptr<string> source_ {};
        // The origin port. The following formats are supported:
        // 
        // - A single port. If you specify a single origin port, you can use any valid combination of edge ports.
        // 
        // - A port range. The origin port can be a port range only if the edge port is also a port range. The number of ports in the origin port range must be the same as that in the edge port range. For example, if the edge port range is `90-93` (which contains 4 ports), you cannot set the origin port range to `81-85` (which contains 5 ports) because their sizes do not match.
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
        shared_ptr<string> sourceType_ {};
      };

      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->cname_ == nullptr && this->crossBorderOptimization_ == nullptr && this->ipAccessRule_ == nullptr && this->ipv6_ == nullptr && this->keepAliveProtection_ == nullptr
        && this->recordName_ == nullptr && this->rules_ == nullptr && this->rulesCount_ == nullptr && this->siteId_ == nullptr && this->staticIp_ == nullptr
        && this->staticIpV4List_ == nullptr && this->status_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline int64_t getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, 0L) };
      inline Applications& setApplicationId(int64_t applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // cname Field Functions 
      bool hasCname() const { return this->cname_ != nullptr;};
      void deleteCname() { this->cname_ = nullptr;};
      inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
      inline Applications& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


      // crossBorderOptimization Field Functions 
      bool hasCrossBorderOptimization() const { return this->crossBorderOptimization_ != nullptr;};
      void deleteCrossBorderOptimization() { this->crossBorderOptimization_ = nullptr;};
      inline string getCrossBorderOptimization() const { DARABONBA_PTR_GET_DEFAULT(crossBorderOptimization_, "") };
      inline Applications& setCrossBorderOptimization(string crossBorderOptimization) { DARABONBA_PTR_SET_VALUE(crossBorderOptimization_, crossBorderOptimization) };


      // ipAccessRule Field Functions 
      bool hasIpAccessRule() const { return this->ipAccessRule_ != nullptr;};
      void deleteIpAccessRule() { this->ipAccessRule_ = nullptr;};
      inline string getIpAccessRule() const { DARABONBA_PTR_GET_DEFAULT(ipAccessRule_, "") };
      inline Applications& setIpAccessRule(string ipAccessRule) { DARABONBA_PTR_SET_VALUE(ipAccessRule_, ipAccessRule) };


      // ipv6 Field Functions 
      bool hasIpv6() const { return this->ipv6_ != nullptr;};
      void deleteIpv6() { this->ipv6_ = nullptr;};
      inline string getIpv6() const { DARABONBA_PTR_GET_DEFAULT(ipv6_, "") };
      inline Applications& setIpv6(string ipv6) { DARABONBA_PTR_SET_VALUE(ipv6_, ipv6) };


      // keepAliveProtection Field Functions 
      bool hasKeepAliveProtection() const { return this->keepAliveProtection_ != nullptr;};
      void deleteKeepAliveProtection() { this->keepAliveProtection_ = nullptr;};
      inline string getKeepAliveProtection() const { DARABONBA_PTR_GET_DEFAULT(keepAliveProtection_, "") };
      inline Applications& setKeepAliveProtection(string keepAliveProtection) { DARABONBA_PTR_SET_VALUE(keepAliveProtection_, keepAliveProtection) };


      // recordName Field Functions 
      bool hasRecordName() const { return this->recordName_ != nullptr;};
      void deleteRecordName() { this->recordName_ = nullptr;};
      inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
      inline Applications& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<Applications::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Applications::Rules>) };
      inline vector<Applications::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Applications::Rules>) };
      inline Applications& setRules(const vector<Applications::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline Applications& setRules(vector<Applications::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      // rulesCount Field Functions 
      bool hasRulesCount() const { return this->rulesCount_ != nullptr;};
      void deleteRulesCount() { this->rulesCount_ = nullptr;};
      inline int32_t getRulesCount() const { DARABONBA_PTR_GET_DEFAULT(rulesCount_, 0) };
      inline Applications& setRulesCount(int32_t rulesCount) { DARABONBA_PTR_SET_VALUE(rulesCount_, rulesCount) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
      inline Applications& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


      // staticIp Field Functions 
      bool hasStaticIp() const { return this->staticIp_ != nullptr;};
      void deleteStaticIp() { this->staticIp_ = nullptr;};
      inline string getStaticIp() const { DARABONBA_PTR_GET_DEFAULT(staticIp_, "") };
      inline Applications& setStaticIp(string staticIp) { DARABONBA_PTR_SET_VALUE(staticIp_, staticIp) };


      // staticIpV4List Field Functions 
      bool hasStaticIpV4List() const { return this->staticIpV4List_ != nullptr;};
      void deleteStaticIpV4List() { this->staticIpV4List_ = nullptr;};
      inline const vector<Applications::StaticIpV4List> & getStaticIpV4List() const { DARABONBA_PTR_GET_CONST(staticIpV4List_, vector<Applications::StaticIpV4List>) };
      inline vector<Applications::StaticIpV4List> getStaticIpV4List() { DARABONBA_PTR_GET(staticIpV4List_, vector<Applications::StaticIpV4List>) };
      inline Applications& setStaticIpV4List(const vector<Applications::StaticIpV4List> & staticIpV4List) { DARABONBA_PTR_SET_VALUE(staticIpV4List_, staticIpV4List) };
      inline Applications& setStaticIpV4List(vector<Applications::StaticIpV4List> && staticIpV4List) { DARABONBA_PTR_SET_RVALUE(staticIpV4List_, staticIpV4List) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Applications& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The transport layer application ID.
      shared_ptr<int64_t> applicationId_ {};
      // The CNAME for the transport layer application. This parameter is returned only when the site is onboarded by using a CNAME record.
      shared_ptr<string> cname_ {};
      // Specifies whether cross-border optimization is enabled for Chinese mainland network access. By default, this feature is disabled. Valid values:
      // 
      // - on: Enabled.
      // 
      // - off: Disabled.
      shared_ptr<string> crossBorderOptimization_ {};
      // Specifies whether the IP access rule feature is enabled. When enabled, the IP access rules in WAF apply to this transport layer application.
      // 
      // - on: Enabled.
      // 
      // - off: Disabled.
      shared_ptr<string> ipAccessRule_ {};
      // Specifies whether IPv6 is enabled.
      shared_ptr<string> ipv6_ {};
      // Specifies whether keep-alive protection is enabled.
      shared_ptr<string> keepAliveProtection_ {};
      // The domain name of the transport layer application.
      shared_ptr<string> recordName_ {};
      // A list of forwarding rules.
      shared_ptr<vector<Applications::Rules>> rules_ {};
      // The number of forwarding rules in the transport layer application.
      shared_ptr<int32_t> rulesCount_ {};
      // The site ID.
      shared_ptr<int64_t> siteId_ {};
      // Specifies whether the static IP feature is enabled. By default, this feature is disabled. Valid values:
      // 
      // - on: Enabled.
      // 
      // - off: Disabled.
      shared_ptr<string> staticIp_ {};
      // A list of static IPv4 addresses assigned to the application when the static IP feature is enabled.
      // 
      // This parameter is required.
      shared_ptr<vector<Applications::StaticIpV4List>> staticIpV4List_ {};
      // The status of the transport layer application. Valid values:
      // 
      // - **deploying**: The application is being deployed. You cannot modify or delete the application in this state.
      // 
      // - **active**: The application is running.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->applications_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<ListTransportLayerApplicationsResponseBody::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<ListTransportLayerApplicationsResponseBody::Applications>) };
    inline vector<ListTransportLayerApplicationsResponseBody::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<ListTransportLayerApplicationsResponseBody::Applications>) };
    inline ListTransportLayerApplicationsResponseBody& setApplications(const vector<ListTransportLayerApplicationsResponseBody::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListTransportLayerApplicationsResponseBody& setApplications(vector<ListTransportLayerApplicationsResponseBody::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTransportLayerApplicationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTransportLayerApplicationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransportLayerApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransportLayerApplicationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of transport layer applications.
    shared_ptr<vector<ListTransportLayerApplicationsResponseBody::Applications>> applications_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of transport layer applications.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
