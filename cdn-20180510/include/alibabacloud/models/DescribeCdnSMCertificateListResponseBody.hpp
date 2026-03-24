// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNSMCERTIFICATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNSMCERTIFICATELISTRESPONSEBODY_HPP_
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
  class DescribeCdnSMCertificateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnSMCertificateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnSMCertificateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnSMCertificateListResponseBody() = default ;
    DescribeCdnSMCertificateListResponseBody(const DescribeCdnSMCertificateListResponseBody &) = default ;
    DescribeCdnSMCertificateListResponseBody(DescribeCdnSMCertificateListResponseBody &&) = default ;
    DescribeCdnSMCertificateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnSMCertificateListResponseBody() = default ;
    DescribeCdnSMCertificateListResponseBody& operator=(const DescribeCdnSMCertificateListResponseBody &) = default ;
    DescribeCdnSMCertificateListResponseBody& operator=(DescribeCdnSMCertificateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CertificateListModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertificateListModel& obj) { 
        DARABONBA_PTR_TO_JSON(CertList, certList_);
        DARABONBA_PTR_TO_JSON(Count, count_);
      };
      friend void from_json(const Darabonba::Json& j, CertificateListModel& obj) { 
        DARABONBA_PTR_FROM_JSON(CertList, certList_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
      };
      CertificateListModel() = default ;
      CertificateListModel(const CertificateListModel &) = default ;
      CertificateListModel(CertificateListModel &&) = default ;
      CertificateListModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertificateListModel() = default ;
      CertificateListModel& operator=(const CertificateListModel &) = default ;
      CertificateListModel& operator=(CertificateListModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CertList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CertList& obj) { 
          DARABONBA_PTR_TO_JSON(Cert, cert_);
        };
        friend void from_json(const Darabonba::Json& j, CertList& obj) { 
          DARABONBA_PTR_FROM_JSON(Cert, cert_);
        };
        CertList() = default ;
        CertList(const CertList &) = default ;
        CertList(CertList &&) = default ;
        CertList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CertList() = default ;
        CertList& operator=(const CertList &) = default ;
        CertList& operator=(CertList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Cert : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Cert& obj) { 
            DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
            DARABONBA_PTR_TO_JSON(CertName, certName_);
            DARABONBA_PTR_TO_JSON(Common, common_);
            DARABONBA_PTR_TO_JSON(Issuer, issuer_);
          };
          friend void from_json(const Darabonba::Json& j, Cert& obj) { 
            DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
            DARABONBA_PTR_FROM_JSON(CertName, certName_);
            DARABONBA_PTR_FROM_JSON(Common, common_);
            DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
          };
          Cert() = default ;
          Cert(const Cert &) = default ;
          Cert(Cert &&) = default ;
          Cert(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Cert() = default ;
          Cert& operator=(const Cert &) = default ;
          Cert& operator=(Cert &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->certIdentifier_ == nullptr
        && this->certName_ == nullptr && this->common_ == nullptr && this->issuer_ == nullptr; };
          // certIdentifier Field Functions 
          bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
          void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
          inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
          inline Cert& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


          // certName Field Functions 
          bool hasCertName() const { return this->certName_ != nullptr;};
          void deleteCertName() { this->certName_ = nullptr;};
          inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
          inline Cert& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


          // common Field Functions 
          bool hasCommon() const { return this->common_ != nullptr;};
          void deleteCommon() { this->common_ = nullptr;};
          inline string getCommon() const { DARABONBA_PTR_GET_DEFAULT(common_, "") };
          inline Cert& setCommon(string common) { DARABONBA_PTR_SET_VALUE(common_, common) };


          // issuer Field Functions 
          bool hasIssuer() const { return this->issuer_ != nullptr;};
          void deleteIssuer() { this->issuer_ = nullptr;};
          inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
          inline Cert& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


        protected:
          shared_ptr<string> certIdentifier_ {};
          shared_ptr<string> certName_ {};
          shared_ptr<string> common_ {};
          shared_ptr<string> issuer_ {};
        };

        virtual bool empty() const override { return this->cert_ == nullptr; };
        // cert Field Functions 
        bool hasCert() const { return this->cert_ != nullptr;};
        void deleteCert() { this->cert_ = nullptr;};
        inline const vector<CertList::Cert> & getCert() const { DARABONBA_PTR_GET_CONST(cert_, vector<CertList::Cert>) };
        inline vector<CertList::Cert> getCert() { DARABONBA_PTR_GET(cert_, vector<CertList::Cert>) };
        inline CertList& setCert(const vector<CertList::Cert> & cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };
        inline CertList& setCert(vector<CertList::Cert> && cert) { DARABONBA_PTR_SET_RVALUE(cert_, cert) };


      protected:
        shared_ptr<vector<CertList::Cert>> cert_ {};
      };

      virtual bool empty() const override { return this->certList_ == nullptr
        && this->count_ == nullptr; };
      // certList Field Functions 
      bool hasCertList() const { return this->certList_ != nullptr;};
      void deleteCertList() { this->certList_ = nullptr;};
      inline const CertificateListModel::CertList & getCertList() const { DARABONBA_PTR_GET_CONST(certList_, CertificateListModel::CertList) };
      inline CertificateListModel::CertList getCertList() { DARABONBA_PTR_GET(certList_, CertificateListModel::CertList) };
      inline CertificateListModel& setCertList(const CertificateListModel::CertList & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
      inline CertificateListModel& setCertList(CertificateListModel::CertList && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline CertificateListModel& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    protected:
      shared_ptr<CertificateListModel::CertList> certList_ {};
      // The number of certificates that are returned.
      shared_ptr<int32_t> count_ {};
    };

    virtual bool empty() const override { return this->certificateListModel_ == nullptr
        && this->requestId_ == nullptr; };
    // certificateListModel Field Functions 
    bool hasCertificateListModel() const { return this->certificateListModel_ != nullptr;};
    void deleteCertificateListModel() { this->certificateListModel_ = nullptr;};
    inline const DescribeCdnSMCertificateListResponseBody::CertificateListModel & getCertificateListModel() const { DARABONBA_PTR_GET_CONST(certificateListModel_, DescribeCdnSMCertificateListResponseBody::CertificateListModel) };
    inline DescribeCdnSMCertificateListResponseBody::CertificateListModel getCertificateListModel() { DARABONBA_PTR_GET(certificateListModel_, DescribeCdnSMCertificateListResponseBody::CertificateListModel) };
    inline DescribeCdnSMCertificateListResponseBody& setCertificateListModel(const DescribeCdnSMCertificateListResponseBody::CertificateListModel & certificateListModel) { DARABONBA_PTR_SET_VALUE(certificateListModel_, certificateListModel) };
    inline DescribeCdnSMCertificateListResponseBody& setCertificateListModel(DescribeCdnSMCertificateListResponseBody::CertificateListModel && certificateListModel) { DARABONBA_PTR_SET_RVALUE(certificateListModel_, certificateListModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnSMCertificateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The type of the certificate information.
    shared_ptr<DescribeCdnSMCertificateListResponseBody::CertificateListModel> certificateListModel_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
