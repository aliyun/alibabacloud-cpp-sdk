// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSPORTLAYERAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSPORTLAYERAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTransportLayerApplicationResponseBodyRules.hpp>
#include <alibabacloud/models/GetTransportLayerApplicationResponseBodyStaticIpV4List.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetTransportLayerApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransportLayerApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(CrossBorderOptimization, crossBorderOptimization_);
      DARABONBA_PTR_TO_JSON(IpAccessRule, ipAccessRule_);
      DARABONBA_PTR_TO_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(RulesCount, rulesCount_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StaticIp, staticIp_);
      DARABONBA_PTR_TO_JSON(StaticIpV4List, staticIpV4List_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransportLayerApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(CrossBorderOptimization, crossBorderOptimization_);
      DARABONBA_PTR_FROM_JSON(IpAccessRule, ipAccessRule_);
      DARABONBA_PTR_FROM_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(RulesCount, rulesCount_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StaticIp, staticIp_);
      DARABONBA_PTR_FROM_JSON(StaticIpV4List, staticIpV4List_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetTransportLayerApplicationResponseBody() = default ;
    GetTransportLayerApplicationResponseBody(const GetTransportLayerApplicationResponseBody &) = default ;
    GetTransportLayerApplicationResponseBody(GetTransportLayerApplicationResponseBody &&) = default ;
    GetTransportLayerApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransportLayerApplicationResponseBody() = default ;
    GetTransportLayerApplicationResponseBody& operator=(const GetTransportLayerApplicationResponseBody &) = default ;
    GetTransportLayerApplicationResponseBody& operator=(GetTransportLayerApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->cname_ == nullptr && return this->crossBorderOptimization_ == nullptr && return this->ipAccessRule_ == nullptr && return this->ipv6_ == nullptr && return this->recordName_ == nullptr
        && return this->requestId_ == nullptr && return this->rules_ == nullptr && return this->rulesCount_ == nullptr && return this->siteId_ == nullptr && return this->staticIp_ == nullptr
        && return this->staticIpV4List_ == nullptr && return this->status_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline int64_t applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, 0L) };
    inline GetTransportLayerApplicationResponseBody& setApplicationId(int64_t applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline GetTransportLayerApplicationResponseBody& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // crossBorderOptimization Field Functions 
    bool hasCrossBorderOptimization() const { return this->crossBorderOptimization_ != nullptr;};
    void deleteCrossBorderOptimization() { this->crossBorderOptimization_ = nullptr;};
    inline string crossBorderOptimization() const { DARABONBA_PTR_GET_DEFAULT(crossBorderOptimization_, "") };
    inline GetTransportLayerApplicationResponseBody& setCrossBorderOptimization(string crossBorderOptimization) { DARABONBA_PTR_SET_VALUE(crossBorderOptimization_, crossBorderOptimization) };


    // ipAccessRule Field Functions 
    bool hasIpAccessRule() const { return this->ipAccessRule_ != nullptr;};
    void deleteIpAccessRule() { this->ipAccessRule_ = nullptr;};
    inline string ipAccessRule() const { DARABONBA_PTR_GET_DEFAULT(ipAccessRule_, "") };
    inline GetTransportLayerApplicationResponseBody& setIpAccessRule(string ipAccessRule) { DARABONBA_PTR_SET_VALUE(ipAccessRule_, ipAccessRule) };


    // ipv6 Field Functions 
    bool hasIpv6() const { return this->ipv6_ != nullptr;};
    void deleteIpv6() { this->ipv6_ = nullptr;};
    inline string ipv6() const { DARABONBA_PTR_GET_DEFAULT(ipv6_, "") };
    inline GetTransportLayerApplicationResponseBody& setIpv6(string ipv6) { DARABONBA_PTR_SET_VALUE(ipv6_, ipv6) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline GetTransportLayerApplicationResponseBody& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTransportLayerApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<GetTransportLayerApplicationResponseBodyRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<GetTransportLayerApplicationResponseBodyRules>) };
    inline vector<GetTransportLayerApplicationResponseBodyRules> rules() { DARABONBA_PTR_GET(rules_, vector<GetTransportLayerApplicationResponseBodyRules>) };
    inline GetTransportLayerApplicationResponseBody& setRules(const vector<GetTransportLayerApplicationResponseBodyRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline GetTransportLayerApplicationResponseBody& setRules(vector<GetTransportLayerApplicationResponseBodyRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // rulesCount Field Functions 
    bool hasRulesCount() const { return this->rulesCount_ != nullptr;};
    void deleteRulesCount() { this->rulesCount_ = nullptr;};
    inline int32_t rulesCount() const { DARABONBA_PTR_GET_DEFAULT(rulesCount_, 0) };
    inline GetTransportLayerApplicationResponseBody& setRulesCount(int32_t rulesCount) { DARABONBA_PTR_SET_VALUE(rulesCount_, rulesCount) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetTransportLayerApplicationResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // staticIp Field Functions 
    bool hasStaticIp() const { return this->staticIp_ != nullptr;};
    void deleteStaticIp() { this->staticIp_ = nullptr;};
    inline string staticIp() const { DARABONBA_PTR_GET_DEFAULT(staticIp_, "") };
    inline GetTransportLayerApplicationResponseBody& setStaticIp(string staticIp) { DARABONBA_PTR_SET_VALUE(staticIp_, staticIp) };


    // staticIpV4List Field Functions 
    bool hasStaticIpV4List() const { return this->staticIpV4List_ != nullptr;};
    void deleteStaticIpV4List() { this->staticIpV4List_ = nullptr;};
    inline const vector<GetTransportLayerApplicationResponseBodyStaticIpV4List> & staticIpV4List() const { DARABONBA_PTR_GET_CONST(staticIpV4List_, vector<GetTransportLayerApplicationResponseBodyStaticIpV4List>) };
    inline vector<GetTransportLayerApplicationResponseBodyStaticIpV4List> staticIpV4List() { DARABONBA_PTR_GET(staticIpV4List_, vector<GetTransportLayerApplicationResponseBodyStaticIpV4List>) };
    inline GetTransportLayerApplicationResponseBody& setStaticIpV4List(const vector<GetTransportLayerApplicationResponseBodyStaticIpV4List> & staticIpV4List) { DARABONBA_PTR_SET_VALUE(staticIpV4List_, staticIpV4List) };
    inline GetTransportLayerApplicationResponseBody& setStaticIpV4List(vector<GetTransportLayerApplicationResponseBodyStaticIpV4List> && staticIpV4List) { DARABONBA_PTR_SET_RVALUE(staticIpV4List_, staticIpV4List) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTransportLayerApplicationResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Specific value of the origin, which needs to match the type of the origin.
    std::shared_ptr<int64_t> applicationId_ = nullptr;
    // Whether to enable China mainland network access optimization, default is off. Value range:
    // - on: Enabled.
    // - off: Disabled.
    std::shared_ptr<string> cname_ = nullptr;
    std::shared_ptr<string> crossBorderOptimization_ = nullptr;
    // #/components/schemas/WafRuleMatch2
    std::shared_ptr<string> ipAccessRule_ = nullptr;
    // Ipv6 switch
    std::shared_ptr<string> ipv6_ = nullptr;
    // Query Transport Layer Acceleration Application
    std::shared_ptr<string> recordName_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // Edge port. Supports:
    // 
    // - A single port, such as 80.
    // - Port range, such as 81-85, representing ports 81, 82, 83, 84, 85.
    // - Combination of ports and port ranges, separated by commas, for example 80,81-85,90, representing ports 80, 81, 82, 83, 84, 85, 90.
    std::shared_ptr<vector<GetTransportLayerApplicationResponseBodyRules>> rules_ = nullptr;
    // Forwarding rule protocol, with values:
    // 
    // - TCP: TCP protocol.
    // - UDP: UDP protocol.
    std::shared_ptr<int32_t> rulesCount_ = nullptr;
    // Details of the forwarding rule.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    std::shared_ptr<string> staticIp_ = nullptr;
    std::shared_ptr<vector<GetTransportLayerApplicationResponseBodyStaticIpV4List>> staticIpV4List_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
