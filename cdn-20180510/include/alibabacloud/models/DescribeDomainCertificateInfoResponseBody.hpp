// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINCERTIFICATEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINCERTIFICATEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainCertificateInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainCertificateInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfos, certInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainCertificateInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfos, certInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainCertificateInfoResponseBody() = default ;
    DescribeDomainCertificateInfoResponseBody(const DescribeDomainCertificateInfoResponseBody &) = default ;
    DescribeDomainCertificateInfoResponseBody(DescribeDomainCertificateInfoResponseBody &&) = default ;
    DescribeDomainCertificateInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainCertificateInfoResponseBody() = default ;
    DescribeDomainCertificateInfoResponseBody& operator=(const DescribeDomainCertificateInfoResponseBody &) = default ;
    DescribeDomainCertificateInfoResponseBody& operator=(DescribeDomainCertificateInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CertInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertInfos& obj) { 
        DARABONBA_PTR_TO_JSON(CertInfo, certInfo_);
      };
      friend void from_json(const Darabonba::Json& j, CertInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(CertInfo, certInfo_);
      };
      CertInfos() = default ;
      CertInfos(const CertInfos &) = default ;
      CertInfos(CertInfos &&) = default ;
      CertInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertInfos() = default ;
      CertInfos& operator=(const CertInfos &) = default ;
      CertInfos& operator=(CertInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CertInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CertInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CertDomainName, certDomainName_);
          DARABONBA_PTR_TO_JSON(CertExpireTime, certExpireTime_);
          DARABONBA_PTR_TO_JSON(CertId, certId_);
          DARABONBA_PTR_TO_JSON(CertLife, certLife_);
          DARABONBA_PTR_TO_JSON(CertName, certName_);
          DARABONBA_PTR_TO_JSON(CertOrg, certOrg_);
          DARABONBA_PTR_TO_JSON(CertRegion, certRegion_);
          DARABONBA_PTR_TO_JSON(CertStartTime, certStartTime_);
          DARABONBA_PTR_TO_JSON(CertType, certType_);
          DARABONBA_PTR_TO_JSON(CertUpdateTime, certUpdateTime_);
          DARABONBA_PTR_TO_JSON(DomainCnameStatus, domainCnameStatus_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(ServerCertificate, serverCertificate_);
          DARABONBA_PTR_TO_JSON(ServerCertificateStatus, serverCertificateStatus_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, CertInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CertDomainName, certDomainName_);
          DARABONBA_PTR_FROM_JSON(CertExpireTime, certExpireTime_);
          DARABONBA_PTR_FROM_JSON(CertId, certId_);
          DARABONBA_PTR_FROM_JSON(CertLife, certLife_);
          DARABONBA_PTR_FROM_JSON(CertName, certName_);
          DARABONBA_PTR_FROM_JSON(CertOrg, certOrg_);
          DARABONBA_PTR_FROM_JSON(CertRegion, certRegion_);
          DARABONBA_PTR_FROM_JSON(CertStartTime, certStartTime_);
          DARABONBA_PTR_FROM_JSON(CertType, certType_);
          DARABONBA_PTR_FROM_JSON(CertUpdateTime, certUpdateTime_);
          DARABONBA_PTR_FROM_JSON(DomainCnameStatus, domainCnameStatus_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(ServerCertificate, serverCertificate_);
          DARABONBA_PTR_FROM_JSON(ServerCertificateStatus, serverCertificateStatus_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        CertInfo() = default ;
        CertInfo(const CertInfo &) = default ;
        CertInfo(CertInfo &&) = default ;
        CertInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CertInfo() = default ;
        CertInfo& operator=(const CertInfo &) = default ;
        CertInfo& operator=(CertInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->certDomainName_ == nullptr
        && this->certExpireTime_ == nullptr && this->certId_ == nullptr && this->certLife_ == nullptr && this->certName_ == nullptr && this->certOrg_ == nullptr
        && this->certRegion_ == nullptr && this->certStartTime_ == nullptr && this->certType_ == nullptr && this->certUpdateTime_ == nullptr && this->domainCnameStatus_ == nullptr
        && this->domainName_ == nullptr && this->serverCertificate_ == nullptr && this->serverCertificateStatus_ == nullptr && this->status_ == nullptr; };
        // certDomainName Field Functions 
        bool hasCertDomainName() const { return this->certDomainName_ != nullptr;};
        void deleteCertDomainName() { this->certDomainName_ = nullptr;};
        inline string getCertDomainName() const { DARABONBA_PTR_GET_DEFAULT(certDomainName_, "") };
        inline CertInfo& setCertDomainName(string certDomainName) { DARABONBA_PTR_SET_VALUE(certDomainName_, certDomainName) };


        // certExpireTime Field Functions 
        bool hasCertExpireTime() const { return this->certExpireTime_ != nullptr;};
        void deleteCertExpireTime() { this->certExpireTime_ = nullptr;};
        inline string getCertExpireTime() const { DARABONBA_PTR_GET_DEFAULT(certExpireTime_, "") };
        inline CertInfo& setCertExpireTime(string certExpireTime) { DARABONBA_PTR_SET_VALUE(certExpireTime_, certExpireTime) };


        // certId Field Functions 
        bool hasCertId() const { return this->certId_ != nullptr;};
        void deleteCertId() { this->certId_ = nullptr;};
        inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
        inline CertInfo& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


        // certLife Field Functions 
        bool hasCertLife() const { return this->certLife_ != nullptr;};
        void deleteCertLife() { this->certLife_ = nullptr;};
        inline string getCertLife() const { DARABONBA_PTR_GET_DEFAULT(certLife_, "") };
        inline CertInfo& setCertLife(string certLife) { DARABONBA_PTR_SET_VALUE(certLife_, certLife) };


        // certName Field Functions 
        bool hasCertName() const { return this->certName_ != nullptr;};
        void deleteCertName() { this->certName_ = nullptr;};
        inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
        inline CertInfo& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


        // certOrg Field Functions 
        bool hasCertOrg() const { return this->certOrg_ != nullptr;};
        void deleteCertOrg() { this->certOrg_ = nullptr;};
        inline string getCertOrg() const { DARABONBA_PTR_GET_DEFAULT(certOrg_, "") };
        inline CertInfo& setCertOrg(string certOrg) { DARABONBA_PTR_SET_VALUE(certOrg_, certOrg) };


        // certRegion Field Functions 
        bool hasCertRegion() const { return this->certRegion_ != nullptr;};
        void deleteCertRegion() { this->certRegion_ = nullptr;};
        inline string getCertRegion() const { DARABONBA_PTR_GET_DEFAULT(certRegion_, "") };
        inline CertInfo& setCertRegion(string certRegion) { DARABONBA_PTR_SET_VALUE(certRegion_, certRegion) };


        // certStartTime Field Functions 
        bool hasCertStartTime() const { return this->certStartTime_ != nullptr;};
        void deleteCertStartTime() { this->certStartTime_ = nullptr;};
        inline string getCertStartTime() const { DARABONBA_PTR_GET_DEFAULT(certStartTime_, "") };
        inline CertInfo& setCertStartTime(string certStartTime) { DARABONBA_PTR_SET_VALUE(certStartTime_, certStartTime) };


        // certType Field Functions 
        bool hasCertType() const { return this->certType_ != nullptr;};
        void deleteCertType() { this->certType_ = nullptr;};
        inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
        inline CertInfo& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


        // certUpdateTime Field Functions 
        bool hasCertUpdateTime() const { return this->certUpdateTime_ != nullptr;};
        void deleteCertUpdateTime() { this->certUpdateTime_ = nullptr;};
        inline string getCertUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(certUpdateTime_, "") };
        inline CertInfo& setCertUpdateTime(string certUpdateTime) { DARABONBA_PTR_SET_VALUE(certUpdateTime_, certUpdateTime) };


        // domainCnameStatus Field Functions 
        bool hasDomainCnameStatus() const { return this->domainCnameStatus_ != nullptr;};
        void deleteDomainCnameStatus() { this->domainCnameStatus_ = nullptr;};
        inline string getDomainCnameStatus() const { DARABONBA_PTR_GET_DEFAULT(domainCnameStatus_, "") };
        inline CertInfo& setDomainCnameStatus(string domainCnameStatus) { DARABONBA_PTR_SET_VALUE(domainCnameStatus_, domainCnameStatus) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline CertInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // serverCertificate Field Functions 
        bool hasServerCertificate() const { return this->serverCertificate_ != nullptr;};
        void deleteServerCertificate() { this->serverCertificate_ = nullptr;};
        inline string getServerCertificate() const { DARABONBA_PTR_GET_DEFAULT(serverCertificate_, "") };
        inline CertInfo& setServerCertificate(string serverCertificate) { DARABONBA_PTR_SET_VALUE(serverCertificate_, serverCertificate) };


        // serverCertificateStatus Field Functions 
        bool hasServerCertificateStatus() const { return this->serverCertificateStatus_ != nullptr;};
        void deleteServerCertificateStatus() { this->serverCertificateStatus_ = nullptr;};
        inline string getServerCertificateStatus() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateStatus_, "") };
        inline CertInfo& setServerCertificateStatus(string serverCertificateStatus) { DARABONBA_PTR_SET_VALUE(serverCertificateStatus_, serverCertificateStatus) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CertInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> certDomainName_ {};
        shared_ptr<string> certExpireTime_ {};
        shared_ptr<string> certId_ {};
        shared_ptr<string> certLife_ {};
        shared_ptr<string> certName_ {};
        shared_ptr<string> certOrg_ {};
        shared_ptr<string> certRegion_ {};
        shared_ptr<string> certStartTime_ {};
        shared_ptr<string> certType_ {};
        shared_ptr<string> certUpdateTime_ {};
        shared_ptr<string> domainCnameStatus_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<string> serverCertificate_ {};
        shared_ptr<string> serverCertificateStatus_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->certInfo_ == nullptr; };
      // certInfo Field Functions 
      bool hasCertInfo() const { return this->certInfo_ != nullptr;};
      void deleteCertInfo() { this->certInfo_ = nullptr;};
      inline const vector<CertInfos::CertInfo> & getCertInfo() const { DARABONBA_PTR_GET_CONST(certInfo_, vector<CertInfos::CertInfo>) };
      inline vector<CertInfos::CertInfo> getCertInfo() { DARABONBA_PTR_GET(certInfo_, vector<CertInfos::CertInfo>) };
      inline CertInfos& setCertInfo(const vector<CertInfos::CertInfo> & certInfo) { DARABONBA_PTR_SET_VALUE(certInfo_, certInfo) };
      inline CertInfos& setCertInfo(vector<CertInfos::CertInfo> && certInfo) { DARABONBA_PTR_SET_RVALUE(certInfo_, certInfo) };


    protected:
      shared_ptr<vector<CertInfos::CertInfo>> certInfo_ {};
    };

    virtual bool empty() const override { return this->certInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // certInfos Field Functions 
    bool hasCertInfos() const { return this->certInfos_ != nullptr;};
    void deleteCertInfos() { this->certInfos_ = nullptr;};
    inline const DescribeDomainCertificateInfoResponseBody::CertInfos & getCertInfos() const { DARABONBA_PTR_GET_CONST(certInfos_, DescribeDomainCertificateInfoResponseBody::CertInfos) };
    inline DescribeDomainCertificateInfoResponseBody::CertInfos getCertInfos() { DARABONBA_PTR_GET(certInfos_, DescribeDomainCertificateInfoResponseBody::CertInfos) };
    inline DescribeDomainCertificateInfoResponseBody& setCertInfos(const DescribeDomainCertificateInfoResponseBody::CertInfos & certInfos) { DARABONBA_PTR_SET_VALUE(certInfos_, certInfos) };
    inline DescribeDomainCertificateInfoResponseBody& setCertInfos(DescribeDomainCertificateInfoResponseBody::CertInfos && certInfos) { DARABONBA_PTR_SET_RVALUE(certInfos_, certInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainCertificateInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeDomainCertificateInfoResponseBody::CertInfos> certInfos_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
