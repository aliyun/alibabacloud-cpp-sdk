// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSPRODUCTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSPRODUCTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsProductInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsProductInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DnsProducts, dnsProducts_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsProductInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsProducts, dnsProducts_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDnsProductInstancesResponseBody() = default ;
    DescribeDnsProductInstancesResponseBody(const DescribeDnsProductInstancesResponseBody &) = default ;
    DescribeDnsProductInstancesResponseBody(DescribeDnsProductInstancesResponseBody &&) = default ;
    DescribeDnsProductInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsProductInstancesResponseBody() = default ;
    DescribeDnsProductInstancesResponseBody& operator=(const DescribeDnsProductInstancesResponseBody &) = default ;
    DescribeDnsProductInstancesResponseBody& operator=(DescribeDnsProductInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DnsProducts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DnsProducts& obj) { 
        DARABONBA_PTR_TO_JSON(DnsProduct, dnsProduct_);
      };
      friend void from_json(const Darabonba::Json& j, DnsProducts& obj) { 
        DARABONBA_PTR_FROM_JSON(DnsProduct, dnsProduct_);
      };
      DnsProducts() = default ;
      DnsProducts(const DnsProducts &) = default ;
      DnsProducts(DnsProducts &&) = default ;
      DnsProducts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DnsProducts() = default ;
      DnsProducts& operator=(const DnsProducts &) = default ;
      DnsProducts& operator=(DnsProducts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DnsProduct : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DnsProduct& obj) { 
          DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
          DARABONBA_PTR_TO_JSON(BindCount, bindCount_);
          DARABONBA_PTR_TO_JSON(BindDomainCount, bindDomainCount_);
          DARABONBA_PTR_TO_JSON(BindDomainUsedCount, bindDomainUsedCount_);
          DARABONBA_PTR_TO_JSON(BindUsedCount, bindUsedCount_);
          DARABONBA_PTR_TO_JSON(DDosDefendFlow, DDosDefendFlow_);
          DARABONBA_PTR_TO_JSON(DDosDefendQuery, DDosDefendQuery_);
          DARABONBA_PTR_TO_JSON(DnsSLBCount, dnsSLBCount_);
          DARABONBA_PTR_TO_JSON(DnsSecurity, dnsSecurity_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
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
          DARABONBA_PTR_TO_JSON(SearchEngineLines, searchEngineLines_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
          DARABONBA_PTR_TO_JSON(SubDomainLevel, subDomainLevel_);
          DARABONBA_PTR_TO_JSON(TTLMinValue, TTLMinValue_);
          DARABONBA_PTR_TO_JSON(URLForwardCount, URLForwardCount_);
          DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
          DARABONBA_PTR_TO_JSON(VersionName, versionName_);
        };
        friend void from_json(const Darabonba::Json& j, DnsProduct& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
          DARABONBA_PTR_FROM_JSON(BindCount, bindCount_);
          DARABONBA_PTR_FROM_JSON(BindDomainCount, bindDomainCount_);
          DARABONBA_PTR_FROM_JSON(BindDomainUsedCount, bindDomainUsedCount_);
          DARABONBA_PTR_FROM_JSON(BindUsedCount, bindUsedCount_);
          DARABONBA_PTR_FROM_JSON(DDosDefendFlow, DDosDefendFlow_);
          DARABONBA_PTR_FROM_JSON(DDosDefendQuery, DDosDefendQuery_);
          DARABONBA_PTR_FROM_JSON(DnsSLBCount, dnsSLBCount_);
          DARABONBA_PTR_FROM_JSON(DnsSecurity, dnsSecurity_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
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
          DARABONBA_PTR_FROM_JSON(SearchEngineLines, searchEngineLines_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
          DARABONBA_PTR_FROM_JSON(SubDomainLevel, subDomainLevel_);
          DARABONBA_PTR_FROM_JSON(TTLMinValue, TTLMinValue_);
          DARABONBA_PTR_FROM_JSON(URLForwardCount, URLForwardCount_);
          DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
          DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
        };
        DnsProduct() = default ;
        DnsProduct(const DnsProduct &) = default ;
        DnsProduct(DnsProduct &&) = default ;
        DnsProduct(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DnsProduct() = default ;
        DnsProduct& operator=(const DnsProduct &) = default ;
        DnsProduct& operator=(DnsProduct &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoRenewal_ == nullptr
        && this->bindCount_ == nullptr && this->bindDomainCount_ == nullptr && this->bindDomainUsedCount_ == nullptr && this->bindUsedCount_ == nullptr && this->DDosDefendFlow_ == nullptr
        && this->DDosDefendQuery_ == nullptr && this->dnsSLBCount_ == nullptr && this->dnsSecurity_ == nullptr && this->domain_ == nullptr && this->endTime_ == nullptr
        && this->endTimestamp_ == nullptr && this->gslb_ == nullptr && this->ISPLines_ == nullptr && this->ISPRegionLines_ == nullptr && this->inBlackHole_ == nullptr
        && this->inClean_ == nullptr && this->instanceId_ == nullptr && this->monitorFrequency_ == nullptr && this->monitorNodeCount_ == nullptr && this->monitorTaskCount_ == nullptr
        && this->overseaDDosDefendFlow_ == nullptr && this->overseaLine_ == nullptr && this->paymentType_ == nullptr && this->regionLines_ == nullptr && this->searchEngineLines_ == nullptr
        && this->startTime_ == nullptr && this->startTimestamp_ == nullptr && this->subDomainLevel_ == nullptr && this->TTLMinValue_ == nullptr && this->URLForwardCount_ == nullptr
        && this->versionCode_ == nullptr && this->versionName_ == nullptr; };
        // autoRenewal Field Functions 
        bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
        void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
        inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
        inline DnsProduct& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


        // bindCount Field Functions 
        bool hasBindCount() const { return this->bindCount_ != nullptr;};
        void deleteBindCount() { this->bindCount_ = nullptr;};
        inline int64_t getBindCount() const { DARABONBA_PTR_GET_DEFAULT(bindCount_, 0L) };
        inline DnsProduct& setBindCount(int64_t bindCount) { DARABONBA_PTR_SET_VALUE(bindCount_, bindCount) };


        // bindDomainCount Field Functions 
        bool hasBindDomainCount() const { return this->bindDomainCount_ != nullptr;};
        void deleteBindDomainCount() { this->bindDomainCount_ = nullptr;};
        inline int64_t getBindDomainCount() const { DARABONBA_PTR_GET_DEFAULT(bindDomainCount_, 0L) };
        inline DnsProduct& setBindDomainCount(int64_t bindDomainCount) { DARABONBA_PTR_SET_VALUE(bindDomainCount_, bindDomainCount) };


        // bindDomainUsedCount Field Functions 
        bool hasBindDomainUsedCount() const { return this->bindDomainUsedCount_ != nullptr;};
        void deleteBindDomainUsedCount() { this->bindDomainUsedCount_ = nullptr;};
        inline int64_t getBindDomainUsedCount() const { DARABONBA_PTR_GET_DEFAULT(bindDomainUsedCount_, 0L) };
        inline DnsProduct& setBindDomainUsedCount(int64_t bindDomainUsedCount) { DARABONBA_PTR_SET_VALUE(bindDomainUsedCount_, bindDomainUsedCount) };


        // bindUsedCount Field Functions 
        bool hasBindUsedCount() const { return this->bindUsedCount_ != nullptr;};
        void deleteBindUsedCount() { this->bindUsedCount_ = nullptr;};
        inline int64_t getBindUsedCount() const { DARABONBA_PTR_GET_DEFAULT(bindUsedCount_, 0L) };
        inline DnsProduct& setBindUsedCount(int64_t bindUsedCount) { DARABONBA_PTR_SET_VALUE(bindUsedCount_, bindUsedCount) };


        // DDosDefendFlow Field Functions 
        bool hasDDosDefendFlow() const { return this->DDosDefendFlow_ != nullptr;};
        void deleteDDosDefendFlow() { this->DDosDefendFlow_ = nullptr;};
        inline int64_t getDDosDefendFlow() const { DARABONBA_PTR_GET_DEFAULT(DDosDefendFlow_, 0L) };
        inline DnsProduct& setDDosDefendFlow(int64_t DDosDefendFlow) { DARABONBA_PTR_SET_VALUE(DDosDefendFlow_, DDosDefendFlow) };


        // DDosDefendQuery Field Functions 
        bool hasDDosDefendQuery() const { return this->DDosDefendQuery_ != nullptr;};
        void deleteDDosDefendQuery() { this->DDosDefendQuery_ = nullptr;};
        inline int64_t getDDosDefendQuery() const { DARABONBA_PTR_GET_DEFAULT(DDosDefendQuery_, 0L) };
        inline DnsProduct& setDDosDefendQuery(int64_t DDosDefendQuery) { DARABONBA_PTR_SET_VALUE(DDosDefendQuery_, DDosDefendQuery) };


        // dnsSLBCount Field Functions 
        bool hasDnsSLBCount() const { return this->dnsSLBCount_ != nullptr;};
        void deleteDnsSLBCount() { this->dnsSLBCount_ = nullptr;};
        inline int64_t getDnsSLBCount() const { DARABONBA_PTR_GET_DEFAULT(dnsSLBCount_, 0L) };
        inline DnsProduct& setDnsSLBCount(int64_t dnsSLBCount) { DARABONBA_PTR_SET_VALUE(dnsSLBCount_, dnsSLBCount) };


        // dnsSecurity Field Functions 
        bool hasDnsSecurity() const { return this->dnsSecurity_ != nullptr;};
        void deleteDnsSecurity() { this->dnsSecurity_ = nullptr;};
        inline string getDnsSecurity() const { DARABONBA_PTR_GET_DEFAULT(dnsSecurity_, "") };
        inline DnsProduct& setDnsSecurity(string dnsSecurity) { DARABONBA_PTR_SET_VALUE(dnsSecurity_, dnsSecurity) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline DnsProduct& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline DnsProduct& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // endTimestamp Field Functions 
        bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
        void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
        inline int64_t getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
        inline DnsProduct& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


        // gslb Field Functions 
        bool hasGslb() const { return this->gslb_ != nullptr;};
        void deleteGslb() { this->gslb_ = nullptr;};
        inline bool getGslb() const { DARABONBA_PTR_GET_DEFAULT(gslb_, false) };
        inline DnsProduct& setGslb(bool gslb) { DARABONBA_PTR_SET_VALUE(gslb_, gslb) };


        // ISPLines Field Functions 
        bool hasISPLines() const { return this->ISPLines_ != nullptr;};
        void deleteISPLines() { this->ISPLines_ = nullptr;};
        inline string getISPLines() const { DARABONBA_PTR_GET_DEFAULT(ISPLines_, "") };
        inline DnsProduct& setISPLines(string ISPLines) { DARABONBA_PTR_SET_VALUE(ISPLines_, ISPLines) };


        // ISPRegionLines Field Functions 
        bool hasISPRegionLines() const { return this->ISPRegionLines_ != nullptr;};
        void deleteISPRegionLines() { this->ISPRegionLines_ = nullptr;};
        inline string getISPRegionLines() const { DARABONBA_PTR_GET_DEFAULT(ISPRegionLines_, "") };
        inline DnsProduct& setISPRegionLines(string ISPRegionLines) { DARABONBA_PTR_SET_VALUE(ISPRegionLines_, ISPRegionLines) };


        // inBlackHole Field Functions 
        bool hasInBlackHole() const { return this->inBlackHole_ != nullptr;};
        void deleteInBlackHole() { this->inBlackHole_ = nullptr;};
        inline bool getInBlackHole() const { DARABONBA_PTR_GET_DEFAULT(inBlackHole_, false) };
        inline DnsProduct& setInBlackHole(bool inBlackHole) { DARABONBA_PTR_SET_VALUE(inBlackHole_, inBlackHole) };


        // inClean Field Functions 
        bool hasInClean() const { return this->inClean_ != nullptr;};
        void deleteInClean() { this->inClean_ = nullptr;};
        inline bool getInClean() const { DARABONBA_PTR_GET_DEFAULT(inClean_, false) };
        inline DnsProduct& setInClean(bool inClean) { DARABONBA_PTR_SET_VALUE(inClean_, inClean) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline DnsProduct& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // monitorFrequency Field Functions 
        bool hasMonitorFrequency() const { return this->monitorFrequency_ != nullptr;};
        void deleteMonitorFrequency() { this->monitorFrequency_ = nullptr;};
        inline int64_t getMonitorFrequency() const { DARABONBA_PTR_GET_DEFAULT(monitorFrequency_, 0L) };
        inline DnsProduct& setMonitorFrequency(int64_t monitorFrequency) { DARABONBA_PTR_SET_VALUE(monitorFrequency_, monitorFrequency) };


        // monitorNodeCount Field Functions 
        bool hasMonitorNodeCount() const { return this->monitorNodeCount_ != nullptr;};
        void deleteMonitorNodeCount() { this->monitorNodeCount_ = nullptr;};
        inline int64_t getMonitorNodeCount() const { DARABONBA_PTR_GET_DEFAULT(monitorNodeCount_, 0L) };
        inline DnsProduct& setMonitorNodeCount(int64_t monitorNodeCount) { DARABONBA_PTR_SET_VALUE(monitorNodeCount_, monitorNodeCount) };


        // monitorTaskCount Field Functions 
        bool hasMonitorTaskCount() const { return this->monitorTaskCount_ != nullptr;};
        void deleteMonitorTaskCount() { this->monitorTaskCount_ = nullptr;};
        inline int64_t getMonitorTaskCount() const { DARABONBA_PTR_GET_DEFAULT(monitorTaskCount_, 0L) };
        inline DnsProduct& setMonitorTaskCount(int64_t monitorTaskCount) { DARABONBA_PTR_SET_VALUE(monitorTaskCount_, monitorTaskCount) };


        // overseaDDosDefendFlow Field Functions 
        bool hasOverseaDDosDefendFlow() const { return this->overseaDDosDefendFlow_ != nullptr;};
        void deleteOverseaDDosDefendFlow() { this->overseaDDosDefendFlow_ = nullptr;};
        inline int64_t getOverseaDDosDefendFlow() const { DARABONBA_PTR_GET_DEFAULT(overseaDDosDefendFlow_, 0L) };
        inline DnsProduct& setOverseaDDosDefendFlow(int64_t overseaDDosDefendFlow) { DARABONBA_PTR_SET_VALUE(overseaDDosDefendFlow_, overseaDDosDefendFlow) };


        // overseaLine Field Functions 
        bool hasOverseaLine() const { return this->overseaLine_ != nullptr;};
        void deleteOverseaLine() { this->overseaLine_ = nullptr;};
        inline string getOverseaLine() const { DARABONBA_PTR_GET_DEFAULT(overseaLine_, "") };
        inline DnsProduct& setOverseaLine(string overseaLine) { DARABONBA_PTR_SET_VALUE(overseaLine_, overseaLine) };


        // paymentType Field Functions 
        bool hasPaymentType() const { return this->paymentType_ != nullptr;};
        void deletePaymentType() { this->paymentType_ = nullptr;};
        inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
        inline DnsProduct& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


        // regionLines Field Functions 
        bool hasRegionLines() const { return this->regionLines_ != nullptr;};
        void deleteRegionLines() { this->regionLines_ = nullptr;};
        inline bool getRegionLines() const { DARABONBA_PTR_GET_DEFAULT(regionLines_, false) };
        inline DnsProduct& setRegionLines(bool regionLines) { DARABONBA_PTR_SET_VALUE(regionLines_, regionLines) };


        // searchEngineLines Field Functions 
        bool hasSearchEngineLines() const { return this->searchEngineLines_ != nullptr;};
        void deleteSearchEngineLines() { this->searchEngineLines_ = nullptr;};
        inline string getSearchEngineLines() const { DARABONBA_PTR_GET_DEFAULT(searchEngineLines_, "") };
        inline DnsProduct& setSearchEngineLines(string searchEngineLines) { DARABONBA_PTR_SET_VALUE(searchEngineLines_, searchEngineLines) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline DnsProduct& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // startTimestamp Field Functions 
        bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
        void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
        inline int64_t getStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0L) };
        inline DnsProduct& setStartTimestamp(int64_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


        // subDomainLevel Field Functions 
        bool hasSubDomainLevel() const { return this->subDomainLevel_ != nullptr;};
        void deleteSubDomainLevel() { this->subDomainLevel_ = nullptr;};
        inline int64_t getSubDomainLevel() const { DARABONBA_PTR_GET_DEFAULT(subDomainLevel_, 0L) };
        inline DnsProduct& setSubDomainLevel(int64_t subDomainLevel) { DARABONBA_PTR_SET_VALUE(subDomainLevel_, subDomainLevel) };


        // TTLMinValue Field Functions 
        bool hasTTLMinValue() const { return this->TTLMinValue_ != nullptr;};
        void deleteTTLMinValue() { this->TTLMinValue_ = nullptr;};
        inline int64_t getTTLMinValue() const { DARABONBA_PTR_GET_DEFAULT(TTLMinValue_, 0L) };
        inline DnsProduct& setTTLMinValue(int64_t TTLMinValue) { DARABONBA_PTR_SET_VALUE(TTLMinValue_, TTLMinValue) };


        // URLForwardCount Field Functions 
        bool hasURLForwardCount() const { return this->URLForwardCount_ != nullptr;};
        void deleteURLForwardCount() { this->URLForwardCount_ = nullptr;};
        inline int64_t getURLForwardCount() const { DARABONBA_PTR_GET_DEFAULT(URLForwardCount_, 0L) };
        inline DnsProduct& setURLForwardCount(int64_t URLForwardCount) { DARABONBA_PTR_SET_VALUE(URLForwardCount_, URLForwardCount) };


        // versionCode Field Functions 
        bool hasVersionCode() const { return this->versionCode_ != nullptr;};
        void deleteVersionCode() { this->versionCode_ = nullptr;};
        inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
        inline DnsProduct& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


        // versionName Field Functions 
        bool hasVersionName() const { return this->versionName_ != nullptr;};
        void deleteVersionName() { this->versionName_ = nullptr;};
        inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
        inline DnsProduct& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


      protected:
        // Indicates whether auto-renewal was enabled. Valid values:
        // 
        // *   true: Auto-renewal was enabled.
        // *   false: Auto-renewal was not enabled.
        shared_ptr<bool> autoRenewal_ {};
        // The number of times you can change domain names that are bound to the DNS instance. It can be specified by the user who uses Alibaba Cloud DNS of the custom version.
        shared_ptr<int64_t> bindCount_ {};
        // The number of domain names that can be bound to the DNS instance.
        shared_ptr<int64_t> bindDomainCount_ {};
        // The number of domain names that have been bound to the DNS instance.
        shared_ptr<int64_t> bindDomainUsedCount_ {};
        // The number of times you have changed domain names that are bound to the DNS instance. It can be specified by the user who uses Alibaba Cloud DNS of the custom version.
        shared_ptr<int64_t> bindUsedCount_ {};
        // The DDoS protection traffic. Unit: GB.
        shared_ptr<int64_t> DDosDefendFlow_ {};
        // The DDoS protection frequency. Unit: 10,000 QPS.
        shared_ptr<int64_t> DDosDefendQuery_ {};
        // The number of IP addresses supported by a domain name or line.
        shared_ptr<int64_t> dnsSLBCount_ {};
        // The level of DNS protection. Valid values:
        // 
        // *   no: No DNS protection is provided.
        // *   basic: Basic DNS protection is provided.
        // *   advanced: Advanced DNS protection is provided.
        shared_ptr<string> dnsSecurity_ {};
        // The bound domain name.
        shared_ptr<string> domain_ {};
        // The time at which the instance expired.
        shared_ptr<string> endTime_ {};
        // The UNIX timestamp representing the expiration time of the instance.
        shared_ptr<int64_t> endTimestamp_ {};
        // Indicates whether global server load balancing (GSLB) is supported.
        // 
        // *   true: GSLB is supported.
        // *   false: GSLB is not supported.
        shared_ptr<bool> gslb_ {};
        // The ISP resolution lines.
        // 
        // *   China Telecom
        // *   China Mobile
        // *   China Unicom
        // *   CERNET
        // *   China Broadcasting Network (CBN)
        // *   Dr Peng Telecom & Media Group
        shared_ptr<string> ISPLines_ {};
        // The regional ISP resolution lines. Valid values:
        // 
        // *   China Telecom (province)
        // *   China Mobile (province)
        // *   China Unicom (province)
        // *   China Education and Research Network (CERNET) (province)
        shared_ptr<string> ISPRegionLines_ {};
        // Indicates whether the Domain Name System (DNS) servers stopped responding to all requests. Valid values:
        // 
        // *   true: The DNS servers stopped responding to all requests.
        // *   false: The DNS servers did not stop responding to all requests.
        shared_ptr<bool> inBlackHole_ {};
        // Indicates whether the request for domain name resolution was being cleared.
        shared_ptr<bool> inClean_ {};
        // The ID of the Alibaba Cloud DNS instance.
        shared_ptr<string> instanceId_ {};
        // The monitoring frequency. Unit: minutes.
        shared_ptr<int64_t> monitorFrequency_ {};
        // The number of monitored nodes.
        shared_ptr<int64_t> monitorNodeCount_ {};
        // The number of monitoring tasks.
        shared_ptr<int64_t> monitorTaskCount_ {};
        // DDoS protection traffic outside China. Unit: GB.
        shared_ptr<int64_t> overseaDDosDefendFlow_ {};
        // The type of the overseas line.
        shared_ptr<string> overseaLine_ {};
        // The billing method.
        shared_ptr<string> paymentType_ {};
        // Indicates whether the DNS request lines are regional lines.
        // 
        // *   true: The DNS request lines are regional lines.
        // *   false: The DNS request lines are not regional lines.
        shared_ptr<bool> regionLines_ {};
        // The search engine resolution lines. Valid values:
        // 
        // *   Google
        // *   Baidu
        // *   Bing
        // *   Youdao
        shared_ptr<string> searchEngineLines_ {};
        // The time when the DNS instance was purchased.
        shared_ptr<string> startTime_ {};
        // The UNIX timestamp representing when the DNS instance was purchased.
        shared_ptr<int64_t> startTimestamp_ {};
        // The number of subdomain name levels.
        shared_ptr<int64_t> subDomainLevel_ {};
        // The minimum TTL. Unit: seconds.
        shared_ptr<int64_t> TTLMinValue_ {};
        // The URL forwarding quantity.
        shared_ptr<int64_t> URLForwardCount_ {};
        // The version code of the Alibaba Cloud DNS instance.
        shared_ptr<string> versionCode_ {};
        // The version name of the Alibaba Cloud DNS instance.
        shared_ptr<string> versionName_ {};
      };

      virtual bool empty() const override { return this->dnsProduct_ == nullptr; };
      // dnsProduct Field Functions 
      bool hasDnsProduct() const { return this->dnsProduct_ != nullptr;};
      void deleteDnsProduct() { this->dnsProduct_ = nullptr;};
      inline const vector<DnsProducts::DnsProduct> & getDnsProduct() const { DARABONBA_PTR_GET_CONST(dnsProduct_, vector<DnsProducts::DnsProduct>) };
      inline vector<DnsProducts::DnsProduct> getDnsProduct() { DARABONBA_PTR_GET(dnsProduct_, vector<DnsProducts::DnsProduct>) };
      inline DnsProducts& setDnsProduct(const vector<DnsProducts::DnsProduct> & dnsProduct) { DARABONBA_PTR_SET_VALUE(dnsProduct_, dnsProduct) };
      inline DnsProducts& setDnsProduct(vector<DnsProducts::DnsProduct> && dnsProduct) { DARABONBA_PTR_SET_RVALUE(dnsProduct_, dnsProduct) };


    protected:
      shared_ptr<vector<DnsProducts::DnsProduct>> dnsProduct_ {};
    };

    virtual bool empty() const override { return this->dnsProducts_ == nullptr
        && this->domainType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dnsProducts Field Functions 
    bool hasDnsProducts() const { return this->dnsProducts_ != nullptr;};
    void deleteDnsProducts() { this->dnsProducts_ = nullptr;};
    inline const DescribeDnsProductInstancesResponseBody::DnsProducts & getDnsProducts() const { DARABONBA_PTR_GET_CONST(dnsProducts_, DescribeDnsProductInstancesResponseBody::DnsProducts) };
    inline DescribeDnsProductInstancesResponseBody::DnsProducts getDnsProducts() { DARABONBA_PTR_GET(dnsProducts_, DescribeDnsProductInstancesResponseBody::DnsProducts) };
    inline DescribeDnsProductInstancesResponseBody& setDnsProducts(const DescribeDnsProductInstancesResponseBody::DnsProducts & dnsProducts) { DARABONBA_PTR_SET_VALUE(dnsProducts_, dnsProducts) };
    inline DescribeDnsProductInstancesResponseBody& setDnsProducts(DescribeDnsProductInstancesResponseBody::DnsProducts && dnsProducts) { DARABONBA_PTR_SET_RVALUE(dnsProducts_, dnsProducts) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline DescribeDnsProductInstancesResponseBody& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDnsProductInstancesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDnsProductInstancesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsProductInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDnsProductInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The paid Alibaba Cloud DNS instances.
    shared_ptr<DescribeDnsProductInstancesResponseBody::DnsProducts> dnsProducts_ {};
    // The type of the domain name. Valid values:
    // 
    // *   PUBLIC (default): hosted public domain name
    // *   CACHE: cached public domain name
    shared_ptr<string> domainType_ {};
    // The page number of the returned page.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of domain names.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
