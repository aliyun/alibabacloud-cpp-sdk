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
        // Client IP pass-through protocol, supports:
        // - **off**: No pass-through.
        // - **PPv1**: PROXY Protocol v1, supports client IP pass-through for TCP protocol.
        // - **PPv2**: PROXY Protocol v2, supports client IP pass-through for TCP and UDP protocols.
        // - **SPP**: Simple Proxy Protocol, supports client IP pass-through for UDP protocol.
        shared_ptr<string> clientIPPassThroughMode_ {};
        // Comment information for the rule.
        shared_ptr<string> comment_ {};
        // Edge port. Supports:
        // 
        // - A single port, e.g., 80.
        // - Port range, e.g., 81-85, representing ports 81, 82, 83, 84, 85.
        // - Combination of ports and port ranges, separated by commas, e.g., 80,81-85,90, representing ports 80, 81, 82, 83, 84, 85, 90.
        shared_ptr<string> edgePort_ {};
        // Forwarding rule protocol, with values:
        // 
        // - TCP: TCP protocol.
        // - UDP: UDP protocol.
        shared_ptr<string> protocol_ {};
        // Layer 4 acceleration rule ID.
        shared_ptr<int64_t> ruleId_ {};
        // Specific value of the source, which needs to match the source type.
        shared_ptr<string> source_ {};
        // Source port. Supports:
        // 
        // - A single port, when the source port is a single port, any valid combination of edge ports is supported.
        // - Port range, only when the edge port is a port range, the source port can be set to a port range, and the range size must be consistent with the edge port. For example, if the edge port is 90-93, the source port cannot be set to 81-85 because the source port range is 5 and the edge port range is 3, which are inconsistent.
        shared_ptr<string> sourcePort_ {};
        // Source type, supports:
        // - **ip**: IP.
        // - **domain**: Domain name.
        // - **OP**: Origin pool.
        // - **LB**: Load balancer.
        shared_ptr<string> sourceType_ {};
      };

      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->cname_ == nullptr && this->crossBorderOptimization_ == nullptr && this->ipAccessRule_ == nullptr && this->ipv6_ == nullptr && this->recordName_ == nullptr
        && this->rules_ == nullptr && this->rulesCount_ == nullptr && this->siteId_ == nullptr && this->staticIp_ == nullptr && this->staticIpV4List_ == nullptr
        && this->status_ == nullptr; };
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
      // Layer 4 application ID.
      shared_ptr<int64_t> applicationId_ {};
      // CNAME domain name corresponding to the Layer 4 acceleration application. This field is not empty only when the site is accessed via CNAME.
      shared_ptr<string> cname_ {};
      // Whether to enable China mainland network access optimization. It is disabled by default. The value range is:
      // 
      // - on: Enabled.
      // - off: Disabled.
      shared_ptr<string> crossBorderOptimization_ {};
      // IP access rule switch. When enabled, the IP access rules in WAF take effect on the Layer 4 application.
      // 
      // - on: Enabled.
      // - off: Disabled.
      shared_ptr<string> ipAccessRule_ {};
      // IPv6 switch.
      shared_ptr<string> ipv6_ {};
      // Domain name of the Layer 4 application.
      shared_ptr<string> recordName_ {};
      // List of forwarding rules.
      shared_ptr<vector<Applications::Rules>> rules_ {};
      // Number of forwarding rules contained in the Layer 4 acceleration application.
      shared_ptr<int32_t> rulesCount_ {};
      // Site ID.
      shared_ptr<int64_t> siteId_ {};
      shared_ptr<string> staticIp_ {};
      // This parameter is required.
      shared_ptr<vector<Applications::StaticIpV4List>> staticIpV4List_ {};
      // Status of the Layer 4 application
      // 
      // - **deploying**: Deploying. In this state, modification and deletion are not allowed.
      // - **active**: Active.
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
    // List of transport layer applications.
    shared_ptr<vector<ListTransportLayerApplicationsResponseBody::Applications>> applications_ {};
    // Current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // Page size.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Total number of transport layer applications.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
