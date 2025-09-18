// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSPORTLAYERAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSPORTLAYERAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTransportLayerApplicationRequestRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateTransportLayerApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransportLayerApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrossBorderOptimization, crossBorderOptimization_);
      DARABONBA_PTR_TO_JSON(IpAccessRule, ipAccessRule_);
      DARABONBA_PTR_TO_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StaticIp, staticIp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransportLayerApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossBorderOptimization, crossBorderOptimization_);
      DARABONBA_PTR_FROM_JSON(IpAccessRule, ipAccessRule_);
      DARABONBA_PTR_FROM_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StaticIp, staticIp_);
    };
    CreateTransportLayerApplicationRequest() = default ;
    CreateTransportLayerApplicationRequest(const CreateTransportLayerApplicationRequest &) = default ;
    CreateTransportLayerApplicationRequest(CreateTransportLayerApplicationRequest &&) = default ;
    CreateTransportLayerApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransportLayerApplicationRequest() = default ;
    CreateTransportLayerApplicationRequest& operator=(const CreateTransportLayerApplicationRequest &) = default ;
    CreateTransportLayerApplicationRequest& operator=(CreateTransportLayerApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->crossBorderOptimization_ != nullptr
        && this->ipAccessRule_ != nullptr && this->ipv6_ != nullptr && this->recordName_ != nullptr && this->rules_ != nullptr && this->siteId_ != nullptr
        && this->staticIp_ != nullptr; };
    // crossBorderOptimization Field Functions 
    bool hasCrossBorderOptimization() const { return this->crossBorderOptimization_ != nullptr;};
    void deleteCrossBorderOptimization() { this->crossBorderOptimization_ = nullptr;};
    inline string crossBorderOptimization() const { DARABONBA_PTR_GET_DEFAULT(crossBorderOptimization_, "") };
    inline CreateTransportLayerApplicationRequest& setCrossBorderOptimization(string crossBorderOptimization) { DARABONBA_PTR_SET_VALUE(crossBorderOptimization_, crossBorderOptimization) };


    // ipAccessRule Field Functions 
    bool hasIpAccessRule() const { return this->ipAccessRule_ != nullptr;};
    void deleteIpAccessRule() { this->ipAccessRule_ = nullptr;};
    inline string ipAccessRule() const { DARABONBA_PTR_GET_DEFAULT(ipAccessRule_, "") };
    inline CreateTransportLayerApplicationRequest& setIpAccessRule(string ipAccessRule) { DARABONBA_PTR_SET_VALUE(ipAccessRule_, ipAccessRule) };


    // ipv6 Field Functions 
    bool hasIpv6() const { return this->ipv6_ != nullptr;};
    void deleteIpv6() { this->ipv6_ = nullptr;};
    inline string ipv6() const { DARABONBA_PTR_GET_DEFAULT(ipv6_, "") };
    inline CreateTransportLayerApplicationRequest& setIpv6(string ipv6) { DARABONBA_PTR_SET_VALUE(ipv6_, ipv6) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline CreateTransportLayerApplicationRequest& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<CreateTransportLayerApplicationRequestRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<CreateTransportLayerApplicationRequestRules>) };
    inline vector<CreateTransportLayerApplicationRequestRules> rules() { DARABONBA_PTR_GET(rules_, vector<CreateTransportLayerApplicationRequestRules>) };
    inline CreateTransportLayerApplicationRequest& setRules(const vector<CreateTransportLayerApplicationRequestRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline CreateTransportLayerApplicationRequest& setRules(vector<CreateTransportLayerApplicationRequestRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateTransportLayerApplicationRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // staticIp Field Functions 
    bool hasStaticIp() const { return this->staticIp_ != nullptr;};
    void deleteStaticIp() { this->staticIp_ = nullptr;};
    inline string staticIp() const { DARABONBA_PTR_GET_DEFAULT(staticIp_, "") };
    inline CreateTransportLayerApplicationRequest& setStaticIp(string staticIp) { DARABONBA_PTR_SET_VALUE(staticIp_, staticIp) };


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
    std::shared_ptr<vector<CreateTransportLayerApplicationRequestRules>> rules_ = nullptr;
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
