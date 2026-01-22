// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINCERTIFICATEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINCERTIFICATEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainCertificateInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainCertificateInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfos, certInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainCertificateInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfos, certInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVsDomainCertificateInfoResponseBody() = default ;
    DescribeVsDomainCertificateInfoResponseBody(const DescribeVsDomainCertificateInfoResponseBody &) = default ;
    DescribeVsDomainCertificateInfoResponseBody(DescribeVsDomainCertificateInfoResponseBody &&) = default ;
    DescribeVsDomainCertificateInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainCertificateInfoResponseBody() = default ;
    DescribeVsDomainCertificateInfoResponseBody& operator=(const DescribeVsDomainCertificateInfoResponseBody &) = default ;
    DescribeVsDomainCertificateInfoResponseBody& operator=(DescribeVsDomainCertificateInfoResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CertLife, certLife_);
          DARABONBA_PTR_TO_JSON(CertName, certName_);
          DARABONBA_PTR_TO_JSON(CertOrg, certOrg_);
          DARABONBA_PTR_TO_JSON(CertType, certType_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(SSLPub, SSLPub_);
          DARABONBA_PTR_TO_JSON(ServerCertificateStatus, serverCertificateStatus_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, CertInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CertDomainName, certDomainName_);
          DARABONBA_PTR_FROM_JSON(CertExpireTime, certExpireTime_);
          DARABONBA_PTR_FROM_JSON(CertLife, certLife_);
          DARABONBA_PTR_FROM_JSON(CertName, certName_);
          DARABONBA_PTR_FROM_JSON(CertOrg, certOrg_);
          DARABONBA_PTR_FROM_JSON(CertType, certType_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(SSLPub, SSLPub_);
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
        && this->certExpireTime_ == nullptr && this->certLife_ == nullptr && this->certName_ == nullptr && this->certOrg_ == nullptr && this->certType_ == nullptr
        && this->domainName_ == nullptr && this->SSLPub_ == nullptr && this->serverCertificateStatus_ == nullptr && this->status_ == nullptr; };
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


        // certType Field Functions 
        bool hasCertType() const { return this->certType_ != nullptr;};
        void deleteCertType() { this->certType_ = nullptr;};
        inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
        inline CertInfo& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline CertInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // SSLPub Field Functions 
        bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
        void deleteSSLPub() { this->SSLPub_ = nullptr;};
        inline string getSSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
        inline CertInfo& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


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
        shared_ptr<string> certLife_ {};
        shared_ptr<string> certName_ {};
        shared_ptr<string> certOrg_ {};
        shared_ptr<string> certType_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<string> SSLPub_ {};
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
    inline const DescribeVsDomainCertificateInfoResponseBody::CertInfos & getCertInfos() const { DARABONBA_PTR_GET_CONST(certInfos_, DescribeVsDomainCertificateInfoResponseBody::CertInfos) };
    inline DescribeVsDomainCertificateInfoResponseBody::CertInfos getCertInfos() { DARABONBA_PTR_GET(certInfos_, DescribeVsDomainCertificateInfoResponseBody::CertInfos) };
    inline DescribeVsDomainCertificateInfoResponseBody& setCertInfos(const DescribeVsDomainCertificateInfoResponseBody::CertInfos & certInfos) { DARABONBA_PTR_SET_VALUE(certInfos_, certInfos) };
    inline DescribeVsDomainCertificateInfoResponseBody& setCertInfos(DescribeVsDomainCertificateInfoResponseBody::CertInfos && certInfos) { DARABONBA_PTR_SET_RVALUE(certInfos_, certInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsDomainCertificateInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeVsDomainCertificateInfoResponseBody::CertInfos> certInfos_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
