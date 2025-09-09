// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSPRODUCTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSPRODUCTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDnsProductInstanceResponseBodyDnsServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsProductInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsProductInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(BindCount, bindCount_);
      DARABONBA_PTR_TO_JSON(BindDomainCount, bindDomainCount_);
      DARABONBA_PTR_TO_JSON(BindDomainUsedCount, bindDomainUsedCount_);
      DARABONBA_PTR_TO_JSON(BindUsedCount, bindUsedCount_);
      DARABONBA_PTR_TO_JSON(DDosDefendFlow, DDosDefendFlow_);
      DARABONBA_PTR_TO_JSON(DDosDefendQuery, DDosDefendQuery_);
      DARABONBA_PTR_TO_JSON(DnsSLBCount, dnsSLBCount_);
      DARABONBA_PTR_TO_JSON(DnsSecurity, dnsSecurity_);
      DARABONBA_PTR_TO_JSON(DnsServers, dnsServers_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(Gslb, gslb_);
      DARABONBA_PTR_TO_JSON(ISPLines, ISPLines_);
      DARABONBA_PTR_TO_JSON(ISPRegionLines, ISPRegionLines_);
      DARABONBA_PTR_TO_JSON(InBlackHole, inBlackHole_);
      DARABONBA_PTR_TO_JSON(InClean, inClean_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MonitorFrequency, monitorFrequency_);
      DARABONBA_PTR_TO_JSON(MonitorNodeCount, monitorNodeCount_);
      DARABONBA_PTR_TO_JSON(MonitorTaskCount, monitorTaskCount_);
      DARABONBA_PTR_TO_JSON(OverseaDDosDefendFlow, overseaDDosDefendFlow_);
      DARABONBA_PTR_TO_JSON(OverseaLine, overseaLine_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(RegionLines, regionLines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SearchEngineLines, searchEngineLines_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_PTR_TO_JSON(SubDomainLevel, subDomainLevel_);
      DARABONBA_PTR_TO_JSON(TTLMinValue, TTLMinValue_);
      DARABONBA_PTR_TO_JSON(URLForwardCount, URLForwardCount_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsProductInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(BindCount, bindCount_);
      DARABONBA_PTR_FROM_JSON(BindDomainCount, bindDomainCount_);
      DARABONBA_PTR_FROM_JSON(BindDomainUsedCount, bindDomainUsedCount_);
      DARABONBA_PTR_FROM_JSON(BindUsedCount, bindUsedCount_);
      DARABONBA_PTR_FROM_JSON(DDosDefendFlow, DDosDefendFlow_);
      DARABONBA_PTR_FROM_JSON(DDosDefendQuery, DDosDefendQuery_);
      DARABONBA_PTR_FROM_JSON(DnsSLBCount, dnsSLBCount_);
      DARABONBA_PTR_FROM_JSON(DnsSecurity, dnsSecurity_);
      DARABONBA_PTR_FROM_JSON(DnsServers, dnsServers_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(Gslb, gslb_);
      DARABONBA_PTR_FROM_JSON(ISPLines, ISPLines_);
      DARABONBA_PTR_FROM_JSON(ISPRegionLines, ISPRegionLines_);
      DARABONBA_PTR_FROM_JSON(InBlackHole, inBlackHole_);
      DARABONBA_PTR_FROM_JSON(InClean, inClean_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MonitorFrequency, monitorFrequency_);
      DARABONBA_PTR_FROM_JSON(MonitorNodeCount, monitorNodeCount_);
      DARABONBA_PTR_FROM_JSON(MonitorTaskCount, monitorTaskCount_);
      DARABONBA_PTR_FROM_JSON(OverseaDDosDefendFlow, overseaDDosDefendFlow_);
      DARABONBA_PTR_FROM_JSON(OverseaLine, overseaLine_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(RegionLines, regionLines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SearchEngineLines, searchEngineLines_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_PTR_FROM_JSON(SubDomainLevel, subDomainLevel_);
      DARABONBA_PTR_FROM_JSON(TTLMinValue, TTLMinValue_);
      DARABONBA_PTR_FROM_JSON(URLForwardCount, URLForwardCount_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    DescribeDnsProductInstanceResponseBody() = default ;
    DescribeDnsProductInstanceResponseBody(const DescribeDnsProductInstanceResponseBody &) = default ;
    DescribeDnsProductInstanceResponseBody(DescribeDnsProductInstanceResponseBody &&) = default ;
    DescribeDnsProductInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsProductInstanceResponseBody() = default ;
    DescribeDnsProductInstanceResponseBody& operator=(const DescribeDnsProductInstanceResponseBody &) = default ;
    DescribeDnsProductInstanceResponseBody& operator=(DescribeDnsProductInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRenewal_ != nullptr
        && this->bindCount_ != nullptr && this->bindDomainCount_ != nullptr && this->bindDomainUsedCount_ != nullptr && this->bindUsedCount_ != nullptr && this->DDosDefendFlow_ != nullptr
        && this->DDosDefendQuery_ != nullptr && this->dnsSLBCount_ != nullptr && this->dnsSecurity_ != nullptr && this->dnsServers_ != nullptr && this->domain_ != nullptr
        && this->domainType_ != nullptr && this->endTime_ != nullptr && this->endTimestamp_ != nullptr && this->gslb_ != nullptr && this->ISPLines_ != nullptr
        && this->ISPRegionLines_ != nullptr && this->inBlackHole_ != nullptr && this->inClean_ != nullptr && this->instanceId_ != nullptr && this->monitorFrequency_ != nullptr
        && this->monitorNodeCount_ != nullptr && this->monitorTaskCount_ != nullptr && this->overseaDDosDefendFlow_ != nullptr && this->overseaLine_ != nullptr && this->paymentType_ != nullptr
        && this->regionLines_ != nullptr && this->requestId_ != nullptr && this->searchEngineLines_ != nullptr && this->startTime_ != nullptr && this->startTimestamp_ != nullptr
        && this->subDomainLevel_ != nullptr && this->TTLMinValue_ != nullptr && this->URLForwardCount_ != nullptr && this->versionCode_ != nullptr && this->versionName_ != nullptr; };
    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline bool autoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
    inline DescribeDnsProductInstanceResponseBody& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // bindCount Field Functions 
    bool hasBindCount() const { return this->bindCount_ != nullptr;};
    void deleteBindCount() { this->bindCount_ = nullptr;};
    inline int64_t bindCount() const { DARABONBA_PTR_GET_DEFAULT(bindCount_, 0L) };
    inline DescribeDnsProductInstanceResponseBody& setBindCount(int64_t bindCount) { DARABONBA_PTR_SET_VALUE(bindCount_, bindCount) };


    // bindDomainCount Field Functions 
    bool hasBindDomainCount() const { return this->bindDomainCount_ != nullptr;};
    void deleteBindDomainCount() { this->bindDomainCount_ = nullptr;};
    inline int64_t bindDomainCount() const { DARABONBA_PTR_GET_DEFAULT(bindDomainCount_, 0L) };
    inline DescribeDnsProductInstanceResponseBody& setBindDomainCount(int64_t bindDomainCount) { DARABONBA_PTR_SET_VALUE(bindDomainCount_, bindDomainCount) };


    // bindDomainUsedCount Field Functions 
    bool hasBindDomainUsedCount() const { return this->bindDomainUsedCount_ != nullptr;};
    void deleteBindDomainUsedCount() { this->bindDomainUsedCount_ = nullptr;};
    inline int64_t bindDomainUsedCount() const { DARABONBA_PTR_GET_DEFAULT(bindDomainUsedCount_, 0L) };
    inline DescribeDnsProductInstanceResponseBody& setBindDomainUsedCount(int64_t bindDomainUsedCount) { DARABONBA_PTR_SET_VALUE(bindDomainUsedCount_, bindDomainUsedCount) };


    // bindUsedCount Field Functions 
    bool hasBindUsedCount() const { return this->bindUsedCount_ != nullptr;};
    void deleteBindUsedCount() { this->bindUsedCount_ = nullptr;};
    inline int64_t bindUsedCount() const { DARABONBA_PTR_GET_DEFAULT(bindUsedCount_, 0L) };
    inline DescribeDnsProductInstanceResponseBody& setBindUsedCount(int64_t bindUsedCount) { DARABONBA_PTR_SET_VALUE(bindUsedCount_, bindUsedCount) };


    // DDosDefendFlow Field Functions 
    bool hasDDosDefendFlow() const { return this->DDosDefendFlow_ != nullptr;};
    void deleteDDosDefendFlow() { this->DDosDefendFlow_ = nullptr;};
    inline int64_t DDosDefendFlow() const { DARABONBA_PTR_GET_DEFAULT(DDosDefendFlow_, 0L) };
    inline DescribeDnsProductInstanceResponseBody& setDDosDefendFlow(int64_t DDosDefendFlow) { DARABONBA_PTR_SET_VALUE(DDosDefendFlow_, DDosDefendFlow) };


    // DDosDefendQuery Field Functions 
    bool hasDDosDefendQuery() const { return this->DDosDefendQuery_ != nullptr;};
    void deleteDDosDefendQuery() { this->DDosDefendQuery_ = nullptr;};
    inline int64_t DDosDefendQuery() const { DARABONBA_PTR_GET_DEFAULT(DDosDefendQuery_, 0L) };
    inline DescribeDnsProductInstanceResponseBody& setDDosDefendQuery(int64_t DDosDefendQuery) { DARABONBA_PTR_SET_VALUE(DDosDefendQuery_, DDosDefendQuery) };


    // dnsSLBCount Field Functions 
    bool hasDnsSLBCount() const { return this->dnsSLBCount_ != nullptr;};
    void deleteDnsSLBCount() { this->dnsSLBCount_ = nullptr;};
    inline int64_t dnsSLBCount() const { DARABONBA_PTR_GET_DEFAULT(dnsSLBCount_, 0L) };
    inline DescribeDnsProductInstanceResponseBody& setDnsSLBCount(int64_t dnsSLBCount) { DARABONBA_PTR_SET_VALUE(dnsSLBCount_, dnsSLBCount) };


    // dnsSecurity Field Functions 
    bool hasDnsSecurity() const { return this->dnsSecurity_ != nullptr;};
    void deleteDnsSecurity() { this->dnsSecurity_ = nullptr;};
    inline string dnsSecurity() const { DARABONBA_PTR_GET_DEFAULT(dnsSecurity_, "") };
    inline DescribeDnsProductInstanceResponseBody& setDnsSecurity(string dnsSecurity) { DARABONBA_PTR_SET_VALUE(dnsSecurity_, dnsSecurity) };


    // dnsServers Field Functions 
    bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
    void deleteDnsServers() { this->dnsServers_ = nullptr;};
    inline const DescribeDnsProductInstanceResponseBodyDnsServers & dnsServers() const { DARABONBA_PTR_GET_CONST(dnsServers_, DescribeDnsProductInstanceResponseBodyDnsServers) };
    inline DescribeDnsProductInstanceResponseBodyDnsServers dnsServers() { DARABONBA_PTR_GET(dnsServers_, DescribeDnsProductInstanceResponseBodyDnsServers) };
    inline DescribeDnsProductInstanceResponseBody& setDnsServers(const DescribeDnsProductInstanceResponseBodyDnsServers & dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };
    inline DescribeDnsProductInstanceResponseBody& setDnsServers(DescribeDnsProductInstanceResponseBodyDnsServers && dnsServers) { DARABONBA_PTR_SET_RVALUE(dnsServers_, dnsServers) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDnsProductInstanceResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline DescribeDnsProductInstanceResponseBody& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDnsProductInstanceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline int64_t endTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
    inline DescribeDnsProductInstanceResponseBody& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // gslb Field Functions 
    bool hasGslb() const { return this->gslb_ != nullptr;};
    void deleteGslb() { this->gslb_ = nullptr;};
    inline bool gslb() const { DARABONBA_PTR_GET_DEFAULT(gslb_, false) };
    inline DescribeDnsProductInstanceResponseBody& setGslb(bool gslb) { DARABONBA_PTR_SET_VALUE(gslb_, gslb) };


    // ISPLines Field Functions 
    bool hasISPLines() const { return this->ISPLines_ != nullptr;};
    void deleteISPLines() { this->ISPLines_ = nullptr;};
    inline string ISPLines() const { DARABONBA_PTR_GET_DEFAULT(ISPLines_, "") };
    inline DescribeDnsProductInstanceResponseBody& setISPLines(string ISPLines) { DARABONBA_PTR_SET_VALUE(ISPLines_, ISPLines) };


    // ISPRegionLines Field Functions 
    bool hasISPRegionLines() const { return this->ISPRegionLines_ != nullptr;};
    void deleteISPRegionLines() { this->ISPRegionLines_ = nullptr;};
    inline string ISPRegionLines() const { DARABONBA_PTR_GET_DEFAULT(ISPRegionLines_, "") };
    inline DescribeDnsProductInstanceResponseBody& setISPRegionLines(string ISPRegionLines) { DARABONBA_PTR_SET_VALUE(ISPRegionLines_, ISPRegionLines) };


    // inBlackHole Field Functions 
    bool hasInBlackHole() const { return this->inBlackHole_ != nullptr;};
    void deleteInBlackHole() { this->inBlackHole_ = nullptr;};
    inline bool inBlackHole() const { DARABONBA_PTR_GET_DEFAULT(inBlackHole_, false) };
    inline DescribeDnsProductInstanceResponseBody& setInBlackHole(bool inBlackHole) { DARABONBA_PTR_SET_VALUE(inBlackHole_, inBlackHole) };


    // inClean Field Functions 
    bool hasInClean() const { return this->inClean_ != nullptr;};
    void deleteInClean() { this->inClean_ = nullptr;};
    inline bool inClean() const { DARABONBA_PTR_GET_DEFAULT(inClean_, false) };
    inline DescribeDnsProductInstanceResponseBody& setInClean(bool inClean) { DARABONBA_PTR_SET_VALUE(inClean_, inClean) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDnsProductInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // monitorFrequency Field Functions 
    bool hasMonitorFrequency() const { return this->monitorFrequency_ != nullptr;};
    void deleteMonitorFrequency() { this->monitorFrequency_ = nullptr;};
    inline int64_t monitorFrequency() const { DARABONBA_PTR_GET_DEFAULT(monitorFrequency_, 0L) };
    inline DescribeDnsProductInstanceResponseBody& setMonitorFrequency(int64_t monitorFrequency) { DARABONBA_PTR_SET_VALUE(monitorFrequency_, monitorFrequency) };


    // monitorNodeCount Field Functions 
    bool hasMonitorNodeCount() const { return this->monitorNodeCount_ != nullptr;};
    void deleteMonitorNodeCount() { this->monitorNodeCount_ = nullptr;};
    inline int64_t monitorNodeCount() const { DARABONBA_PTR_GET_DEFAULT(monitorNodeCount_, 0L) };
    inline DescribeDnsProductInstanceResponseBody& setMonitorNodeCount(int64_t monitorNodeCount) { DARABONBA_PTR_SET_VALUE(monitorNodeCount_, monitorNodeCount) };


    // monitorTaskCount Field Functions 
    bool hasMonitorTaskCount() const { return this->monitorTaskCount_ != nullptr;};
    void deleteMonitorTaskCount() { this->monitorTaskCount_ = nullptr;};
    inline int64_t monitorTaskCount() const { DARABONBA_PTR_GET_DEFAULT(monitorTaskCount_, 0L) };
    inline DescribeDnsProductInstanceResponseBody& setMonitorTaskCount(int64_t monitorTaskCount) { DARABONBA_PTR_SET_VALUE(monitorTaskCount_, monitorTaskCount) };


    // overseaDDosDefendFlow Field Functions 
    bool hasOverseaDDosDefendFlow() const { return this->overseaDDosDefendFlow_ != nullptr;};
    void deleteOverseaDDosDefendFlow() { this->overseaDDosDefendFlow_ = nullptr;};
    inline int64_t overseaDDosDefendFlow() const { DARABONBA_PTR_GET_DEFAULT(overseaDDosDefendFlow_, 0L) };
    inline DescribeDnsProductInstanceResponseBody& setOverseaDDosDefendFlow(int64_t overseaDDosDefendFlow) { DARABONBA_PTR_SET_VALUE(overseaDDosDefendFlow_, overseaDDosDefendFlow) };


    // overseaLine Field Functions 
    bool hasOverseaLine() const { return this->overseaLine_ != nullptr;};
    void deleteOverseaLine() { this->overseaLine_ = nullptr;};
    inline string overseaLine() const { DARABONBA_PTR_GET_DEFAULT(overseaLine_, "") };
    inline DescribeDnsProductInstanceResponseBody& setOverseaLine(string overseaLine) { DARABONBA_PTR_SET_VALUE(overseaLine_, overseaLine) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline DescribeDnsProductInstanceResponseBody& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // regionLines Field Functions 
    bool hasRegionLines() const { return this->regionLines_ != nullptr;};
    void deleteRegionLines() { this->regionLines_ = nullptr;};
    inline bool regionLines() const { DARABONBA_PTR_GET_DEFAULT(regionLines_, false) };
    inline DescribeDnsProductInstanceResponseBody& setRegionLines(bool regionLines) { DARABONBA_PTR_SET_VALUE(regionLines_, regionLines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsProductInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchEngineLines Field Functions 
    bool hasSearchEngineLines() const { return this->searchEngineLines_ != nullptr;};
    void deleteSearchEngineLines() { this->searchEngineLines_ = nullptr;};
    inline string searchEngineLines() const { DARABONBA_PTR_GET_DEFAULT(searchEngineLines_, "") };
    inline DescribeDnsProductInstanceResponseBody& setSearchEngineLines(string searchEngineLines) { DARABONBA_PTR_SET_VALUE(searchEngineLines_, searchEngineLines) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDnsProductInstanceResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimestamp Field Functions 
    bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
    void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
    inline int64_t startTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0L) };
    inline DescribeDnsProductInstanceResponseBody& setStartTimestamp(int64_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


    // subDomainLevel Field Functions 
    bool hasSubDomainLevel() const { return this->subDomainLevel_ != nullptr;};
    void deleteSubDomainLevel() { this->subDomainLevel_ = nullptr;};
    inline int64_t subDomainLevel() const { DARABONBA_PTR_GET_DEFAULT(subDomainLevel_, 0L) };
    inline DescribeDnsProductInstanceResponseBody& setSubDomainLevel(int64_t subDomainLevel) { DARABONBA_PTR_SET_VALUE(subDomainLevel_, subDomainLevel) };


    // TTLMinValue Field Functions 
    bool hasTTLMinValue() const { return this->TTLMinValue_ != nullptr;};
    void deleteTTLMinValue() { this->TTLMinValue_ = nullptr;};
    inline int64_t TTLMinValue() const { DARABONBA_PTR_GET_DEFAULT(TTLMinValue_, 0L) };
    inline DescribeDnsProductInstanceResponseBody& setTTLMinValue(int64_t TTLMinValue) { DARABONBA_PTR_SET_VALUE(TTLMinValue_, TTLMinValue) };


    // URLForwardCount Field Functions 
    bool hasURLForwardCount() const { return this->URLForwardCount_ != nullptr;};
    void deleteURLForwardCount() { this->URLForwardCount_ = nullptr;};
    inline int64_t URLForwardCount() const { DARABONBA_PTR_GET_DEFAULT(URLForwardCount_, 0L) };
    inline DescribeDnsProductInstanceResponseBody& setURLForwardCount(int64_t URLForwardCount) { DARABONBA_PTR_SET_VALUE(URLForwardCount_, URLForwardCount) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline DescribeDnsProductInstanceResponseBody& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline DescribeDnsProductInstanceResponseBody& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // Indicates whether auto-renewal was enabled. Valid values:
    // 
    // *   true: Auto-renewal was enabled.
    // *   false: Auto-renewal was not enabled.
    std::shared_ptr<bool> autoRenewal_ = nullptr;
    // The number of times that you can change the domain names that are bound to the paid Alibaba Cloud DNS instance. This parameter applies to Alibaba Cloud DNS instances of the custom edition.
    std::shared_ptr<int64_t> bindCount_ = nullptr;
    // The number of domain names that can be bound to the paid Alibaba Cloud DNS instance. This parameter applies to Alibaba Cloud DNS instances of Personal Edition, Enterprise Standard Edition, and Enterprise Ultimate Edition.
    std::shared_ptr<int64_t> bindDomainCount_ = nullptr;
    // The number of domain names that are bound to the paid Alibaba Cloud DNS instance. This parameter applies to Alibaba Cloud DNS instances of Personal Edition, Enterprise Standard Edition, and Enterprise Ultimate Edition.
    std::shared_ptr<int64_t> bindDomainUsedCount_ = nullptr;
    // The number of times that you have changed the domain names that are bound to the paid Alibaba Cloud DNS instance. This parameter applies to Alibaba Cloud DNS instances of the custom edition.
    std::shared_ptr<int64_t> bindUsedCount_ = nullptr;
    // The DDoS protection traffic. Unit: GB.
    std::shared_ptr<int64_t> DDosDefendFlow_ = nullptr;
    // The DDoS protection frequency. Unit: 10,000 QPS. This parameter applies to Alibaba Cloud DNS instances of the custom edition.
    std::shared_ptr<int64_t> DDosDefendQuery_ = nullptr;
    // The maximum number of IP addresses that are used for load balancing in a single line of a domain name.
    std::shared_ptr<int64_t> dnsSLBCount_ = nullptr;
    // The level of DNS protection. Valid values:
    // 
    // *   no: No DNS protection is provided.
    // *   basic: Basic DNS protection is provided.
    // *   advanced: Advanced DNS protection is provided.
    std::shared_ptr<string> dnsSecurity_ = nullptr;
    // The DNS servers configured for the domain names.
    std::shared_ptr<DescribeDnsProductInstanceResponseBodyDnsServers> dnsServers_ = nullptr;
    // The domain name that is bound to the paid instance.
    // 
    // If no value is returned for this parameter, no domain name is bound to the paid instance.
    std::shared_ptr<string> domain_ = nullptr;
    // The type of the instance. Valid values:
    // 
    // *   PUBLIC: authoritative domain name
    // *   CACHE: cache-accelerated domain name
    std::shared_ptr<string> domainType_ = nullptr;
    // The time when the instance expired. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The time when the instance expired. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> endTimestamp_ = nullptr;
    // Indicates whether global server load balancing (GSLB) is supported. Valid values:
    // 
    // *   true: GSLB is supported.
    // *   false: GSLB is not supported.
    std::shared_ptr<bool> gslb_ = nullptr;
    // The ISP resolution lines. Valid values:
    // 
    // *   China Telecom
    // *   China Mobile
    // *   China Unicom
    // *   China Education and Research Network (CERNET)
    // *   China Broadcasting Network (CBN)
    // *   Dr Peng Telecom & Media Group
    std::shared_ptr<string> ISPLines_ = nullptr;
    // The regional ISP resolution lines. Valid values:
    // 
    // *   China Telecom (province)
    // *   China Mobile (province)
    // *   China Unicom (province)
    // *   CERNET (province)
    std::shared_ptr<string> ISPRegionLines_ = nullptr;
    // Indicates whether the Domain Name System (DNS) servers stopped responding to all DNS requests. Valid values:
    // 
    // *   true: The DNS servers stopped responding to all DNS requests.
    // *   false: The DNS servers did not stop responding to all DNS requests.
    std::shared_ptr<bool> inBlackHole_ = nullptr;
    // Indicates whether the DNS servers stopped responding to abnormal requests sent to the domain names.
    // 
    // *   true: The DNS servers stopped responding to abnormal requests sent to the domain names.
    // *   false: The DNS servers did not stop responding to abnormal requests sent to the domain names.
    std::shared_ptr<bool> inClean_ = nullptr;
    // The ID of the Alibaba Cloud DNS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The interval at which the instance is monitored. Unit: minutes.
    std::shared_ptr<int64_t> monitorFrequency_ = nullptr;
    // The number of monitoring nodes.
    std::shared_ptr<int64_t> monitorNodeCount_ = nullptr;
    // The number of monitoring tasks.
    std::shared_ptr<int64_t> monitorTaskCount_ = nullptr;
    // The DDoS protection traffic outside the Chinese mainland. Unit: GB.
    std::shared_ptr<int64_t> overseaDDosDefendFlow_ = nullptr;
    // The line outside the Chinese mainland.
    std::shared_ptr<string> overseaLine_ = nullptr;
    // The billing method.
    std::shared_ptr<string> paymentType_ = nullptr;
    // Indicates whether the DNS request lines are regional lines. Valid values:
    // 
    // *   true: The DNS request lines are regional lines.
    // *   false: The DNS request lines are not regional lines.
    std::shared_ptr<bool> regionLines_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The search engine resolution lines. Valid values:
    // 
    // *   Google
    // *   Baidu
    // *   Bing
    // *   Youdao
    std::shared_ptr<string> searchEngineLines_ = nullptr;
    // The time when the instance was purchased. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The time when the instance was purchased. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> startTimestamp_ = nullptr;
    // The number of subdomain name levels.
    std::shared_ptr<int64_t> subDomainLevel_ = nullptr;
    // The minimum time-to-live (TTL) period. Unit: seconds.
    std::shared_ptr<int64_t> TTLMinValue_ = nullptr;
    // The number of the forwarded URLs.
    std::shared_ptr<int64_t> URLForwardCount_ = nullptr;
    // The version code of Alibaba Cloud DNS.
    std::shared_ptr<string> versionCode_ = nullptr;
    // The edition of Alibaba Cloud DNS.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
