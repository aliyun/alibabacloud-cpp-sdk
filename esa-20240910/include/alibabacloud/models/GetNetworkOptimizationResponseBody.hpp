// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKOPTIMIZATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKOPTIMIZATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetNetworkOptimizationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkOptimizationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(Grpc, grpc_);
      DARABONBA_PTR_TO_JSON(Http2Origin, http2Origin_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_TO_JSON(SmartRouting, smartRouting_);
      DARABONBA_PTR_TO_JSON(UploadMaxFilesize, uploadMaxFilesize_);
      DARABONBA_PTR_TO_JSON(Websocket, websocket_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkOptimizationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(Grpc, grpc_);
      DARABONBA_PTR_FROM_JSON(Http2Origin, http2Origin_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_FROM_JSON(SmartRouting, smartRouting_);
      DARABONBA_PTR_FROM_JSON(UploadMaxFilesize, uploadMaxFilesize_);
      DARABONBA_PTR_FROM_JSON(Websocket, websocket_);
    };
    GetNetworkOptimizationResponseBody() = default ;
    GetNetworkOptimizationResponseBody(const GetNetworkOptimizationResponseBody &) = default ;
    GetNetworkOptimizationResponseBody(GetNetworkOptimizationResponseBody &&) = default ;
    GetNetworkOptimizationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkOptimizationResponseBody() = default ;
    GetNetworkOptimizationResponseBody& operator=(const GetNetworkOptimizationResponseBody &) = default ;
    GetNetworkOptimizationResponseBody& operator=(GetNetworkOptimizationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && return this->configType_ == nullptr && return this->grpc_ == nullptr && return this->http2Origin_ == nullptr && return this->requestId_ == nullptr && return this->rule_ == nullptr
        && return this->ruleEnable_ == nullptr && return this->ruleName_ == nullptr && return this->sequence_ == nullptr && return this->siteVersion_ == nullptr && return this->smartRouting_ == nullptr
        && return this->uploadMaxFilesize_ == nullptr && return this->websocket_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetNetworkOptimizationResponseBody& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetNetworkOptimizationResponseBody& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // grpc Field Functions 
    bool hasGrpc() const { return this->grpc_ != nullptr;};
    void deleteGrpc() { this->grpc_ = nullptr;};
    inline string grpc() const { DARABONBA_PTR_GET_DEFAULT(grpc_, "") };
    inline GetNetworkOptimizationResponseBody& setGrpc(string grpc) { DARABONBA_PTR_SET_VALUE(grpc_, grpc) };


    // http2Origin Field Functions 
    bool hasHttp2Origin() const { return this->http2Origin_ != nullptr;};
    void deleteHttp2Origin() { this->http2Origin_ = nullptr;};
    inline string http2Origin() const { DARABONBA_PTR_GET_DEFAULT(http2Origin_, "") };
    inline GetNetworkOptimizationResponseBody& setHttp2Origin(string http2Origin) { DARABONBA_PTR_SET_VALUE(http2Origin_, http2Origin) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNetworkOptimizationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline GetNetworkOptimizationResponseBody& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline GetNetworkOptimizationResponseBody& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetNetworkOptimizationResponseBody& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline GetNetworkOptimizationResponseBody& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline GetNetworkOptimizationResponseBody& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // smartRouting Field Functions 
    bool hasSmartRouting() const { return this->smartRouting_ != nullptr;};
    void deleteSmartRouting() { this->smartRouting_ = nullptr;};
    inline string smartRouting() const { DARABONBA_PTR_GET_DEFAULT(smartRouting_, "") };
    inline GetNetworkOptimizationResponseBody& setSmartRouting(string smartRouting) { DARABONBA_PTR_SET_VALUE(smartRouting_, smartRouting) };


    // uploadMaxFilesize Field Functions 
    bool hasUploadMaxFilesize() const { return this->uploadMaxFilesize_ != nullptr;};
    void deleteUploadMaxFilesize() { this->uploadMaxFilesize_ = nullptr;};
    inline string uploadMaxFilesize() const { DARABONBA_PTR_GET_DEFAULT(uploadMaxFilesize_, "") };
    inline GetNetworkOptimizationResponseBody& setUploadMaxFilesize(string uploadMaxFilesize) { DARABONBA_PTR_SET_VALUE(uploadMaxFilesize_, uploadMaxFilesize) };


    // websocket Field Functions 
    bool hasWebsocket() const { return this->websocket_ != nullptr;};
    void deleteWebsocket() { this->websocket_ = nullptr;};
    inline string websocket() const { DARABONBA_PTR_GET_DEFAULT(websocket_, "") };
    inline GetNetworkOptimizationResponseBody& setWebsocket(string websocket) { DARABONBA_PTR_SET_VALUE(websocket_, websocket) };


  protected:
    // Configuration ID.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // Configuration type, which can be used to query global or rule configurations. Value range:
    // 
    // - global: Query global configuration.
    // - rule: Query rule configuration.
    std::shared_ptr<string> configType_ = nullptr;
    // Whether to enable GRPC, default is disabled. Value range:
    // - on: Enable
    // - off: Disable
    std::shared_ptr<string> grpc_ = nullptr;
    // Whether to enable HTTP2 origin, default is disabled. Value range:
    // 
    // - on: Enable
    // - off: Disable
    std::shared_ptr<string> http2Origin_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
    // - Match all incoming requests: Set the value to true
    // - Match specific requests: Set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. This parameter is not required when adding a global configuration. Value range:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name. This parameter is not required when adding a global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Rule execution order. The smaller the value, the higher the priority.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // Site configuration version number. For sites with version management enabled, this parameter can specify the effective site version, defaulting to version 0.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
    // Whether to enable smart routing service, default is disabled. Value range:
    // - on: Enable
    // - off: Disable
    std::shared_ptr<string> smartRouting_ = nullptr;
    // Maximum upload file size in MB, with a range from 100 to 500.
    std::shared_ptr<string> uploadMaxFilesize_ = nullptr;
    // Whether to enable Websocket, default is enabled. Value range:
    // - on: Enable
    // - off: Disable
    std::shared_ptr<string> websocket_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
