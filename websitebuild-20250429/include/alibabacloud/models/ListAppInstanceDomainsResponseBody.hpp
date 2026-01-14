// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppInstanceDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstanceDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_TO_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstanceDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_FROM_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    ListAppInstanceDomainsResponseBody() = default ;
    ListAppInstanceDomainsResponseBody(const ListAppInstanceDomainsResponseBody &) = default ;
    ListAppInstanceDomainsResponseBody(ListAppInstanceDomainsResponseBody &&) = default ;
    ListAppInstanceDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstanceDomainsResponseBody() = default ;
    ListAppInstanceDomainsResponseBody& operator=(const ListAppInstanceDomainsResponseBody &) = default ;
    ListAppInstanceDomainsResponseBody& operator=(ListAppInstanceDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Next, next_);
        DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(PrePage, prePage_);
        DARABONBA_PTR_TO_JSON(ResultLimit, resultLimit_);
        DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
        DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Next, next_);
        DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
        DARABONBA_PTR_FROM_JSON(ResultLimit, resultLimit_);
        DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
        DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Next : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Next& obj) { 
          DARABONBA_PTR_TO_JSON(Certificate, certificate_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(OverallStatus, overallStatus_);
          DARABONBA_PTR_TO_JSON(Ownership, ownership_);
          DARABONBA_PTR_TO_JSON(Resolution, resolution_);
          DARABONBA_PTR_TO_JSON(Verification, verification_);
        };
        friend void from_json(const Darabonba::Json& j, Next& obj) { 
          DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(OverallStatus, overallStatus_);
          DARABONBA_PTR_FROM_JSON(Ownership, ownership_);
          DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
          DARABONBA_PTR_FROM_JSON(Verification, verification_);
        };
        Next() = default ;
        Next(const Next &) = default ;
        Next(Next &&) = default ;
        Next(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Next() = default ;
        Next& operator=(const Next &) = default ;
        Next& operator=(Next &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Verification : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Verification& obj) { 
            DARABONBA_PTR_TO_JSON(DnsRecord, dnsRecord_);
            DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
            DARABONBA_PTR_TO_JSON(VerificationStatus, verificationStatus_);
          };
          friend void from_json(const Darabonba::Json& j, Verification& obj) { 
            DARABONBA_PTR_FROM_JSON(DnsRecord, dnsRecord_);
            DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
            DARABONBA_PTR_FROM_JSON(VerificationStatus, verificationStatus_);
          };
          Verification() = default ;
          Verification(const Verification &) = default ;
          Verification(Verification &&) = default ;
          Verification(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Verification() = default ;
          Verification& operator=(const Verification &) = default ;
          Verification& operator=(Verification &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DnsRecord : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DnsRecord& obj) { 
              DARABONBA_PTR_TO_JSON(Host, host_);
              DARABONBA_PTR_TO_JSON(RecordType, recordType_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, DnsRecord& obj) { 
              DARABONBA_PTR_FROM_JSON(Host, host_);
              DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            DnsRecord() = default ;
            DnsRecord(const DnsRecord &) = default ;
            DnsRecord(DnsRecord &&) = default ;
            DnsRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DnsRecord() = default ;
            DnsRecord& operator=(const DnsRecord &) = default ;
            DnsRecord& operator=(DnsRecord &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->host_ == nullptr
        && this->recordType_ == nullptr && this->value_ == nullptr; };
            // host Field Functions 
            bool hasHost() const { return this->host_ != nullptr;};
            void deleteHost() { this->host_ = nullptr;};
            inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
            inline DnsRecord& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


            // recordType Field Functions 
            bool hasRecordType() const { return this->recordType_ != nullptr;};
            void deleteRecordType() { this->recordType_ = nullptr;};
            inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
            inline DnsRecord& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline DnsRecord& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> host_ {};
            shared_ptr<string> recordType_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->dnsRecord_ == nullptr
        && this->errorMsg_ == nullptr && this->verificationStatus_ == nullptr; };
          // dnsRecord Field Functions 
          bool hasDnsRecord() const { return this->dnsRecord_ != nullptr;};
          void deleteDnsRecord() { this->dnsRecord_ = nullptr;};
          inline const Verification::DnsRecord & getDnsRecord() const { DARABONBA_PTR_GET_CONST(dnsRecord_, Verification::DnsRecord) };
          inline Verification::DnsRecord getDnsRecord() { DARABONBA_PTR_GET(dnsRecord_, Verification::DnsRecord) };
          inline Verification& setDnsRecord(const Verification::DnsRecord & dnsRecord) { DARABONBA_PTR_SET_VALUE(dnsRecord_, dnsRecord) };
          inline Verification& setDnsRecord(Verification::DnsRecord && dnsRecord) { DARABONBA_PTR_SET_RVALUE(dnsRecord_, dnsRecord) };


          // errorMsg Field Functions 
          bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
          void deleteErrorMsg() { this->errorMsg_ = nullptr;};
          inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
          inline Verification& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


          // verificationStatus Field Functions 
          bool hasVerificationStatus() const { return this->verificationStatus_ != nullptr;};
          void deleteVerificationStatus() { this->verificationStatus_ = nullptr;};
          inline string getVerificationStatus() const { DARABONBA_PTR_GET_DEFAULT(verificationStatus_, "") };
          inline Verification& setVerificationStatus(string verificationStatus) { DARABONBA_PTR_SET_VALUE(verificationStatus_, verificationStatus) };


        protected:
          shared_ptr<Verification::DnsRecord> dnsRecord_ {};
          shared_ptr<string> errorMsg_ {};
          shared_ptr<string> verificationStatus_ {};
        };

        class Resolution : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Resolution& obj) { 
            DARABONBA_PTR_TO_JSON(DnsRecord, dnsRecord_);
            DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
            DARABONBA_PTR_TO_JSON(ResolutionStatus, resolutionStatus_);
          };
          friend void from_json(const Darabonba::Json& j, Resolution& obj) { 
            DARABONBA_PTR_FROM_JSON(DnsRecord, dnsRecord_);
            DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
            DARABONBA_PTR_FROM_JSON(ResolutionStatus, resolutionStatus_);
          };
          Resolution() = default ;
          Resolution(const Resolution &) = default ;
          Resolution(Resolution &&) = default ;
          Resolution(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Resolution() = default ;
          Resolution& operator=(const Resolution &) = default ;
          Resolution& operator=(Resolution &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DnsRecord : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DnsRecord& obj) { 
              DARABONBA_PTR_TO_JSON(Host, host_);
              DARABONBA_PTR_TO_JSON(RecordType, recordType_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, DnsRecord& obj) { 
              DARABONBA_PTR_FROM_JSON(Host, host_);
              DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            DnsRecord() = default ;
            DnsRecord(const DnsRecord &) = default ;
            DnsRecord(DnsRecord &&) = default ;
            DnsRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DnsRecord() = default ;
            DnsRecord& operator=(const DnsRecord &) = default ;
            DnsRecord& operator=(DnsRecord &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->host_ == nullptr
        && this->recordType_ == nullptr && this->value_ == nullptr; };
            // host Field Functions 
            bool hasHost() const { return this->host_ != nullptr;};
            void deleteHost() { this->host_ = nullptr;};
            inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
            inline DnsRecord& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


            // recordType Field Functions 
            bool hasRecordType() const { return this->recordType_ != nullptr;};
            void deleteRecordType() { this->recordType_ = nullptr;};
            inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
            inline DnsRecord& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline DnsRecord& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> host_ {};
            shared_ptr<string> recordType_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->dnsRecord_ == nullptr
        && this->errorMsg_ == nullptr && this->resolutionStatus_ == nullptr; };
          // dnsRecord Field Functions 
          bool hasDnsRecord() const { return this->dnsRecord_ != nullptr;};
          void deleteDnsRecord() { this->dnsRecord_ = nullptr;};
          inline const Resolution::DnsRecord & getDnsRecord() const { DARABONBA_PTR_GET_CONST(dnsRecord_, Resolution::DnsRecord) };
          inline Resolution::DnsRecord getDnsRecord() { DARABONBA_PTR_GET(dnsRecord_, Resolution::DnsRecord) };
          inline Resolution& setDnsRecord(const Resolution::DnsRecord & dnsRecord) { DARABONBA_PTR_SET_VALUE(dnsRecord_, dnsRecord) };
          inline Resolution& setDnsRecord(Resolution::DnsRecord && dnsRecord) { DARABONBA_PTR_SET_RVALUE(dnsRecord_, dnsRecord) };


          // errorMsg Field Functions 
          bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
          void deleteErrorMsg() { this->errorMsg_ = nullptr;};
          inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
          inline Resolution& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


          // resolutionStatus Field Functions 
          bool hasResolutionStatus() const { return this->resolutionStatus_ != nullptr;};
          void deleteResolutionStatus() { this->resolutionStatus_ = nullptr;};
          inline string getResolutionStatus() const { DARABONBA_PTR_GET_DEFAULT(resolutionStatus_, "") };
          inline Resolution& setResolutionStatus(string resolutionStatus) { DARABONBA_PTR_SET_VALUE(resolutionStatus_, resolutionStatus) };


        protected:
          shared_ptr<Resolution::DnsRecord> dnsRecord_ {};
          shared_ptr<string> errorMsg_ {};
          shared_ptr<string> resolutionStatus_ {};
        };

        class Ownership : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ownership& obj) { 
            DARABONBA_PTR_TO_JSON(Account, account_);
            DARABONBA_PTR_TO_JSON(Provider, provider_);
          };
          friend void from_json(const Darabonba::Json& j, Ownership& obj) { 
            DARABONBA_PTR_FROM_JSON(Account, account_);
            DARABONBA_PTR_FROM_JSON(Provider, provider_);
          };
          Ownership() = default ;
          Ownership(const Ownership &) = default ;
          Ownership(Ownership &&) = default ;
          Ownership(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ownership() = default ;
          Ownership& operator=(const Ownership &) = default ;
          Ownership& operator=(Ownership &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->account_ == nullptr
        && this->provider_ == nullptr; };
          // account Field Functions 
          bool hasAccount() const { return this->account_ != nullptr;};
          void deleteAccount() { this->account_ = nullptr;};
          inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
          inline Ownership& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


          // provider Field Functions 
          bool hasProvider() const { return this->provider_ != nullptr;};
          void deleteProvider() { this->provider_ = nullptr;};
          inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
          inline Ownership& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


        protected:
          shared_ptr<string> account_ {};
          shared_ptr<string> provider_ {};
        };

        class Certificate : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Certificate& obj) { 
            DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
            DARABONBA_PTR_TO_JSON(CertificateStatus, certificateStatus_);
            DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          };
          friend void from_json(const Darabonba::Json& j, Certificate& obj) { 
            DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
            DARABONBA_PTR_FROM_JSON(CertificateStatus, certificateStatus_);
            DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          };
          Certificate() = default ;
          Certificate(const Certificate &) = default ;
          Certificate(Certificate &&) = default ;
          Certificate(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Certificate() = default ;
          Certificate& operator=(const Certificate &) = default ;
          Certificate& operator=(Certificate &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->certificateName_ == nullptr
        && this->certificateStatus_ == nullptr && this->certificateType_ == nullptr && this->endTime_ == nullptr; };
          // certificateName Field Functions 
          bool hasCertificateName() const { return this->certificateName_ != nullptr;};
          void deleteCertificateName() { this->certificateName_ = nullptr;};
          inline string getCertificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
          inline Certificate& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


          // certificateStatus Field Functions 
          bool hasCertificateStatus() const { return this->certificateStatus_ != nullptr;};
          void deleteCertificateStatus() { this->certificateStatus_ = nullptr;};
          inline string getCertificateStatus() const { DARABONBA_PTR_GET_DEFAULT(certificateStatus_, "") };
          inline Certificate& setCertificateStatus(string certificateStatus) { DARABONBA_PTR_SET_VALUE(certificateStatus_, certificateStatus) };


          // certificateType Field Functions 
          bool hasCertificateType() const { return this->certificateType_ != nullptr;};
          void deleteCertificateType() { this->certificateType_ = nullptr;};
          inline string getCertificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
          inline Certificate& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline Certificate& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        protected:
          shared_ptr<string> certificateName_ {};
          shared_ptr<string> certificateStatus_ {};
          shared_ptr<string> certificateType_ {};
          shared_ptr<string> endTime_ {};
        };

        virtual bool empty() const override { return this->certificate_ == nullptr
        && this->createTime_ == nullptr && this->domainName_ == nullptr && this->overallStatus_ == nullptr && this->ownership_ == nullptr && this->resolution_ == nullptr
        && this->verification_ == nullptr; };
        // certificate Field Functions 
        bool hasCertificate() const { return this->certificate_ != nullptr;};
        void deleteCertificate() { this->certificate_ = nullptr;};
        inline const Next::Certificate & getCertificate() const { DARABONBA_PTR_GET_CONST(certificate_, Next::Certificate) };
        inline Next::Certificate getCertificate() { DARABONBA_PTR_GET(certificate_, Next::Certificate) };
        inline Next& setCertificate(const Next::Certificate & certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };
        inline Next& setCertificate(Next::Certificate && certificate) { DARABONBA_PTR_SET_RVALUE(certificate_, certificate) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Next& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline Next& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // overallStatus Field Functions 
        bool hasOverallStatus() const { return this->overallStatus_ != nullptr;};
        void deleteOverallStatus() { this->overallStatus_ = nullptr;};
        inline string getOverallStatus() const { DARABONBA_PTR_GET_DEFAULT(overallStatus_, "") };
        inline Next& setOverallStatus(string overallStatus) { DARABONBA_PTR_SET_VALUE(overallStatus_, overallStatus) };


        // ownership Field Functions 
        bool hasOwnership() const { return this->ownership_ != nullptr;};
        void deleteOwnership() { this->ownership_ = nullptr;};
        inline const Next::Ownership & getOwnership() const { DARABONBA_PTR_GET_CONST(ownership_, Next::Ownership) };
        inline Next::Ownership getOwnership() { DARABONBA_PTR_GET(ownership_, Next::Ownership) };
        inline Next& setOwnership(const Next::Ownership & ownership) { DARABONBA_PTR_SET_VALUE(ownership_, ownership) };
        inline Next& setOwnership(Next::Ownership && ownership) { DARABONBA_PTR_SET_RVALUE(ownership_, ownership) };


        // resolution Field Functions 
        bool hasResolution() const { return this->resolution_ != nullptr;};
        void deleteResolution() { this->resolution_ = nullptr;};
        inline const Next::Resolution & getResolution() const { DARABONBA_PTR_GET_CONST(resolution_, Next::Resolution) };
        inline Next::Resolution getResolution() { DARABONBA_PTR_GET(resolution_, Next::Resolution) };
        inline Next& setResolution(const Next::Resolution & resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };
        inline Next& setResolution(Next::Resolution && resolution) { DARABONBA_PTR_SET_RVALUE(resolution_, resolution) };


        // verification Field Functions 
        bool hasVerification() const { return this->verification_ != nullptr;};
        void deleteVerification() { this->verification_ = nullptr;};
        inline const Next::Verification & getVerification() const { DARABONBA_PTR_GET_CONST(verification_, Next::Verification) };
        inline Next::Verification getVerification() { DARABONBA_PTR_GET(verification_, Next::Verification) };
        inline Next& setVerification(const Next::Verification & verification) { DARABONBA_PTR_SET_VALUE(verification_, verification) };
        inline Next& setVerification(Next::Verification && verification) { DARABONBA_PTR_SET_RVALUE(verification_, verification) };


      protected:
        shared_ptr<Next::Certificate> certificate_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<string> overallStatus_ {};
        shared_ptr<Next::Ownership> ownership_ {};
        shared_ptr<Next::Resolution> resolution_ {};
        shared_ptr<Next::Verification> verification_ {};
      };

      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Certificate, certificate_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(OverallStatus, overallStatus_);
          DARABONBA_PTR_TO_JSON(Ownership, ownership_);
          DARABONBA_PTR_TO_JSON(Resolution, resolution_);
          DARABONBA_PTR_TO_JSON(Verification, verification_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(OverallStatus, overallStatus_);
          DARABONBA_PTR_FROM_JSON(Ownership, ownership_);
          DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
          DARABONBA_PTR_FROM_JSON(Verification, verification_);
        };
        Data() = default ;
        Data(const Data &) = default ;
        Data(Data &&) = default ;
        Data(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Data() = default ;
        Data& operator=(const Data &) = default ;
        Data& operator=(Data &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Verification : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Verification& obj) { 
            DARABONBA_PTR_TO_JSON(DnsRecord, dnsRecord_);
            DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
            DARABONBA_PTR_TO_JSON(VerificationStatus, verificationStatus_);
            DARABONBA_PTR_TO_JSON(VerificationStatusCode, verificationStatusCode_);
          };
          friend void from_json(const Darabonba::Json& j, Verification& obj) { 
            DARABONBA_PTR_FROM_JSON(DnsRecord, dnsRecord_);
            DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
            DARABONBA_PTR_FROM_JSON(VerificationStatus, verificationStatus_);
            DARABONBA_PTR_FROM_JSON(VerificationStatusCode, verificationStatusCode_);
          };
          Verification() = default ;
          Verification(const Verification &) = default ;
          Verification(Verification &&) = default ;
          Verification(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Verification() = default ;
          Verification& operator=(const Verification &) = default ;
          Verification& operator=(Verification &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DnsRecord : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DnsRecord& obj) { 
              DARABONBA_PTR_TO_JSON(Host, host_);
              DARABONBA_PTR_TO_JSON(RecordType, recordType_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, DnsRecord& obj) { 
              DARABONBA_PTR_FROM_JSON(Host, host_);
              DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            DnsRecord() = default ;
            DnsRecord(const DnsRecord &) = default ;
            DnsRecord(DnsRecord &&) = default ;
            DnsRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DnsRecord() = default ;
            DnsRecord& operator=(const DnsRecord &) = default ;
            DnsRecord& operator=(DnsRecord &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->host_ == nullptr
        && this->recordType_ == nullptr && this->value_ == nullptr; };
            // host Field Functions 
            bool hasHost() const { return this->host_ != nullptr;};
            void deleteHost() { this->host_ = nullptr;};
            inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
            inline DnsRecord& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


            // recordType Field Functions 
            bool hasRecordType() const { return this->recordType_ != nullptr;};
            void deleteRecordType() { this->recordType_ = nullptr;};
            inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
            inline DnsRecord& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline DnsRecord& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> host_ {};
            shared_ptr<string> recordType_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->dnsRecord_ == nullptr
        && this->errorMsg_ == nullptr && this->verificationStatus_ == nullptr && this->verificationStatusCode_ == nullptr; };
          // dnsRecord Field Functions 
          bool hasDnsRecord() const { return this->dnsRecord_ != nullptr;};
          void deleteDnsRecord() { this->dnsRecord_ = nullptr;};
          inline const Verification::DnsRecord & getDnsRecord() const { DARABONBA_PTR_GET_CONST(dnsRecord_, Verification::DnsRecord) };
          inline Verification::DnsRecord getDnsRecord() { DARABONBA_PTR_GET(dnsRecord_, Verification::DnsRecord) };
          inline Verification& setDnsRecord(const Verification::DnsRecord & dnsRecord) { DARABONBA_PTR_SET_VALUE(dnsRecord_, dnsRecord) };
          inline Verification& setDnsRecord(Verification::DnsRecord && dnsRecord) { DARABONBA_PTR_SET_RVALUE(dnsRecord_, dnsRecord) };


          // errorMsg Field Functions 
          bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
          void deleteErrorMsg() { this->errorMsg_ = nullptr;};
          inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
          inline Verification& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


          // verificationStatus Field Functions 
          bool hasVerificationStatus() const { return this->verificationStatus_ != nullptr;};
          void deleteVerificationStatus() { this->verificationStatus_ = nullptr;};
          inline string getVerificationStatus() const { DARABONBA_PTR_GET_DEFAULT(verificationStatus_, "") };
          inline Verification& setVerificationStatus(string verificationStatus) { DARABONBA_PTR_SET_VALUE(verificationStatus_, verificationStatus) };


          // verificationStatusCode Field Functions 
          bool hasVerificationStatusCode() const { return this->verificationStatusCode_ != nullptr;};
          void deleteVerificationStatusCode() { this->verificationStatusCode_ = nullptr;};
          inline string getVerificationStatusCode() const { DARABONBA_PTR_GET_DEFAULT(verificationStatusCode_, "") };
          inline Verification& setVerificationStatusCode(string verificationStatusCode) { DARABONBA_PTR_SET_VALUE(verificationStatusCode_, verificationStatusCode) };


        protected:
          shared_ptr<Verification::DnsRecord> dnsRecord_ {};
          shared_ptr<string> errorMsg_ {};
          shared_ptr<string> verificationStatus_ {};
          shared_ptr<string> verificationStatusCode_ {};
        };

        class Resolution : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Resolution& obj) { 
            DARABONBA_PTR_TO_JSON(DnsRecord, dnsRecord_);
            DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
            DARABONBA_PTR_TO_JSON(ResolutionStatus, resolutionStatus_);
          };
          friend void from_json(const Darabonba::Json& j, Resolution& obj) { 
            DARABONBA_PTR_FROM_JSON(DnsRecord, dnsRecord_);
            DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
            DARABONBA_PTR_FROM_JSON(ResolutionStatus, resolutionStatus_);
          };
          Resolution() = default ;
          Resolution(const Resolution &) = default ;
          Resolution(Resolution &&) = default ;
          Resolution(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Resolution() = default ;
          Resolution& operator=(const Resolution &) = default ;
          Resolution& operator=(Resolution &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DnsRecord : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DnsRecord& obj) { 
              DARABONBA_PTR_TO_JSON(Host, host_);
              DARABONBA_PTR_TO_JSON(RecordType, recordType_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, DnsRecord& obj) { 
              DARABONBA_PTR_FROM_JSON(Host, host_);
              DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            DnsRecord() = default ;
            DnsRecord(const DnsRecord &) = default ;
            DnsRecord(DnsRecord &&) = default ;
            DnsRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DnsRecord() = default ;
            DnsRecord& operator=(const DnsRecord &) = default ;
            DnsRecord& operator=(DnsRecord &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->host_ == nullptr
        && this->recordType_ == nullptr && this->value_ == nullptr; };
            // host Field Functions 
            bool hasHost() const { return this->host_ != nullptr;};
            void deleteHost() { this->host_ = nullptr;};
            inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
            inline DnsRecord& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


            // recordType Field Functions 
            bool hasRecordType() const { return this->recordType_ != nullptr;};
            void deleteRecordType() { this->recordType_ = nullptr;};
            inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
            inline DnsRecord& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline DnsRecord& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> host_ {};
            shared_ptr<string> recordType_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->dnsRecord_ == nullptr
        && this->errorMsg_ == nullptr && this->resolutionStatus_ == nullptr; };
          // dnsRecord Field Functions 
          bool hasDnsRecord() const { return this->dnsRecord_ != nullptr;};
          void deleteDnsRecord() { this->dnsRecord_ = nullptr;};
          inline const Resolution::DnsRecord & getDnsRecord() const { DARABONBA_PTR_GET_CONST(dnsRecord_, Resolution::DnsRecord) };
          inline Resolution::DnsRecord getDnsRecord() { DARABONBA_PTR_GET(dnsRecord_, Resolution::DnsRecord) };
          inline Resolution& setDnsRecord(const Resolution::DnsRecord & dnsRecord) { DARABONBA_PTR_SET_VALUE(dnsRecord_, dnsRecord) };
          inline Resolution& setDnsRecord(Resolution::DnsRecord && dnsRecord) { DARABONBA_PTR_SET_RVALUE(dnsRecord_, dnsRecord) };


          // errorMsg Field Functions 
          bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
          void deleteErrorMsg() { this->errorMsg_ = nullptr;};
          inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
          inline Resolution& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


          // resolutionStatus Field Functions 
          bool hasResolutionStatus() const { return this->resolutionStatus_ != nullptr;};
          void deleteResolutionStatus() { this->resolutionStatus_ = nullptr;};
          inline string getResolutionStatus() const { DARABONBA_PTR_GET_DEFAULT(resolutionStatus_, "") };
          inline Resolution& setResolutionStatus(string resolutionStatus) { DARABONBA_PTR_SET_VALUE(resolutionStatus_, resolutionStatus) };


        protected:
          shared_ptr<Resolution::DnsRecord> dnsRecord_ {};
          shared_ptr<string> errorMsg_ {};
          shared_ptr<string> resolutionStatus_ {};
        };

        class Ownership : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ownership& obj) { 
            DARABONBA_PTR_TO_JSON(Account, account_);
            DARABONBA_PTR_TO_JSON(Provider, provider_);
            DARABONBA_PTR_TO_JSON(RootDomain, rootDomain_);
          };
          friend void from_json(const Darabonba::Json& j, Ownership& obj) { 
            DARABONBA_PTR_FROM_JSON(Account, account_);
            DARABONBA_PTR_FROM_JSON(Provider, provider_);
            DARABONBA_PTR_FROM_JSON(RootDomain, rootDomain_);
          };
          Ownership() = default ;
          Ownership(const Ownership &) = default ;
          Ownership(Ownership &&) = default ;
          Ownership(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ownership() = default ;
          Ownership& operator=(const Ownership &) = default ;
          Ownership& operator=(Ownership &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->account_ == nullptr
        && this->provider_ == nullptr && this->rootDomain_ == nullptr; };
          // account Field Functions 
          bool hasAccount() const { return this->account_ != nullptr;};
          void deleteAccount() { this->account_ = nullptr;};
          inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
          inline Ownership& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


          // provider Field Functions 
          bool hasProvider() const { return this->provider_ != nullptr;};
          void deleteProvider() { this->provider_ = nullptr;};
          inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
          inline Ownership& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


          // rootDomain Field Functions 
          bool hasRootDomain() const { return this->rootDomain_ != nullptr;};
          void deleteRootDomain() { this->rootDomain_ = nullptr;};
          inline string getRootDomain() const { DARABONBA_PTR_GET_DEFAULT(rootDomain_, "") };
          inline Ownership& setRootDomain(string rootDomain) { DARABONBA_PTR_SET_VALUE(rootDomain_, rootDomain) };


        protected:
          shared_ptr<string> account_ {};
          shared_ptr<string> provider_ {};
          shared_ptr<string> rootDomain_ {};
        };

        class Certificate : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Certificate& obj) { 
            DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
            DARABONBA_PTR_TO_JSON(CertificateStatus, certificateStatus_);
            DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          };
          friend void from_json(const Darabonba::Json& j, Certificate& obj) { 
            DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
            DARABONBA_PTR_FROM_JSON(CertificateStatus, certificateStatus_);
            DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          };
          Certificate() = default ;
          Certificate(const Certificate &) = default ;
          Certificate(Certificate &&) = default ;
          Certificate(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Certificate() = default ;
          Certificate& operator=(const Certificate &) = default ;
          Certificate& operator=(Certificate &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->certificateName_ == nullptr
        && this->certificateStatus_ == nullptr && this->certificateType_ == nullptr && this->endTime_ == nullptr; };
          // certificateName Field Functions 
          bool hasCertificateName() const { return this->certificateName_ != nullptr;};
          void deleteCertificateName() { this->certificateName_ = nullptr;};
          inline string getCertificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
          inline Certificate& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


          // certificateStatus Field Functions 
          bool hasCertificateStatus() const { return this->certificateStatus_ != nullptr;};
          void deleteCertificateStatus() { this->certificateStatus_ = nullptr;};
          inline string getCertificateStatus() const { DARABONBA_PTR_GET_DEFAULT(certificateStatus_, "") };
          inline Certificate& setCertificateStatus(string certificateStatus) { DARABONBA_PTR_SET_VALUE(certificateStatus_, certificateStatus) };


          // certificateType Field Functions 
          bool hasCertificateType() const { return this->certificateType_ != nullptr;};
          void deleteCertificateType() { this->certificateType_ = nullptr;};
          inline string getCertificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
          inline Certificate& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline Certificate& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        protected:
          shared_ptr<string> certificateName_ {};
          shared_ptr<string> certificateStatus_ {};
          shared_ptr<string> certificateType_ {};
          shared_ptr<string> endTime_ {};
        };

        virtual bool empty() const override { return this->certificate_ == nullptr
        && this->createTime_ == nullptr && this->domainName_ == nullptr && this->overallStatus_ == nullptr && this->ownership_ == nullptr && this->resolution_ == nullptr
        && this->verification_ == nullptr; };
        // certificate Field Functions 
        bool hasCertificate() const { return this->certificate_ != nullptr;};
        void deleteCertificate() { this->certificate_ = nullptr;};
        inline const Data::Certificate & getCertificate() const { DARABONBA_PTR_GET_CONST(certificate_, Data::Certificate) };
        inline Data::Certificate getCertificate() { DARABONBA_PTR_GET(certificate_, Data::Certificate) };
        inline Data& setCertificate(const Data::Certificate & certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };
        inline Data& setCertificate(Data::Certificate && certificate) { DARABONBA_PTR_SET_RVALUE(certificate_, certificate) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline Data& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // overallStatus Field Functions 
        bool hasOverallStatus() const { return this->overallStatus_ != nullptr;};
        void deleteOverallStatus() { this->overallStatus_ = nullptr;};
        inline string getOverallStatus() const { DARABONBA_PTR_GET_DEFAULT(overallStatus_, "") };
        inline Data& setOverallStatus(string overallStatus) { DARABONBA_PTR_SET_VALUE(overallStatus_, overallStatus) };


        // ownership Field Functions 
        bool hasOwnership() const { return this->ownership_ != nullptr;};
        void deleteOwnership() { this->ownership_ = nullptr;};
        inline const Data::Ownership & getOwnership() const { DARABONBA_PTR_GET_CONST(ownership_, Data::Ownership) };
        inline Data::Ownership getOwnership() { DARABONBA_PTR_GET(ownership_, Data::Ownership) };
        inline Data& setOwnership(const Data::Ownership & ownership) { DARABONBA_PTR_SET_VALUE(ownership_, ownership) };
        inline Data& setOwnership(Data::Ownership && ownership) { DARABONBA_PTR_SET_RVALUE(ownership_, ownership) };


        // resolution Field Functions 
        bool hasResolution() const { return this->resolution_ != nullptr;};
        void deleteResolution() { this->resolution_ = nullptr;};
        inline const Data::Resolution & getResolution() const { DARABONBA_PTR_GET_CONST(resolution_, Data::Resolution) };
        inline Data::Resolution getResolution() { DARABONBA_PTR_GET(resolution_, Data::Resolution) };
        inline Data& setResolution(const Data::Resolution & resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };
        inline Data& setResolution(Data::Resolution && resolution) { DARABONBA_PTR_SET_RVALUE(resolution_, resolution) };


        // verification Field Functions 
        bool hasVerification() const { return this->verification_ != nullptr;};
        void deleteVerification() { this->verification_ = nullptr;};
        inline const Data::Verification & getVerification() const { DARABONBA_PTR_GET_CONST(verification_, Data::Verification) };
        inline Data::Verification getVerification() { DARABONBA_PTR_GET(verification_, Data::Verification) };
        inline Data& setVerification(const Data::Verification & verification) { DARABONBA_PTR_SET_VALUE(verification_, verification) };
        inline Data& setVerification(Data::Verification && verification) { DARABONBA_PTR_SET_RVALUE(verification_, verification) };


      protected:
        shared_ptr<Data::Certificate> certificate_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<string> overallStatus_ {};
        shared_ptr<Data::Ownership> ownership_ {};
        shared_ptr<Data::Resolution> resolution_ {};
        shared_ptr<Data::Verification> verification_ {};
      };

      virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->next_ == nullptr && this->nextPage_ == nullptr && this->pageSize_ == nullptr && this->prePage_ == nullptr
        && this->resultLimit_ == nullptr && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
      // currentPageNum Field Functions 
      bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
      void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
      inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
      inline Module& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Module::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Module::Data>) };
      inline vector<Module::Data> getData() { DARABONBA_PTR_GET(data_, vector<Module::Data>) };
      inline Module& setData(const vector<Module::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Module& setData(vector<Module::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // next Field Functions 
      bool hasNext() const { return this->next_ != nullptr;};
      void deleteNext() { this->next_ = nullptr;};
      inline const Module::Next & getNext() const { DARABONBA_PTR_GET_CONST(next_, Module::Next) };
      inline Module::Next getNext() { DARABONBA_PTR_GET(next_, Module::Next) };
      inline Module& setNext(const Module::Next & next) { DARABONBA_PTR_SET_VALUE(next_, next) };
      inline Module& setNext(Module::Next && next) { DARABONBA_PTR_SET_RVALUE(next_, next) };


      // nextPage Field Functions 
      bool hasNextPage() const { return this->nextPage_ != nullptr;};
      void deleteNextPage() { this->nextPage_ = nullptr;};
      inline bool getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, false) };
      inline Module& setNextPage(bool nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Module& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // prePage Field Functions 
      bool hasPrePage() const { return this->prePage_ != nullptr;};
      void deletePrePage() { this->prePage_ = nullptr;};
      inline bool getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, false) };
      inline Module& setPrePage(bool prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


      // resultLimit Field Functions 
      bool hasResultLimit() const { return this->resultLimit_ != nullptr;};
      void deleteResultLimit() { this->resultLimit_ = nullptr;};
      inline bool getResultLimit() const { DARABONBA_PTR_GET_DEFAULT(resultLimit_, false) };
      inline Module& setResultLimit(bool resultLimit) { DARABONBA_PTR_SET_VALUE(resultLimit_, resultLimit) };


      // totalItemNum Field Functions 
      bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
      void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
      inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
      inline Module& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


      // totalPageNum Field Functions 
      bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
      void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
      inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
      inline Module& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


    protected:
      shared_ptr<int32_t> currentPageNum_ {};
      shared_ptr<vector<Module::Data>> data_ {};
      shared_ptr<Module::Next> next_ {};
      shared_ptr<bool> nextPage_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<bool> prePage_ {};
      shared_ptr<bool> resultLimit_ {};
      shared_ptr<int32_t> totalItemNum_ {};
      shared_ptr<int32_t> totalPageNum_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->maxResults_ == nullptr && this->module_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr
        && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListAppInstanceDomainsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline ListAppInstanceDomainsResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAppInstanceDomainsResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListAppInstanceDomainsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListAppInstanceDomainsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline ListAppInstanceDomainsResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline ListAppInstanceDomainsResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAppInstanceDomainsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const ListAppInstanceDomainsResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, ListAppInstanceDomainsResponseBody::Module) };
    inline ListAppInstanceDomainsResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, ListAppInstanceDomainsResponseBody::Module) };
    inline ListAppInstanceDomainsResponseBody& setModule(const ListAppInstanceDomainsResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline ListAppInstanceDomainsResponseBody& setModule(ListAppInstanceDomainsResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAppInstanceDomainsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppInstanceDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline ListAppInstanceDomainsResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline ListAppInstanceDomainsResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline ListAppInstanceDomainsResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<bool> allowRetry_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<ListAppInstanceDomainsResponseBody::Module> module_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> rootErrorCode_ {};
    shared_ptr<string> rootErrorMsg_ {};
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
