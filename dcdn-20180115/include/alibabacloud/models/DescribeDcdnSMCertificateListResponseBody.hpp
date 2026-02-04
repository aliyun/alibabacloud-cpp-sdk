// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSMCERTIFICATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSMCERTIFICATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnSMCertificateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnSMCertificateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnSMCertificateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnSMCertificateListResponseBody() = default ;
    DescribeDcdnSMCertificateListResponseBody(const DescribeDcdnSMCertificateListResponseBody &) = default ;
    DescribeDcdnSMCertificateListResponseBody(DescribeDcdnSMCertificateListResponseBody &&) = default ;
    DescribeDcdnSMCertificateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnSMCertificateListResponseBody() = default ;
    DescribeDcdnSMCertificateListResponseBody& operator=(const DescribeDcdnSMCertificateListResponseBody &) = default ;
    DescribeDcdnSMCertificateListResponseBody& operator=(DescribeDcdnSMCertificateListResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
          DARABONBA_PTR_TO_JSON(CertName, certName_);
          DARABONBA_PTR_TO_JSON(Common, common_);
          DARABONBA_PTR_TO_JSON(Issuer, issuer_);
        };
        friend void from_json(const Darabonba::Json& j, CertList& obj) { 
          DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
          DARABONBA_PTR_FROM_JSON(CertName, certName_);
          DARABONBA_PTR_FROM_JSON(Common, common_);
          DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
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
        virtual bool empty() const override { return this->certIdentifier_ == nullptr
        && this->certName_ == nullptr && this->common_ == nullptr && this->issuer_ == nullptr; };
        // certIdentifier Field Functions 
        bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
        void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
        inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
        inline CertList& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


        // certName Field Functions 
        bool hasCertName() const { return this->certName_ != nullptr;};
        void deleteCertName() { this->certName_ = nullptr;};
        inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
        inline CertList& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


        // common Field Functions 
        bool hasCommon() const { return this->common_ != nullptr;};
        void deleteCommon() { this->common_ = nullptr;};
        inline string getCommon() const { DARABONBA_PTR_GET_DEFAULT(common_, "") };
        inline CertList& setCommon(string common) { DARABONBA_PTR_SET_VALUE(common_, common) };


        // issuer Field Functions 
        bool hasIssuer() const { return this->issuer_ != nullptr;};
        void deleteIssuer() { this->issuer_ = nullptr;};
        inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
        inline CertList& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      protected:
        // The ID of the certificate.
        shared_ptr<string> certIdentifier_ {};
        // The name of the certificate.
        shared_ptr<string> certName_ {};
        // The common name of the certificate.
        shared_ptr<string> common_ {};
        // The certificate authority (CA) that issued the certificate.
        shared_ptr<string> issuer_ {};
      };

      virtual bool empty() const override { return this->certList_ == nullptr
        && this->count_ == nullptr; };
      // certList Field Functions 
      bool hasCertList() const { return this->certList_ != nullptr;};
      void deleteCertList() { this->certList_ = nullptr;};
      inline const vector<CertificateListModel::CertList> & getCertList() const { DARABONBA_PTR_GET_CONST(certList_, vector<CertificateListModel::CertList>) };
      inline vector<CertificateListModel::CertList> getCertList() { DARABONBA_PTR_GET(certList_, vector<CertificateListModel::CertList>) };
      inline CertificateListModel& setCertList(const vector<CertificateListModel::CertList> & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
      inline CertificateListModel& setCertList(vector<CertificateListModel::CertList> && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline CertificateListModel& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    protected:
      // A list of certificates.
      shared_ptr<vector<CertificateListModel::CertList>> certList_ {};
      // The number of certificates that are returned.
      shared_ptr<int32_t> count_ {};
    };

    virtual bool empty() const override { return this->certificateListModel_ == nullptr
        && this->requestId_ == nullptr; };
    // certificateListModel Field Functions 
    bool hasCertificateListModel() const { return this->certificateListModel_ != nullptr;};
    void deleteCertificateListModel() { this->certificateListModel_ = nullptr;};
    inline const DescribeDcdnSMCertificateListResponseBody::CertificateListModel & getCertificateListModel() const { DARABONBA_PTR_GET_CONST(certificateListModel_, DescribeDcdnSMCertificateListResponseBody::CertificateListModel) };
    inline DescribeDcdnSMCertificateListResponseBody::CertificateListModel getCertificateListModel() { DARABONBA_PTR_GET(certificateListModel_, DescribeDcdnSMCertificateListResponseBody::CertificateListModel) };
    inline DescribeDcdnSMCertificateListResponseBody& setCertificateListModel(const DescribeDcdnSMCertificateListResponseBody::CertificateListModel & certificateListModel) { DARABONBA_PTR_SET_VALUE(certificateListModel_, certificateListModel) };
    inline DescribeDcdnSMCertificateListResponseBody& setCertificateListModel(DescribeDcdnSMCertificateListResponseBody::CertificateListModel && certificateListModel) { DARABONBA_PTR_SET_RVALUE(certificateListModel_, certificateListModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnSMCertificateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The type of the certificate information.
    shared_ptr<DescribeDcdnSMCertificateListResponseBody::CertificateListModel> certificateListModel_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
