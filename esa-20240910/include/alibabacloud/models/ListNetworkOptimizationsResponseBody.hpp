// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKOPTIMIZATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKOPTIMIZATIONSRESPONSEBODY_HPP_
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
  class ListNetworkOptimizationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkOptimizationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkOptimizationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListNetworkOptimizationsResponseBody() = default ;
    ListNetworkOptimizationsResponseBody(const ListNetworkOptimizationsResponseBody &) = default ;
    ListNetworkOptimizationsResponseBody(ListNetworkOptimizationsResponseBody &&) = default ;
    ListNetworkOptimizationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkOptimizationsResponseBody() = default ;
    ListNetworkOptimizationsResponseBody& operator=(const ListNetworkOptimizationsResponseBody &) = default ;
    ListNetworkOptimizationsResponseBody& operator=(ListNetworkOptimizationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigId, configId_);
        DARABONBA_PTR_TO_JSON(ConfigType, configType_);
        DARABONBA_PTR_TO_JSON(Grpc, grpc_);
        DARABONBA_PTR_TO_JSON(Http2Origin, http2Origin_);
        DARABONBA_PTR_TO_JSON(Rule, rule_);
        DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
        DARABONBA_PTR_TO_JSON(SmartRouting, smartRouting_);
        DARABONBA_PTR_TO_JSON(UploadMaxFilesize, uploadMaxFilesize_);
        DARABONBA_PTR_TO_JSON(Websocket, websocket_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
        DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
        DARABONBA_PTR_FROM_JSON(Grpc, grpc_);
        DARABONBA_PTR_FROM_JSON(Http2Origin, http2Origin_);
        DARABONBA_PTR_FROM_JSON(Rule, rule_);
        DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
        DARABONBA_PTR_FROM_JSON(SmartRouting, smartRouting_);
        DARABONBA_PTR_FROM_JSON(UploadMaxFilesize, uploadMaxFilesize_);
        DARABONBA_PTR_FROM_JSON(Websocket, websocket_);
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
        && this->configType_ == nullptr && this->grpc_ == nullptr && this->http2Origin_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr
        && this->ruleName_ == nullptr && this->sequence_ == nullptr && this->siteVersion_ == nullptr && this->smartRouting_ == nullptr && this->uploadMaxFilesize_ == nullptr
        && this->websocket_ == nullptr; };
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


      // grpc Field Functions 
      bool hasGrpc() const { return this->grpc_ != nullptr;};
      void deleteGrpc() { this->grpc_ = nullptr;};
      inline string getGrpc() const { DARABONBA_PTR_GET_DEFAULT(grpc_, "") };
      inline Configs& setGrpc(string grpc) { DARABONBA_PTR_SET_VALUE(grpc_, grpc) };


      // http2Origin Field Functions 
      bool hasHttp2Origin() const { return this->http2Origin_ != nullptr;};
      void deleteHttp2Origin() { this->http2Origin_ = nullptr;};
      inline string getHttp2Origin() const { DARABONBA_PTR_GET_DEFAULT(http2Origin_, "") };
      inline Configs& setHttp2Origin(string http2Origin) { DARABONBA_PTR_SET_VALUE(http2Origin_, http2Origin) };


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


      // smartRouting Field Functions 
      bool hasSmartRouting() const { return this->smartRouting_ != nullptr;};
      void deleteSmartRouting() { this->smartRouting_ = nullptr;};
      inline string getSmartRouting() const { DARABONBA_PTR_GET_DEFAULT(smartRouting_, "") };
      inline Configs& setSmartRouting(string smartRouting) { DARABONBA_PTR_SET_VALUE(smartRouting_, smartRouting) };


      // uploadMaxFilesize Field Functions 
      bool hasUploadMaxFilesize() const { return this->uploadMaxFilesize_ != nullptr;};
      void deleteUploadMaxFilesize() { this->uploadMaxFilesize_ = nullptr;};
      inline string getUploadMaxFilesize() const { DARABONBA_PTR_GET_DEFAULT(uploadMaxFilesize_, "") };
      inline Configs& setUploadMaxFilesize(string uploadMaxFilesize) { DARABONBA_PTR_SET_VALUE(uploadMaxFilesize_, uploadMaxFilesize) };


      // websocket Field Functions 
      bool hasWebsocket() const { return this->websocket_ != nullptr;};
      void deleteWebsocket() { this->websocket_ = nullptr;};
      inline string getWebsocket() const { DARABONBA_PTR_GET_DEFAULT(websocket_, "") };
      inline Configs& setWebsocket(string websocket) { DARABONBA_PTR_SET_VALUE(websocket_, websocket) };


    protected:
      // Configuration ID.
      shared_ptr<int64_t> configId_ {};
      // Configuration type, which can be used to query global or rule-based configurations. The value range is as follows:
      // 
      // - global: Query global configuration.
      // - rule: Query rule-based configuration.
      shared_ptr<string> configType_ {};
      // Whether to enable GRPC, default is off. The value range is:
      // - on: enabled.
      // - off: disabled.
      shared_ptr<string> grpc_ {};
      // Whether to enable HTTP2 origin, defaulting to off. The value range is as follows:
      // 
      // - on: Enabled.
      // - off: Disabled.
      shared_ptr<string> http2Origin_ {};
      // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
      // - Match all incoming requests: Set the value to true
      // - Match specific requests: Set the value to a custom expression, e.g., (http.host eq \\"video.example.com\\")
      shared_ptr<string> rule_ {};
      // Rule switch. This parameter is not required when adding a global configuration. The value range is as follows:
      // - on: Enabled.
      // - off: Disabled.
      shared_ptr<string> ruleEnable_ {};
      // Rule name. This parameter is not required when adding a global configuration.
      shared_ptr<string> ruleName_ {};
      // Rule execution order. The smaller the value, the higher the priority.
      shared_ptr<int32_t> sequence_ {};
      // Site configuration version number. For sites with version management enabled, this parameter can specify the site version for which the configuration takes effect, defaulting to version 0.
      shared_ptr<int32_t> siteVersion_ {};
      // Whether to enable smart routing service, defaulting to off. The value range is as follows:
      // - on: Enabled.
      // - off: Disabled.
      shared_ptr<string> smartRouting_ {};
      // Maximum file size for upload, in MB. The value range is 100 to 500.
      shared_ptr<string> uploadMaxFilesize_ {};
      // Whether to enable Websocket, enabled by default. Value range: 
      // - on: Enabled. 
      // - off: Disabled.
      shared_ptr<string> websocket_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<ListNetworkOptimizationsResponseBody::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<ListNetworkOptimizationsResponseBody::Configs>) };
    inline vector<ListNetworkOptimizationsResponseBody::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<ListNetworkOptimizationsResponseBody::Configs>) };
    inline ListNetworkOptimizationsResponseBody& setConfigs(const vector<ListNetworkOptimizationsResponseBody::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListNetworkOptimizationsResponseBody& setConfigs(vector<ListNetworkOptimizationsResponseBody::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNetworkOptimizationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNetworkOptimizationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNetworkOptimizationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNetworkOptimizationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListNetworkOptimizationsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Response body configurations.
    shared_ptr<vector<ListNetworkOptimizationsResponseBody::Configs>> configs_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The size of the page.
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
