// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTIFICATEINFOBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTIFICATEINFOBYIDRESPONSEBODY_HPP_
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
  class DescribeCertificateInfoByIDResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertificateInfoByIDResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfos, certInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertificateInfoByIDResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfos, certInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCertificateInfoByIDResponseBody() = default ;
    DescribeCertificateInfoByIDResponseBody(const DescribeCertificateInfoByIDResponseBody &) = default ;
    DescribeCertificateInfoByIDResponseBody(DescribeCertificateInfoByIDResponseBody &&) = default ;
    DescribeCertificateInfoByIDResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCertificateInfoByIDResponseBody() = default ;
    DescribeCertificateInfoByIDResponseBody& operator=(const DescribeCertificateInfoByIDResponseBody &) = default ;
    DescribeCertificateInfoByIDResponseBody& operator=(DescribeCertificateInfoByIDResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CertExpireTime, certExpireTime_);
          DARABONBA_PTR_TO_JSON(CertId, certId_);
          DARABONBA_PTR_TO_JSON(CertName, certName_);
          DARABONBA_PTR_TO_JSON(CertType, certType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DomainList, domainList_);
          DARABONBA_PTR_TO_JSON(HttpsCrt, httpsCrt_);
        };
        friend void from_json(const Darabonba::Json& j, CertInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CertExpireTime, certExpireTime_);
          DARABONBA_PTR_FROM_JSON(CertId, certId_);
          DARABONBA_PTR_FROM_JSON(CertName, certName_);
          DARABONBA_PTR_FROM_JSON(CertType, certType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
          DARABONBA_PTR_FROM_JSON(HttpsCrt, httpsCrt_);
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
        virtual bool empty() const override { return this->certExpireTime_ == nullptr
        && this->certId_ == nullptr && this->certName_ == nullptr && this->certType_ == nullptr && this->createTime_ == nullptr && this->domainList_ == nullptr
        && this->httpsCrt_ == nullptr; };
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


        // certName Field Functions 
        bool hasCertName() const { return this->certName_ != nullptr;};
        void deleteCertName() { this->certName_ = nullptr;};
        inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
        inline CertInfo& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


        // certType Field Functions 
        bool hasCertType() const { return this->certType_ != nullptr;};
        void deleteCertType() { this->certType_ = nullptr;};
        inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
        inline CertInfo& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline CertInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // domainList Field Functions 
        bool hasDomainList() const { return this->domainList_ != nullptr;};
        void deleteDomainList() { this->domainList_ = nullptr;};
        inline string getDomainList() const { DARABONBA_PTR_GET_DEFAULT(domainList_, "") };
        inline CertInfo& setDomainList(string domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };


        // httpsCrt Field Functions 
        bool hasHttpsCrt() const { return this->httpsCrt_ != nullptr;};
        void deleteHttpsCrt() { this->httpsCrt_ = nullptr;};
        inline string getHttpsCrt() const { DARABONBA_PTR_GET_DEFAULT(httpsCrt_, "") };
        inline CertInfo& setHttpsCrt(string httpsCrt) { DARABONBA_PTR_SET_VALUE(httpsCrt_, httpsCrt) };


      protected:
        shared_ptr<string> certExpireTime_ {};
        shared_ptr<string> certId_ {};
        shared_ptr<string> certName_ {};
        shared_ptr<string> certType_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> domainList_ {};
        shared_ptr<string> httpsCrt_ {};
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
    inline const DescribeCertificateInfoByIDResponseBody::CertInfos & getCertInfos() const { DARABONBA_PTR_GET_CONST(certInfos_, DescribeCertificateInfoByIDResponseBody::CertInfos) };
    inline DescribeCertificateInfoByIDResponseBody::CertInfos getCertInfos() { DARABONBA_PTR_GET(certInfos_, DescribeCertificateInfoByIDResponseBody::CertInfos) };
    inline DescribeCertificateInfoByIDResponseBody& setCertInfos(const DescribeCertificateInfoByIDResponseBody::CertInfos & certInfos) { DARABONBA_PTR_SET_VALUE(certInfos_, certInfos) };
    inline DescribeCertificateInfoByIDResponseBody& setCertInfos(DescribeCertificateInfoByIDResponseBody::CertInfos && certInfos) { DARABONBA_PTR_SET_RVALUE(certInfos_, certInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCertificateInfoByIDResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeCertificateInfoByIDResponseBody::CertInfos> certInfos_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
