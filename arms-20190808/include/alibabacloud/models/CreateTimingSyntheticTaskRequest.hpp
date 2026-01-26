// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateTimingSyntheticTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTimingSyntheticTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableAssertions, availableAssertions_);
      DARABONBA_PTR_TO_JSON(CommonSetting, commonSetting_);
      DARABONBA_PTR_TO_JSON(CustomPeriod, customPeriod_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(MonitorCategory, monitorCategory_);
      DARABONBA_PTR_TO_JSON(MonitorConf, monitorConf_);
      DARABONBA_PTR_TO_JSON(Monitors, monitors_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTimingSyntheticTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableAssertions, availableAssertions_);
      DARABONBA_PTR_FROM_JSON(CommonSetting, commonSetting_);
      DARABONBA_PTR_FROM_JSON(CustomPeriod, customPeriod_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(MonitorCategory, monitorCategory_);
      DARABONBA_PTR_FROM_JSON(MonitorConf, monitorConf_);
      DARABONBA_PTR_FROM_JSON(Monitors, monitors_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    CreateTimingSyntheticTaskRequest() = default ;
    CreateTimingSyntheticTaskRequest(const CreateTimingSyntheticTaskRequest &) = default ;
    CreateTimingSyntheticTaskRequest(CreateTimingSyntheticTaskRequest &&) = default ;
    CreateTimingSyntheticTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTimingSyntheticTaskRequest() = default ;
    CreateTimingSyntheticTaskRequest& operator=(const CreateTimingSyntheticTaskRequest &) = default ;
    CreateTimingSyntheticTaskRequest& operator=(CreateTimingSyntheticTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
      shared_ptr<string> value_ {};
    };

    class Monitors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Monitors& obj) { 
        DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
        DARABONBA_PTR_TO_JSON(ClientType, clientType_);
        DARABONBA_PTR_TO_JSON(OperatorCode, operatorCode_);
      };
      friend void from_json(const Darabonba::Json& j, Monitors& obj) { 
        DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
        DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
        DARABONBA_PTR_FROM_JSON(OperatorCode, operatorCode_);
      };
      Monitors() = default ;
      Monitors(const Monitors &) = default ;
      Monitors(Monitors &&) = default ;
      Monitors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Monitors() = default ;
      Monitors& operator=(const Monitors &) = default ;
      Monitors& operator=(Monitors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->clientType_ == nullptr && this->operatorCode_ == nullptr; };
      // cityCode Field Functions 
      bool hasCityCode() const { return this->cityCode_ != nullptr;};
      void deleteCityCode() { this->cityCode_ = nullptr;};
      inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
      inline Monitors& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


      // clientType Field Functions 
      bool hasClientType() const { return this->clientType_ != nullptr;};
      void deleteClientType() { this->clientType_ = nullptr;};
      inline int32_t getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, 0) };
      inline Monitors& setClientType(int32_t clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


      // operatorCode Field Functions 
      bool hasOperatorCode() const { return this->operatorCode_ != nullptr;};
      void deleteOperatorCode() { this->operatorCode_ = nullptr;};
      inline string getOperatorCode() const { DARABONBA_PTR_GET_DEFAULT(operatorCode_, "") };
      inline Monitors& setOperatorCode(string operatorCode) { DARABONBA_PTR_SET_VALUE(operatorCode_, operatorCode) };


    protected:
      // The city code.
      // 
      // This parameter is required.
      shared_ptr<string> cityCode_ {};
      // The client type of the detection point. Valid values:
      // 
      // - 1: data center
      // - 2: Internet
      // - 3: mobile device
      // - 4: ECS instance
      // 
      // This parameter is required.
      shared_ptr<int32_t> clientType_ {};
      // The carrier code.
      // 
      // This parameter is required.
      shared_ptr<string> operatorCode_ {};
    };

    class MonitorConf : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MonitorConf& obj) { 
        DARABONBA_PTR_TO_JSON(ApiHTTP, apiHTTP_);
        DARABONBA_PTR_TO_JSON(FileDownload, fileDownload_);
        DARABONBA_PTR_TO_JSON(NetDNS, netDNS_);
        DARABONBA_PTR_TO_JSON(NetICMP, netICMP_);
        DARABONBA_PTR_TO_JSON(NetTCP, netTCP_);
        DARABONBA_PTR_TO_JSON(Stream, stream_);
        DARABONBA_PTR_TO_JSON(Website, website_);
      };
      friend void from_json(const Darabonba::Json& j, MonitorConf& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiHTTP, apiHTTP_);
        DARABONBA_PTR_FROM_JSON(FileDownload, fileDownload_);
        DARABONBA_PTR_FROM_JSON(NetDNS, netDNS_);
        DARABONBA_PTR_FROM_JSON(NetICMP, netICMP_);
        DARABONBA_PTR_FROM_JSON(NetTCP, netTCP_);
        DARABONBA_PTR_FROM_JSON(Stream, stream_);
        DARABONBA_PTR_FROM_JSON(Website, website_);
      };
      MonitorConf() = default ;
      MonitorConf(const MonitorConf &) = default ;
      MonitorConf(MonitorConf &&) = default ;
      MonitorConf(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MonitorConf() = default ;
      MonitorConf& operator=(const MonitorConf &) = default ;
      MonitorConf& operator=(MonitorConf &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Website : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Website& obj) { 
          DARABONBA_PTR_TO_JSON(AutomaticScrolling, automaticScrolling_);
          DARABONBA_PTR_TO_JSON(CustomHeader, customHeader_);
          DARABONBA_PTR_TO_JSON(CustomHeaderContent, customHeaderContent_);
          DARABONBA_PTR_TO_JSON(DNSHijackWhitelist, DNSHijackWhitelist_);
          DARABONBA_PTR_TO_JSON(DisableCache, disableCache_);
          DARABONBA_PTR_TO_JSON(DisableCompression, disableCompression_);
          DARABONBA_PTR_TO_JSON(ElementBlacklist, elementBlacklist_);
          DARABONBA_PTR_TO_JSON(FilterInvalidIP, filterInvalidIP_);
          DARABONBA_PTR_TO_JSON(FlowHijackJumpTimes, flowHijackJumpTimes_);
          DARABONBA_PTR_TO_JSON(FlowHijackLogo, flowHijackLogo_);
          DARABONBA_PTR_TO_JSON(IgnoreCertificateError, ignoreCertificateError_);
          DARABONBA_PTR_TO_JSON(MonitorTimeout, monitorTimeout_);
          DARABONBA_PTR_TO_JSON(PageTamper, pageTamper_);
          DARABONBA_PTR_TO_JSON(Redirection, redirection_);
          DARABONBA_PTR_TO_JSON(SlowElementThreshold, slowElementThreshold_);
          DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_TO_JSON(VerifyStringBlacklist, verifyStringBlacklist_);
          DARABONBA_PTR_TO_JSON(VerifyStringWhitelist, verifyStringWhitelist_);
          DARABONBA_PTR_TO_JSON(WaitCompletionTime, waitCompletionTime_);
        };
        friend void from_json(const Darabonba::Json& j, Website& obj) { 
          DARABONBA_PTR_FROM_JSON(AutomaticScrolling, automaticScrolling_);
          DARABONBA_PTR_FROM_JSON(CustomHeader, customHeader_);
          DARABONBA_PTR_FROM_JSON(CustomHeaderContent, customHeaderContent_);
          DARABONBA_PTR_FROM_JSON(DNSHijackWhitelist, DNSHijackWhitelist_);
          DARABONBA_PTR_FROM_JSON(DisableCache, disableCache_);
          DARABONBA_PTR_FROM_JSON(DisableCompression, disableCompression_);
          DARABONBA_PTR_FROM_JSON(ElementBlacklist, elementBlacklist_);
          DARABONBA_PTR_FROM_JSON(FilterInvalidIP, filterInvalidIP_);
          DARABONBA_PTR_FROM_JSON(FlowHijackJumpTimes, flowHijackJumpTimes_);
          DARABONBA_PTR_FROM_JSON(FlowHijackLogo, flowHijackLogo_);
          DARABONBA_PTR_FROM_JSON(IgnoreCertificateError, ignoreCertificateError_);
          DARABONBA_PTR_FROM_JSON(MonitorTimeout, monitorTimeout_);
          DARABONBA_PTR_FROM_JSON(PageTamper, pageTamper_);
          DARABONBA_PTR_FROM_JSON(Redirection, redirection_);
          DARABONBA_PTR_FROM_JSON(SlowElementThreshold, slowElementThreshold_);
          DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_FROM_JSON(VerifyStringBlacklist, verifyStringBlacklist_);
          DARABONBA_PTR_FROM_JSON(VerifyStringWhitelist, verifyStringWhitelist_);
          DARABONBA_PTR_FROM_JSON(WaitCompletionTime, waitCompletionTime_);
        };
        Website() = default ;
        Website(const Website &) = default ;
        Website(Website &&) = default ;
        Website(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Website() = default ;
        Website& operator=(const Website &) = default ;
        Website& operator=(Website &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->automaticScrolling_ == nullptr
        && this->customHeader_ == nullptr && this->customHeaderContent_ == nullptr && this->DNSHijackWhitelist_ == nullptr && this->disableCache_ == nullptr && this->disableCompression_ == nullptr
        && this->elementBlacklist_ == nullptr && this->filterInvalidIP_ == nullptr && this->flowHijackJumpTimes_ == nullptr && this->flowHijackLogo_ == nullptr && this->ignoreCertificateError_ == nullptr
        && this->monitorTimeout_ == nullptr && this->pageTamper_ == nullptr && this->redirection_ == nullptr && this->slowElementThreshold_ == nullptr && this->targetUrl_ == nullptr
        && this->verifyStringBlacklist_ == nullptr && this->verifyStringWhitelist_ == nullptr && this->waitCompletionTime_ == nullptr; };
        // automaticScrolling Field Functions 
        bool hasAutomaticScrolling() const { return this->automaticScrolling_ != nullptr;};
        void deleteAutomaticScrolling() { this->automaticScrolling_ = nullptr;};
        inline int32_t getAutomaticScrolling() const { DARABONBA_PTR_GET_DEFAULT(automaticScrolling_, 0) };
        inline Website& setAutomaticScrolling(int32_t automaticScrolling) { DARABONBA_PTR_SET_VALUE(automaticScrolling_, automaticScrolling) };


        // customHeader Field Functions 
        bool hasCustomHeader() const { return this->customHeader_ != nullptr;};
        void deleteCustomHeader() { this->customHeader_ = nullptr;};
        inline int32_t getCustomHeader() const { DARABONBA_PTR_GET_DEFAULT(customHeader_, 0) };
        inline Website& setCustomHeader(int32_t customHeader) { DARABONBA_PTR_SET_VALUE(customHeader_, customHeader) };


        // customHeaderContent Field Functions 
        bool hasCustomHeaderContent() const { return this->customHeaderContent_ != nullptr;};
        void deleteCustomHeaderContent() { this->customHeaderContent_ = nullptr;};
        inline const map<string, string> & getCustomHeaderContent() const { DARABONBA_PTR_GET_CONST(customHeaderContent_, map<string, string>) };
        inline map<string, string> getCustomHeaderContent() { DARABONBA_PTR_GET(customHeaderContent_, map<string, string>) };
        inline Website& setCustomHeaderContent(const map<string, string> & customHeaderContent) { DARABONBA_PTR_SET_VALUE(customHeaderContent_, customHeaderContent) };
        inline Website& setCustomHeaderContent(map<string, string> && customHeaderContent) { DARABONBA_PTR_SET_RVALUE(customHeaderContent_, customHeaderContent) };


        // DNSHijackWhitelist Field Functions 
        bool hasDNSHijackWhitelist() const { return this->DNSHijackWhitelist_ != nullptr;};
        void deleteDNSHijackWhitelist() { this->DNSHijackWhitelist_ = nullptr;};
        inline string getDNSHijackWhitelist() const { DARABONBA_PTR_GET_DEFAULT(DNSHijackWhitelist_, "") };
        inline Website& setDNSHijackWhitelist(string DNSHijackWhitelist) { DARABONBA_PTR_SET_VALUE(DNSHijackWhitelist_, DNSHijackWhitelist) };


        // disableCache Field Functions 
        bool hasDisableCache() const { return this->disableCache_ != nullptr;};
        void deleteDisableCache() { this->disableCache_ = nullptr;};
        inline int32_t getDisableCache() const { DARABONBA_PTR_GET_DEFAULT(disableCache_, 0) };
        inline Website& setDisableCache(int32_t disableCache) { DARABONBA_PTR_SET_VALUE(disableCache_, disableCache) };


        // disableCompression Field Functions 
        bool hasDisableCompression() const { return this->disableCompression_ != nullptr;};
        void deleteDisableCompression() { this->disableCompression_ = nullptr;};
        inline int32_t getDisableCompression() const { DARABONBA_PTR_GET_DEFAULT(disableCompression_, 0) };
        inline Website& setDisableCompression(int32_t disableCompression) { DARABONBA_PTR_SET_VALUE(disableCompression_, disableCompression) };


        // elementBlacklist Field Functions 
        bool hasElementBlacklist() const { return this->elementBlacklist_ != nullptr;};
        void deleteElementBlacklist() { this->elementBlacklist_ = nullptr;};
        inline string getElementBlacklist() const { DARABONBA_PTR_GET_DEFAULT(elementBlacklist_, "") };
        inline Website& setElementBlacklist(string elementBlacklist) { DARABONBA_PTR_SET_VALUE(elementBlacklist_, elementBlacklist) };


        // filterInvalidIP Field Functions 
        bool hasFilterInvalidIP() const { return this->filterInvalidIP_ != nullptr;};
        void deleteFilterInvalidIP() { this->filterInvalidIP_ = nullptr;};
        inline int32_t getFilterInvalidIP() const { DARABONBA_PTR_GET_DEFAULT(filterInvalidIP_, 0) };
        inline Website& setFilterInvalidIP(int32_t filterInvalidIP) { DARABONBA_PTR_SET_VALUE(filterInvalidIP_, filterInvalidIP) };


        // flowHijackJumpTimes Field Functions 
        bool hasFlowHijackJumpTimes() const { return this->flowHijackJumpTimes_ != nullptr;};
        void deleteFlowHijackJumpTimes() { this->flowHijackJumpTimes_ = nullptr;};
        inline int32_t getFlowHijackJumpTimes() const { DARABONBA_PTR_GET_DEFAULT(flowHijackJumpTimes_, 0) };
        inline Website& setFlowHijackJumpTimes(int32_t flowHijackJumpTimes) { DARABONBA_PTR_SET_VALUE(flowHijackJumpTimes_, flowHijackJumpTimes) };


        // flowHijackLogo Field Functions 
        bool hasFlowHijackLogo() const { return this->flowHijackLogo_ != nullptr;};
        void deleteFlowHijackLogo() { this->flowHijackLogo_ = nullptr;};
        inline string getFlowHijackLogo() const { DARABONBA_PTR_GET_DEFAULT(flowHijackLogo_, "") };
        inline Website& setFlowHijackLogo(string flowHijackLogo) { DARABONBA_PTR_SET_VALUE(flowHijackLogo_, flowHijackLogo) };


        // ignoreCertificateError Field Functions 
        bool hasIgnoreCertificateError() const { return this->ignoreCertificateError_ != nullptr;};
        void deleteIgnoreCertificateError() { this->ignoreCertificateError_ = nullptr;};
        inline int32_t getIgnoreCertificateError() const { DARABONBA_PTR_GET_DEFAULT(ignoreCertificateError_, 0) };
        inline Website& setIgnoreCertificateError(int32_t ignoreCertificateError) { DARABONBA_PTR_SET_VALUE(ignoreCertificateError_, ignoreCertificateError) };


        // monitorTimeout Field Functions 
        bool hasMonitorTimeout() const { return this->monitorTimeout_ != nullptr;};
        void deleteMonitorTimeout() { this->monitorTimeout_ = nullptr;};
        inline int64_t getMonitorTimeout() const { DARABONBA_PTR_GET_DEFAULT(monitorTimeout_, 0L) };
        inline Website& setMonitorTimeout(int64_t monitorTimeout) { DARABONBA_PTR_SET_VALUE(monitorTimeout_, monitorTimeout) };


        // pageTamper Field Functions 
        bool hasPageTamper() const { return this->pageTamper_ != nullptr;};
        void deletePageTamper() { this->pageTamper_ = nullptr;};
        inline string getPageTamper() const { DARABONBA_PTR_GET_DEFAULT(pageTamper_, "") };
        inline Website& setPageTamper(string pageTamper) { DARABONBA_PTR_SET_VALUE(pageTamper_, pageTamper) };


        // redirection Field Functions 
        bool hasRedirection() const { return this->redirection_ != nullptr;};
        void deleteRedirection() { this->redirection_ = nullptr;};
        inline int32_t getRedirection() const { DARABONBA_PTR_GET_DEFAULT(redirection_, 0) };
        inline Website& setRedirection(int32_t redirection) { DARABONBA_PTR_SET_VALUE(redirection_, redirection) };


        // slowElementThreshold Field Functions 
        bool hasSlowElementThreshold() const { return this->slowElementThreshold_ != nullptr;};
        void deleteSlowElementThreshold() { this->slowElementThreshold_ = nullptr;};
        inline int64_t getSlowElementThreshold() const { DARABONBA_PTR_GET_DEFAULT(slowElementThreshold_, 0L) };
        inline Website& setSlowElementThreshold(int64_t slowElementThreshold) { DARABONBA_PTR_SET_VALUE(slowElementThreshold_, slowElementThreshold) };


        // targetUrl Field Functions 
        bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
        void deleteTargetUrl() { this->targetUrl_ = nullptr;};
        inline string getTargetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
        inline Website& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


        // verifyStringBlacklist Field Functions 
        bool hasVerifyStringBlacklist() const { return this->verifyStringBlacklist_ != nullptr;};
        void deleteVerifyStringBlacklist() { this->verifyStringBlacklist_ = nullptr;};
        inline string getVerifyStringBlacklist() const { DARABONBA_PTR_GET_DEFAULT(verifyStringBlacklist_, "") };
        inline Website& setVerifyStringBlacklist(string verifyStringBlacklist) { DARABONBA_PTR_SET_VALUE(verifyStringBlacklist_, verifyStringBlacklist) };


        // verifyStringWhitelist Field Functions 
        bool hasVerifyStringWhitelist() const { return this->verifyStringWhitelist_ != nullptr;};
        void deleteVerifyStringWhitelist() { this->verifyStringWhitelist_ = nullptr;};
        inline string getVerifyStringWhitelist() const { DARABONBA_PTR_GET_DEFAULT(verifyStringWhitelist_, "") };
        inline Website& setVerifyStringWhitelist(string verifyStringWhitelist) { DARABONBA_PTR_SET_VALUE(verifyStringWhitelist_, verifyStringWhitelist) };


        // waitCompletionTime Field Functions 
        bool hasWaitCompletionTime() const { return this->waitCompletionTime_ != nullptr;};
        void deleteWaitCompletionTime() { this->waitCompletionTime_ = nullptr;};
        inline int64_t getWaitCompletionTime() const { DARABONBA_PTR_GET_DEFAULT(waitCompletionTime_, 0L) };
        inline Website& setWaitCompletionTime(int64_t waitCompletionTime) { DARABONBA_PTR_SET_VALUE(waitCompletionTime_, waitCompletionTime) };


      protected:
        // Specifies whether to automatically scroll up and down the screen to load a page.
        // 
        // *   0 (default): no
        // *   1: yes
        shared_ptr<int32_t> automaticScrolling_ {};
        // Specifies whether to create a custom header.
        // 
        // *   0 (default): No custom header is created.
        // *   1: A custom header is created for the first packet.
        // *   2: A custom header is created for all packets.
        shared_ptr<int32_t> customHeader_ {};
        // The custom header. Format: JSON map.
        shared_ptr<map<string, string>> customHeaderContent_ {};
        // If the IP address or CNAME record resolved from a domain name is not included in the DNS whitelist, you cannot access the domain name, or an IP address that belongs to a different domain name is returned. If the IP address or CNAME record is included in the DNS whitelist, DNS hijacking does not occur.
        // 
        // Format: \\<domain name>:\\<objects>. The objects can be IP addresses, wildcard mask, subnet mask, or CNAME records. Separate multiple objects with vertical bars (|). Example: www.aliyun.com:203.0.3.55|203.3.44.67. It indicates that all IP addresses that belong to the www.aliyun.com domain name except 203.0.3.55 and 203.3.44.67 are hijacked.
        shared_ptr<string> DNSHijackWhitelist_ {};
        // Specifies whether to disable caching.
        // 
        // *   0: no
        // *   1 (default): yes
        shared_ptr<int32_t> disableCache_ {};
        // Specifies whether to accept compressed files based on the HTTP Accept-Encoding request header. Valid values: 0: no. 1: yes. Default value: 0.
        shared_ptr<int32_t> disableCompression_ {};
        // The elements not to be loaded in the page loading process.
        shared_ptr<string> elementBlacklist_ {};
        // Specifies whether to exclude invalid IP addresses. Valid values: 0: yes. 1: no. Default value: 0.
        shared_ptr<int32_t> filterInvalidIP_ {};
        // The total number of elements on the page.
        shared_ptr<int32_t> flowHijackJumpTimes_ {};
        // The keyword that is used to identify hijacking. Asterisks (\\*) are allowed.
        shared_ptr<string> flowHijackLogo_ {};
        // Specifies whether to ignore certificate errors during certificate verification in the SSL handshake process and continue browsing. Valid values: 0: no. 1: yes. Default value: 1.
        shared_ptr<int32_t> ignoreCertificateError_ {};
        // The monitoring timeout period. Unit: milliseconds. This parameter is optional. Default value: 20000.
        shared_ptr<int64_t> monitorTimeout_ {};
        // Elements that are not included in the whitelist and appear on the page are tampered with. These elements can be pop-up ads, floating ads, and page redirection.
        // 
        // Format: \\<domain name>:\\<elements>. The elements can be wildcard masks. Separate multiple elements with vertical bars (|). Example: www.aliyun.com:|/cc/bb/a.gif|/vv/bb/cc.jpg. It indicates that all elements that belong to the www.aliyun.com domain name except the basic documents, /cc/bb/a.gif, and /vv/bb/cc.jpg are tampered with.
        shared_ptr<string> pageTamper_ {};
        // Specifies whether to continue browsing after redirection. Valid values: 0: no. 1: yes. Default value: 1.
        shared_ptr<int32_t> redirection_ {};
        // The time threshold that is used to define a slow element. Unit: milliseconds. Default value: 5000. Minimum value: 1. Maximum value: 300000.
        shared_ptr<int64_t> slowElementThreshold_ {};
        // The URL of the website.
        // 
        // This parameter is required.
        shared_ptr<string> targetUrl_ {};
        // An arbitrary string in the source code of the page for verification. If the source code returned by the client contains a string that is in the blacklist, the 650 error code is reported, which indicates that the string fails to be verified. Separate multiple strings with vertical bars (|).
        shared_ptr<string> verifyStringBlacklist_ {};
        // An arbitrary string in the source code of the page for verification. If the source code returned by the client contains a string that is not in the whitelist, the 650 error code is reported, which indicates that the string fails to be verified. Separate multiple strings with vertical bars (|).
        shared_ptr<string> verifyStringWhitelist_ {};
        // The maximum waiting time. Unit: milliseconds. Default value: 5000. Minimum value: 5000. Maximum value: 300000.
        shared_ptr<int64_t> waitCompletionTime_ {};
      };

      class Stream : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Stream& obj) { 
          DARABONBA_PTR_TO_JSON(CustomHeaderContent, customHeaderContent_);
          DARABONBA_PTR_TO_JSON(PlayerType, playerType_);
          DARABONBA_PTR_TO_JSON(StreamAddressType, streamAddressType_);
          DARABONBA_PTR_TO_JSON(StreamMonitorTimeout, streamMonitorTimeout_);
          DARABONBA_PTR_TO_JSON(StreamType, streamType_);
          DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
        };
        friend void from_json(const Darabonba::Json& j, Stream& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomHeaderContent, customHeaderContent_);
          DARABONBA_PTR_FROM_JSON(PlayerType, playerType_);
          DARABONBA_PTR_FROM_JSON(StreamAddressType, streamAddressType_);
          DARABONBA_PTR_FROM_JSON(StreamMonitorTimeout, streamMonitorTimeout_);
          DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
          DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
        };
        Stream() = default ;
        Stream(const Stream &) = default ;
        Stream(Stream &&) = default ;
        Stream(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Stream() = default ;
        Stream& operator=(const Stream &) = default ;
        Stream& operator=(Stream &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->customHeaderContent_ == nullptr
        && this->playerType_ == nullptr && this->streamAddressType_ == nullptr && this->streamMonitorTimeout_ == nullptr && this->streamType_ == nullptr && this->targetUrl_ == nullptr
        && this->whiteList_ == nullptr; };
        // customHeaderContent Field Functions 
        bool hasCustomHeaderContent() const { return this->customHeaderContent_ != nullptr;};
        void deleteCustomHeaderContent() { this->customHeaderContent_ = nullptr;};
        inline const map<string, string> & getCustomHeaderContent() const { DARABONBA_PTR_GET_CONST(customHeaderContent_, map<string, string>) };
        inline map<string, string> getCustomHeaderContent() { DARABONBA_PTR_GET(customHeaderContent_, map<string, string>) };
        inline Stream& setCustomHeaderContent(const map<string, string> & customHeaderContent) { DARABONBA_PTR_SET_VALUE(customHeaderContent_, customHeaderContent) };
        inline Stream& setCustomHeaderContent(map<string, string> && customHeaderContent) { DARABONBA_PTR_SET_RVALUE(customHeaderContent_, customHeaderContent) };


        // playerType Field Functions 
        bool hasPlayerType() const { return this->playerType_ != nullptr;};
        void deletePlayerType() { this->playerType_ = nullptr;};
        inline int32_t getPlayerType() const { DARABONBA_PTR_GET_DEFAULT(playerType_, 0) };
        inline Stream& setPlayerType(int32_t playerType) { DARABONBA_PTR_SET_VALUE(playerType_, playerType) };


        // streamAddressType Field Functions 
        bool hasStreamAddressType() const { return this->streamAddressType_ != nullptr;};
        void deleteStreamAddressType() { this->streamAddressType_ = nullptr;};
        inline int32_t getStreamAddressType() const { DARABONBA_PTR_GET_DEFAULT(streamAddressType_, 0) };
        inline Stream& setStreamAddressType(int32_t streamAddressType) { DARABONBA_PTR_SET_VALUE(streamAddressType_, streamAddressType) };


        // streamMonitorTimeout Field Functions 
        bool hasStreamMonitorTimeout() const { return this->streamMonitorTimeout_ != nullptr;};
        void deleteStreamMonitorTimeout() { this->streamMonitorTimeout_ = nullptr;};
        inline int32_t getStreamMonitorTimeout() const { DARABONBA_PTR_GET_DEFAULT(streamMonitorTimeout_, 0) };
        inline Stream& setStreamMonitorTimeout(int32_t streamMonitorTimeout) { DARABONBA_PTR_SET_VALUE(streamMonitorTimeout_, streamMonitorTimeout) };


        // streamType Field Functions 
        bool hasStreamType() const { return this->streamType_ != nullptr;};
        void deleteStreamType() { this->streamType_ = nullptr;};
        inline int32_t getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
        inline Stream& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


        // targetUrl Field Functions 
        bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
        void deleteTargetUrl() { this->targetUrl_ = nullptr;};
        inline string getTargetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
        inline Stream& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


        // whiteList Field Functions 
        bool hasWhiteList() const { return this->whiteList_ != nullptr;};
        void deleteWhiteList() { this->whiteList_ = nullptr;};
        inline string getWhiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
        inline Stream& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


      protected:
        // The custom header. Format: JSON map.
        shared_ptr<map<string, string>> customHeaderContent_ {};
        // The player. Default value: 12. Valid values:
        // 
        // *   12: VLC
        // *   2: Flash Player
        shared_ptr<int32_t> playerType_ {};
        // The address type of the resource. Valid values:
        // 
        // *   1: resource URL
        // *   0 (default): page URL
        shared_ptr<int32_t> streamAddressType_ {};
        // The monitoring duration. Unit: seconds. Maximum and default value: 60.
        shared_ptr<int32_t> streamMonitorTimeout_ {};
        // Specifies whether the resource is a video or audio. Valid values: 0: video. 1: audio.
        shared_ptr<int32_t> streamType_ {};
        // The resource URL of the streaming media.
        shared_ptr<string> targetUrl_ {};
        // The whitelisted objects that are used to avoid DNS hijacking. The objects can be IP addresses, wildcard mask, subnet mask, or CNAME records. Separate multiple objects with vertical bars (|). Example: www.aliyun.com:203.0.3.55|203.3.44.67. It indicates that all IP addresses that belong to the www.aliyun.com domain name except 203.0.3.55 and 203.3.44.67 are hijacked.
        shared_ptr<string> whiteList_ {};
      };

      class NetTCP : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetTCP& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectTimes, connectTimes_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          DARABONBA_PTR_TO_JSON(TracertEnable, tracertEnable_);
          DARABONBA_PTR_TO_JSON(TracertNumMax, tracertNumMax_);
          DARABONBA_PTR_TO_JSON(TracertTimeout, tracertTimeout_);
        };
        friend void from_json(const Darabonba::Json& j, NetTCP& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectTimes, connectTimes_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          DARABONBA_PTR_FROM_JSON(TracertEnable, tracertEnable_);
          DARABONBA_PTR_FROM_JSON(TracertNumMax, tracertNumMax_);
          DARABONBA_PTR_FROM_JSON(TracertTimeout, tracertTimeout_);
        };
        NetTCP() = default ;
        NetTCP(const NetTCP &) = default ;
        NetTCP(NetTCP &&) = default ;
        NetTCP(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetTCP() = default ;
        NetTCP& operator=(const NetTCP &) = default ;
        NetTCP& operator=(NetTCP &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectTimes_ == nullptr
        && this->interval_ == nullptr && this->targetUrl_ == nullptr && this->timeout_ == nullptr && this->tracertEnable_ == nullptr && this->tracertNumMax_ == nullptr
        && this->tracertTimeout_ == nullptr; };
        // connectTimes Field Functions 
        bool hasConnectTimes() const { return this->connectTimes_ != nullptr;};
        void deleteConnectTimes() { this->connectTimes_ = nullptr;};
        inline int32_t getConnectTimes() const { DARABONBA_PTR_GET_DEFAULT(connectTimes_, 0) };
        inline NetTCP& setConnectTimes(int32_t connectTimes) { DARABONBA_PTR_SET_VALUE(connectTimes_, connectTimes) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
        inline NetTCP& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // targetUrl Field Functions 
        bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
        void deleteTargetUrl() { this->targetUrl_ = nullptr;};
        inline string getTargetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
        inline NetTCP& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
        inline NetTCP& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        // tracertEnable Field Functions 
        bool hasTracertEnable() const { return this->tracertEnable_ != nullptr;};
        void deleteTracertEnable() { this->tracertEnable_ = nullptr;};
        inline bool getTracertEnable() const { DARABONBA_PTR_GET_DEFAULT(tracertEnable_, false) };
        inline NetTCP& setTracertEnable(bool tracertEnable) { DARABONBA_PTR_SET_VALUE(tracertEnable_, tracertEnable) };


        // tracertNumMax Field Functions 
        bool hasTracertNumMax() const { return this->tracertNumMax_ != nullptr;};
        void deleteTracertNumMax() { this->tracertNumMax_ = nullptr;};
        inline int32_t getTracertNumMax() const { DARABONBA_PTR_GET_DEFAULT(tracertNumMax_, 0) };
        inline NetTCP& setTracertNumMax(int32_t tracertNumMax) { DARABONBA_PTR_SET_VALUE(tracertNumMax_, tracertNumMax) };


        // tracertTimeout Field Functions 
        bool hasTracertTimeout() const { return this->tracertTimeout_ != nullptr;};
        void deleteTracertTimeout() { this->tracertTimeout_ = nullptr;};
        inline int64_t getTracertTimeout() const { DARABONBA_PTR_GET_DEFAULT(tracertTimeout_, 0L) };
        inline NetTCP& setTracertTimeout(int64_t tracertTimeout) { DARABONBA_PTR_SET_VALUE(tracertTimeout_, tracertTimeout) };


      protected:
        // The number of TCP connections that are established. Minimum value: 1. Maximum value: 16. Default value: 4.
        shared_ptr<int32_t> connectTimes_ {};
        // The interval at which TCP connections are established. Unit: milliseconds. Minimum value: 200. Maximum value: 10000. Default value: 200.
        shared_ptr<int64_t> interval_ {};
        // The IP address of the destination host.
        // 
        // This parameter is required.
        shared_ptr<string> targetUrl_ {};
        // The timeout period for the TCP synthetic test. Unit: milliseconds. Minimum value: 1000. Maximum value: 300000. Default value: 20000.
        shared_ptr<int64_t> timeout_ {};
        // Specifies whether to enable the tracert command. Default value: true.
        shared_ptr<bool> tracertEnable_ {};
        // The maximum number of hops for the tracert command. Minimum value: 1. Maximum value: 128. Default value: 20.
        shared_ptr<int32_t> tracertNumMax_ {};
        // The timeout period of the tracert command. Unit: milliseconds. Minimum value: 1000. Maximum value: 300000. Default value: 60000.
        shared_ptr<int64_t> tracertTimeout_ {};
      };

      class NetICMP : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetICMP& obj) { 
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(PackageNum, packageNum_);
          DARABONBA_PTR_TO_JSON(PackageSize, packageSize_);
          DARABONBA_PTR_TO_JSON(SplitPackage, splitPackage_);
          DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          DARABONBA_PTR_TO_JSON(TracertEnable, tracertEnable_);
          DARABONBA_PTR_TO_JSON(TracertNumMax, tracertNumMax_);
          DARABONBA_PTR_TO_JSON(TracertTimeout, tracertTimeout_);
        };
        friend void from_json(const Darabonba::Json& j, NetICMP& obj) { 
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(PackageNum, packageNum_);
          DARABONBA_PTR_FROM_JSON(PackageSize, packageSize_);
          DARABONBA_PTR_FROM_JSON(SplitPackage, splitPackage_);
          DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          DARABONBA_PTR_FROM_JSON(TracertEnable, tracertEnable_);
          DARABONBA_PTR_FROM_JSON(TracertNumMax, tracertNumMax_);
          DARABONBA_PTR_FROM_JSON(TracertTimeout, tracertTimeout_);
        };
        NetICMP() = default ;
        NetICMP(const NetICMP &) = default ;
        NetICMP(NetICMP &&) = default ;
        NetICMP(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetICMP() = default ;
        NetICMP& operator=(const NetICMP &) = default ;
        NetICMP& operator=(NetICMP &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->interval_ == nullptr
        && this->packageNum_ == nullptr && this->packageSize_ == nullptr && this->splitPackage_ == nullptr && this->targetUrl_ == nullptr && this->timeout_ == nullptr
        && this->tracertEnable_ == nullptr && this->tracertNumMax_ == nullptr && this->tracertTimeout_ == nullptr; };
        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
        inline NetICMP& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // packageNum Field Functions 
        bool hasPackageNum() const { return this->packageNum_ != nullptr;};
        void deletePackageNum() { this->packageNum_ = nullptr;};
        inline int32_t getPackageNum() const { DARABONBA_PTR_GET_DEFAULT(packageNum_, 0) };
        inline NetICMP& setPackageNum(int32_t packageNum) { DARABONBA_PTR_SET_VALUE(packageNum_, packageNum) };


        // packageSize Field Functions 
        bool hasPackageSize() const { return this->packageSize_ != nullptr;};
        void deletePackageSize() { this->packageSize_ = nullptr;};
        inline int32_t getPackageSize() const { DARABONBA_PTR_GET_DEFAULT(packageSize_, 0) };
        inline NetICMP& setPackageSize(int32_t packageSize) { DARABONBA_PTR_SET_VALUE(packageSize_, packageSize) };


        // splitPackage Field Functions 
        bool hasSplitPackage() const { return this->splitPackage_ != nullptr;};
        void deleteSplitPackage() { this->splitPackage_ = nullptr;};
        inline bool getSplitPackage() const { DARABONBA_PTR_GET_DEFAULT(splitPackage_, false) };
        inline NetICMP& setSplitPackage(bool splitPackage) { DARABONBA_PTR_SET_VALUE(splitPackage_, splitPackage) };


        // targetUrl Field Functions 
        bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
        void deleteTargetUrl() { this->targetUrl_ = nullptr;};
        inline string getTargetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
        inline NetICMP& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
        inline NetICMP& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        // tracertEnable Field Functions 
        bool hasTracertEnable() const { return this->tracertEnable_ != nullptr;};
        void deleteTracertEnable() { this->tracertEnable_ = nullptr;};
        inline bool getTracertEnable() const { DARABONBA_PTR_GET_DEFAULT(tracertEnable_, false) };
        inline NetICMP& setTracertEnable(bool tracertEnable) { DARABONBA_PTR_SET_VALUE(tracertEnable_, tracertEnable) };


        // tracertNumMax Field Functions 
        bool hasTracertNumMax() const { return this->tracertNumMax_ != nullptr;};
        void deleteTracertNumMax() { this->tracertNumMax_ = nullptr;};
        inline int32_t getTracertNumMax() const { DARABONBA_PTR_GET_DEFAULT(tracertNumMax_, 0) };
        inline NetICMP& setTracertNumMax(int32_t tracertNumMax) { DARABONBA_PTR_SET_VALUE(tracertNumMax_, tracertNumMax) };


        // tracertTimeout Field Functions 
        bool hasTracertTimeout() const { return this->tracertTimeout_ != nullptr;};
        void deleteTracertTimeout() { this->tracertTimeout_ = nullptr;};
        inline int64_t getTracertTimeout() const { DARABONBA_PTR_GET_DEFAULT(tracertTimeout_, 0L) };
        inline NetICMP& setTracertTimeout(int64_t tracertTimeout) { DARABONBA_PTR_SET_VALUE(tracertTimeout_, tracertTimeout) };


      protected:
        // The interval at which ICMP packets are sent. Unit: milliseconds. Minimum value: 200. Maximum value: 2000. Default value: 200.
        shared_ptr<int64_t> interval_ {};
        // The number of ICMP packets that are sent. Minimum value: 1. Maximum value: 50. Default value: 4.
        shared_ptr<int32_t> packageNum_ {};
        // The size of each ICMP packet. Unit: bytes. Valid values: 32, 64, 128, 256, 512, 1024, 1080, and 1450.
        shared_ptr<int32_t> packageSize_ {};
        // Specifies whether to split ICMP packets. Default value: true.
        shared_ptr<bool> splitPackage_ {};
        // The destination IP address or domain name.
        // 
        // This parameter is required.
        shared_ptr<string> targetUrl_ {};
        // The timeout period for the ICMP synthetic test. Unit: milliseconds. Minimum value: 1000. Maximum value: 300000. Default value: 20000.
        shared_ptr<int64_t> timeout_ {};
        // Specifies whether to enable the tracert command. Default value: true.
        shared_ptr<bool> tracertEnable_ {};
        // The maximum number of hops for the tracert command. Minimum value: 1. Maximum value: 128. Default value: 20.
        shared_ptr<int32_t> tracertNumMax_ {};
        // The timeout period of the tracert command. Unit: milliseconds. Minimum value: 1000. Maximum value: 300000. Default value: 60000.
        shared_ptr<int64_t> tracertTimeout_ {};
      };

      class NetDNS : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetDNS& obj) { 
          DARABONBA_PTR_TO_JSON(DnsServerIpType, dnsServerIpType_);
          DARABONBA_PTR_TO_JSON(NsServer, nsServer_);
          DARABONBA_PTR_TO_JSON(QueryMethod, queryMethod_);
          DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
        };
        friend void from_json(const Darabonba::Json& j, NetDNS& obj) { 
          DARABONBA_PTR_FROM_JSON(DnsServerIpType, dnsServerIpType_);
          DARABONBA_PTR_FROM_JSON(NsServer, nsServer_);
          DARABONBA_PTR_FROM_JSON(QueryMethod, queryMethod_);
          DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
        };
        NetDNS() = default ;
        NetDNS(const NetDNS &) = default ;
        NetDNS(NetDNS &&) = default ;
        NetDNS(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetDNS() = default ;
        NetDNS& operator=(const NetDNS &) = default ;
        NetDNS& operator=(NetDNS &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dnsServerIpType_ == nullptr
        && this->nsServer_ == nullptr && this->queryMethod_ == nullptr && this->targetUrl_ == nullptr && this->timeout_ == nullptr; };
        // dnsServerIpType Field Functions 
        bool hasDnsServerIpType() const { return this->dnsServerIpType_ != nullptr;};
        void deleteDnsServerIpType() { this->dnsServerIpType_ = nullptr;};
        inline int32_t getDnsServerIpType() const { DARABONBA_PTR_GET_DEFAULT(dnsServerIpType_, 0) };
        inline NetDNS& setDnsServerIpType(int32_t dnsServerIpType) { DARABONBA_PTR_SET_VALUE(dnsServerIpType_, dnsServerIpType) };


        // nsServer Field Functions 
        bool hasNsServer() const { return this->nsServer_ != nullptr;};
        void deleteNsServer() { this->nsServer_ = nullptr;};
        inline string getNsServer() const { DARABONBA_PTR_GET_DEFAULT(nsServer_, "") };
        inline NetDNS& setNsServer(string nsServer) { DARABONBA_PTR_SET_VALUE(nsServer_, nsServer) };


        // queryMethod Field Functions 
        bool hasQueryMethod() const { return this->queryMethod_ != nullptr;};
        void deleteQueryMethod() { this->queryMethod_ = nullptr;};
        inline int32_t getQueryMethod() const { DARABONBA_PTR_GET_DEFAULT(queryMethod_, 0) };
        inline NetDNS& setQueryMethod(int32_t queryMethod) { DARABONBA_PTR_SET_VALUE(queryMethod_, queryMethod) };


        // targetUrl Field Functions 
        bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
        void deleteTargetUrl() { this->targetUrl_ = nullptr;};
        inline string getTargetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
        inline NetDNS& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
        inline NetDNS& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      protected:
        // The IP version of the DNS server.
        // 
        // *   0 (default): IPv4.
        // *   1: IPv6.
        // *   2: A version is automatically selected.
        shared_ptr<int32_t> dnsServerIpType_ {};
        // The IP address of the DNS server. Default value: 114.114.114.114.
        shared_ptr<string> nsServer_ {};
        // The DNS query method. Valid values:
        // 
        // *   0 (default): recursive
        // *   1: iterative
        shared_ptr<int32_t> queryMethod_ {};
        // The destination domain name.
        // 
        // This parameter is required.
        shared_ptr<string> targetUrl_ {};
        // The timeout period for the DNS synthetic test. Unit: milliseconds. Minimum value: 1000. Maximum value: 45000. Default value: 5000.
        shared_ptr<int64_t> timeout_ {};
      };

      class FileDownload : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileDownload& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionTimeout, connectionTimeout_);
          DARABONBA_PTR_TO_JSON(CustomHeaderContent, customHeaderContent_);
          DARABONBA_PTR_TO_JSON(DownloadKernel, downloadKernel_);
          DARABONBA_PTR_TO_JSON(IgnoreCertificateAuthError, ignoreCertificateAuthError_);
          DARABONBA_PTR_TO_JSON(IgnoreCertificateCanceledError, ignoreCertificateCanceledError_);
          DARABONBA_PTR_TO_JSON(IgnoreCertificateOutOfDateError, ignoreCertificateOutOfDateError_);
          DARABONBA_PTR_TO_JSON(IgnoreCertificateStatusError, ignoreCertificateStatusError_);
          DARABONBA_PTR_TO_JSON(IgnoreCertificateUntrustworthyError, ignoreCertificateUntrustworthyError_);
          DARABONBA_PTR_TO_JSON(IgnoreCertificateUsingError, ignoreCertificateUsingError_);
          DARABONBA_PTR_TO_JSON(IgnoreInvalidHostError, ignoreInvalidHostError_);
          DARABONBA_PTR_TO_JSON(MonitorTimeout, monitorTimeout_);
          DARABONBA_PTR_TO_JSON(QuickProtocol, quickProtocol_);
          DARABONBA_PTR_TO_JSON(Redirection, redirection_);
          DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_TO_JSON(TransmissionSize, transmissionSize_);
          DARABONBA_PTR_TO_JSON(ValidateKeywords, validateKeywords_);
          DARABONBA_PTR_TO_JSON(VerifyWay, verifyWay_);
          DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
        };
        friend void from_json(const Darabonba::Json& j, FileDownload& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionTimeout, connectionTimeout_);
          DARABONBA_PTR_FROM_JSON(CustomHeaderContent, customHeaderContent_);
          DARABONBA_PTR_FROM_JSON(DownloadKernel, downloadKernel_);
          DARABONBA_PTR_FROM_JSON(IgnoreCertificateAuthError, ignoreCertificateAuthError_);
          DARABONBA_PTR_FROM_JSON(IgnoreCertificateCanceledError, ignoreCertificateCanceledError_);
          DARABONBA_PTR_FROM_JSON(IgnoreCertificateOutOfDateError, ignoreCertificateOutOfDateError_);
          DARABONBA_PTR_FROM_JSON(IgnoreCertificateStatusError, ignoreCertificateStatusError_);
          DARABONBA_PTR_FROM_JSON(IgnoreCertificateUntrustworthyError, ignoreCertificateUntrustworthyError_);
          DARABONBA_PTR_FROM_JSON(IgnoreCertificateUsingError, ignoreCertificateUsingError_);
          DARABONBA_PTR_FROM_JSON(IgnoreInvalidHostError, ignoreInvalidHostError_);
          DARABONBA_PTR_FROM_JSON(MonitorTimeout, monitorTimeout_);
          DARABONBA_PTR_FROM_JSON(QuickProtocol, quickProtocol_);
          DARABONBA_PTR_FROM_JSON(Redirection, redirection_);
          DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_FROM_JSON(TransmissionSize, transmissionSize_);
          DARABONBA_PTR_FROM_JSON(ValidateKeywords, validateKeywords_);
          DARABONBA_PTR_FROM_JSON(VerifyWay, verifyWay_);
          DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
        };
        FileDownload() = default ;
        FileDownload(const FileDownload &) = default ;
        FileDownload(FileDownload &&) = default ;
        FileDownload(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileDownload() = default ;
        FileDownload& operator=(const FileDownload &) = default ;
        FileDownload& operator=(FileDownload &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionTimeout_ == nullptr
        && this->customHeaderContent_ == nullptr && this->downloadKernel_ == nullptr && this->ignoreCertificateAuthError_ == nullptr && this->ignoreCertificateCanceledError_ == nullptr && this->ignoreCertificateOutOfDateError_ == nullptr
        && this->ignoreCertificateStatusError_ == nullptr && this->ignoreCertificateUntrustworthyError_ == nullptr && this->ignoreCertificateUsingError_ == nullptr && this->ignoreInvalidHostError_ == nullptr && this->monitorTimeout_ == nullptr
        && this->quickProtocol_ == nullptr && this->redirection_ == nullptr && this->targetUrl_ == nullptr && this->transmissionSize_ == nullptr && this->validateKeywords_ == nullptr
        && this->verifyWay_ == nullptr && this->whiteList_ == nullptr; };
        // connectionTimeout Field Functions 
        bool hasConnectionTimeout() const { return this->connectionTimeout_ != nullptr;};
        void deleteConnectionTimeout() { this->connectionTimeout_ = nullptr;};
        inline int64_t getConnectionTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionTimeout_, 0L) };
        inline FileDownload& setConnectionTimeout(int64_t connectionTimeout) { DARABONBA_PTR_SET_VALUE(connectionTimeout_, connectionTimeout) };


        // customHeaderContent Field Functions 
        bool hasCustomHeaderContent() const { return this->customHeaderContent_ != nullptr;};
        void deleteCustomHeaderContent() { this->customHeaderContent_ = nullptr;};
        inline const map<string, string> & getCustomHeaderContent() const { DARABONBA_PTR_GET_CONST(customHeaderContent_, map<string, string>) };
        inline map<string, string> getCustomHeaderContent() { DARABONBA_PTR_GET(customHeaderContent_, map<string, string>) };
        inline FileDownload& setCustomHeaderContent(const map<string, string> & customHeaderContent) { DARABONBA_PTR_SET_VALUE(customHeaderContent_, customHeaderContent) };
        inline FileDownload& setCustomHeaderContent(map<string, string> && customHeaderContent) { DARABONBA_PTR_SET_RVALUE(customHeaderContent_, customHeaderContent) };


        // downloadKernel Field Functions 
        bool hasDownloadKernel() const { return this->downloadKernel_ != nullptr;};
        void deleteDownloadKernel() { this->downloadKernel_ = nullptr;};
        inline int32_t getDownloadKernel() const { DARABONBA_PTR_GET_DEFAULT(downloadKernel_, 0) };
        inline FileDownload& setDownloadKernel(int32_t downloadKernel) { DARABONBA_PTR_SET_VALUE(downloadKernel_, downloadKernel) };


        // ignoreCertificateAuthError Field Functions 
        bool hasIgnoreCertificateAuthError() const { return this->ignoreCertificateAuthError_ != nullptr;};
        void deleteIgnoreCertificateAuthError() { this->ignoreCertificateAuthError_ = nullptr;};
        inline int32_t getIgnoreCertificateAuthError() const { DARABONBA_PTR_GET_DEFAULT(ignoreCertificateAuthError_, 0) };
        inline FileDownload& setIgnoreCertificateAuthError(int32_t ignoreCertificateAuthError) { DARABONBA_PTR_SET_VALUE(ignoreCertificateAuthError_, ignoreCertificateAuthError) };


        // ignoreCertificateCanceledError Field Functions 
        bool hasIgnoreCertificateCanceledError() const { return this->ignoreCertificateCanceledError_ != nullptr;};
        void deleteIgnoreCertificateCanceledError() { this->ignoreCertificateCanceledError_ = nullptr;};
        inline int32_t getIgnoreCertificateCanceledError() const { DARABONBA_PTR_GET_DEFAULT(ignoreCertificateCanceledError_, 0) };
        inline FileDownload& setIgnoreCertificateCanceledError(int32_t ignoreCertificateCanceledError) { DARABONBA_PTR_SET_VALUE(ignoreCertificateCanceledError_, ignoreCertificateCanceledError) };


        // ignoreCertificateOutOfDateError Field Functions 
        bool hasIgnoreCertificateOutOfDateError() const { return this->ignoreCertificateOutOfDateError_ != nullptr;};
        void deleteIgnoreCertificateOutOfDateError() { this->ignoreCertificateOutOfDateError_ = nullptr;};
        inline int32_t getIgnoreCertificateOutOfDateError() const { DARABONBA_PTR_GET_DEFAULT(ignoreCertificateOutOfDateError_, 0) };
        inline FileDownload& setIgnoreCertificateOutOfDateError(int32_t ignoreCertificateOutOfDateError) { DARABONBA_PTR_SET_VALUE(ignoreCertificateOutOfDateError_, ignoreCertificateOutOfDateError) };


        // ignoreCertificateStatusError Field Functions 
        bool hasIgnoreCertificateStatusError() const { return this->ignoreCertificateStatusError_ != nullptr;};
        void deleteIgnoreCertificateStatusError() { this->ignoreCertificateStatusError_ = nullptr;};
        inline int32_t getIgnoreCertificateStatusError() const { DARABONBA_PTR_GET_DEFAULT(ignoreCertificateStatusError_, 0) };
        inline FileDownload& setIgnoreCertificateStatusError(int32_t ignoreCertificateStatusError) { DARABONBA_PTR_SET_VALUE(ignoreCertificateStatusError_, ignoreCertificateStatusError) };


        // ignoreCertificateUntrustworthyError Field Functions 
        bool hasIgnoreCertificateUntrustworthyError() const { return this->ignoreCertificateUntrustworthyError_ != nullptr;};
        void deleteIgnoreCertificateUntrustworthyError() { this->ignoreCertificateUntrustworthyError_ = nullptr;};
        inline int32_t getIgnoreCertificateUntrustworthyError() const { DARABONBA_PTR_GET_DEFAULT(ignoreCertificateUntrustworthyError_, 0) };
        inline FileDownload& setIgnoreCertificateUntrustworthyError(int32_t ignoreCertificateUntrustworthyError) { DARABONBA_PTR_SET_VALUE(ignoreCertificateUntrustworthyError_, ignoreCertificateUntrustworthyError) };


        // ignoreCertificateUsingError Field Functions 
        bool hasIgnoreCertificateUsingError() const { return this->ignoreCertificateUsingError_ != nullptr;};
        void deleteIgnoreCertificateUsingError() { this->ignoreCertificateUsingError_ = nullptr;};
        inline int32_t getIgnoreCertificateUsingError() const { DARABONBA_PTR_GET_DEFAULT(ignoreCertificateUsingError_, 0) };
        inline FileDownload& setIgnoreCertificateUsingError(int32_t ignoreCertificateUsingError) { DARABONBA_PTR_SET_VALUE(ignoreCertificateUsingError_, ignoreCertificateUsingError) };


        // ignoreInvalidHostError Field Functions 
        bool hasIgnoreInvalidHostError() const { return this->ignoreInvalidHostError_ != nullptr;};
        void deleteIgnoreInvalidHostError() { this->ignoreInvalidHostError_ = nullptr;};
        inline int32_t getIgnoreInvalidHostError() const { DARABONBA_PTR_GET_DEFAULT(ignoreInvalidHostError_, 0) };
        inline FileDownload& setIgnoreInvalidHostError(int32_t ignoreInvalidHostError) { DARABONBA_PTR_SET_VALUE(ignoreInvalidHostError_, ignoreInvalidHostError) };


        // monitorTimeout Field Functions 
        bool hasMonitorTimeout() const { return this->monitorTimeout_ != nullptr;};
        void deleteMonitorTimeout() { this->monitorTimeout_ = nullptr;};
        inline int64_t getMonitorTimeout() const { DARABONBA_PTR_GET_DEFAULT(monitorTimeout_, 0L) };
        inline FileDownload& setMonitorTimeout(int64_t monitorTimeout) { DARABONBA_PTR_SET_VALUE(monitorTimeout_, monitorTimeout) };


        // quickProtocol Field Functions 
        bool hasQuickProtocol() const { return this->quickProtocol_ != nullptr;};
        void deleteQuickProtocol() { this->quickProtocol_ = nullptr;};
        inline int32_t getQuickProtocol() const { DARABONBA_PTR_GET_DEFAULT(quickProtocol_, 0) };
        inline FileDownload& setQuickProtocol(int32_t quickProtocol) { DARABONBA_PTR_SET_VALUE(quickProtocol_, quickProtocol) };


        // redirection Field Functions 
        bool hasRedirection() const { return this->redirection_ != nullptr;};
        void deleteRedirection() { this->redirection_ = nullptr;};
        inline int32_t getRedirection() const { DARABONBA_PTR_GET_DEFAULT(redirection_, 0) };
        inline FileDownload& setRedirection(int32_t redirection) { DARABONBA_PTR_SET_VALUE(redirection_, redirection) };


        // targetUrl Field Functions 
        bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
        void deleteTargetUrl() { this->targetUrl_ = nullptr;};
        inline string getTargetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
        inline FileDownload& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


        // transmissionSize Field Functions 
        bool hasTransmissionSize() const { return this->transmissionSize_ != nullptr;};
        void deleteTransmissionSize() { this->transmissionSize_ = nullptr;};
        inline int64_t getTransmissionSize() const { DARABONBA_PTR_GET_DEFAULT(transmissionSize_, 0L) };
        inline FileDownload& setTransmissionSize(int64_t transmissionSize) { DARABONBA_PTR_SET_VALUE(transmissionSize_, transmissionSize) };


        // validateKeywords Field Functions 
        bool hasValidateKeywords() const { return this->validateKeywords_ != nullptr;};
        void deleteValidateKeywords() { this->validateKeywords_ = nullptr;};
        inline string getValidateKeywords() const { DARABONBA_PTR_GET_DEFAULT(validateKeywords_, "") };
        inline FileDownload& setValidateKeywords(string validateKeywords) { DARABONBA_PTR_SET_VALUE(validateKeywords_, validateKeywords) };


        // verifyWay Field Functions 
        bool hasVerifyWay() const { return this->verifyWay_ != nullptr;};
        void deleteVerifyWay() { this->verifyWay_ = nullptr;};
        inline int32_t getVerifyWay() const { DARABONBA_PTR_GET_DEFAULT(verifyWay_, 0) };
        inline FileDownload& setVerifyWay(int32_t verifyWay) { DARABONBA_PTR_SET_VALUE(verifyWay_, verifyWay) };


        // whiteList Field Functions 
        bool hasWhiteList() const { return this->whiteList_ != nullptr;};
        void deleteWhiteList() { this->whiteList_ = nullptr;};
        inline string getWhiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
        inline FileDownload& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


      protected:
        // Unit: milliseconds. Minimum value: 1000. Maximum value: 120000. Default value: 5000.
        shared_ptr<int64_t> connectionTimeout_ {};
        // The content of the custom request header.
        shared_ptr<map<string, string>> customHeaderContent_ {};
        // The kernel type. Valid values:
        // 
        // *   1: curl
        // *   0: WinInet
        // 
        // Default value: 1
        shared_ptr<int32_t> downloadKernel_ {};
        // Specifies whether to ignore CA certificate authentication errors. Valid values: 0: no. 1: yes. Default value: 1.
        shared_ptr<int32_t> ignoreCertificateAuthError_ {};
        // Specifies whether to ignore certificate revocation errors. Valid values: 0: no. 1: yes. Default value: 1.
        shared_ptr<int32_t> ignoreCertificateCanceledError_ {};
        // Specifies whether to ignore certificate invalidity. Valid values: 0: no. 1: yes. Default value: 1.
        shared_ptr<int32_t> ignoreCertificateOutOfDateError_ {};
        // Specifies whether to ignore certificate status errors. Valid values: 0: no. 1: yes. Default value: 1.
        shared_ptr<int32_t> ignoreCertificateStatusError_ {};
        // Specifies whether to ignore certificate incredibility. Valid values: 0: no. 1: yes. Default value: 1.
        shared_ptr<int32_t> ignoreCertificateUntrustworthyError_ {};
        // Specifies whether to ignore certificate usage errors. Valid values: 0: no. 1: yes. Default value: 1.
        shared_ptr<int32_t> ignoreCertificateUsingError_ {};
        // Specifies whether to ignore host invalidity. Valid values: 0: no. 1: yes. Default value: 1.
        shared_ptr<int32_t> ignoreInvalidHostError_ {};
        // The monitoring timeout period. Unit: milliseconds. Minimum value: 1000. Maximum value: 120000. Default value: 60000.
        shared_ptr<int64_t> monitorTimeout_ {};
        // The QUIC protocol type. Valid values:
        // 
        // *   1: HTTP/1
        // *   2: HTTP/2
        // *   3: HTTP/3
        // 
        // Default value: 1
        shared_ptr<int32_t> quickProtocol_ {};
        // Specifies whether to support redirection. Valid values: 0: no. 1: yes. Default value: 1.
        shared_ptr<int32_t> redirection_ {};
        // The URL that is used to download the file.
        // 
        // This parameter is required.
        shared_ptr<string> targetUrl_ {};
        // The maximum file size of a single transfer. Unit: KB. Minimum value: 1. Maximum value: 20480. Valid values: 2048.
        shared_ptr<int64_t> transmissionSize_ {};
        // The keyword that is used in verification.
        shared_ptr<string> validateKeywords_ {};
        // The verification method. Valid values:
        // 
        // *   0: no verification
        // *   1: string verification
        // *   2: MD5 verification
        shared_ptr<int32_t> verifyWay_ {};
        // The whitelisted objects that are used to avoid DNS hijacking. The objects can be IP addresses, wildcard mask, subnet mask, or CNAME records. Separate multiple objects with vertical bars (|). Example: www.aliyun.com:203.0.3.55|203.3.44.67. It indicates that all IP addresses that belong to the www.aliyun.com domain name except 203.0.3.55 and 203.3.44.67 are hijacked.
        shared_ptr<string> whiteList_ {};
      };

      class ApiHTTP : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiHTTP& obj) { 
          DARABONBA_PTR_TO_JSON(CheckCert, checkCert_);
          DARABONBA_PTR_TO_JSON(ConnectTimeout, connectTimeout_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(ProtocolAlpnProtocol, protocolAlpnProtocol_);
          DARABONBA_PTR_TO_JSON(RequestBody, requestBody_);
          DARABONBA_PTR_TO_JSON(RequestHeaders, requestHeaders_);
          DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
        };
        friend void from_json(const Darabonba::Json& j, ApiHTTP& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckCert, checkCert_);
          DARABONBA_PTR_FROM_JSON(ConnectTimeout, connectTimeout_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(ProtocolAlpnProtocol, protocolAlpnProtocol_);
          DARABONBA_PTR_FROM_JSON(RequestBody, requestBody_);
          DARABONBA_PTR_FROM_JSON(RequestHeaders, requestHeaders_);
          DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
        };
        ApiHTTP() = default ;
        ApiHTTP(const ApiHTTP &) = default ;
        ApiHTTP(ApiHTTP &&) = default ;
        ApiHTTP(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiHTTP() = default ;
        ApiHTTP& operator=(const ApiHTTP &) = default ;
        ApiHTTP& operator=(ApiHTTP &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RequestBody : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RequestBody& obj) { 
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, RequestBody& obj) { 
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          RequestBody() = default ;
          RequestBody(const RequestBody &) = default ;
          RequestBody(RequestBody &&) = default ;
          RequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RequestBody() = default ;
          RequestBody& operator=(const RequestBody &) = default ;
          RequestBody& operator=(RequestBody &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->type_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline RequestBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline RequestBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The content of the request body. Format: JSON string. The parameter is required if the Type parameter is set to text/plain, application/json, application/xml, or text/html. Format: JSON string.
          shared_ptr<string> content_ {};
          // The type of the request body. Valid values: text/plain, application/json, application/x-www-form-urlencoded, multipart/form-data, application/xml, and text/html.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->checkCert_ == nullptr
        && this->connectTimeout_ == nullptr && this->method_ == nullptr && this->protocolAlpnProtocol_ == nullptr && this->requestBody_ == nullptr && this->requestHeaders_ == nullptr
        && this->targetUrl_ == nullptr && this->timeout_ == nullptr; };
        // checkCert Field Functions 
        bool hasCheckCert() const { return this->checkCert_ != nullptr;};
        void deleteCheckCert() { this->checkCert_ = nullptr;};
        inline bool getCheckCert() const { DARABONBA_PTR_GET_DEFAULT(checkCert_, false) };
        inline ApiHTTP& setCheckCert(bool checkCert) { DARABONBA_PTR_SET_VALUE(checkCert_, checkCert) };


        // connectTimeout Field Functions 
        bool hasConnectTimeout() const { return this->connectTimeout_ != nullptr;};
        void deleteConnectTimeout() { this->connectTimeout_ = nullptr;};
        inline int64_t getConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectTimeout_, 0L) };
        inline ApiHTTP& setConnectTimeout(int64_t connectTimeout) { DARABONBA_PTR_SET_VALUE(connectTimeout_, connectTimeout) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline ApiHTTP& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // protocolAlpnProtocol Field Functions 
        bool hasProtocolAlpnProtocol() const { return this->protocolAlpnProtocol_ != nullptr;};
        void deleteProtocolAlpnProtocol() { this->protocolAlpnProtocol_ = nullptr;};
        inline int32_t getProtocolAlpnProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocolAlpnProtocol_, 0) };
        inline ApiHTTP& setProtocolAlpnProtocol(int32_t protocolAlpnProtocol) { DARABONBA_PTR_SET_VALUE(protocolAlpnProtocol_, protocolAlpnProtocol) };


        // requestBody Field Functions 
        bool hasRequestBody() const { return this->requestBody_ != nullptr;};
        void deleteRequestBody() { this->requestBody_ = nullptr;};
        inline const ApiHTTP::RequestBody & getRequestBody() const { DARABONBA_PTR_GET_CONST(requestBody_, ApiHTTP::RequestBody) };
        inline ApiHTTP::RequestBody getRequestBody() { DARABONBA_PTR_GET(requestBody_, ApiHTTP::RequestBody) };
        inline ApiHTTP& setRequestBody(const ApiHTTP::RequestBody & requestBody) { DARABONBA_PTR_SET_VALUE(requestBody_, requestBody) };
        inline ApiHTTP& setRequestBody(ApiHTTP::RequestBody && requestBody) { DARABONBA_PTR_SET_RVALUE(requestBody_, requestBody) };


        // requestHeaders Field Functions 
        bool hasRequestHeaders() const { return this->requestHeaders_ != nullptr;};
        void deleteRequestHeaders() { this->requestHeaders_ = nullptr;};
        inline const map<string, string> & getRequestHeaders() const { DARABONBA_PTR_GET_CONST(requestHeaders_, map<string, string>) };
        inline map<string, string> getRequestHeaders() { DARABONBA_PTR_GET(requestHeaders_, map<string, string>) };
        inline ApiHTTP& setRequestHeaders(const map<string, string> & requestHeaders) { DARABONBA_PTR_SET_VALUE(requestHeaders_, requestHeaders) };
        inline ApiHTTP& setRequestHeaders(map<string, string> && requestHeaders) { DARABONBA_PTR_SET_RVALUE(requestHeaders_, requestHeaders) };


        // targetUrl Field Functions 
        bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
        void deleteTargetUrl() { this->targetUrl_ = nullptr;};
        inline string getTargetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
        inline ApiHTTP& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
        inline ApiHTTP& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      protected:
        // Specifies whether to verify the certificate. Default value: no.
        shared_ptr<bool> checkCert_ {};
        // The connection timeout period. Unit: milliseconds. Default value: 5000. Minimum value: 1000. Maximum value: 300000.
        shared_ptr<int64_t> connectTimeout_ {};
        // The request method. Valid values: GET and POST.
        shared_ptr<string> method_ {};
        // The ALPN protocol version. You can configure this parameter when you perform an HTTPS synthetic test on a WAP mobile client. Valid values:
        // 
        // 0: default
        // 
        // 1: http/1.1
        // 
        // 2: h2
        // 
        // 3: disables the ALPN protocol
        shared_ptr<int32_t> protocolAlpnProtocol_ {};
        // The HTTP request body.
        shared_ptr<ApiHTTP::RequestBody> requestBody_ {};
        // The HTTP request header.
        shared_ptr<map<string, string>> requestHeaders_ {};
        // The URL or request path for synthetic monitoring.
        // 
        // This parameter is required.
        shared_ptr<string> targetUrl_ {};
        // The timeout period. Unit: milliseconds. Default value: 10000. Minimum value: 1000. Maximum value: 300000.
        shared_ptr<int64_t> timeout_ {};
      };

      virtual bool empty() const override { return this->apiHTTP_ == nullptr
        && this->fileDownload_ == nullptr && this->netDNS_ == nullptr && this->netICMP_ == nullptr && this->netTCP_ == nullptr && this->stream_ == nullptr
        && this->website_ == nullptr; };
      // apiHTTP Field Functions 
      bool hasApiHTTP() const { return this->apiHTTP_ != nullptr;};
      void deleteApiHTTP() { this->apiHTTP_ = nullptr;};
      inline const MonitorConf::ApiHTTP & getApiHTTP() const { DARABONBA_PTR_GET_CONST(apiHTTP_, MonitorConf::ApiHTTP) };
      inline MonitorConf::ApiHTTP getApiHTTP() { DARABONBA_PTR_GET(apiHTTP_, MonitorConf::ApiHTTP) };
      inline MonitorConf& setApiHTTP(const MonitorConf::ApiHTTP & apiHTTP) { DARABONBA_PTR_SET_VALUE(apiHTTP_, apiHTTP) };
      inline MonitorConf& setApiHTTP(MonitorConf::ApiHTTP && apiHTTP) { DARABONBA_PTR_SET_RVALUE(apiHTTP_, apiHTTP) };


      // fileDownload Field Functions 
      bool hasFileDownload() const { return this->fileDownload_ != nullptr;};
      void deleteFileDownload() { this->fileDownload_ = nullptr;};
      inline const MonitorConf::FileDownload & getFileDownload() const { DARABONBA_PTR_GET_CONST(fileDownload_, MonitorConf::FileDownload) };
      inline MonitorConf::FileDownload getFileDownload() { DARABONBA_PTR_GET(fileDownload_, MonitorConf::FileDownload) };
      inline MonitorConf& setFileDownload(const MonitorConf::FileDownload & fileDownload) { DARABONBA_PTR_SET_VALUE(fileDownload_, fileDownload) };
      inline MonitorConf& setFileDownload(MonitorConf::FileDownload && fileDownload) { DARABONBA_PTR_SET_RVALUE(fileDownload_, fileDownload) };


      // netDNS Field Functions 
      bool hasNetDNS() const { return this->netDNS_ != nullptr;};
      void deleteNetDNS() { this->netDNS_ = nullptr;};
      inline const MonitorConf::NetDNS & getNetDNS() const { DARABONBA_PTR_GET_CONST(netDNS_, MonitorConf::NetDNS) };
      inline MonitorConf::NetDNS getNetDNS() { DARABONBA_PTR_GET(netDNS_, MonitorConf::NetDNS) };
      inline MonitorConf& setNetDNS(const MonitorConf::NetDNS & netDNS) { DARABONBA_PTR_SET_VALUE(netDNS_, netDNS) };
      inline MonitorConf& setNetDNS(MonitorConf::NetDNS && netDNS) { DARABONBA_PTR_SET_RVALUE(netDNS_, netDNS) };


      // netICMP Field Functions 
      bool hasNetICMP() const { return this->netICMP_ != nullptr;};
      void deleteNetICMP() { this->netICMP_ = nullptr;};
      inline const MonitorConf::NetICMP & getNetICMP() const { DARABONBA_PTR_GET_CONST(netICMP_, MonitorConf::NetICMP) };
      inline MonitorConf::NetICMP getNetICMP() { DARABONBA_PTR_GET(netICMP_, MonitorConf::NetICMP) };
      inline MonitorConf& setNetICMP(const MonitorConf::NetICMP & netICMP) { DARABONBA_PTR_SET_VALUE(netICMP_, netICMP) };
      inline MonitorConf& setNetICMP(MonitorConf::NetICMP && netICMP) { DARABONBA_PTR_SET_RVALUE(netICMP_, netICMP) };


      // netTCP Field Functions 
      bool hasNetTCP() const { return this->netTCP_ != nullptr;};
      void deleteNetTCP() { this->netTCP_ = nullptr;};
      inline const MonitorConf::NetTCP & getNetTCP() const { DARABONBA_PTR_GET_CONST(netTCP_, MonitorConf::NetTCP) };
      inline MonitorConf::NetTCP getNetTCP() { DARABONBA_PTR_GET(netTCP_, MonitorConf::NetTCP) };
      inline MonitorConf& setNetTCP(const MonitorConf::NetTCP & netTCP) { DARABONBA_PTR_SET_VALUE(netTCP_, netTCP) };
      inline MonitorConf& setNetTCP(MonitorConf::NetTCP && netTCP) { DARABONBA_PTR_SET_RVALUE(netTCP_, netTCP) };


      // stream Field Functions 
      bool hasStream() const { return this->stream_ != nullptr;};
      void deleteStream() { this->stream_ = nullptr;};
      inline const MonitorConf::Stream & getStream() const { DARABONBA_PTR_GET_CONST(stream_, MonitorConf::Stream) };
      inline MonitorConf::Stream getStream() { DARABONBA_PTR_GET(stream_, MonitorConf::Stream) };
      inline MonitorConf& setStream(const MonitorConf::Stream & stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };
      inline MonitorConf& setStream(MonitorConf::Stream && stream) { DARABONBA_PTR_SET_RVALUE(stream_, stream) };


      // website Field Functions 
      bool hasWebsite() const { return this->website_ != nullptr;};
      void deleteWebsite() { this->website_ = nullptr;};
      inline const MonitorConf::Website & getWebsite() const { DARABONBA_PTR_GET_CONST(website_, MonitorConf::Website) };
      inline MonitorConf::Website getWebsite() { DARABONBA_PTR_GET(website_, MonitorConf::Website) };
      inline MonitorConf& setWebsite(const MonitorConf::Website & website) { DARABONBA_PTR_SET_VALUE(website_, website) };
      inline MonitorConf& setWebsite(MonitorConf::Website && website) { DARABONBA_PTR_SET_RVALUE(website_, website) };


    protected:
      // The parameters of the HTTP(S) synthetic test.
      shared_ptr<MonitorConf::ApiHTTP> apiHTTP_ {};
      // The parameters of file downloading.
      shared_ptr<MonitorConf::FileDownload> fileDownload_ {};
      // The parameters of the DNS synthetic test. This parameter is required if the TaskType parameter is set to 3.
      shared_ptr<MonitorConf::NetDNS> netDNS_ {};
      // The parameters of the ICMP synthetic test. This parameter is required if the TaskType parameter is set to 1.
      shared_ptr<MonitorConf::NetICMP> netICMP_ {};
      // The parameters of the TCP synthetic test. This parameter is required if the TaskType parameter is set to 2.
      shared_ptr<MonitorConf::NetTCP> netTCP_ {};
      // The parameters of the streaming-media synthetic test.
      shared_ptr<MonitorConf::Stream> stream_ {};
      // The parameters of the website speed measurement.
      shared_ptr<MonitorConf::Website> website_ {};
    };

    class CustomPeriod : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomPeriod& obj) { 
        DARABONBA_PTR_TO_JSON(EndHour, endHour_);
        DARABONBA_PTR_TO_JSON(StartHour, startHour_);
      };
      friend void from_json(const Darabonba::Json& j, CustomPeriod& obj) { 
        DARABONBA_PTR_FROM_JSON(EndHour, endHour_);
        DARABONBA_PTR_FROM_JSON(StartHour, startHour_);
      };
      CustomPeriod() = default ;
      CustomPeriod(const CustomPeriod &) = default ;
      CustomPeriod(CustomPeriod &&) = default ;
      CustomPeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomPeriod() = default ;
      CustomPeriod& operator=(const CustomPeriod &) = default ;
      CustomPeriod& operator=(CustomPeriod &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endHour_ == nullptr
        && this->startHour_ == nullptr; };
      // endHour Field Functions 
      bool hasEndHour() const { return this->endHour_ != nullptr;};
      void deleteEndHour() { this->endHour_ = nullptr;};
      inline int32_t getEndHour() const { DARABONBA_PTR_GET_DEFAULT(endHour_, 0) };
      inline CustomPeriod& setEndHour(int32_t endHour) { DARABONBA_PTR_SET_VALUE(endHour_, endHour) };


      // startHour Field Functions 
      bool hasStartHour() const { return this->startHour_ != nullptr;};
      void deleteStartHour() { this->startHour_ = nullptr;};
      inline int32_t getStartHour() const { DARABONBA_PTR_GET_DEFAULT(startHour_, 0) };
      inline CustomPeriod& setStartHour(int32_t startHour) { DARABONBA_PTR_SET_VALUE(startHour_, startHour) };


    protected:
      // The custom host settings.
      // 
      // This parameter is required.
      shared_ptr<int32_t> endHour_ {};
      // The list of hosts.
      // 
      // This parameter is required.
      shared_ptr<int32_t> startHour_ {};
    };

    class CommonSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CommonSetting& obj) { 
        DARABONBA_PTR_TO_JSON(CustomHost, customHost_);
        DARABONBA_PTR_TO_JSON(CustomPrometheusSetting, customPrometheusSetting_);
        DARABONBA_PTR_TO_JSON(CustomVPCSetting, customVPCSetting_);
        DARABONBA_PTR_TO_JSON(IpType, ipType_);
        DARABONBA_PTR_TO_JSON(IsOpenTrace, isOpenTrace_);
        DARABONBA_PTR_TO_JSON(MonitorSamples, monitorSamples_);
        DARABONBA_PTR_TO_JSON(TraceClientType, traceClientType_);
        DARABONBA_PTR_TO_JSON(XtraceRegion, xtraceRegion_);
      };
      friend void from_json(const Darabonba::Json& j, CommonSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomHost, customHost_);
        DARABONBA_PTR_FROM_JSON(CustomPrometheusSetting, customPrometheusSetting_);
        DARABONBA_PTR_FROM_JSON(CustomVPCSetting, customVPCSetting_);
        DARABONBA_PTR_FROM_JSON(IpType, ipType_);
        DARABONBA_PTR_FROM_JSON(IsOpenTrace, isOpenTrace_);
        DARABONBA_PTR_FROM_JSON(MonitorSamples, monitorSamples_);
        DARABONBA_PTR_FROM_JSON(TraceClientType, traceClientType_);
        DARABONBA_PTR_FROM_JSON(XtraceRegion, xtraceRegion_);
      };
      CommonSetting() = default ;
      CommonSetting(const CommonSetting &) = default ;
      CommonSetting(CommonSetting &&) = default ;
      CommonSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CommonSetting() = default ;
      CommonSetting& operator=(const CommonSetting &) = default ;
      CommonSetting& operator=(CommonSetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomVPCSetting : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomVPCSetting& obj) { 
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SecureGroupId, secureGroupId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, CustomVPCSetting& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SecureGroupId, secureGroupId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        CustomVPCSetting() = default ;
        CustomVPCSetting(const CustomVPCSetting &) = default ;
        CustomVPCSetting(CustomVPCSetting &&) = default ;
        CustomVPCSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomVPCSetting() = default ;
        CustomVPCSetting& operator=(const CustomVPCSetting &) = default ;
        CustomVPCSetting& operator=(CustomVPCSetting &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->regionId_ == nullptr
        && this->secureGroupId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline CustomVPCSetting& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // secureGroupId Field Functions 
        bool hasSecureGroupId() const { return this->secureGroupId_ != nullptr;};
        void deleteSecureGroupId() { this->secureGroupId_ = nullptr;};
        inline string getSecureGroupId() const { DARABONBA_PTR_GET_DEFAULT(secureGroupId_, "") };
        inline CustomVPCSetting& setSecureGroupId(string secureGroupId) { DARABONBA_PTR_SET_VALUE(secureGroupId_, secureGroupId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline CustomVPCSetting& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline CustomVPCSetting& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The ID of the security group to which the client belongs. The security group specifies the inbound and outbound rules of the client for the VPC. You need to allow the security group to which the client belongs to access the security group to which the VPC belongs. Otherwise, the client cannot access resources in the VPC.
        shared_ptr<string> secureGroupId_ {};
        // The vSwitch ID.
        shared_ptr<string> vSwitchId_ {};
        // VPC ID.
        shared_ptr<string> vpcId_ {};
      };

      class CustomPrometheusSetting : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomPrometheusSetting& obj) { 
          DARABONBA_PTR_TO_JSON(PrometheusClusterId, prometheusClusterId_);
          DARABONBA_PTR_TO_JSON(PrometheusClusterRegion, prometheusClusterRegion_);
          DARABONBA_PTR_TO_JSON(PrometheusLabels, prometheusLabels_);
        };
        friend void from_json(const Darabonba::Json& j, CustomPrometheusSetting& obj) { 
          DARABONBA_PTR_FROM_JSON(PrometheusClusterId, prometheusClusterId_);
          DARABONBA_PTR_FROM_JSON(PrometheusClusterRegion, prometheusClusterRegion_);
          DARABONBA_PTR_FROM_JSON(PrometheusLabels, prometheusLabels_);
        };
        CustomPrometheusSetting() = default ;
        CustomPrometheusSetting(const CustomPrometheusSetting &) = default ;
        CustomPrometheusSetting(CustomPrometheusSetting &&) = default ;
        CustomPrometheusSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomPrometheusSetting() = default ;
        CustomPrometheusSetting& operator=(const CustomPrometheusSetting &) = default ;
        CustomPrometheusSetting& operator=(CustomPrometheusSetting &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->prometheusClusterId_ == nullptr
        && this->prometheusClusterRegion_ == nullptr && this->prometheusLabels_ == nullptr; };
        // prometheusClusterId Field Functions 
        bool hasPrometheusClusterId() const { return this->prometheusClusterId_ != nullptr;};
        void deletePrometheusClusterId() { this->prometheusClusterId_ = nullptr;};
        inline string getPrometheusClusterId() const { DARABONBA_PTR_GET_DEFAULT(prometheusClusterId_, "") };
        inline CustomPrometheusSetting& setPrometheusClusterId(string prometheusClusterId) { DARABONBA_PTR_SET_VALUE(prometheusClusterId_, prometheusClusterId) };


        // prometheusClusterRegion Field Functions 
        bool hasPrometheusClusterRegion() const { return this->prometheusClusterRegion_ != nullptr;};
        void deletePrometheusClusterRegion() { this->prometheusClusterRegion_ = nullptr;};
        inline string getPrometheusClusterRegion() const { DARABONBA_PTR_GET_DEFAULT(prometheusClusterRegion_, "") };
        inline CustomPrometheusSetting& setPrometheusClusterRegion(string prometheusClusterRegion) { DARABONBA_PTR_SET_VALUE(prometheusClusterRegion_, prometheusClusterRegion) };


        // prometheusLabels Field Functions 
        bool hasPrometheusLabels() const { return this->prometheusLabels_ != nullptr;};
        void deletePrometheusLabels() { this->prometheusLabels_ = nullptr;};
        inline const map<string, string> & getPrometheusLabels() const { DARABONBA_PTR_GET_CONST(prometheusLabels_, map<string, string>) };
        inline map<string, string> getPrometheusLabels() { DARABONBA_PTR_GET(prometheusLabels_, map<string, string>) };
        inline CustomPrometheusSetting& setPrometheusLabels(const map<string, string> & prometheusLabels) { DARABONBA_PTR_SET_VALUE(prometheusLabels_, prometheusLabels) };
        inline CustomPrometheusSetting& setPrometheusLabels(map<string, string> && prometheusLabels) { DARABONBA_PTR_SET_RVALUE(prometheusLabels_, prometheusLabels) };


      protected:
        // A reserved parameter.
        shared_ptr<string> prometheusClusterId_ {};
        // A reserved parameter.
        shared_ptr<string> prometheusClusterRegion_ {};
        // A reserved parameter.
        shared_ptr<map<string, string>> prometheusLabels_ {};
      };

      class CustomHost : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomHost& obj) { 
          DARABONBA_PTR_TO_JSON(Hosts, hosts_);
          DARABONBA_PTR_TO_JSON(SelectType, selectType_);
        };
        friend void from_json(const Darabonba::Json& j, CustomHost& obj) { 
          DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
          DARABONBA_PTR_FROM_JSON(SelectType, selectType_);
        };
        CustomHost() = default ;
        CustomHost(const CustomHost &) = default ;
        CustomHost(CustomHost &&) = default ;
        CustomHost(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomHost() = default ;
        CustomHost& operator=(const CustomHost &) = default ;
        CustomHost& operator=(CustomHost &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Hosts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Hosts& obj) { 
            DARABONBA_PTR_TO_JSON(Domain, domain_);
            DARABONBA_PTR_TO_JSON(IpType, ipType_);
            DARABONBA_PTR_TO_JSON(Ips, ips_);
          };
          friend void from_json(const Darabonba::Json& j, Hosts& obj) { 
            DARABONBA_PTR_FROM_JSON(Domain, domain_);
            DARABONBA_PTR_FROM_JSON(IpType, ipType_);
            DARABONBA_PTR_FROM_JSON(Ips, ips_);
          };
          Hosts() = default ;
          Hosts(const Hosts &) = default ;
          Hosts(Hosts &&) = default ;
          Hosts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Hosts() = default ;
          Hosts& operator=(const Hosts &) = default ;
          Hosts& operator=(Hosts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->domain_ == nullptr
        && this->ipType_ == nullptr && this->ips_ == nullptr; };
          // domain Field Functions 
          bool hasDomain() const { return this->domain_ != nullptr;};
          void deleteDomain() { this->domain_ = nullptr;};
          inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
          inline Hosts& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


          // ipType Field Functions 
          bool hasIpType() const { return this->ipType_ != nullptr;};
          void deleteIpType() { this->ipType_ = nullptr;};
          inline int32_t getIpType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, 0) };
          inline Hosts& setIpType(int32_t ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


          // ips Field Functions 
          bool hasIps() const { return this->ips_ != nullptr;};
          void deleteIps() { this->ips_ = nullptr;};
          inline const vector<string> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
          inline vector<string> getIps() { DARABONBA_PTR_GET(ips_, vector<string>) };
          inline Hosts& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
          inline Hosts& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


        protected:
          // The domain name.
          // 
          // This parameter is required.
          shared_ptr<string> domain_ {};
          // The IP version. Valid values:
          // 
          // *   0: A version is automatically selected.
          // *   1: IPv4.
          // *   2: IPv6.
          // 
          // This parameter is required.
          shared_ptr<int32_t> ipType_ {};
          // The list of IP addresses.
          // 
          // This parameter is required.
          shared_ptr<vector<string>> ips_ {};
        };

        virtual bool empty() const override { return this->hosts_ == nullptr
        && this->selectType_ == nullptr; };
        // hosts Field Functions 
        bool hasHosts() const { return this->hosts_ != nullptr;};
        void deleteHosts() { this->hosts_ = nullptr;};
        inline const vector<CustomHost::Hosts> & getHosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<CustomHost::Hosts>) };
        inline vector<CustomHost::Hosts> getHosts() { DARABONBA_PTR_GET(hosts_, vector<CustomHost::Hosts>) };
        inline CustomHost& setHosts(const vector<CustomHost::Hosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
        inline CustomHost& setHosts(vector<CustomHost::Hosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


        // selectType Field Functions 
        bool hasSelectType() const { return this->selectType_ != nullptr;};
        void deleteSelectType() { this->selectType_ = nullptr;};
        inline int32_t getSelectType() const { DARABONBA_PTR_GET_DEFAULT(selectType_, 0) };
        inline CustomHost& setSelectType(int32_t selectType) { DARABONBA_PTR_SET_VALUE(selectType_, selectType) };


      protected:
        // The list of hosts.
        // 
        // This parameter is required.
        shared_ptr<vector<CustomHost::Hosts>> hosts_ {};
        // The selection mode. Valid values:
        // 
        // *   0: random
        // *   1: polling
        // 
        // This parameter is required.
        shared_ptr<int32_t> selectType_ {};
      };

      virtual bool empty() const override { return this->customHost_ == nullptr
        && this->customPrometheusSetting_ == nullptr && this->customVPCSetting_ == nullptr && this->ipType_ == nullptr && this->isOpenTrace_ == nullptr && this->monitorSamples_ == nullptr
        && this->traceClientType_ == nullptr && this->xtraceRegion_ == nullptr; };
      // customHost Field Functions 
      bool hasCustomHost() const { return this->customHost_ != nullptr;};
      void deleteCustomHost() { this->customHost_ = nullptr;};
      inline const CommonSetting::CustomHost & getCustomHost() const { DARABONBA_PTR_GET_CONST(customHost_, CommonSetting::CustomHost) };
      inline CommonSetting::CustomHost getCustomHost() { DARABONBA_PTR_GET(customHost_, CommonSetting::CustomHost) };
      inline CommonSetting& setCustomHost(const CommonSetting::CustomHost & customHost) { DARABONBA_PTR_SET_VALUE(customHost_, customHost) };
      inline CommonSetting& setCustomHost(CommonSetting::CustomHost && customHost) { DARABONBA_PTR_SET_RVALUE(customHost_, customHost) };


      // customPrometheusSetting Field Functions 
      bool hasCustomPrometheusSetting() const { return this->customPrometheusSetting_ != nullptr;};
      void deleteCustomPrometheusSetting() { this->customPrometheusSetting_ = nullptr;};
      inline const CommonSetting::CustomPrometheusSetting & getCustomPrometheusSetting() const { DARABONBA_PTR_GET_CONST(customPrometheusSetting_, CommonSetting::CustomPrometheusSetting) };
      inline CommonSetting::CustomPrometheusSetting getCustomPrometheusSetting() { DARABONBA_PTR_GET(customPrometheusSetting_, CommonSetting::CustomPrometheusSetting) };
      inline CommonSetting& setCustomPrometheusSetting(const CommonSetting::CustomPrometheusSetting & customPrometheusSetting) { DARABONBA_PTR_SET_VALUE(customPrometheusSetting_, customPrometheusSetting) };
      inline CommonSetting& setCustomPrometheusSetting(CommonSetting::CustomPrometheusSetting && customPrometheusSetting) { DARABONBA_PTR_SET_RVALUE(customPrometheusSetting_, customPrometheusSetting) };


      // customVPCSetting Field Functions 
      bool hasCustomVPCSetting() const { return this->customVPCSetting_ != nullptr;};
      void deleteCustomVPCSetting() { this->customVPCSetting_ = nullptr;};
      inline const CommonSetting::CustomVPCSetting & getCustomVPCSetting() const { DARABONBA_PTR_GET_CONST(customVPCSetting_, CommonSetting::CustomVPCSetting) };
      inline CommonSetting::CustomVPCSetting getCustomVPCSetting() { DARABONBA_PTR_GET(customVPCSetting_, CommonSetting::CustomVPCSetting) };
      inline CommonSetting& setCustomVPCSetting(const CommonSetting::CustomVPCSetting & customVPCSetting) { DARABONBA_PTR_SET_VALUE(customVPCSetting_, customVPCSetting) };
      inline CommonSetting& setCustomVPCSetting(CommonSetting::CustomVPCSetting && customVPCSetting) { DARABONBA_PTR_SET_RVALUE(customVPCSetting_, customVPCSetting) };


      // ipType Field Functions 
      bool hasIpType() const { return this->ipType_ != nullptr;};
      void deleteIpType() { this->ipType_ = nullptr;};
      inline int32_t getIpType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, 0) };
      inline CommonSetting& setIpType(int32_t ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


      // isOpenTrace Field Functions 
      bool hasIsOpenTrace() const { return this->isOpenTrace_ != nullptr;};
      void deleteIsOpenTrace() { this->isOpenTrace_ = nullptr;};
      inline bool getIsOpenTrace() const { DARABONBA_PTR_GET_DEFAULT(isOpenTrace_, false) };
      inline CommonSetting& setIsOpenTrace(bool isOpenTrace) { DARABONBA_PTR_SET_VALUE(isOpenTrace_, isOpenTrace) };


      // monitorSamples Field Functions 
      bool hasMonitorSamples() const { return this->monitorSamples_ != nullptr;};
      void deleteMonitorSamples() { this->monitorSamples_ = nullptr;};
      inline int32_t getMonitorSamples() const { DARABONBA_PTR_GET_DEFAULT(monitorSamples_, 0) };
      inline CommonSetting& setMonitorSamples(int32_t monitorSamples) { DARABONBA_PTR_SET_VALUE(monitorSamples_, monitorSamples) };


      // traceClientType Field Functions 
      bool hasTraceClientType() const { return this->traceClientType_ != nullptr;};
      void deleteTraceClientType() { this->traceClientType_ = nullptr;};
      inline int32_t getTraceClientType() const { DARABONBA_PTR_GET_DEFAULT(traceClientType_, 0) };
      inline CommonSetting& setTraceClientType(int32_t traceClientType) { DARABONBA_PTR_SET_VALUE(traceClientType_, traceClientType) };


      // xtraceRegion Field Functions 
      bool hasXtraceRegion() const { return this->xtraceRegion_ != nullptr;};
      void deleteXtraceRegion() { this->xtraceRegion_ = nullptr;};
      inline string getXtraceRegion() const { DARABONBA_PTR_GET_DEFAULT(xtraceRegion_, "") };
      inline CommonSetting& setXtraceRegion(string xtraceRegion) { DARABONBA_PTR_SET_VALUE(xtraceRegion_, xtraceRegion) };


    protected:
      // The custom host settings.
      shared_ptr<CommonSetting::CustomHost> customHost_ {};
      // The reserved parameters.
      shared_ptr<CommonSetting::CustomPrometheusSetting> customPrometheusSetting_ {};
      // The information about the virtual private cloud (VPC). If the destination URL is an Alibaba Cloud internal endpoint, you need to configure a VPC.
      shared_ptr<CommonSetting::CustomVPCSetting> customVPCSetting_ {};
      // The IP version. Valid values:
      // 
      // *   0: A version is automatically selected.
      // *   1: IPv4.
      // *   2: IPv6.
      shared_ptr<int32_t> ipType_ {};
      // Specifies whether to enable tracing.
      shared_ptr<bool> isOpenTrace_ {};
      // Specifies whether to evenly distribute monitoring samples. Valid values:
      // 
      // *   0: no
      // *   1: yes
      shared_ptr<int32_t> monitorSamples_ {};
      // The type of the client for tracing. Valid values:
      // 
      // *   0: ARMS agent
      // *   1: OpenTelemetry
      // *   2: Jaeger
      shared_ptr<int32_t> traceClientType_ {};
      // The region to which trace data is reported.
      shared_ptr<string> xtraceRegion_ {};
    };

    class AvailableAssertions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableAssertions& obj) { 
        DARABONBA_PTR_TO_JSON(Expect, expect_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableAssertions& obj) { 
        DARABONBA_PTR_FROM_JSON(Expect, expect_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      AvailableAssertions() = default ;
      AvailableAssertions(const AvailableAssertions &) = default ;
      AvailableAssertions(AvailableAssertions &&) = default ;
      AvailableAssertions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvailableAssertions() = default ;
      AvailableAssertions& operator=(const AvailableAssertions &) = default ;
      AvailableAssertions& operator=(AvailableAssertions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->expect_ == nullptr
        && this->operator_ == nullptr && this->target_ == nullptr && this->type_ == nullptr; };
      // expect Field Functions 
      bool hasExpect() const { return this->expect_ != nullptr;};
      void deleteExpect() { this->expect_ = nullptr;};
      inline string getExpect() const { DARABONBA_PTR_GET_DEFAULT(expect_, "") };
      inline AvailableAssertions& setExpect(string expect) { DARABONBA_PTR_SET_VALUE(expect_, expect) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline AvailableAssertions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline AvailableAssertions& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AvailableAssertions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The expected value.
      // 
      // This parameter is required.
      shared_ptr<string> expect_ {};
      // The condition. gt: greater than. gte: greater than or equal to. lt: less than. lte: less than or equal to. eq: equal to. neq: not equal to. ctn: contain. nctn: does not contain. exist: exist. n_exist: does not exist. belong: belong to. n_belong: does not belong to. reg_match: regular expression.
      // 
      // This parameter is required.
      shared_ptr<string> operator_ {};
      // The check target. If you set the type parameter to HttpResCode, HttpResBody, or HttpResponseTime, you do not need to set the target parameter. If you set the type parameter to HttpResHead, you must specify the key in the header. If you set the type parameter to HttpResBodyJson, use jsonPath.
      shared_ptr<string> target_ {};
      // The assertion type. Valid values: HttpResCode, HttpResHead, HttpResBody, HttpResBodyJson, HttpResponseTime, IcmpPackLoss (packet loss rate), IcmpPackMaxLatency (maximum packet latency), IcmpPackAvgLatency (average packet latency), TraceRouteHops (number of hops), DnsARecord (A record), DnsCName (CNAME), websiteTTFB (time to first packet), websiteTTLB (time to last packet), websiteFST (first paint time), websiteFFST (first meaningful paint), websiteOnload (full loaded time). For more information, see the following description.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->availableAssertions_ == nullptr
        && this->commonSetting_ == nullptr && this->customPeriod_ == nullptr && this->frequency_ == nullptr && this->monitorCategory_ == nullptr && this->monitorConf_ == nullptr
        && this->monitors_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr
        && this->taskType_ == nullptr; };
    // availableAssertions Field Functions 
    bool hasAvailableAssertions() const { return this->availableAssertions_ != nullptr;};
    void deleteAvailableAssertions() { this->availableAssertions_ = nullptr;};
    inline const vector<CreateTimingSyntheticTaskRequest::AvailableAssertions> & getAvailableAssertions() const { DARABONBA_PTR_GET_CONST(availableAssertions_, vector<CreateTimingSyntheticTaskRequest::AvailableAssertions>) };
    inline vector<CreateTimingSyntheticTaskRequest::AvailableAssertions> getAvailableAssertions() { DARABONBA_PTR_GET(availableAssertions_, vector<CreateTimingSyntheticTaskRequest::AvailableAssertions>) };
    inline CreateTimingSyntheticTaskRequest& setAvailableAssertions(const vector<CreateTimingSyntheticTaskRequest::AvailableAssertions> & availableAssertions) { DARABONBA_PTR_SET_VALUE(availableAssertions_, availableAssertions) };
    inline CreateTimingSyntheticTaskRequest& setAvailableAssertions(vector<CreateTimingSyntheticTaskRequest::AvailableAssertions> && availableAssertions) { DARABONBA_PTR_SET_RVALUE(availableAssertions_, availableAssertions) };


    // commonSetting Field Functions 
    bool hasCommonSetting() const { return this->commonSetting_ != nullptr;};
    void deleteCommonSetting() { this->commonSetting_ = nullptr;};
    inline const CreateTimingSyntheticTaskRequest::CommonSetting & getCommonSetting() const { DARABONBA_PTR_GET_CONST(commonSetting_, CreateTimingSyntheticTaskRequest::CommonSetting) };
    inline CreateTimingSyntheticTaskRequest::CommonSetting getCommonSetting() { DARABONBA_PTR_GET(commonSetting_, CreateTimingSyntheticTaskRequest::CommonSetting) };
    inline CreateTimingSyntheticTaskRequest& setCommonSetting(const CreateTimingSyntheticTaskRequest::CommonSetting & commonSetting) { DARABONBA_PTR_SET_VALUE(commonSetting_, commonSetting) };
    inline CreateTimingSyntheticTaskRequest& setCommonSetting(CreateTimingSyntheticTaskRequest::CommonSetting && commonSetting) { DARABONBA_PTR_SET_RVALUE(commonSetting_, commonSetting) };


    // customPeriod Field Functions 
    bool hasCustomPeriod() const { return this->customPeriod_ != nullptr;};
    void deleteCustomPeriod() { this->customPeriod_ = nullptr;};
    inline const CreateTimingSyntheticTaskRequest::CustomPeriod & getCustomPeriod() const { DARABONBA_PTR_GET_CONST(customPeriod_, CreateTimingSyntheticTaskRequest::CustomPeriod) };
    inline CreateTimingSyntheticTaskRequest::CustomPeriod getCustomPeriod() { DARABONBA_PTR_GET(customPeriod_, CreateTimingSyntheticTaskRequest::CustomPeriod) };
    inline CreateTimingSyntheticTaskRequest& setCustomPeriod(const CreateTimingSyntheticTaskRequest::CustomPeriod & customPeriod) { DARABONBA_PTR_SET_VALUE(customPeriod_, customPeriod) };
    inline CreateTimingSyntheticTaskRequest& setCustomPeriod(CreateTimingSyntheticTaskRequest::CustomPeriod && customPeriod) { DARABONBA_PTR_SET_RVALUE(customPeriod_, customPeriod) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline CreateTimingSyntheticTaskRequest& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // monitorCategory Field Functions 
    bool hasMonitorCategory() const { return this->monitorCategory_ != nullptr;};
    void deleteMonitorCategory() { this->monitorCategory_ = nullptr;};
    inline int32_t getMonitorCategory() const { DARABONBA_PTR_GET_DEFAULT(monitorCategory_, 0) };
    inline CreateTimingSyntheticTaskRequest& setMonitorCategory(int32_t monitorCategory) { DARABONBA_PTR_SET_VALUE(monitorCategory_, monitorCategory) };


    // monitorConf Field Functions 
    bool hasMonitorConf() const { return this->monitorConf_ != nullptr;};
    void deleteMonitorConf() { this->monitorConf_ = nullptr;};
    inline const CreateTimingSyntheticTaskRequest::MonitorConf & getMonitorConf() const { DARABONBA_PTR_GET_CONST(monitorConf_, CreateTimingSyntheticTaskRequest::MonitorConf) };
    inline CreateTimingSyntheticTaskRequest::MonitorConf getMonitorConf() { DARABONBA_PTR_GET(monitorConf_, CreateTimingSyntheticTaskRequest::MonitorConf) };
    inline CreateTimingSyntheticTaskRequest& setMonitorConf(const CreateTimingSyntheticTaskRequest::MonitorConf & monitorConf) { DARABONBA_PTR_SET_VALUE(monitorConf_, monitorConf) };
    inline CreateTimingSyntheticTaskRequest& setMonitorConf(CreateTimingSyntheticTaskRequest::MonitorConf && monitorConf) { DARABONBA_PTR_SET_RVALUE(monitorConf_, monitorConf) };


    // monitors Field Functions 
    bool hasMonitors() const { return this->monitors_ != nullptr;};
    void deleteMonitors() { this->monitors_ = nullptr;};
    inline const vector<CreateTimingSyntheticTaskRequest::Monitors> & getMonitors() const { DARABONBA_PTR_GET_CONST(monitors_, vector<CreateTimingSyntheticTaskRequest::Monitors>) };
    inline vector<CreateTimingSyntheticTaskRequest::Monitors> getMonitors() { DARABONBA_PTR_GET(monitors_, vector<CreateTimingSyntheticTaskRequest::Monitors>) };
    inline CreateTimingSyntheticTaskRequest& setMonitors(const vector<CreateTimingSyntheticTaskRequest::Monitors> & monitors) { DARABONBA_PTR_SET_VALUE(monitors_, monitors) };
    inline CreateTimingSyntheticTaskRequest& setMonitors(vector<CreateTimingSyntheticTaskRequest::Monitors> && monitors) { DARABONBA_PTR_SET_RVALUE(monitors_, monitors) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTimingSyntheticTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTimingSyntheticTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateTimingSyntheticTaskRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateTimingSyntheticTaskRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateTimingSyntheticTaskRequest::Tags>) };
    inline vector<CreateTimingSyntheticTaskRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateTimingSyntheticTaskRequest::Tags>) };
    inline CreateTimingSyntheticTaskRequest& setTags(const vector<CreateTimingSyntheticTaskRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateTimingSyntheticTaskRequest& setTags(vector<CreateTimingSyntheticTaskRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline CreateTimingSyntheticTaskRequest& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The list of assertions.
    shared_ptr<vector<CreateTimingSyntheticTaskRequest::AvailableAssertions>> availableAssertions_ {};
    // The general settings.
    shared_ptr<CreateTimingSyntheticTaskRequest::CommonSetting> commonSetting_ {};
    // The general settings.
    shared_ptr<CreateTimingSyntheticTaskRequest::CustomPeriod> customPeriod_ {};
    // The detection frequency. Valid values: 1m, 5m, 10m, 15m, 20m, 30m, 1h, 2h, 3h, 4h, 6h, 8h, 12h, and 24h.
    // 
    // This parameter is required.
    shared_ptr<string> frequency_ {};
    // The detection point type. Valid values:
    // 
    // - 1: PC
    // - 2: mobile device
    // 
    // This parameter is required.
    shared_ptr<int32_t> monitorCategory_ {};
    // The monitoring configurations.
    // 
    // This parameter is required.
    shared_ptr<CreateTimingSyntheticTaskRequest::MonitorConf> monitorConf_ {};
    // The list of detection points.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateTimingSyntheticTaskRequest::Monitors>> monitors_ {};
    // The name of the task.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The parameter is optional.
    shared_ptr<string> resourceGroupId_ {};
    // The tag list.
    shared_ptr<vector<CreateTimingSyntheticTaskRequest::Tags>> tags_ {};
    // The type of the task. Valid values:
    // 
    // 1: ICMP. 2: TCP. 3: DNS. 4: HTTP. 5: website speed measurement. 6: file download.
    // 
    // This parameter is required.
    shared_ptr<int32_t> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
