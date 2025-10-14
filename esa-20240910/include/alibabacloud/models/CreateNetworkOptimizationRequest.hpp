// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKOPTIMIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKOPTIMIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateNetworkOptimizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkOptimizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Grpc, grpc_);
      DARABONBA_PTR_TO_JSON(Http2Origin, http2Origin_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_TO_JSON(SmartRouting, smartRouting_);
      DARABONBA_PTR_TO_JSON(UploadMaxFilesize, uploadMaxFilesize_);
      DARABONBA_PTR_TO_JSON(Websocket, websocket_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkOptimizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Grpc, grpc_);
      DARABONBA_PTR_FROM_JSON(Http2Origin, http2Origin_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_FROM_JSON(SmartRouting, smartRouting_);
      DARABONBA_PTR_FROM_JSON(UploadMaxFilesize, uploadMaxFilesize_);
      DARABONBA_PTR_FROM_JSON(Websocket, websocket_);
    };
    CreateNetworkOptimizationRequest() = default ;
    CreateNetworkOptimizationRequest(const CreateNetworkOptimizationRequest &) = default ;
    CreateNetworkOptimizationRequest(CreateNetworkOptimizationRequest &&) = default ;
    CreateNetworkOptimizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkOptimizationRequest() = default ;
    CreateNetworkOptimizationRequest& operator=(const CreateNetworkOptimizationRequest &) = default ;
    CreateNetworkOptimizationRequest& operator=(CreateNetworkOptimizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->grpc_ == nullptr
        && return this->http2Origin_ == nullptr && return this->rule_ == nullptr && return this->ruleEnable_ == nullptr && return this->ruleName_ == nullptr && return this->sequence_ == nullptr
        && return this->siteId_ == nullptr && return this->siteVersion_ == nullptr && return this->smartRouting_ == nullptr && return this->uploadMaxFilesize_ == nullptr && return this->websocket_ == nullptr; };
    // grpc Field Functions 
    bool hasGrpc() const { return this->grpc_ != nullptr;};
    void deleteGrpc() { this->grpc_ = nullptr;};
    inline string grpc() const { DARABONBA_PTR_GET_DEFAULT(grpc_, "") };
    inline CreateNetworkOptimizationRequest& setGrpc(string grpc) { DARABONBA_PTR_SET_VALUE(grpc_, grpc) };


    // http2Origin Field Functions 
    bool hasHttp2Origin() const { return this->http2Origin_ != nullptr;};
    void deleteHttp2Origin() { this->http2Origin_ = nullptr;};
    inline string http2Origin() const { DARABONBA_PTR_GET_DEFAULT(http2Origin_, "") };
    inline CreateNetworkOptimizationRequest& setHttp2Origin(string http2Origin) { DARABONBA_PTR_SET_VALUE(http2Origin_, http2Origin) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline CreateNetworkOptimizationRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline CreateNetworkOptimizationRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateNetworkOptimizationRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline CreateNetworkOptimizationRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateNetworkOptimizationRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline CreateNetworkOptimizationRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // smartRouting Field Functions 
    bool hasSmartRouting() const { return this->smartRouting_ != nullptr;};
    void deleteSmartRouting() { this->smartRouting_ = nullptr;};
    inline string smartRouting() const { DARABONBA_PTR_GET_DEFAULT(smartRouting_, "") };
    inline CreateNetworkOptimizationRequest& setSmartRouting(string smartRouting) { DARABONBA_PTR_SET_VALUE(smartRouting_, smartRouting) };


    // uploadMaxFilesize Field Functions 
    bool hasUploadMaxFilesize() const { return this->uploadMaxFilesize_ != nullptr;};
    void deleteUploadMaxFilesize() { this->uploadMaxFilesize_ = nullptr;};
    inline string uploadMaxFilesize() const { DARABONBA_PTR_GET_DEFAULT(uploadMaxFilesize_, "") };
    inline CreateNetworkOptimizationRequest& setUploadMaxFilesize(string uploadMaxFilesize) { DARABONBA_PTR_SET_VALUE(uploadMaxFilesize_, uploadMaxFilesize) };


    // websocket Field Functions 
    bool hasWebsocket() const { return this->websocket_ != nullptr;};
    void deleteWebsocket() { this->websocket_ = nullptr;};
    inline string websocket() const { DARABONBA_PTR_GET_DEFAULT(websocket_, "") };
    inline CreateNetworkOptimizationRequest& setWebsocket(string websocket) { DARABONBA_PTR_SET_VALUE(websocket_, websocket) };


  protected:
    // Whether to enable GRPC, disabled by default. Possible values:
    // - on: Enable
    // - off: Disable
    std::shared_ptr<string> grpc_ = nullptr;
    // Whether to enable HTTP2 origin, disabled by default. Possible values:
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
    // The version number of the site configuration. For sites with version management enabled, this parameter can specify the effective version of the configuration, defaulting to version 0.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
    // Whether to enable smart routing service, disabled by default. Possible values:
    // - on: Enable
    // - off: Disable
    std::shared_ptr<string> smartRouting_ = nullptr;
    // Maximum upload file size in MB, range: 100～500.
    std::shared_ptr<string> uploadMaxFilesize_ = nullptr;
    // Whether to enable Websocket, enabled by default. Possible values:
    // - on: Enable
    // - off: Disable
    std::shared_ptr<string> websocket_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
