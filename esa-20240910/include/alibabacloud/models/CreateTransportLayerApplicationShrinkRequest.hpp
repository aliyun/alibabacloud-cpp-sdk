// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSPORTLAYERAPPLICATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSPORTLAYERAPPLICATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateTransportLayerApplicationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransportLayerApplicationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrossBorderOptimization, crossBorderOptimization_);
      DARABONBA_PTR_TO_JSON(IpAccessRule, ipAccessRule_);
      DARABONBA_PTR_TO_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(Rules, rulesShrink_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StaticIp, staticIp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransportLayerApplicationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossBorderOptimization, crossBorderOptimization_);
      DARABONBA_PTR_FROM_JSON(IpAccessRule, ipAccessRule_);
      DARABONBA_PTR_FROM_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(Rules, rulesShrink_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StaticIp, staticIp_);
    };
    CreateTransportLayerApplicationShrinkRequest() = default ;
    CreateTransportLayerApplicationShrinkRequest(const CreateTransportLayerApplicationShrinkRequest &) = default ;
    CreateTransportLayerApplicationShrinkRequest(CreateTransportLayerApplicationShrinkRequest &&) = default ;
    CreateTransportLayerApplicationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransportLayerApplicationShrinkRequest() = default ;
    CreateTransportLayerApplicationShrinkRequest& operator=(const CreateTransportLayerApplicationShrinkRequest &) = default ;
    CreateTransportLayerApplicationShrinkRequest& operator=(CreateTransportLayerApplicationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crossBorderOptimization_ == nullptr
        && return this->ipAccessRule_ == nullptr && return this->ipv6_ == nullptr && return this->recordName_ == nullptr && return this->rulesShrink_ == nullptr && return this->siteId_ == nullptr
        && return this->staticIp_ == nullptr; };
    // crossBorderOptimization Field Functions 
    bool hasCrossBorderOptimization() const { return this->crossBorderOptimization_ != nullptr;};
    void deleteCrossBorderOptimization() { this->crossBorderOptimization_ = nullptr;};
    inline string crossBorderOptimization() const { DARABONBA_PTR_GET_DEFAULT(crossBorderOptimization_, "") };
    inline CreateTransportLayerApplicationShrinkRequest& setCrossBorderOptimization(string crossBorderOptimization) { DARABONBA_PTR_SET_VALUE(crossBorderOptimization_, crossBorderOptimization) };


    // ipAccessRule Field Functions 
    bool hasIpAccessRule() const { return this->ipAccessRule_ != nullptr;};
    void deleteIpAccessRule() { this->ipAccessRule_ = nullptr;};
    inline string ipAccessRule() const { DARABONBA_PTR_GET_DEFAULT(ipAccessRule_, "") };
    inline CreateTransportLayerApplicationShrinkRequest& setIpAccessRule(string ipAccessRule) { DARABONBA_PTR_SET_VALUE(ipAccessRule_, ipAccessRule) };


    // ipv6 Field Functions 
    bool hasIpv6() const { return this->ipv6_ != nullptr;};
    void deleteIpv6() { this->ipv6_ = nullptr;};
    inline string ipv6() const { DARABONBA_PTR_GET_DEFAULT(ipv6_, "") };
    inline CreateTransportLayerApplicationShrinkRequest& setIpv6(string ipv6) { DARABONBA_PTR_SET_VALUE(ipv6_, ipv6) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline CreateTransportLayerApplicationShrinkRequest& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // rulesShrink Field Functions 
    bool hasRulesShrink() const { return this->rulesShrink_ != nullptr;};
    void deleteRulesShrink() { this->rulesShrink_ = nullptr;};
    inline string rulesShrink() const { DARABONBA_PTR_GET_DEFAULT(rulesShrink_, "") };
    inline CreateTransportLayerApplicationShrinkRequest& setRulesShrink(string rulesShrink) { DARABONBA_PTR_SET_VALUE(rulesShrink_, rulesShrink) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateTransportLayerApplicationShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // staticIp Field Functions 
    bool hasStaticIp() const { return this->staticIp_ != nullptr;};
    void deleteStaticIp() { this->staticIp_ = nullptr;};
    inline string staticIp() const { DARABONBA_PTR_GET_DEFAULT(staticIp_, "") };
    inline CreateTransportLayerApplicationShrinkRequest& setStaticIp(string staticIp) { DARABONBA_PTR_SET_VALUE(staticIp_, staticIp) };


  protected:
    // Whether to enable China mainland network access optimization, default is disabled. Value range:
    // - on: Enabled.
    // - off: Disabled.
    std::shared_ptr<string> crossBorderOptimization_ = nullptr;
    // IP access rule switch. When enabled, the WAF\\"s IP access rules apply to the transport layer application.
    // 
    // - on: Enabled.
    // - off: Disabled.
    std::shared_ptr<string> ipAccessRule_ = nullptr;
    // IPv6 switch.
    std::shared_ptr<string> ipv6_ = nullptr;
    // Domain name of the transport layer application.
    // 
    // This parameter is required.
    std::shared_ptr<string> recordName_ = nullptr;
    // List of forwarding rules.
    // 
    // This parameter is required.
    std::shared_ptr<string> rulesShrink_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](~~ListSites~~) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    std::shared_ptr<string> staticIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
