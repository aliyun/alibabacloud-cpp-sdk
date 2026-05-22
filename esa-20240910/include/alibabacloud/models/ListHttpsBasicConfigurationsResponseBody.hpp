// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHTTPSBASICCONFIGURATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHTTPSBASICCONFIGURATIONSRESPONSEBODY_HPP_
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
  class ListHttpsBasicConfigurationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHttpsBasicConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListHttpsBasicConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListHttpsBasicConfigurationsResponseBody() = default ;
    ListHttpsBasicConfigurationsResponseBody(const ListHttpsBasicConfigurationsResponseBody &) = default ;
    ListHttpsBasicConfigurationsResponseBody(ListHttpsBasicConfigurationsResponseBody &&) = default ;
    ListHttpsBasicConfigurationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHttpsBasicConfigurationsResponseBody() = default ;
    ListHttpsBasicConfigurationsResponseBody& operator=(const ListHttpsBasicConfigurationsResponseBody &) = default ;
    ListHttpsBasicConfigurationsResponseBody& operator=(ListHttpsBasicConfigurationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(Ciphersuite, ciphersuite_);
        DARABONBA_PTR_TO_JSON(CiphersuiteGroup, ciphersuiteGroup_);
        DARABONBA_PTR_TO_JSON(ConfigId, configId_);
        DARABONBA_PTR_TO_JSON(ConfigType, configType_);
        DARABONBA_PTR_TO_JSON(Http2, http2_);
        DARABONBA_PTR_TO_JSON(Http3, http3_);
        DARABONBA_PTR_TO_JSON(Https, https_);
        DARABONBA_PTR_TO_JSON(OcspStapling, ocspStapling_);
        DARABONBA_PTR_TO_JSON(Rule, rule_);
        DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        DARABONBA_PTR_TO_JSON(Tls10, tls10_);
        DARABONBA_PTR_TO_JSON(Tls11, tls11_);
        DARABONBA_PTR_TO_JSON(Tls12, tls12_);
        DARABONBA_PTR_TO_JSON(Tls13, tls13_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(Ciphersuite, ciphersuite_);
        DARABONBA_PTR_FROM_JSON(CiphersuiteGroup, ciphersuiteGroup_);
        DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
        DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
        DARABONBA_PTR_FROM_JSON(Http2, http2_);
        DARABONBA_PTR_FROM_JSON(Http3, http3_);
        DARABONBA_PTR_FROM_JSON(Https, https_);
        DARABONBA_PTR_FROM_JSON(OcspStapling, ocspStapling_);
        DARABONBA_PTR_FROM_JSON(Rule, rule_);
        DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        DARABONBA_PTR_FROM_JSON(Tls10, tls10_);
        DARABONBA_PTR_FROM_JSON(Tls11, tls11_);
        DARABONBA_PTR_FROM_JSON(Tls12, tls12_);
        DARABONBA_PTR_FROM_JSON(Tls13, tls13_);
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
      virtual bool empty() const override { return this->ciphersuite_ == nullptr
        && this->ciphersuiteGroup_ == nullptr && this->configId_ == nullptr && this->configType_ == nullptr && this->http2_ == nullptr && this->http3_ == nullptr
        && this->https_ == nullptr && this->ocspStapling_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr
        && this->sequence_ == nullptr && this->tls10_ == nullptr && this->tls11_ == nullptr && this->tls12_ == nullptr && this->tls13_ == nullptr; };
      // ciphersuite Field Functions 
      bool hasCiphersuite() const { return this->ciphersuite_ != nullptr;};
      void deleteCiphersuite() { this->ciphersuite_ = nullptr;};
      inline string getCiphersuite() const { DARABONBA_PTR_GET_DEFAULT(ciphersuite_, "") };
      inline Configs& setCiphersuite(string ciphersuite) { DARABONBA_PTR_SET_VALUE(ciphersuite_, ciphersuite) };


      // ciphersuiteGroup Field Functions 
      bool hasCiphersuiteGroup() const { return this->ciphersuiteGroup_ != nullptr;};
      void deleteCiphersuiteGroup() { this->ciphersuiteGroup_ = nullptr;};
      inline string getCiphersuiteGroup() const { DARABONBA_PTR_GET_DEFAULT(ciphersuiteGroup_, "") };
      inline Configs& setCiphersuiteGroup(string ciphersuiteGroup) { DARABONBA_PTR_SET_VALUE(ciphersuiteGroup_, ciphersuiteGroup) };


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


      // http2 Field Functions 
      bool hasHttp2() const { return this->http2_ != nullptr;};
      void deleteHttp2() { this->http2_ = nullptr;};
      inline string getHttp2() const { DARABONBA_PTR_GET_DEFAULT(http2_, "") };
      inline Configs& setHttp2(string http2) { DARABONBA_PTR_SET_VALUE(http2_, http2) };


      // http3 Field Functions 
      bool hasHttp3() const { return this->http3_ != nullptr;};
      void deleteHttp3() { this->http3_ = nullptr;};
      inline string getHttp3() const { DARABONBA_PTR_GET_DEFAULT(http3_, "") };
      inline Configs& setHttp3(string http3) { DARABONBA_PTR_SET_VALUE(http3_, http3) };


      // https Field Functions 
      bool hasHttps() const { return this->https_ != nullptr;};
      void deleteHttps() { this->https_ = nullptr;};
      inline string getHttps() const { DARABONBA_PTR_GET_DEFAULT(https_, "") };
      inline Configs& setHttps(string https) { DARABONBA_PTR_SET_VALUE(https_, https) };


      // ocspStapling Field Functions 
      bool hasOcspStapling() const { return this->ocspStapling_ != nullptr;};
      void deleteOcspStapling() { this->ocspStapling_ = nullptr;};
      inline string getOcspStapling() const { DARABONBA_PTR_GET_DEFAULT(ocspStapling_, "") };
      inline Configs& setOcspStapling(string ocspStapling) { DARABONBA_PTR_SET_VALUE(ocspStapling_, ocspStapling) };


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


      // tls10 Field Functions 
      bool hasTls10() const { return this->tls10_ != nullptr;};
      void deleteTls10() { this->tls10_ = nullptr;};
      inline string getTls10() const { DARABONBA_PTR_GET_DEFAULT(tls10_, "") };
      inline Configs& setTls10(string tls10) { DARABONBA_PTR_SET_VALUE(tls10_, tls10) };


      // tls11 Field Functions 
      bool hasTls11() const { return this->tls11_ != nullptr;};
      void deleteTls11() { this->tls11_ = nullptr;};
      inline string getTls11() const { DARABONBA_PTR_GET_DEFAULT(tls11_, "") };
      inline Configs& setTls11(string tls11) { DARABONBA_PTR_SET_VALUE(tls11_, tls11) };


      // tls12 Field Functions 
      bool hasTls12() const { return this->tls12_ != nullptr;};
      void deleteTls12() { this->tls12_ = nullptr;};
      inline string getTls12() const { DARABONBA_PTR_GET_DEFAULT(tls12_, "") };
      inline Configs& setTls12(string tls12) { DARABONBA_PTR_SET_VALUE(tls12_, tls12) };


      // tls13 Field Functions 
      bool hasTls13() const { return this->tls13_ != nullptr;};
      void deleteTls13() { this->tls13_ = nullptr;};
      inline string getTls13() const { DARABONBA_PTR_GET_DEFAULT(tls13_, "") };
      inline Configs& setTls13(string tls13) { DARABONBA_PTR_SET_VALUE(tls13_, tls13) };


    protected:
      // Custom ciphersuite, indicating the specific encryption algorithm selected when CiphersuiteGroup is set to custom.
      shared_ptr<string> ciphersuite_ {};
      // Ciphersuite group, defaults to enabling all ciphersuites. Value range:
      // - all: all ciphersuites.
      // - strict: strong ciphersuites.
      // - custom: custom ciphersuites.
      shared_ptr<string> ciphersuiteGroup_ {};
      // Configuration ID.
      shared_ptr<int64_t> configId_ {};
      // Configuration type, which can be used to query global or rule configurations. Value range:
      // - global: Query global configuration.
      // - rule: Query rule configuration.
      shared_ptr<string> configType_ {};
      // Whether to enable HTTP2, default is on. Value range:
      // - on: enabled.
      // - off: disabled.
      shared_ptr<string> http2_ {};
      // Whether to enable HTTP3, default is on. Value range:
      // - on: enabled.
      // - off: disabled.
      shared_ptr<string> http3_ {};
      // Whether to enable HTTPS, default is enabled. Value range:
      // - on: Enable.
      // - off: Disable.
      shared_ptr<string> https_ {};
      // Whether to enable OCSP, default is off. Value range:
      // - on: enabled.
      // - off: disabled.
      shared_ptr<string> ocspStapling_ {};
      // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
      // - Match all incoming requests: Set the value to true.
      // - Match specific requests: Set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
      shared_ptr<string> rule_ {};
      // Rule switch. This parameter is not required when adding a global configuration. Value range:
      // - on: Enable.
      // - off: Disable.
      shared_ptr<string> ruleEnable_ {};
      // Rule name. This parameter is not required when adding a global configuration.
      shared_ptr<string> ruleName_ {};
      // Rule execution order. The smaller the value, the higher the priority.
      shared_ptr<int32_t> sequence_ {};
      // Whether to enable TLS1.0, default is disabled. Value range:
      // - on: Enable.
      // - off: Disable.
      shared_ptr<string> tls10_ {};
      // Whether to enable TLS1.1, default is disabled. Value range:
      // - on: Enable.
      // - off: Disable.
      shared_ptr<string> tls11_ {};
      // Whether to enable TLS1.2, default is disabled. Value range:
      // - on: Enable.
      // - off: Disable.
      shared_ptr<string> tls12_ {};
      // Whether to enable TLS1.3, default is disabled. Value range:
      // - on: Enable.
      // - off: Disable.
      shared_ptr<string> tls13_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<ListHttpsBasicConfigurationsResponseBody::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<ListHttpsBasicConfigurationsResponseBody::Configs>) };
    inline vector<ListHttpsBasicConfigurationsResponseBody::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<ListHttpsBasicConfigurationsResponseBody::Configs>) };
    inline ListHttpsBasicConfigurationsResponseBody& setConfigs(const vector<ListHttpsBasicConfigurationsResponseBody::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListHttpsBasicConfigurationsResponseBody& setConfigs(vector<ListHttpsBasicConfigurationsResponseBody::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListHttpsBasicConfigurationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHttpsBasicConfigurationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHttpsBasicConfigurationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHttpsBasicConfigurationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListHttpsBasicConfigurationsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Response body configuration.
    shared_ptr<vector<ListHttpsBasicConfigurationsResponseBody::Configs>> configs_ {};
    // Current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // Page size.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Total number of records.
    shared_ptr<int32_t> totalCount_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
