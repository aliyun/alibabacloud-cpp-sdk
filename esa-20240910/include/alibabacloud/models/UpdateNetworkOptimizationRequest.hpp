// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENETWORKOPTIMIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENETWORKOPTIMIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateNetworkOptimizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNetworkOptimizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(Grpc, grpc_);
      DARABONBA_PTR_TO_JSON(Http2Origin, http2Origin_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SmartRouting, smartRouting_);
      DARABONBA_PTR_TO_JSON(UploadMaxFilesize, uploadMaxFilesize_);
      DARABONBA_PTR_TO_JSON(Websocket, websocket_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNetworkOptimizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(Grpc, grpc_);
      DARABONBA_PTR_FROM_JSON(Http2Origin, http2Origin_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SmartRouting, smartRouting_);
      DARABONBA_PTR_FROM_JSON(UploadMaxFilesize, uploadMaxFilesize_);
      DARABONBA_PTR_FROM_JSON(Websocket, websocket_);
    };
    UpdateNetworkOptimizationRequest() = default ;
    UpdateNetworkOptimizationRequest(const UpdateNetworkOptimizationRequest &) = default ;
    UpdateNetworkOptimizationRequest(UpdateNetworkOptimizationRequest &&) = default ;
    UpdateNetworkOptimizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNetworkOptimizationRequest() = default ;
    UpdateNetworkOptimizationRequest& operator=(const UpdateNetworkOptimizationRequest &) = default ;
    UpdateNetworkOptimizationRequest& operator=(UpdateNetworkOptimizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && return this->grpc_ == nullptr && return this->http2Origin_ == nullptr && return this->rule_ == nullptr && return this->ruleEnable_ == nullptr && return this->ruleName_ == nullptr
        && return this->sequence_ == nullptr && return this->siteId_ == nullptr && return this->smartRouting_ == nullptr && return this->uploadMaxFilesize_ == nullptr && return this->websocket_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline UpdateNetworkOptimizationRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // grpc Field Functions 
    bool hasGrpc() const { return this->grpc_ != nullptr;};
    void deleteGrpc() { this->grpc_ = nullptr;};
    inline string grpc() const { DARABONBA_PTR_GET_DEFAULT(grpc_, "") };
    inline UpdateNetworkOptimizationRequest& setGrpc(string grpc) { DARABONBA_PTR_SET_VALUE(grpc_, grpc) };


    // http2Origin Field Functions 
    bool hasHttp2Origin() const { return this->http2Origin_ != nullptr;};
    void deleteHttp2Origin() { this->http2Origin_ = nullptr;};
    inline string http2Origin() const { DARABONBA_PTR_GET_DEFAULT(http2Origin_, "") };
    inline UpdateNetworkOptimizationRequest& setHttp2Origin(string http2Origin) { DARABONBA_PTR_SET_VALUE(http2Origin_, http2Origin) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline UpdateNetworkOptimizationRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline UpdateNetworkOptimizationRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateNetworkOptimizationRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline UpdateNetworkOptimizationRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateNetworkOptimizationRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // smartRouting Field Functions 
    bool hasSmartRouting() const { return this->smartRouting_ != nullptr;};
    void deleteSmartRouting() { this->smartRouting_ = nullptr;};
    inline string smartRouting() const { DARABONBA_PTR_GET_DEFAULT(smartRouting_, "") };
    inline UpdateNetworkOptimizationRequest& setSmartRouting(string smartRouting) { DARABONBA_PTR_SET_VALUE(smartRouting_, smartRouting) };


    // uploadMaxFilesize Field Functions 
    bool hasUploadMaxFilesize() const { return this->uploadMaxFilesize_ != nullptr;};
    void deleteUploadMaxFilesize() { this->uploadMaxFilesize_ = nullptr;};
    inline string uploadMaxFilesize() const { DARABONBA_PTR_GET_DEFAULT(uploadMaxFilesize_, "") };
    inline UpdateNetworkOptimizationRequest& setUploadMaxFilesize(string uploadMaxFilesize) { DARABONBA_PTR_SET_VALUE(uploadMaxFilesize_, uploadMaxFilesize) };


    // websocket Field Functions 
    bool hasWebsocket() const { return this->websocket_ != nullptr;};
    void deleteWebsocket() { this->websocket_ = nullptr;};
    inline string websocket() const { DARABONBA_PTR_GET_DEFAULT(websocket_, "") };
    inline UpdateNetworkOptimizationRequest& setWebsocket(string websocket) { DARABONBA_PTR_SET_VALUE(websocket_, websocket) };


  protected:
    // Configuration ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // Whether to enable GRPC, default is disabled. Possible values:
    // - on: Enable
    // - off: Disable
    std::shared_ptr<string> grpc_ = nullptr;
    // Whether to enable HTTP2 origin, default is disabled. Possible values:
    // - on: Enable
    // - off: Disable
    std::shared_ptr<string> http2Origin_ = nullptr;
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
    // - Match all incoming requests: Set the value to true
    // - Match specific requests: Set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. This parameter is not required when adding a global configuration. Possible values:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name. This parameter is not required when adding a global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](~~ListSites~~) API.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // Whether to enable the smart routing service, default is disabled. Possible values:
    // - on: Enable
    // - off: Disable
    std::shared_ptr<string> smartRouting_ = nullptr;
    // Maximum upload file size, in MB, with a range of 100 to 500.
    std::shared_ptr<string> uploadMaxFilesize_ = nullptr;
    // Whether to enable Websocket, default is enabled. Possible values:
    // - on: Enable
    // - off: Disable
    std::shared_ptr<string> websocket_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
