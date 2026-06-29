// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORIGINRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTORIGINRULESRESPONSEBODY_HPP_
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
  class ListOriginRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOriginRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListOriginRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListOriginRulesResponseBody() = default ;
    ListOriginRulesResponseBody(const ListOriginRulesResponseBody &) = default ;
    ListOriginRulesResponseBody(ListOriginRulesResponseBody &&) = default ;
    ListOriginRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOriginRulesResponseBody() = default ;
    ListOriginRulesResponseBody& operator=(const ListOriginRulesResponseBody &) = default ;
    ListOriginRulesResponseBody& operator=(ListOriginRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigId, configId_);
        DARABONBA_PTR_TO_JSON(ConfigType, configType_);
        DARABONBA_PTR_TO_JSON(DnsRecord, dnsRecord_);
        DARABONBA_PTR_TO_JSON(Follow302Enable, follow302Enable_);
        DARABONBA_PTR_TO_JSON(Follow302MaxTries, follow302MaxTries_);
        DARABONBA_PTR_TO_JSON(Follow302RetainArgs, follow302RetainArgs_);
        DARABONBA_PTR_TO_JSON(Follow302RetainHeader, follow302RetainHeader_);
        DARABONBA_PTR_TO_JSON(Follow302TargetHost, follow302TargetHost_);
        DARABONBA_PTR_TO_JSON(OriginHost, originHost_);
        DARABONBA_PTR_TO_JSON(OriginHttpPort, originHttpPort_);
        DARABONBA_PTR_TO_JSON(OriginHttpsPort, originHttpsPort_);
        DARABONBA_PTR_TO_JSON(OriginMtls, originMtls_);
        DARABONBA_PTR_TO_JSON(OriginReadTimeout, originReadTimeout_);
        DARABONBA_PTR_TO_JSON(OriginScheme, originScheme_);
        DARABONBA_PTR_TO_JSON(OriginSni, originSni_);
        DARABONBA_PTR_TO_JSON(OriginVerify, originVerify_);
        DARABONBA_PTR_TO_JSON(Range, range_);
        DARABONBA_PTR_TO_JSON(RangeChunkSize, rangeChunkSize_);
        DARABONBA_PTR_TO_JSON(Rule, rule_);
        DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
        DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
        DARABONBA_PTR_FROM_JSON(DnsRecord, dnsRecord_);
        DARABONBA_PTR_FROM_JSON(Follow302Enable, follow302Enable_);
        DARABONBA_PTR_FROM_JSON(Follow302MaxTries, follow302MaxTries_);
        DARABONBA_PTR_FROM_JSON(Follow302RetainArgs, follow302RetainArgs_);
        DARABONBA_PTR_FROM_JSON(Follow302RetainHeader, follow302RetainHeader_);
        DARABONBA_PTR_FROM_JSON(Follow302TargetHost, follow302TargetHost_);
        DARABONBA_PTR_FROM_JSON(OriginHost, originHost_);
        DARABONBA_PTR_FROM_JSON(OriginHttpPort, originHttpPort_);
        DARABONBA_PTR_FROM_JSON(OriginHttpsPort, originHttpsPort_);
        DARABONBA_PTR_FROM_JSON(OriginMtls, originMtls_);
        DARABONBA_PTR_FROM_JSON(OriginReadTimeout, originReadTimeout_);
        DARABONBA_PTR_FROM_JSON(OriginScheme, originScheme_);
        DARABONBA_PTR_FROM_JSON(OriginSni, originSni_);
        DARABONBA_PTR_FROM_JSON(OriginVerify, originVerify_);
        DARABONBA_PTR_FROM_JSON(Range, range_);
        DARABONBA_PTR_FROM_JSON(RangeChunkSize, rangeChunkSize_);
        DARABONBA_PTR_FROM_JSON(Rule, rule_);
        DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      };
      Configs() = default ;
      Configs(const Configs &) = default ;
      Configs(Configs &&) = default ;
      Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configs() = default ;
      Configs& operator=(const Configs &) = default ;
      Configs& operator=(Configs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configId_ == nullptr
        && this->configType_ == nullptr && this->dnsRecord_ == nullptr && this->follow302Enable_ == nullptr && this->follow302MaxTries_ == nullptr && this->follow302RetainArgs_ == nullptr
        && this->follow302RetainHeader_ == nullptr && this->follow302TargetHost_ == nullptr && this->originHost_ == nullptr && this->originHttpPort_ == nullptr && this->originHttpsPort_ == nullptr
        && this->originMtls_ == nullptr && this->originReadTimeout_ == nullptr && this->originScheme_ == nullptr && this->originSni_ == nullptr && this->originVerify_ == nullptr
        && this->range_ == nullptr && this->rangeChunkSize_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr
        && this->sequence_ == nullptr && this->siteVersion_ == nullptr; };
      // configId Field Functions 
      bool hasConfigId() const { return this->configId_ != nullptr;};
      void deleteConfigId() { this->configId_ = nullptr;};
      inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
      inline Configs& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


      // configType Field Functions 
      bool hasConfigType() const { return this->configType_ != nullptr;};
      void deleteConfigType() { this->configType_ = nullptr;};
      inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
      inline Configs& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


      // dnsRecord Field Functions 
      bool hasDnsRecord() const { return this->dnsRecord_ != nullptr;};
      void deleteDnsRecord() { this->dnsRecord_ = nullptr;};
      inline string getDnsRecord() const { DARABONBA_PTR_GET_DEFAULT(dnsRecord_, "") };
      inline Configs& setDnsRecord(string dnsRecord) { DARABONBA_PTR_SET_VALUE(dnsRecord_, dnsRecord) };


      // follow302Enable Field Functions 
      bool hasFollow302Enable() const { return this->follow302Enable_ != nullptr;};
      void deleteFollow302Enable() { this->follow302Enable_ = nullptr;};
      inline string getFollow302Enable() const { DARABONBA_PTR_GET_DEFAULT(follow302Enable_, "") };
      inline Configs& setFollow302Enable(string follow302Enable) { DARABONBA_PTR_SET_VALUE(follow302Enable_, follow302Enable) };


      // follow302MaxTries Field Functions 
      bool hasFollow302MaxTries() const { return this->follow302MaxTries_ != nullptr;};
      void deleteFollow302MaxTries() { this->follow302MaxTries_ = nullptr;};
      inline string getFollow302MaxTries() const { DARABONBA_PTR_GET_DEFAULT(follow302MaxTries_, "") };
      inline Configs& setFollow302MaxTries(string follow302MaxTries) { DARABONBA_PTR_SET_VALUE(follow302MaxTries_, follow302MaxTries) };


      // follow302RetainArgs Field Functions 
      bool hasFollow302RetainArgs() const { return this->follow302RetainArgs_ != nullptr;};
      void deleteFollow302RetainArgs() { this->follow302RetainArgs_ = nullptr;};
      inline string getFollow302RetainArgs() const { DARABONBA_PTR_GET_DEFAULT(follow302RetainArgs_, "") };
      inline Configs& setFollow302RetainArgs(string follow302RetainArgs) { DARABONBA_PTR_SET_VALUE(follow302RetainArgs_, follow302RetainArgs) };


      // follow302RetainHeader Field Functions 
      bool hasFollow302RetainHeader() const { return this->follow302RetainHeader_ != nullptr;};
      void deleteFollow302RetainHeader() { this->follow302RetainHeader_ = nullptr;};
      inline string getFollow302RetainHeader() const { DARABONBA_PTR_GET_DEFAULT(follow302RetainHeader_, "") };
      inline Configs& setFollow302RetainHeader(string follow302RetainHeader) { DARABONBA_PTR_SET_VALUE(follow302RetainHeader_, follow302RetainHeader) };


      // follow302TargetHost Field Functions 
      bool hasFollow302TargetHost() const { return this->follow302TargetHost_ != nullptr;};
      void deleteFollow302TargetHost() { this->follow302TargetHost_ = nullptr;};
      inline string getFollow302TargetHost() const { DARABONBA_PTR_GET_DEFAULT(follow302TargetHost_, "") };
      inline Configs& setFollow302TargetHost(string follow302TargetHost) { DARABONBA_PTR_SET_VALUE(follow302TargetHost_, follow302TargetHost) };


      // originHost Field Functions 
      bool hasOriginHost() const { return this->originHost_ != nullptr;};
      void deleteOriginHost() { this->originHost_ = nullptr;};
      inline string getOriginHost() const { DARABONBA_PTR_GET_DEFAULT(originHost_, "") };
      inline Configs& setOriginHost(string originHost) { DARABONBA_PTR_SET_VALUE(originHost_, originHost) };


      // originHttpPort Field Functions 
      bool hasOriginHttpPort() const { return this->originHttpPort_ != nullptr;};
      void deleteOriginHttpPort() { this->originHttpPort_ = nullptr;};
      inline string getOriginHttpPort() const { DARABONBA_PTR_GET_DEFAULT(originHttpPort_, "") };
      inline Configs& setOriginHttpPort(string originHttpPort) { DARABONBA_PTR_SET_VALUE(originHttpPort_, originHttpPort) };


      // originHttpsPort Field Functions 
      bool hasOriginHttpsPort() const { return this->originHttpsPort_ != nullptr;};
      void deleteOriginHttpsPort() { this->originHttpsPort_ = nullptr;};
      inline string getOriginHttpsPort() const { DARABONBA_PTR_GET_DEFAULT(originHttpsPort_, "") };
      inline Configs& setOriginHttpsPort(string originHttpsPort) { DARABONBA_PTR_SET_VALUE(originHttpsPort_, originHttpsPort) };


      // originMtls Field Functions 
      bool hasOriginMtls() const { return this->originMtls_ != nullptr;};
      void deleteOriginMtls() { this->originMtls_ = nullptr;};
      inline string getOriginMtls() const { DARABONBA_PTR_GET_DEFAULT(originMtls_, "") };
      inline Configs& setOriginMtls(string originMtls) { DARABONBA_PTR_SET_VALUE(originMtls_, originMtls) };


      // originReadTimeout Field Functions 
      bool hasOriginReadTimeout() const { return this->originReadTimeout_ != nullptr;};
      void deleteOriginReadTimeout() { this->originReadTimeout_ = nullptr;};
      inline string getOriginReadTimeout() const { DARABONBA_PTR_GET_DEFAULT(originReadTimeout_, "") };
      inline Configs& setOriginReadTimeout(string originReadTimeout) { DARABONBA_PTR_SET_VALUE(originReadTimeout_, originReadTimeout) };


      // originScheme Field Functions 
      bool hasOriginScheme() const { return this->originScheme_ != nullptr;};
      void deleteOriginScheme() { this->originScheme_ = nullptr;};
      inline string getOriginScheme() const { DARABONBA_PTR_GET_DEFAULT(originScheme_, "") };
      inline Configs& setOriginScheme(string originScheme) { DARABONBA_PTR_SET_VALUE(originScheme_, originScheme) };


      // originSni Field Functions 
      bool hasOriginSni() const { return this->originSni_ != nullptr;};
      void deleteOriginSni() { this->originSni_ = nullptr;};
      inline string getOriginSni() const { DARABONBA_PTR_GET_DEFAULT(originSni_, "") };
      inline Configs& setOriginSni(string originSni) { DARABONBA_PTR_SET_VALUE(originSni_, originSni) };


      // originVerify Field Functions 
      bool hasOriginVerify() const { return this->originVerify_ != nullptr;};
      void deleteOriginVerify() { this->originVerify_ = nullptr;};
      inline string getOriginVerify() const { DARABONBA_PTR_GET_DEFAULT(originVerify_, "") };
      inline Configs& setOriginVerify(string originVerify) { DARABONBA_PTR_SET_VALUE(originVerify_, originVerify) };


      // range Field Functions 
      bool hasRange() const { return this->range_ != nullptr;};
      void deleteRange() { this->range_ = nullptr;};
      inline string getRange() const { DARABONBA_PTR_GET_DEFAULT(range_, "") };
      inline Configs& setRange(string range) { DARABONBA_PTR_SET_VALUE(range_, range) };


      // rangeChunkSize Field Functions 
      bool hasRangeChunkSize() const { return this->rangeChunkSize_ != nullptr;};
      void deleteRangeChunkSize() { this->rangeChunkSize_ = nullptr;};
      inline string getRangeChunkSize() const { DARABONBA_PTR_GET_DEFAULT(rangeChunkSize_, "") };
      inline Configs& setRangeChunkSize(string rangeChunkSize) { DARABONBA_PTR_SET_VALUE(rangeChunkSize_, rangeChunkSize) };


      // rule Field Functions 
      bool hasRule() const { return this->rule_ != nullptr;};
      void deleteRule() { this->rule_ = nullptr;};
      inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
      inline Configs& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


      // ruleEnable Field Functions 
      bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
      void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
      inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
      inline Configs& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Configs& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // sequence Field Functions 
      bool hasSequence() const { return this->sequence_ != nullptr;};
      void deleteSequence() { this->sequence_ = nullptr;};
      inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
      inline Configs& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      // siteVersion Field Functions 
      bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
      void deleteSiteVersion() { this->siteVersion_ = nullptr;};
      inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
      inline Configs& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    protected:
      // The configuration ID.
      shared_ptr<int64_t> configId_ {};
      // The configuration type. You can query global or rule configurations based on this parameter. Valid values:
      // 
      // - global: Query global configurations.
      // - rule: Query rule configurations.
      shared_ptr<string> configType_ {};
      // The rewritten DNS resolution record for back-to-origin requests.
      shared_ptr<string> dnsRecord_ {};
      // The back-to-origin 302 redirect follow switch. Valid values:
      // - on: Enable.
      // - off: Disable.
      shared_ptr<string> follow302Enable_ {};
      // The maximum number of 302 redirect follows. Valid values: 1 to 5.
      shared_ptr<string> follow302MaxTries_ {};
      // The switch for retaining original request parameters. Valid values:
      // - on: Enable.
      // - off: Disable.
      shared_ptr<string> follow302RetainArgs_ {};
      // The switch for retaining original request headers. Valid values:
      // - on: Enable.
      // - off: Disable.
      shared_ptr<string> follow302RetainHeader_ {};
      // The back-to-origin host after 302 redirect modification.
      shared_ptr<string> follow302TargetHost_ {};
      // The HOST carried in the back-to-origin request.
      shared_ptr<string> originHost_ {};
      // The origin server port accessed when using the HTTP protocol for back-to-origin.
      shared_ptr<string> originHttpPort_ {};
      // The origin server port accessed when using the HTTPS protocol for back-to-origin.
      shared_ptr<string> originHttpsPort_ {};
      // The mTLS switch. Valid values:
      // - on: Enable.
      // - off: Disable.
      shared_ptr<string> originMtls_ {};
      // The origin server read timeout period, in seconds.
      shared_ptr<string> originReadTimeout_ {};
      // The protocol used for back-to-origin requests. Valid values:
      // - http: Use the HTTP protocol for back-to-origin.
      // - https: Use the HTTPS protocol for back-to-origin.
      // - follow: Follow the client protocol for back-to-origin.
      shared_ptr<string> originScheme_ {};
      // The SNI carried in the back-to-origin request.
      shared_ptr<string> originSni_ {};
      // The origin server certificate verification switch. Valid values:
      // - on: Enable.
      // - off: Disable.
      shared_ptr<string> originVerify_ {};
      // Use range-based slicing for back-to-origin file downloads. Valid values:
      // - on: Enable.
      // - off: Disable.
      // - force: Force enable.
      shared_ptr<string> range_ {};
      // The range chunk size.
      shared_ptr<string> rangeChunkSize_ {};
      // The rule content, which uses conditional expressions to match user requests. You do not need to set this parameter when adding a global configuration. There are two usage scenarios:
      // - Match all incoming requests: Set the value to true.
      // - Match specified requests: Set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
      shared_ptr<string> rule_ {};
      // The rule switch. You do not need to set this parameter when adding a global configuration. Valid values:
      // - on: Enable.
      // - off: Disable.
      shared_ptr<string> ruleEnable_ {};
      // The rule name. You do not need to set this parameter when adding a global configuration.
      shared_ptr<string> ruleName_ {};
      // The execution order of the rule. A smaller value indicates a higher priority.
      shared_ptr<int32_t> sequence_ {};
      // The version number of the site configuration. For sites with configuration version management enabled, you can use this parameter to specify the site version for which the configuration takes effect. Default value: 0.
      shared_ptr<int32_t> siteVersion_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<ListOriginRulesResponseBody::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<ListOriginRulesResponseBody::Configs>) };
    inline vector<ListOriginRulesResponseBody::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<ListOriginRulesResponseBody::Configs>) };
    inline ListOriginRulesResponseBody& setConfigs(const vector<ListOriginRulesResponseBody::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListOriginRulesResponseBody& setConfigs(vector<ListOriginRulesResponseBody::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOriginRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOriginRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOriginRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListOriginRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListOriginRulesResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The configurations in the response.
    shared_ptr<vector<ListOriginRulesResponseBody::Configs>> configs_ {};
    // The current page number, same as the PageNumber request parameter.
    shared_ptr<int32_t> pageNumber_ {};
    // The page size.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
