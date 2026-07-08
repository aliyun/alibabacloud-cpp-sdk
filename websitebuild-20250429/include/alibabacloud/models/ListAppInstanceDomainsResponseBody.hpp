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
          DARABONBA_PTR_TO_JSON(DnsConflict, dnsConflict_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Migration, migration_);
          DARABONBA_PTR_TO_JSON(OverallStatus, overallStatus_);
          DARABONBA_PTR_TO_JSON(Ownership, ownership_);
          DARABONBA_PTR_TO_JSON(Qualification, qualification_);
          DARABONBA_PTR_TO_JSON(Resolution, resolution_);
          DARABONBA_PTR_TO_JSON(Verification, verification_);
        };
        friend void from_json(const Darabonba::Json& j, Next& obj) { 
          DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DnsConflict, dnsConflict_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(Migration, migration_);
          DARABONBA_PTR_FROM_JSON(OverallStatus, overallStatus_);
          DARABONBA_PTR_FROM_JSON(Ownership, ownership_);
          DARABONBA_PTR_FROM_JSON(Qualification, qualification_);
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
            // The host record.
            shared_ptr<string> host_ {};
            // The record type.
            shared_ptr<string> recordType_ {};
            // The record value.
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
          // The DNS record configuration guide for the user.
          shared_ptr<Verification::DnsRecord> dnsRecord_ {};
          // The error message.
          shared_ptr<string> errorMsg_ {};
          // The ownership verification status.
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
            // The host record.
            shared_ptr<string> host_ {};
            // The record type.
            shared_ptr<string> recordType_ {};
            // The record value.
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
          // The DNS record information.
          shared_ptr<Resolution::DnsRecord> dnsRecord_ {};
          // The error message.
          shared_ptr<string> errorMsg_ {};
          // The domain name resolution status.
          shared_ptr<string> resolutionStatus_ {};
        };

        class Qualification : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Qualification& obj) { 
            DARABONBA_PTR_TO_JSON(IcpRecordNumber, icpRecordNumber_);
            DARABONBA_PTR_TO_JSON(IcpSiteRecordNumber, icpSiteRecordNumber_);
            DARABONBA_PTR_TO_JSON(PoliceRecordNumber, policeRecordNumber_);
          };
          friend void from_json(const Darabonba::Json& j, Qualification& obj) { 
            DARABONBA_PTR_FROM_JSON(IcpRecordNumber, icpRecordNumber_);
            DARABONBA_PTR_FROM_JSON(IcpSiteRecordNumber, icpSiteRecordNumber_);
            DARABONBA_PTR_FROM_JSON(PoliceRecordNumber, policeRecordNumber_);
          };
          Qualification() = default ;
          Qualification(const Qualification &) = default ;
          Qualification(Qualification &&) = default ;
          Qualification(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Qualification() = default ;
          Qualification& operator=(const Qualification &) = default ;
          Qualification& operator=(Qualification &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->icpRecordNumber_ == nullptr
        && this->icpSiteRecordNumber_ == nullptr && this->policeRecordNumber_ == nullptr; };
          // icpRecordNumber Field Functions 
          bool hasIcpRecordNumber() const { return this->icpRecordNumber_ != nullptr;};
          void deleteIcpRecordNumber() { this->icpRecordNumber_ = nullptr;};
          inline string getIcpRecordNumber() const { DARABONBA_PTR_GET_DEFAULT(icpRecordNumber_, "") };
          inline Qualification& setIcpRecordNumber(string icpRecordNumber) { DARABONBA_PTR_SET_VALUE(icpRecordNumber_, icpRecordNumber) };


          // icpSiteRecordNumber Field Functions 
          bool hasIcpSiteRecordNumber() const { return this->icpSiteRecordNumber_ != nullptr;};
          void deleteIcpSiteRecordNumber() { this->icpSiteRecordNumber_ = nullptr;};
          inline string getIcpSiteRecordNumber() const { DARABONBA_PTR_GET_DEFAULT(icpSiteRecordNumber_, "") };
          inline Qualification& setIcpSiteRecordNumber(string icpSiteRecordNumber) { DARABONBA_PTR_SET_VALUE(icpSiteRecordNumber_, icpSiteRecordNumber) };


          // policeRecordNumber Field Functions 
          bool hasPoliceRecordNumber() const { return this->policeRecordNumber_ != nullptr;};
          void deletePoliceRecordNumber() { this->policeRecordNumber_ = nullptr;};
          inline string getPoliceRecordNumber() const { DARABONBA_PTR_GET_DEFAULT(policeRecordNumber_, "") };
          inline Qualification& setPoliceRecordNumber(string policeRecordNumber) { DARABONBA_PTR_SET_VALUE(policeRecordNumber_, policeRecordNumber) };


        protected:
          // The ICP entity filing number.
          shared_ptr<string> icpRecordNumber_ {};
          // The ICP website filing number.
          shared_ptr<string> icpSiteRecordNumber_ {};
          // The public security filing number.
          shared_ptr<string> policeRecordNumber_ {};
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
          // The account owner type. Valid values: CURRENT and OTHER.
          shared_ptr<string> account_ {};
          // The registrar type. Valid values: ALIYUN and OTHER.
          shared_ptr<string> provider_ {};
          shared_ptr<string> rootDomain_ {};
        };

        class Migration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Migration& obj) { 
            DARABONBA_PTR_TO_JSON(MigrationStatus, migrationStatus_);
            DARABONBA_ANY_TO_JSON(PreviousDomain, previousDomain_);
          };
          friend void from_json(const Darabonba::Json& j, Migration& obj) { 
            DARABONBA_PTR_FROM_JSON(MigrationStatus, migrationStatus_);
            DARABONBA_ANY_FROM_JSON(PreviousDomain, previousDomain_);
          };
          Migration() = default ;
          Migration(const Migration &) = default ;
          Migration(Migration &&) = default ;
          Migration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Migration() = default ;
          Migration& operator=(const Migration &) = default ;
          Migration& operator=(Migration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->migrationStatus_ == nullptr
        && this->previousDomain_ == nullptr; };
          // migrationStatus Field Functions 
          bool hasMigrationStatus() const { return this->migrationStatus_ != nullptr;};
          void deleteMigrationStatus() { this->migrationStatus_ = nullptr;};
          inline string getMigrationStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationStatus_, "") };
          inline Migration& setMigrationStatus(string migrationStatus) { DARABONBA_PTR_SET_VALUE(migrationStatus_, migrationStatus) };


          // previousDomain Field Functions 
          bool hasPreviousDomain() const { return this->previousDomain_ != nullptr;};
          void deletePreviousDomain() { this->previousDomain_ = nullptr;};
          inline           const Darabonba::Json & getPreviousDomain() const { DARABONBA_GET(previousDomain_) };
          Darabonba::Json & getPreviousDomain() { DARABONBA_GET(previousDomain_) };
          inline Migration& setPreviousDomain(const Darabonba::Json & previousDomain) { DARABONBA_SET_VALUE(previousDomain_, previousDomain) };
          inline Migration& setPreviousDomain(Darabonba::Json && previousDomain) { DARABONBA_SET_RVALUE(previousDomain_, previousDomain) };


        protected:
          shared_ptr<string> migrationStatus_ {};
          Darabonba::Json previousDomain_ {};
        };

        class DnsConflict : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DnsConflict& obj) { 
            DARABONBA_PTR_TO_JSON(CanAutoResolve, canAutoResolve_);
            DARABONBA_PTR_TO_JSON(HasConflict, hasConflict_);
            DARABONBA_PTR_TO_JSON(Message, message_);
            DARABONBA_PTR_TO_JSON(Records, records_);
          };
          friend void from_json(const Darabonba::Json& j, DnsConflict& obj) { 
            DARABONBA_PTR_FROM_JSON(CanAutoResolve, canAutoResolve_);
            DARABONBA_PTR_FROM_JSON(HasConflict, hasConflict_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
            DARABONBA_PTR_FROM_JSON(Records, records_);
          };
          DnsConflict() = default ;
          DnsConflict(const DnsConflict &) = default ;
          DnsConflict(DnsConflict &&) = default ;
          DnsConflict(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DnsConflict() = default ;
          DnsConflict& operator=(const DnsConflict &) = default ;
          DnsConflict& operator=(DnsConflict &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Records : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Records& obj) { 
              DARABONBA_PTR_TO_JSON(Host, host_);
              DARABONBA_PTR_TO_JSON(RecordType, recordType_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Records& obj) { 
              DARABONBA_PTR_FROM_JSON(Host, host_);
              DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Records() = default ;
            Records(const Records &) = default ;
            Records(Records &&) = default ;
            Records(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Records() = default ;
            Records& operator=(const Records &) = default ;
            Records& operator=(Records &&) = default ;
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
            inline Records& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


            // recordType Field Functions 
            bool hasRecordType() const { return this->recordType_ != nullptr;};
            void deleteRecordType() { this->recordType_ = nullptr;};
            inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
            inline Records& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Records& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> host_ {};
            shared_ptr<string> recordType_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->canAutoResolve_ == nullptr
        && this->hasConflict_ == nullptr && this->message_ == nullptr && this->records_ == nullptr; };
          // canAutoResolve Field Functions 
          bool hasCanAutoResolve() const { return this->canAutoResolve_ != nullptr;};
          void deleteCanAutoResolve() { this->canAutoResolve_ = nullptr;};
          inline bool getCanAutoResolve() const { DARABONBA_PTR_GET_DEFAULT(canAutoResolve_, false) };
          inline DnsConflict& setCanAutoResolve(bool canAutoResolve) { DARABONBA_PTR_SET_VALUE(canAutoResolve_, canAutoResolve) };


          // hasConflict Field Functions 
          bool hasHasConflict() const { return this->hasConflict_ != nullptr;};
          void deleteHasConflict() { this->hasConflict_ = nullptr;};
          inline bool getHasConflict() const { DARABONBA_PTR_GET_DEFAULT(hasConflict_, false) };
          inline DnsConflict& setHasConflict(bool hasConflict) { DARABONBA_PTR_SET_VALUE(hasConflict_, hasConflict) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline DnsConflict& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


          // records Field Functions 
          bool hasRecords() const { return this->records_ != nullptr;};
          void deleteRecords() { this->records_ = nullptr;};
          inline const vector<DnsConflict::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<DnsConflict::Records>) };
          inline vector<DnsConflict::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<DnsConflict::Records>) };
          inline DnsConflict& setRecords(const vector<DnsConflict::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
          inline DnsConflict& setRecords(vector<DnsConflict::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


        protected:
          shared_ptr<bool> canAutoResolve_ {};
          shared_ptr<bool> hasConflict_ {};
          shared_ptr<string> message_ {};
          shared_ptr<vector<DnsConflict::Records>> records_ {};
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
          // The certificate name.
          shared_ptr<string> certificateName_ {};
          // The certificate status.
          shared_ptr<string> certificateStatus_ {};
          // The certificate type.
          shared_ptr<string> certificateType_ {};
          // The certificate expiration date.
          shared_ptr<string> endTime_ {};
        };

        virtual bool empty() const override { return this->certificate_ == nullptr
        && this->createTime_ == nullptr && this->dnsConflict_ == nullptr && this->domainName_ == nullptr && this->migration_ == nullptr && this->overallStatus_ == nullptr
        && this->ownership_ == nullptr && this->qualification_ == nullptr && this->resolution_ == nullptr && this->verification_ == nullptr; };
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


        // dnsConflict Field Functions 
        bool hasDnsConflict() const { return this->dnsConflict_ != nullptr;};
        void deleteDnsConflict() { this->dnsConflict_ = nullptr;};
        inline const Next::DnsConflict & getDnsConflict() const { DARABONBA_PTR_GET_CONST(dnsConflict_, Next::DnsConflict) };
        inline Next::DnsConflict getDnsConflict() { DARABONBA_PTR_GET(dnsConflict_, Next::DnsConflict) };
        inline Next& setDnsConflict(const Next::DnsConflict & dnsConflict) { DARABONBA_PTR_SET_VALUE(dnsConflict_, dnsConflict) };
        inline Next& setDnsConflict(Next::DnsConflict && dnsConflict) { DARABONBA_PTR_SET_RVALUE(dnsConflict_, dnsConflict) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline Next& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // migration Field Functions 
        bool hasMigration() const { return this->migration_ != nullptr;};
        void deleteMigration() { this->migration_ = nullptr;};
        inline const Next::Migration & getMigration() const { DARABONBA_PTR_GET_CONST(migration_, Next::Migration) };
        inline Next::Migration getMigration() { DARABONBA_PTR_GET(migration_, Next::Migration) };
        inline Next& setMigration(const Next::Migration & migration) { DARABONBA_PTR_SET_VALUE(migration_, migration) };
        inline Next& setMigration(Next::Migration && migration) { DARABONBA_PTR_SET_RVALUE(migration_, migration) };


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


        // qualification Field Functions 
        bool hasQualification() const { return this->qualification_ != nullptr;};
        void deleteQualification() { this->qualification_ = nullptr;};
        inline const Next::Qualification & getQualification() const { DARABONBA_PTR_GET_CONST(qualification_, Next::Qualification) };
        inline Next::Qualification getQualification() { DARABONBA_PTR_GET(qualification_, Next::Qualification) };
        inline Next& setQualification(const Next::Qualification & qualification) { DARABONBA_PTR_SET_VALUE(qualification_, qualification) };
        inline Next& setQualification(Next::Qualification && qualification) { DARABONBA_PTR_SET_RVALUE(qualification_, qualification) };


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
        // The domain name SSL certificate information.
        shared_ptr<Next::Certificate> certificate_ {};
        // The instance creation time. This parameter is required. Format: yyyy-MM-dd HH:mm:ss.
        shared_ptr<string> createTime_ {};
        shared_ptr<Next::DnsConflict> dnsConflict_ {};
        // The domain name.
        shared_ptr<string> domainName_ {};
        shared_ptr<Next::Migration> migration_ {};
        // The overall binding status.
        shared_ptr<string> overallStatus_ {};
        // The domain name ownership information.
        shared_ptr<Next::Ownership> ownership_ {};
        // The domain name qualification information.
        shared_ptr<Next::Qualification> qualification_ {};
        // The domain name resolution information.
        shared_ptr<Next::Resolution> resolution_ {};
        // The domain name verification information.
        shared_ptr<Next::Verification> verification_ {};
      };

      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Certificate, certificate_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DnsConflict, dnsConflict_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Migration, migration_);
          DARABONBA_PTR_TO_JSON(OverallStatus, overallStatus_);
          DARABONBA_PTR_TO_JSON(Ownership, ownership_);
          DARABONBA_PTR_TO_JSON(Qualification, qualification_);
          DARABONBA_PTR_TO_JSON(Resolution, resolution_);
          DARABONBA_PTR_TO_JSON(Verification, verification_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DnsConflict, dnsConflict_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(Migration, migration_);
          DARABONBA_PTR_FROM_JSON(OverallStatus, overallStatus_);
          DARABONBA_PTR_FROM_JSON(Ownership, ownership_);
          DARABONBA_PTR_FROM_JSON(Qualification, qualification_);
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
            // The host record.
            shared_ptr<string> host_ {};
            // The record type.
            shared_ptr<string> recordType_ {};
            // The record value.
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
          // The DNS record configuration guide for the user.
          shared_ptr<Verification::DnsRecord> dnsRecord_ {};
          // The error message.
          shared_ptr<string> errorMsg_ {};
          // The ownership verification status.
          shared_ptr<string> verificationStatus_ {};
          // The ownership verification status.
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
            // The host record.
            shared_ptr<string> host_ {};
            // The record type.
            shared_ptr<string> recordType_ {};
            // The record value.
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
          // The DNS record information.
          shared_ptr<Resolution::DnsRecord> dnsRecord_ {};
          // The error message.
          shared_ptr<string> errorMsg_ {};
          // The domain name resolution status.
          shared_ptr<string> resolutionStatus_ {};
        };

        class Qualification : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Qualification& obj) { 
            DARABONBA_PTR_TO_JSON(IcpRecordNumber, icpRecordNumber_);
            DARABONBA_PTR_TO_JSON(IcpSiteRecordNumber, icpSiteRecordNumber_);
            DARABONBA_PTR_TO_JSON(PoliceRecordNumber, policeRecordNumber_);
          };
          friend void from_json(const Darabonba::Json& j, Qualification& obj) { 
            DARABONBA_PTR_FROM_JSON(IcpRecordNumber, icpRecordNumber_);
            DARABONBA_PTR_FROM_JSON(IcpSiteRecordNumber, icpSiteRecordNumber_);
            DARABONBA_PTR_FROM_JSON(PoliceRecordNumber, policeRecordNumber_);
          };
          Qualification() = default ;
          Qualification(const Qualification &) = default ;
          Qualification(Qualification &&) = default ;
          Qualification(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Qualification() = default ;
          Qualification& operator=(const Qualification &) = default ;
          Qualification& operator=(Qualification &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->icpRecordNumber_ == nullptr
        && this->icpSiteRecordNumber_ == nullptr && this->policeRecordNumber_ == nullptr; };
          // icpRecordNumber Field Functions 
          bool hasIcpRecordNumber() const { return this->icpRecordNumber_ != nullptr;};
          void deleteIcpRecordNumber() { this->icpRecordNumber_ = nullptr;};
          inline string getIcpRecordNumber() const { DARABONBA_PTR_GET_DEFAULT(icpRecordNumber_, "") };
          inline Qualification& setIcpRecordNumber(string icpRecordNumber) { DARABONBA_PTR_SET_VALUE(icpRecordNumber_, icpRecordNumber) };


          // icpSiteRecordNumber Field Functions 
          bool hasIcpSiteRecordNumber() const { return this->icpSiteRecordNumber_ != nullptr;};
          void deleteIcpSiteRecordNumber() { this->icpSiteRecordNumber_ = nullptr;};
          inline string getIcpSiteRecordNumber() const { DARABONBA_PTR_GET_DEFAULT(icpSiteRecordNumber_, "") };
          inline Qualification& setIcpSiteRecordNumber(string icpSiteRecordNumber) { DARABONBA_PTR_SET_VALUE(icpSiteRecordNumber_, icpSiteRecordNumber) };


          // policeRecordNumber Field Functions 
          bool hasPoliceRecordNumber() const { return this->policeRecordNumber_ != nullptr;};
          void deletePoliceRecordNumber() { this->policeRecordNumber_ = nullptr;};
          inline string getPoliceRecordNumber() const { DARABONBA_PTR_GET_DEFAULT(policeRecordNumber_, "") };
          inline Qualification& setPoliceRecordNumber(string policeRecordNumber) { DARABONBA_PTR_SET_VALUE(policeRecordNumber_, policeRecordNumber) };


        protected:
          // The ICP entity filing number.
          shared_ptr<string> icpRecordNumber_ {};
          // The ICP website filing number.
          shared_ptr<string> icpSiteRecordNumber_ {};
          // The public security filing number.
          shared_ptr<string> policeRecordNumber_ {};
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
          // The account owner type. Valid values: CURRENT and OTHER.
          shared_ptr<string> account_ {};
          // The registrar type. Valid values: ALIYUN and OTHER.
          shared_ptr<string> provider_ {};
          // The root domain name corresponding to the domain name.
          shared_ptr<string> rootDomain_ {};
        };

        class Migration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Migration& obj) { 
            DARABONBA_PTR_TO_JSON(MigrationStatus, migrationStatus_);
            DARABONBA_ANY_TO_JSON(PreviousDomain, previousDomain_);
          };
          friend void from_json(const Darabonba::Json& j, Migration& obj) { 
            DARABONBA_PTR_FROM_JSON(MigrationStatus, migrationStatus_);
            DARABONBA_ANY_FROM_JSON(PreviousDomain, previousDomain_);
          };
          Migration() = default ;
          Migration(const Migration &) = default ;
          Migration(Migration &&) = default ;
          Migration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Migration() = default ;
          Migration& operator=(const Migration &) = default ;
          Migration& operator=(Migration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->migrationStatus_ == nullptr
        && this->previousDomain_ == nullptr; };
          // migrationStatus Field Functions 
          bool hasMigrationStatus() const { return this->migrationStatus_ != nullptr;};
          void deleteMigrationStatus() { this->migrationStatus_ = nullptr;};
          inline string getMigrationStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationStatus_, "") };
          inline Migration& setMigrationStatus(string migrationStatus) { DARABONBA_PTR_SET_VALUE(migrationStatus_, migrationStatus) };


          // previousDomain Field Functions 
          bool hasPreviousDomain() const { return this->previousDomain_ != nullptr;};
          void deletePreviousDomain() { this->previousDomain_ = nullptr;};
          inline           const Darabonba::Json & getPreviousDomain() const { DARABONBA_GET(previousDomain_) };
          Darabonba::Json & getPreviousDomain() { DARABONBA_GET(previousDomain_) };
          inline Migration& setPreviousDomain(const Darabonba::Json & previousDomain) { DARABONBA_SET_VALUE(previousDomain_, previousDomain) };
          inline Migration& setPreviousDomain(Darabonba::Json && previousDomain) { DARABONBA_SET_RVALUE(previousDomain_, previousDomain) };


        protected:
          shared_ptr<string> migrationStatus_ {};
          Darabonba::Json previousDomain_ {};
        };

        class DnsConflict : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DnsConflict& obj) { 
            DARABONBA_PTR_TO_JSON(CanAutoResolve, canAutoResolve_);
            DARABONBA_PTR_TO_JSON(HasConflict, hasConflict_);
            DARABONBA_PTR_TO_JSON(Message, message_);
            DARABONBA_PTR_TO_JSON(Records, records_);
          };
          friend void from_json(const Darabonba::Json& j, DnsConflict& obj) { 
            DARABONBA_PTR_FROM_JSON(CanAutoResolve, canAutoResolve_);
            DARABONBA_PTR_FROM_JSON(HasConflict, hasConflict_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
            DARABONBA_PTR_FROM_JSON(Records, records_);
          };
          DnsConflict() = default ;
          DnsConflict(const DnsConflict &) = default ;
          DnsConflict(DnsConflict &&) = default ;
          DnsConflict(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DnsConflict() = default ;
          DnsConflict& operator=(const DnsConflict &) = default ;
          DnsConflict& operator=(DnsConflict &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Records : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Records& obj) { 
              DARABONBA_PTR_TO_JSON(Host, host_);
              DARABONBA_PTR_TO_JSON(RecordType, recordType_);
              DARABONBA_PTR_TO_JSON(Status, status_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Records& obj) { 
              DARABONBA_PTR_FROM_JSON(Host, host_);
              DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Records() = default ;
            Records(const Records &) = default ;
            Records(Records &&) = default ;
            Records(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Records() = default ;
            Records& operator=(const Records &) = default ;
            Records& operator=(Records &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->host_ == nullptr
        && this->recordType_ == nullptr && this->status_ == nullptr && this->value_ == nullptr; };
            // host Field Functions 
            bool hasHost() const { return this->host_ != nullptr;};
            void deleteHost() { this->host_ = nullptr;};
            inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
            inline Records& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


            // recordType Field Functions 
            bool hasRecordType() const { return this->recordType_ != nullptr;};
            void deleteRecordType() { this->recordType_ = nullptr;};
            inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
            inline Records& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline Records& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Records& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> host_ {};
            shared_ptr<string> recordType_ {};
            shared_ptr<string> status_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->canAutoResolve_ == nullptr
        && this->hasConflict_ == nullptr && this->message_ == nullptr && this->records_ == nullptr; };
          // canAutoResolve Field Functions 
          bool hasCanAutoResolve() const { return this->canAutoResolve_ != nullptr;};
          void deleteCanAutoResolve() { this->canAutoResolve_ = nullptr;};
          inline bool getCanAutoResolve() const { DARABONBA_PTR_GET_DEFAULT(canAutoResolve_, false) };
          inline DnsConflict& setCanAutoResolve(bool canAutoResolve) { DARABONBA_PTR_SET_VALUE(canAutoResolve_, canAutoResolve) };


          // hasConflict Field Functions 
          bool hasHasConflict() const { return this->hasConflict_ != nullptr;};
          void deleteHasConflict() { this->hasConflict_ = nullptr;};
          inline bool getHasConflict() const { DARABONBA_PTR_GET_DEFAULT(hasConflict_, false) };
          inline DnsConflict& setHasConflict(bool hasConflict) { DARABONBA_PTR_SET_VALUE(hasConflict_, hasConflict) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline DnsConflict& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


          // records Field Functions 
          bool hasRecords() const { return this->records_ != nullptr;};
          void deleteRecords() { this->records_ = nullptr;};
          inline const vector<DnsConflict::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<DnsConflict::Records>) };
          inline vector<DnsConflict::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<DnsConflict::Records>) };
          inline DnsConflict& setRecords(const vector<DnsConflict::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
          inline DnsConflict& setRecords(vector<DnsConflict::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


        protected:
          shared_ptr<bool> canAutoResolve_ {};
          shared_ptr<bool> hasConflict_ {};
          shared_ptr<string> message_ {};
          shared_ptr<vector<DnsConflict::Records>> records_ {};
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
          // The certificate name.
          shared_ptr<string> certificateName_ {};
          // The certificate status.
          shared_ptr<string> certificateStatus_ {};
          // The certificate type.
          shared_ptr<string> certificateType_ {};
          // The certificate expiration date.
          shared_ptr<string> endTime_ {};
        };

        virtual bool empty() const override { return this->certificate_ == nullptr
        && this->createTime_ == nullptr && this->dnsConflict_ == nullptr && this->domainName_ == nullptr && this->migration_ == nullptr && this->overallStatus_ == nullptr
        && this->ownership_ == nullptr && this->qualification_ == nullptr && this->resolution_ == nullptr && this->verification_ == nullptr; };
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


        // dnsConflict Field Functions 
        bool hasDnsConflict() const { return this->dnsConflict_ != nullptr;};
        void deleteDnsConflict() { this->dnsConflict_ = nullptr;};
        inline const Data::DnsConflict & getDnsConflict() const { DARABONBA_PTR_GET_CONST(dnsConflict_, Data::DnsConflict) };
        inline Data::DnsConflict getDnsConflict() { DARABONBA_PTR_GET(dnsConflict_, Data::DnsConflict) };
        inline Data& setDnsConflict(const Data::DnsConflict & dnsConflict) { DARABONBA_PTR_SET_VALUE(dnsConflict_, dnsConflict) };
        inline Data& setDnsConflict(Data::DnsConflict && dnsConflict) { DARABONBA_PTR_SET_RVALUE(dnsConflict_, dnsConflict) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline Data& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // migration Field Functions 
        bool hasMigration() const { return this->migration_ != nullptr;};
        void deleteMigration() { this->migration_ = nullptr;};
        inline const Data::Migration & getMigration() const { DARABONBA_PTR_GET_CONST(migration_, Data::Migration) };
        inline Data::Migration getMigration() { DARABONBA_PTR_GET(migration_, Data::Migration) };
        inline Data& setMigration(const Data::Migration & migration) { DARABONBA_PTR_SET_VALUE(migration_, migration) };
        inline Data& setMigration(Data::Migration && migration) { DARABONBA_PTR_SET_RVALUE(migration_, migration) };


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


        // qualification Field Functions 
        bool hasQualification() const { return this->qualification_ != nullptr;};
        void deleteQualification() { this->qualification_ = nullptr;};
        inline const Data::Qualification & getQualification() const { DARABONBA_PTR_GET_CONST(qualification_, Data::Qualification) };
        inline Data::Qualification getQualification() { DARABONBA_PTR_GET(qualification_, Data::Qualification) };
        inline Data& setQualification(const Data::Qualification & qualification) { DARABONBA_PTR_SET_VALUE(qualification_, qualification) };
        inline Data& setQualification(Data::Qualification && qualification) { DARABONBA_PTR_SET_RVALUE(qualification_, qualification) };


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
        // The domain name SSL certificate information.
        shared_ptr<Data::Certificate> certificate_ {};
        // The instance creation time. This parameter is required. Format: yyyy-MM-dd HH:mm:ss.
        shared_ptr<string> createTime_ {};
        shared_ptr<Data::DnsConflict> dnsConflict_ {};
        // The domain name.
        shared_ptr<string> domainName_ {};
        shared_ptr<Data::Migration> migration_ {};
        // The overall binding status.
        shared_ptr<string> overallStatus_ {};
        // The domain name ownership information.
        shared_ptr<Data::Ownership> ownership_ {};
        // The domain name qualification information.
        shared_ptr<Data::Qualification> qualification_ {};
        // The domain name resolution information.
        shared_ptr<Data::Resolution> resolution_ {};
        // The domain name verification information.
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
      // The current page number.
      shared_ptr<int32_t> currentPageNum_ {};
      // The request result.
      shared_ptr<vector<Module::Data>> data_ {};
      // The decision weight.
      shared_ptr<Module::Next> next_ {};
      // Indicates whether a next page exists.
      shared_ptr<bool> nextPage_ {};
      // The page size.
      shared_ptr<int32_t> pageSize_ {};
      // Indicates whether a previous page exists.
      shared_ptr<bool> prePage_ {};
      // In addition to pagination limits, the server processes up to 1,000 recent records per query. If the result exceeds 1,000 records, **ResultLimit** is **true**, and you need to narrow the time range and search again. Otherwise, **ResultLimit** is **false**.
      shared_ptr<bool> resultLimit_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalItemNum_ {};
      // The total number of pages.
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
    // The detailed reason why access was denied.
    shared_ptr<string> accessDeniedDetail_ {};
    // Indicates whether retry is allowed.
    shared_ptr<bool> allowRetry_ {};
    // The application name.
    shared_ptr<string> appName_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message, which replaces the `%s` placeholder in the **ErrMessage** return parameter.
    // > If **ErrMessage** returns **The Value of Input Parameter %s is not valid** and **DynamicMessage** returns **DtsJobId**, the value of the request parameter **DtsJobId** is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // The error parameters.
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // The number of entries per query.
    // 
    // Valid values: 10 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The response data.
    shared_ptr<ListAppInstanceDomainsResponseBody::Module> module_ {};
    // The token for the next query. This parameter is empty if no more results exist.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The error code.
    shared_ptr<string> rootErrorCode_ {};
    // The exception message.
    shared_ptr<string> rootErrorMsg_ {};
    // The reserved parameter.
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
