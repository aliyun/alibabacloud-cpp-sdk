// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BasePath, basePath_);
      DARABONBA_PTR_TO_JSON(BillingStatus, billingStatus_);
      DARABONBA_PTR_TO_JSON(CloudMarketCommodity, cloudMarketCommodity_);
      DARABONBA_PTR_TO_JSON(CmsMonitorGroup, cmsMonitorGroup_);
      DARABONBA_PTR_TO_JSON(CompatibleFlags, compatibleFlags_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(CustomAppCodeConfig, customAppCodeConfig_);
      DARABONBA_PTR_TO_JSON(CustomDomains, customDomains_);
      DARABONBA_PTR_TO_JSON(CustomTraceConfig, customTraceConfig_);
      DARABONBA_PTR_TO_JSON(CustomerConfigs, customerConfigs_);
      DARABONBA_PTR_TO_JSON(DedicatedInstanceType, dedicatedInstanceType_);
      DARABONBA_PTR_TO_JSON(DefaultDomain, defaultDomain_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableInnerDomain, disableInnerDomain_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HttpsPolicy, httpsPolicy_);
      DARABONBA_PTR_TO_JSON(IllegalStatus, illegalStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Ipv6Status, ipv6Status_);
      DARABONBA_PTR_TO_JSON(MigrationError, migrationError_);
      DARABONBA_PTR_TO_JSON(MigrationStatus, migrationStatus_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(PassthroughHeaders, passthroughHeaders_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StageItems, stageItems_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_TO_JSON(TrafficLimit, trafficLimit_);
      DARABONBA_PTR_TO_JSON(UserLogConfig, userLogConfig_);
      DARABONBA_PTR_TO_JSON(VpcDomain, vpcDomain_);
      DARABONBA_PTR_TO_JSON(VpcSlbIntranetDomain, vpcSlbIntranetDomain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BasePath, basePath_);
      DARABONBA_PTR_FROM_JSON(BillingStatus, billingStatus_);
      DARABONBA_PTR_FROM_JSON(CloudMarketCommodity, cloudMarketCommodity_);
      DARABONBA_PTR_FROM_JSON(CmsMonitorGroup, cmsMonitorGroup_);
      DARABONBA_PTR_FROM_JSON(CompatibleFlags, compatibleFlags_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(CustomAppCodeConfig, customAppCodeConfig_);
      DARABONBA_PTR_FROM_JSON(CustomDomains, customDomains_);
      DARABONBA_PTR_FROM_JSON(CustomTraceConfig, customTraceConfig_);
      DARABONBA_PTR_FROM_JSON(CustomerConfigs, customerConfigs_);
      DARABONBA_PTR_FROM_JSON(DedicatedInstanceType, dedicatedInstanceType_);
      DARABONBA_PTR_FROM_JSON(DefaultDomain, defaultDomain_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableInnerDomain, disableInnerDomain_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HttpsPolicy, httpsPolicy_);
      DARABONBA_PTR_FROM_JSON(IllegalStatus, illegalStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Ipv6Status, ipv6Status_);
      DARABONBA_PTR_FROM_JSON(MigrationError, migrationError_);
      DARABONBA_PTR_FROM_JSON(MigrationStatus, migrationStatus_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(PassthroughHeaders, passthroughHeaders_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StageItems, stageItems_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_FROM_JSON(TrafficLimit, trafficLimit_);
      DARABONBA_PTR_FROM_JSON(UserLogConfig, userLogConfig_);
      DARABONBA_PTR_FROM_JSON(VpcDomain, vpcDomain_);
      DARABONBA_PTR_FROM_JSON(VpcSlbIntranetDomain, vpcSlbIntranetDomain_);
    };
    DescribeApiGroupResponseBody() = default ;
    DescribeApiGroupResponseBody(const DescribeApiGroupResponseBody &) = default ;
    DescribeApiGroupResponseBody(DescribeApiGroupResponseBody &&) = default ;
    DescribeApiGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiGroupResponseBody() = default ;
    DescribeApiGroupResponseBody& operator=(const DescribeApiGroupResponseBody &) = default ;
    DescribeApiGroupResponseBody& operator=(DescribeApiGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StageItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StageItems& obj) { 
        DARABONBA_PTR_TO_JSON(StageInfo, stageInfo_);
      };
      friend void from_json(const Darabonba::Json& j, StageItems& obj) { 
        DARABONBA_PTR_FROM_JSON(StageInfo, stageInfo_);
      };
      StageItems() = default ;
      StageItems(const StageItems &) = default ;
      StageItems(StageItems &&) = default ;
      StageItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StageItems() = default ;
      StageItems& operator=(const StageItems &) = default ;
      StageItems& operator=(StageItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(StageId, stageId_);
          DARABONBA_PTR_TO_JSON(StageName, stageName_);
        };
        friend void from_json(const Darabonba::Json& j, StageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(StageId, stageId_);
          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
        };
        StageInfo() = default ;
        StageInfo(const StageInfo &) = default ;
        StageInfo(StageInfo &&) = default ;
        StageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StageInfo() = default ;
        StageInfo& operator=(const StageInfo &) = default ;
        StageInfo& operator=(StageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->stageId_ == nullptr && this->stageName_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline StageInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // stageId Field Functions 
        bool hasStageId() const { return this->stageId_ != nullptr;};
        void deleteStageId() { this->stageId_ = nullptr;};
        inline string getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
        inline StageInfo& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline StageInfo& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


      protected:
        // The environment description.
        shared_ptr<string> description_ {};
        // The environment ID.
        shared_ptr<string> stageId_ {};
        // The environment name.
        shared_ptr<string> stageName_ {};
      };

      virtual bool empty() const override { return this->stageInfo_ == nullptr; };
      // stageInfo Field Functions 
      bool hasStageInfo() const { return this->stageInfo_ != nullptr;};
      void deleteStageInfo() { this->stageInfo_ = nullptr;};
      inline const vector<StageItems::StageInfo> & getStageInfo() const { DARABONBA_PTR_GET_CONST(stageInfo_, vector<StageItems::StageInfo>) };
      inline vector<StageItems::StageInfo> getStageInfo() { DARABONBA_PTR_GET(stageInfo_, vector<StageItems::StageInfo>) };
      inline StageItems& setStageInfo(const vector<StageItems::StageInfo> & stageInfo) { DARABONBA_PTR_SET_VALUE(stageInfo_, stageInfo) };
      inline StageItems& setStageInfo(vector<StageItems::StageInfo> && stageInfo) { DARABONBA_PTR_SET_RVALUE(stageInfo_, stageInfo) };


    protected:
      shared_ptr<vector<StageItems::StageInfo>> stageInfo_ {};
    };

    class CustomDomains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomDomains& obj) { 
        DARABONBA_PTR_TO_JSON(DomainItem, domainItem_);
      };
      friend void from_json(const Darabonba::Json& j, CustomDomains& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainItem, domainItem_);
      };
      CustomDomains() = default ;
      CustomDomains(const CustomDomains &) = default ;
      CustomDomains(CustomDomains &&) = default ;
      CustomDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomDomains() = default ;
      CustomDomains& operator=(const CustomDomains &) = default ;
      CustomDomains& operator=(CustomDomains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainItem& obj) { 
          DARABONBA_PTR_TO_JSON(BindStageAlias, bindStageAlias_);
          DARABONBA_PTR_TO_JSON(BindStageName, bindStageName_);
          DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
          DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
          DARABONBA_PTR_TO_JSON(CertificateValidEnd, certificateValidEnd_);
          DARABONBA_PTR_TO_JSON(CertificateValidStart, certificateValidStart_);
          DARABONBA_PTR_TO_JSON(ClientCertSDnPassThrough, clientCertSDnPassThrough_);
          DARABONBA_PTR_TO_JSON(CustomDomainType, customDomainType_);
          DARABONBA_PTR_TO_JSON(DomainBindingStatus, domainBindingStatus_);
          DARABONBA_PTR_TO_JSON(DomainCNAMEStatus, domainCNAMEStatus_);
          DARABONBA_PTR_TO_JSON(DomainLegalStatus, domainLegalStatus_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(DomainRemark, domainRemark_);
          DARABONBA_PTR_TO_JSON(DomainWebSocketStatus, domainWebSocketStatus_);
          DARABONBA_PTR_TO_JSON(IsHttpRedirectToHttps, isHttpRedirectToHttps_);
          DARABONBA_PTR_TO_JSON(SslOcspCacheEnable, sslOcspCacheEnable_);
          DARABONBA_PTR_TO_JSON(SslOcspEnable, sslOcspEnable_);
          DARABONBA_PTR_TO_JSON(SslVerifyDepth, sslVerifyDepth_);
          DARABONBA_PTR_TO_JSON(WildcardDomainPatterns, wildcardDomainPatterns_);
        };
        friend void from_json(const Darabonba::Json& j, DomainItem& obj) { 
          DARABONBA_PTR_FROM_JSON(BindStageAlias, bindStageAlias_);
          DARABONBA_PTR_FROM_JSON(BindStageName, bindStageName_);
          DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
          DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
          DARABONBA_PTR_FROM_JSON(CertificateValidEnd, certificateValidEnd_);
          DARABONBA_PTR_FROM_JSON(CertificateValidStart, certificateValidStart_);
          DARABONBA_PTR_FROM_JSON(ClientCertSDnPassThrough, clientCertSDnPassThrough_);
          DARABONBA_PTR_FROM_JSON(CustomDomainType, customDomainType_);
          DARABONBA_PTR_FROM_JSON(DomainBindingStatus, domainBindingStatus_);
          DARABONBA_PTR_FROM_JSON(DomainCNAMEStatus, domainCNAMEStatus_);
          DARABONBA_PTR_FROM_JSON(DomainLegalStatus, domainLegalStatus_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(DomainRemark, domainRemark_);
          DARABONBA_PTR_FROM_JSON(DomainWebSocketStatus, domainWebSocketStatus_);
          DARABONBA_PTR_FROM_JSON(IsHttpRedirectToHttps, isHttpRedirectToHttps_);
          DARABONBA_PTR_FROM_JSON(SslOcspCacheEnable, sslOcspCacheEnable_);
          DARABONBA_PTR_FROM_JSON(SslOcspEnable, sslOcspEnable_);
          DARABONBA_PTR_FROM_JSON(SslVerifyDepth, sslVerifyDepth_);
          DARABONBA_PTR_FROM_JSON(WildcardDomainPatterns, wildcardDomainPatterns_);
        };
        DomainItem() = default ;
        DomainItem(const DomainItem &) = default ;
        DomainItem(DomainItem &&) = default ;
        DomainItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainItem() = default ;
        DomainItem& operator=(const DomainItem &) = default ;
        DomainItem& operator=(DomainItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindStageAlias_ == nullptr
        && this->bindStageName_ == nullptr && this->certificateId_ == nullptr && this->certificateName_ == nullptr && this->certificateValidEnd_ == nullptr && this->certificateValidStart_ == nullptr
        && this->clientCertSDnPassThrough_ == nullptr && this->customDomainType_ == nullptr && this->domainBindingStatus_ == nullptr && this->domainCNAMEStatus_ == nullptr && this->domainLegalStatus_ == nullptr
        && this->domainName_ == nullptr && this->domainRemark_ == nullptr && this->domainWebSocketStatus_ == nullptr && this->isHttpRedirectToHttps_ == nullptr && this->sslOcspCacheEnable_ == nullptr
        && this->sslOcspEnable_ == nullptr && this->sslVerifyDepth_ == nullptr && this->wildcardDomainPatterns_ == nullptr; };
        // bindStageAlias Field Functions 
        bool hasBindStageAlias() const { return this->bindStageAlias_ != nullptr;};
        void deleteBindStageAlias() { this->bindStageAlias_ = nullptr;};
        inline string getBindStageAlias() const { DARABONBA_PTR_GET_DEFAULT(bindStageAlias_, "") };
        inline DomainItem& setBindStageAlias(string bindStageAlias) { DARABONBA_PTR_SET_VALUE(bindStageAlias_, bindStageAlias) };


        // bindStageName Field Functions 
        bool hasBindStageName() const { return this->bindStageName_ != nullptr;};
        void deleteBindStageName() { this->bindStageName_ = nullptr;};
        inline string getBindStageName() const { DARABONBA_PTR_GET_DEFAULT(bindStageName_, "") };
        inline DomainItem& setBindStageName(string bindStageName) { DARABONBA_PTR_SET_VALUE(bindStageName_, bindStageName) };


        // certificateId Field Functions 
        bool hasCertificateId() const { return this->certificateId_ != nullptr;};
        void deleteCertificateId() { this->certificateId_ = nullptr;};
        inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
        inline DomainItem& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


        // certificateName Field Functions 
        bool hasCertificateName() const { return this->certificateName_ != nullptr;};
        void deleteCertificateName() { this->certificateName_ = nullptr;};
        inline string getCertificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
        inline DomainItem& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


        // certificateValidEnd Field Functions 
        bool hasCertificateValidEnd() const { return this->certificateValidEnd_ != nullptr;};
        void deleteCertificateValidEnd() { this->certificateValidEnd_ = nullptr;};
        inline int64_t getCertificateValidEnd() const { DARABONBA_PTR_GET_DEFAULT(certificateValidEnd_, 0L) };
        inline DomainItem& setCertificateValidEnd(int64_t certificateValidEnd) { DARABONBA_PTR_SET_VALUE(certificateValidEnd_, certificateValidEnd) };


        // certificateValidStart Field Functions 
        bool hasCertificateValidStart() const { return this->certificateValidStart_ != nullptr;};
        void deleteCertificateValidStart() { this->certificateValidStart_ = nullptr;};
        inline int64_t getCertificateValidStart() const { DARABONBA_PTR_GET_DEFAULT(certificateValidStart_, 0L) };
        inline DomainItem& setCertificateValidStart(int64_t certificateValidStart) { DARABONBA_PTR_SET_VALUE(certificateValidStart_, certificateValidStart) };


        // clientCertSDnPassThrough Field Functions 
        bool hasClientCertSDnPassThrough() const { return this->clientCertSDnPassThrough_ != nullptr;};
        void deleteClientCertSDnPassThrough() { this->clientCertSDnPassThrough_ = nullptr;};
        inline bool getClientCertSDnPassThrough() const { DARABONBA_PTR_GET_DEFAULT(clientCertSDnPassThrough_, false) };
        inline DomainItem& setClientCertSDnPassThrough(bool clientCertSDnPassThrough) { DARABONBA_PTR_SET_VALUE(clientCertSDnPassThrough_, clientCertSDnPassThrough) };


        // customDomainType Field Functions 
        bool hasCustomDomainType() const { return this->customDomainType_ != nullptr;};
        void deleteCustomDomainType() { this->customDomainType_ = nullptr;};
        inline string getCustomDomainType() const { DARABONBA_PTR_GET_DEFAULT(customDomainType_, "") };
        inline DomainItem& setCustomDomainType(string customDomainType) { DARABONBA_PTR_SET_VALUE(customDomainType_, customDomainType) };


        // domainBindingStatus Field Functions 
        bool hasDomainBindingStatus() const { return this->domainBindingStatus_ != nullptr;};
        void deleteDomainBindingStatus() { this->domainBindingStatus_ = nullptr;};
        inline string getDomainBindingStatus() const { DARABONBA_PTR_GET_DEFAULT(domainBindingStatus_, "") };
        inline DomainItem& setDomainBindingStatus(string domainBindingStatus) { DARABONBA_PTR_SET_VALUE(domainBindingStatus_, domainBindingStatus) };


        // domainCNAMEStatus Field Functions 
        bool hasDomainCNAMEStatus() const { return this->domainCNAMEStatus_ != nullptr;};
        void deleteDomainCNAMEStatus() { this->domainCNAMEStatus_ = nullptr;};
        inline string getDomainCNAMEStatus() const { DARABONBA_PTR_GET_DEFAULT(domainCNAMEStatus_, "") };
        inline DomainItem& setDomainCNAMEStatus(string domainCNAMEStatus) { DARABONBA_PTR_SET_VALUE(domainCNAMEStatus_, domainCNAMEStatus) };


        // domainLegalStatus Field Functions 
        bool hasDomainLegalStatus() const { return this->domainLegalStatus_ != nullptr;};
        void deleteDomainLegalStatus() { this->domainLegalStatus_ = nullptr;};
        inline string getDomainLegalStatus() const { DARABONBA_PTR_GET_DEFAULT(domainLegalStatus_, "") };
        inline DomainItem& setDomainLegalStatus(string domainLegalStatus) { DARABONBA_PTR_SET_VALUE(domainLegalStatus_, domainLegalStatus) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline DomainItem& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // domainRemark Field Functions 
        bool hasDomainRemark() const { return this->domainRemark_ != nullptr;};
        void deleteDomainRemark() { this->domainRemark_ = nullptr;};
        inline string getDomainRemark() const { DARABONBA_PTR_GET_DEFAULT(domainRemark_, "") };
        inline DomainItem& setDomainRemark(string domainRemark) { DARABONBA_PTR_SET_VALUE(domainRemark_, domainRemark) };


        // domainWebSocketStatus Field Functions 
        bool hasDomainWebSocketStatus() const { return this->domainWebSocketStatus_ != nullptr;};
        void deleteDomainWebSocketStatus() { this->domainWebSocketStatus_ = nullptr;};
        inline string getDomainWebSocketStatus() const { DARABONBA_PTR_GET_DEFAULT(domainWebSocketStatus_, "") };
        inline DomainItem& setDomainWebSocketStatus(string domainWebSocketStatus) { DARABONBA_PTR_SET_VALUE(domainWebSocketStatus_, domainWebSocketStatus) };


        // isHttpRedirectToHttps Field Functions 
        bool hasIsHttpRedirectToHttps() const { return this->isHttpRedirectToHttps_ != nullptr;};
        void deleteIsHttpRedirectToHttps() { this->isHttpRedirectToHttps_ = nullptr;};
        inline bool getIsHttpRedirectToHttps() const { DARABONBA_PTR_GET_DEFAULT(isHttpRedirectToHttps_, false) };
        inline DomainItem& setIsHttpRedirectToHttps(bool isHttpRedirectToHttps) { DARABONBA_PTR_SET_VALUE(isHttpRedirectToHttps_, isHttpRedirectToHttps) };


        // sslOcspCacheEnable Field Functions 
        bool hasSslOcspCacheEnable() const { return this->sslOcspCacheEnable_ != nullptr;};
        void deleteSslOcspCacheEnable() { this->sslOcspCacheEnable_ = nullptr;};
        inline bool getSslOcspCacheEnable() const { DARABONBA_PTR_GET_DEFAULT(sslOcspCacheEnable_, false) };
        inline DomainItem& setSslOcspCacheEnable(bool sslOcspCacheEnable) { DARABONBA_PTR_SET_VALUE(sslOcspCacheEnable_, sslOcspCacheEnable) };


        // sslOcspEnable Field Functions 
        bool hasSslOcspEnable() const { return this->sslOcspEnable_ != nullptr;};
        void deleteSslOcspEnable() { this->sslOcspEnable_ = nullptr;};
        inline bool getSslOcspEnable() const { DARABONBA_PTR_GET_DEFAULT(sslOcspEnable_, false) };
        inline DomainItem& setSslOcspEnable(bool sslOcspEnable) { DARABONBA_PTR_SET_VALUE(sslOcspEnable_, sslOcspEnable) };


        // sslVerifyDepth Field Functions 
        bool hasSslVerifyDepth() const { return this->sslVerifyDepth_ != nullptr;};
        void deleteSslVerifyDepth() { this->sslVerifyDepth_ = nullptr;};
        inline int32_t getSslVerifyDepth() const { DARABONBA_PTR_GET_DEFAULT(sslVerifyDepth_, 0) };
        inline DomainItem& setSslVerifyDepth(int32_t sslVerifyDepth) { DARABONBA_PTR_SET_VALUE(sslVerifyDepth_, sslVerifyDepth) };


        // wildcardDomainPatterns Field Functions 
        bool hasWildcardDomainPatterns() const { return this->wildcardDomainPatterns_ != nullptr;};
        void deleteWildcardDomainPatterns() { this->wildcardDomainPatterns_ = nullptr;};
        inline string getWildcardDomainPatterns() const { DARABONBA_PTR_GET_DEFAULT(wildcardDomainPatterns_, "") };
        inline DomainItem& setWildcardDomainPatterns(string wildcardDomainPatterns) { DARABONBA_PTR_SET_VALUE(wildcardDomainPatterns_, wildcardDomainPatterns) };


      protected:
        // The alias of the associated environment.
        shared_ptr<string> bindStageAlias_ {};
        // The environment in which the associated API group runs.
        shared_ptr<string> bindStageName_ {};
        // The SSL certificate ID, which is automatically generated by the system.
        shared_ptr<string> certificateId_ {};
        // The name of the SSL certificate.
        shared_ptr<string> certificateName_ {};
        // The time when the certificate expires.
        shared_ptr<int64_t> certificateValidEnd_ {};
        // The time when the certificate takes effect.
        shared_ptr<int64_t> certificateValidStart_ {};
        shared_ptr<bool> clientCertSDnPassThrough_ {};
        // The type of the custom domain name.
        shared_ptr<string> customDomainType_ {};
        // The binding status of the custom domain name. Valid values:
        // 
        // *   **BINDING**: The domain name is bound.
        // *   **BOUND**: The domain name is not bound.
        shared_ptr<string> domainBindingStatus_ {};
        // The domain name resolution status. Valid values:
        // 
        // *   **RESOLVED**
        // *   **UNRESOLVED**
        shared_ptr<string> domainCNAMEStatus_ {};
        // The validity status of the domain name. Valid values:
        // 
        // *   **NORMAL**: The domain name is valid.
        // *   **ABNORMAL**: The domain name is invalid. This status affects API calls and needs to be rectified as soon as possible.
        shared_ptr<string> domainLegalStatus_ {};
        // The domain name.
        shared_ptr<string> domainName_ {};
        // Remarks about the domain name, such as the cause of an exception.
        shared_ptr<string> domainRemark_ {};
        // The status of the domain that uses the WebSocket feature.
        shared_ptr<string> domainWebSocketStatus_ {};
        // Indicates whether to redirect HTTP requests to HTTPS.
        shared_ptr<bool> isHttpRedirectToHttps_ {};
        shared_ptr<bool> sslOcspCacheEnable_ {};
        shared_ptr<bool> sslOcspEnable_ {};
        shared_ptr<int32_t> sslVerifyDepth_ {};
        // The wildcard domain name mode.
        shared_ptr<string> wildcardDomainPatterns_ {};
      };

      virtual bool empty() const override { return this->domainItem_ == nullptr; };
      // domainItem Field Functions 
      bool hasDomainItem() const { return this->domainItem_ != nullptr;};
      void deleteDomainItem() { this->domainItem_ = nullptr;};
      inline const vector<CustomDomains::DomainItem> & getDomainItem() const { DARABONBA_PTR_GET_CONST(domainItem_, vector<CustomDomains::DomainItem>) };
      inline vector<CustomDomains::DomainItem> getDomainItem() { DARABONBA_PTR_GET(domainItem_, vector<CustomDomains::DomainItem>) };
      inline CustomDomains& setDomainItem(const vector<CustomDomains::DomainItem> & domainItem) { DARABONBA_PTR_SET_VALUE(domainItem_, domainItem) };
      inline CustomDomains& setDomainItem(vector<CustomDomains::DomainItem> && domainItem) { DARABONBA_PTR_SET_RVALUE(domainItem_, domainItem) };


    protected:
      shared_ptr<vector<CustomDomains::DomainItem>> domainItem_ {};
    };

    virtual bool empty() const override { return this->basePath_ == nullptr
        && this->billingStatus_ == nullptr && this->cloudMarketCommodity_ == nullptr && this->cmsMonitorGroup_ == nullptr && this->compatibleFlags_ == nullptr && this->createdTime_ == nullptr
        && this->customAppCodeConfig_ == nullptr && this->customDomains_ == nullptr && this->customTraceConfig_ == nullptr && this->customerConfigs_ == nullptr && this->dedicatedInstanceType_ == nullptr
        && this->defaultDomain_ == nullptr && this->description_ == nullptr && this->disableInnerDomain_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr
        && this->httpsPolicy_ == nullptr && this->illegalStatus_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->ipv6Status_ == nullptr
        && this->migrationError_ == nullptr && this->migrationStatus_ == nullptr && this->modifiedTime_ == nullptr && this->passthroughHeaders_ == nullptr && this->regionId_ == nullptr
        && this->requestId_ == nullptr && this->stageItems_ == nullptr && this->status_ == nullptr && this->subDomain_ == nullptr && this->trafficLimit_ == nullptr
        && this->userLogConfig_ == nullptr && this->vpcDomain_ == nullptr && this->vpcSlbIntranetDomain_ == nullptr; };
    // basePath Field Functions 
    bool hasBasePath() const { return this->basePath_ != nullptr;};
    void deleteBasePath() { this->basePath_ = nullptr;};
    inline string getBasePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
    inline DescribeApiGroupResponseBody& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


    // billingStatus Field Functions 
    bool hasBillingStatus() const { return this->billingStatus_ != nullptr;};
    void deleteBillingStatus() { this->billingStatus_ = nullptr;};
    inline string getBillingStatus() const { DARABONBA_PTR_GET_DEFAULT(billingStatus_, "") };
    inline DescribeApiGroupResponseBody& setBillingStatus(string billingStatus) { DARABONBA_PTR_SET_VALUE(billingStatus_, billingStatus) };


    // cloudMarketCommodity Field Functions 
    bool hasCloudMarketCommodity() const { return this->cloudMarketCommodity_ != nullptr;};
    void deleteCloudMarketCommodity() { this->cloudMarketCommodity_ = nullptr;};
    inline bool getCloudMarketCommodity() const { DARABONBA_PTR_GET_DEFAULT(cloudMarketCommodity_, false) };
    inline DescribeApiGroupResponseBody& setCloudMarketCommodity(bool cloudMarketCommodity) { DARABONBA_PTR_SET_VALUE(cloudMarketCommodity_, cloudMarketCommodity) };


    // cmsMonitorGroup Field Functions 
    bool hasCmsMonitorGroup() const { return this->cmsMonitorGroup_ != nullptr;};
    void deleteCmsMonitorGroup() { this->cmsMonitorGroup_ = nullptr;};
    inline string getCmsMonitorGroup() const { DARABONBA_PTR_GET_DEFAULT(cmsMonitorGroup_, "") };
    inline DescribeApiGroupResponseBody& setCmsMonitorGroup(string cmsMonitorGroup) { DARABONBA_PTR_SET_VALUE(cmsMonitorGroup_, cmsMonitorGroup) };


    // compatibleFlags Field Functions 
    bool hasCompatibleFlags() const { return this->compatibleFlags_ != nullptr;};
    void deleteCompatibleFlags() { this->compatibleFlags_ = nullptr;};
    inline string getCompatibleFlags() const { DARABONBA_PTR_GET_DEFAULT(compatibleFlags_, "") };
    inline DescribeApiGroupResponseBody& setCompatibleFlags(string compatibleFlags) { DARABONBA_PTR_SET_VALUE(compatibleFlags_, compatibleFlags) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeApiGroupResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // customAppCodeConfig Field Functions 
    bool hasCustomAppCodeConfig() const { return this->customAppCodeConfig_ != nullptr;};
    void deleteCustomAppCodeConfig() { this->customAppCodeConfig_ = nullptr;};
    inline string getCustomAppCodeConfig() const { DARABONBA_PTR_GET_DEFAULT(customAppCodeConfig_, "") };
    inline DescribeApiGroupResponseBody& setCustomAppCodeConfig(string customAppCodeConfig) { DARABONBA_PTR_SET_VALUE(customAppCodeConfig_, customAppCodeConfig) };


    // customDomains Field Functions 
    bool hasCustomDomains() const { return this->customDomains_ != nullptr;};
    void deleteCustomDomains() { this->customDomains_ = nullptr;};
    inline const DescribeApiGroupResponseBody::CustomDomains & getCustomDomains() const { DARABONBA_PTR_GET_CONST(customDomains_, DescribeApiGroupResponseBody::CustomDomains) };
    inline DescribeApiGroupResponseBody::CustomDomains getCustomDomains() { DARABONBA_PTR_GET(customDomains_, DescribeApiGroupResponseBody::CustomDomains) };
    inline DescribeApiGroupResponseBody& setCustomDomains(const DescribeApiGroupResponseBody::CustomDomains & customDomains) { DARABONBA_PTR_SET_VALUE(customDomains_, customDomains) };
    inline DescribeApiGroupResponseBody& setCustomDomains(DescribeApiGroupResponseBody::CustomDomains && customDomains) { DARABONBA_PTR_SET_RVALUE(customDomains_, customDomains) };


    // customTraceConfig Field Functions 
    bool hasCustomTraceConfig() const { return this->customTraceConfig_ != nullptr;};
    void deleteCustomTraceConfig() { this->customTraceConfig_ = nullptr;};
    inline string getCustomTraceConfig() const { DARABONBA_PTR_GET_DEFAULT(customTraceConfig_, "") };
    inline DescribeApiGroupResponseBody& setCustomTraceConfig(string customTraceConfig) { DARABONBA_PTR_SET_VALUE(customTraceConfig_, customTraceConfig) };


    // customerConfigs Field Functions 
    bool hasCustomerConfigs() const { return this->customerConfigs_ != nullptr;};
    void deleteCustomerConfigs() { this->customerConfigs_ = nullptr;};
    inline string getCustomerConfigs() const { DARABONBA_PTR_GET_DEFAULT(customerConfigs_, "") };
    inline DescribeApiGroupResponseBody& setCustomerConfigs(string customerConfigs) { DARABONBA_PTR_SET_VALUE(customerConfigs_, customerConfigs) };


    // dedicatedInstanceType Field Functions 
    bool hasDedicatedInstanceType() const { return this->dedicatedInstanceType_ != nullptr;};
    void deleteDedicatedInstanceType() { this->dedicatedInstanceType_ = nullptr;};
    inline string getDedicatedInstanceType() const { DARABONBA_PTR_GET_DEFAULT(dedicatedInstanceType_, "") };
    inline DescribeApiGroupResponseBody& setDedicatedInstanceType(string dedicatedInstanceType) { DARABONBA_PTR_SET_VALUE(dedicatedInstanceType_, dedicatedInstanceType) };


    // defaultDomain Field Functions 
    bool hasDefaultDomain() const { return this->defaultDomain_ != nullptr;};
    void deleteDefaultDomain() { this->defaultDomain_ = nullptr;};
    inline string getDefaultDomain() const { DARABONBA_PTR_GET_DEFAULT(defaultDomain_, "") };
    inline DescribeApiGroupResponseBody& setDefaultDomain(string defaultDomain) { DARABONBA_PTR_SET_VALUE(defaultDomain_, defaultDomain) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApiGroupResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableInnerDomain Field Functions 
    bool hasDisableInnerDomain() const { return this->disableInnerDomain_ != nullptr;};
    void deleteDisableInnerDomain() { this->disableInnerDomain_ = nullptr;};
    inline bool getDisableInnerDomain() const { DARABONBA_PTR_GET_DEFAULT(disableInnerDomain_, false) };
    inline DescribeApiGroupResponseBody& setDisableInnerDomain(bool disableInnerDomain) { DARABONBA_PTR_SET_VALUE(disableInnerDomain_, disableInnerDomain) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApiGroupResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeApiGroupResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // httpsPolicy Field Functions 
    bool hasHttpsPolicy() const { return this->httpsPolicy_ != nullptr;};
    void deleteHttpsPolicy() { this->httpsPolicy_ = nullptr;};
    inline string getHttpsPolicy() const { DARABONBA_PTR_GET_DEFAULT(httpsPolicy_, "") };
    inline DescribeApiGroupResponseBody& setHttpsPolicy(string httpsPolicy) { DARABONBA_PTR_SET_VALUE(httpsPolicy_, httpsPolicy) };


    // illegalStatus Field Functions 
    bool hasIllegalStatus() const { return this->illegalStatus_ != nullptr;};
    void deleteIllegalStatus() { this->illegalStatus_ = nullptr;};
    inline string getIllegalStatus() const { DARABONBA_PTR_GET_DEFAULT(illegalStatus_, "") };
    inline DescribeApiGroupResponseBody& setIllegalStatus(string illegalStatus) { DARABONBA_PTR_SET_VALUE(illegalStatus_, illegalStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeApiGroupResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeApiGroupResponseBody& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ipv6Status Field Functions 
    bool hasIpv6Status() const { return this->ipv6Status_ != nullptr;};
    void deleteIpv6Status() { this->ipv6Status_ = nullptr;};
    inline string getIpv6Status() const { DARABONBA_PTR_GET_DEFAULT(ipv6Status_, "") };
    inline DescribeApiGroupResponseBody& setIpv6Status(string ipv6Status) { DARABONBA_PTR_SET_VALUE(ipv6Status_, ipv6Status) };


    // migrationError Field Functions 
    bool hasMigrationError() const { return this->migrationError_ != nullptr;};
    void deleteMigrationError() { this->migrationError_ = nullptr;};
    inline string getMigrationError() const { DARABONBA_PTR_GET_DEFAULT(migrationError_, "") };
    inline DescribeApiGroupResponseBody& setMigrationError(string migrationError) { DARABONBA_PTR_SET_VALUE(migrationError_, migrationError) };


    // migrationStatus Field Functions 
    bool hasMigrationStatus() const { return this->migrationStatus_ != nullptr;};
    void deleteMigrationStatus() { this->migrationStatus_ = nullptr;};
    inline string getMigrationStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationStatus_, "") };
    inline DescribeApiGroupResponseBody& setMigrationStatus(string migrationStatus) { DARABONBA_PTR_SET_VALUE(migrationStatus_, migrationStatus) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeApiGroupResponseBody& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // passthroughHeaders Field Functions 
    bool hasPassthroughHeaders() const { return this->passthroughHeaders_ != nullptr;};
    void deletePassthroughHeaders() { this->passthroughHeaders_ = nullptr;};
    inline string getPassthroughHeaders() const { DARABONBA_PTR_GET_DEFAULT(passthroughHeaders_, "") };
    inline DescribeApiGroupResponseBody& setPassthroughHeaders(string passthroughHeaders) { DARABONBA_PTR_SET_VALUE(passthroughHeaders_, passthroughHeaders) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApiGroupResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stageItems Field Functions 
    bool hasStageItems() const { return this->stageItems_ != nullptr;};
    void deleteStageItems() { this->stageItems_ = nullptr;};
    inline const DescribeApiGroupResponseBody::StageItems & getStageItems() const { DARABONBA_PTR_GET_CONST(stageItems_, DescribeApiGroupResponseBody::StageItems) };
    inline DescribeApiGroupResponseBody::StageItems getStageItems() { DARABONBA_PTR_GET(stageItems_, DescribeApiGroupResponseBody::StageItems) };
    inline DescribeApiGroupResponseBody& setStageItems(const DescribeApiGroupResponseBody::StageItems & stageItems) { DARABONBA_PTR_SET_VALUE(stageItems_, stageItems) };
    inline DescribeApiGroupResponseBody& setStageItems(DescribeApiGroupResponseBody::StageItems && stageItems) { DARABONBA_PTR_SET_RVALUE(stageItems_, stageItems) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeApiGroupResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string getSubDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline DescribeApiGroupResponseBody& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


    // trafficLimit Field Functions 
    bool hasTrafficLimit() const { return this->trafficLimit_ != nullptr;};
    void deleteTrafficLimit() { this->trafficLimit_ = nullptr;};
    inline int32_t getTrafficLimit() const { DARABONBA_PTR_GET_DEFAULT(trafficLimit_, 0) };
    inline DescribeApiGroupResponseBody& setTrafficLimit(int32_t trafficLimit) { DARABONBA_PTR_SET_VALUE(trafficLimit_, trafficLimit) };


    // userLogConfig Field Functions 
    bool hasUserLogConfig() const { return this->userLogConfig_ != nullptr;};
    void deleteUserLogConfig() { this->userLogConfig_ = nullptr;};
    inline string getUserLogConfig() const { DARABONBA_PTR_GET_DEFAULT(userLogConfig_, "") };
    inline DescribeApiGroupResponseBody& setUserLogConfig(string userLogConfig) { DARABONBA_PTR_SET_VALUE(userLogConfig_, userLogConfig) };


    // vpcDomain Field Functions 
    bool hasVpcDomain() const { return this->vpcDomain_ != nullptr;};
    void deleteVpcDomain() { this->vpcDomain_ = nullptr;};
    inline string getVpcDomain() const { DARABONBA_PTR_GET_DEFAULT(vpcDomain_, "") };
    inline DescribeApiGroupResponseBody& setVpcDomain(string vpcDomain) { DARABONBA_PTR_SET_VALUE(vpcDomain_, vpcDomain) };


    // vpcSlbIntranetDomain Field Functions 
    bool hasVpcSlbIntranetDomain() const { return this->vpcSlbIntranetDomain_ != nullptr;};
    void deleteVpcSlbIntranetDomain() { this->vpcSlbIntranetDomain_ = nullptr;};
    inline string getVpcSlbIntranetDomain() const { DARABONBA_PTR_GET_DEFAULT(vpcSlbIntranetDomain_, "") };
    inline DescribeApiGroupResponseBody& setVpcSlbIntranetDomain(string vpcSlbIntranetDomain) { DARABONBA_PTR_SET_VALUE(vpcSlbIntranetDomain_, vpcSlbIntranetDomain) };


  protected:
    // The root path of the API.
    shared_ptr<string> basePath_ {};
    // The billing status of the API group.
    // 
    // *   **NORMAL**: The API group is normal.
    // *   **LOCKED**: The API group is locked due to overdue payments.
    shared_ptr<string> billingStatus_ {};
    // The products on Alibaba Cloud Marketplace.
    shared_ptr<bool> cloudMarketCommodity_ {};
    // The CloudMonitor application group.
    shared_ptr<string> cmsMonitorGroup_ {};
    // The list of associated tags. Separate multiple tags with commas (,).
    shared_ptr<string> compatibleFlags_ {};
    // The creation time (UTC) of the API group.
    shared_ptr<string> createdTime_ {};
    // The custom appcode configuration.
    shared_ptr<string> customAppCodeConfig_ {};
    // The details about the custom domain name.
    shared_ptr<DescribeApiGroupResponseBody::CustomDomains> customDomains_ {};
    // The custom trace configuration.
    shared_ptr<string> customTraceConfig_ {};
    // The list of custom configuration items.
    shared_ptr<string> customerConfigs_ {};
    // The type of exclusive instance where the group is located
    // 
    // - VPC fusion type exclusive instance: vpc_connect
    // - Traditional type exclusive instance: normal
    shared_ptr<string> dedicatedInstanceType_ {};
    // The default domain name.
    shared_ptr<string> defaultDomain_ {};
    // The description of the API group.
    shared_ptr<string> description_ {};
    // Indicates whether access over the public second-level domain name is enabled. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> disableInnerDomain_ {};
    // The ID of the API group. This ID is generated by the system and globally unique.
    shared_ptr<string> groupId_ {};
    // The name of the group to which the API belongs.
    shared_ptr<string> groupName_ {};
    // The HTTPS policy.
    shared_ptr<string> httpsPolicy_ {};
    // The validity status of the API group. Valid values:
    // 
    // *   **NORMAL**: The API group is normal.
    // *   **LOCKED**: The API group is locked because it is not valid.
    shared_ptr<string> illegalStatus_ {};
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
    // The type of the instance.
    // 
    // *   CLASSIC_SHARED: shared instance that uses the classic network configuration
    // *   VPC_SHARED: shared instance that uses VPC
    // *   VPC_DEDICATED: dedicated instance that uses VPC
    shared_ptr<string> instanceType_ {};
    // The IPv6 status.
    shared_ptr<string> ipv6Status_ {};
    // The reason for the failure of the group migration instance task. When the value of the MigrationStatus parameter is Failed, it is not empty.
    shared_ptr<string> migrationError_ {};
    // Group migration instance task status
    // 
    // - Running
    // - Success
    // - Failed
    shared_ptr<string> migrationStatus_ {};
    // The last modification time (UTC) of the API group.
    shared_ptr<string> modifiedTime_ {};
    // Specifies whether to pass headers.
    shared_ptr<string> passthroughHeaders_ {};
    // The region to which the API group belongs.
    shared_ptr<string> regionId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The runtime environment information.
    shared_ptr<DescribeApiGroupResponseBody::StageItems> stageItems_ {};
    // The status of the API group.
    // 
    // *   **NORMAL**: The API group is normal.
    // *   **DELETE**: The API group is deleted.
    shared_ptr<string> status_ {};
    // The second-level domain name automatically assigned to the API group.
    shared_ptr<string> subDomain_ {};
    // The upper QPS limit of the API group. The default value is 500. You can increase the upper limit by submitting an application.
    shared_ptr<int32_t> trafficLimit_ {};
    // The user log settings.
    shared_ptr<string> userLogConfig_ {};
    // The VPC domain name.
    shared_ptr<string> vpcDomain_ {};
    // The VPC SLB domain name.
    shared_ptr<string> vpcSlbIntranetDomain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
