// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSCERTIFICATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSCERTIFICATELISTRESPONSEBODY_HPP_
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
  class DescribeVsCertificateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsCertificateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsCertificateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVsCertificateListResponseBody() = default ;
    DescribeVsCertificateListResponseBody(const DescribeVsCertificateListResponseBody &) = default ;
    DescribeVsCertificateListResponseBody(DescribeVsCertificateListResponseBody &&) = default ;
    DescribeVsCertificateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsCertificateListResponseBody() = default ;
    DescribeVsCertificateListResponseBody& operator=(const DescribeVsCertificateListResponseBody &) = default ;
    DescribeVsCertificateListResponseBody& operator=(DescribeVsCertificateListResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CertId, certId_);
          DARABONBA_PTR_TO_JSON(CertName, certName_);
          DARABONBA_PTR_TO_JSON(Common, common_);
          DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
          DARABONBA_PTR_TO_JSON(Issuer, issuer_);
          DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
        };
        friend void from_json(const Darabonba::Json& j, CertList& obj) { 
          DARABONBA_PTR_FROM_JSON(CertId, certId_);
          DARABONBA_PTR_FROM_JSON(CertName, certName_);
          DARABONBA_PTR_FROM_JSON(Common, common_);
          DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
          DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
          DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
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
        virtual bool empty() const override { return this->certId_ == nullptr
        && this->certName_ == nullptr && this->common_ == nullptr && this->fingerprint_ == nullptr && this->issuer_ == nullptr && this->lastTime_ == nullptr; };
        // certId Field Functions 
        bool hasCertId() const { return this->certId_ != nullptr;};
        void deleteCertId() { this->certId_ = nullptr;};
        inline int64_t getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
        inline CertList& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


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


        // fingerprint Field Functions 
        bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
        void deleteFingerprint() { this->fingerprint_ = nullptr;};
        inline string getFingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
        inline CertList& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


        // issuer Field Functions 
        bool hasIssuer() const { return this->issuer_ != nullptr;};
        void deleteIssuer() { this->issuer_ = nullptr;};
        inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
        inline CertList& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


        // lastTime Field Functions 
        bool hasLastTime() const { return this->lastTime_ != nullptr;};
        void deleteLastTime() { this->lastTime_ = nullptr;};
        inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
        inline CertList& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      protected:
        shared_ptr<int64_t> certId_ {};
        shared_ptr<string> certName_ {};
        shared_ptr<string> common_ {};
        shared_ptr<string> fingerprint_ {};
        shared_ptr<string> issuer_ {};
        shared_ptr<int64_t> lastTime_ {};
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
      shared_ptr<vector<CertificateListModel::CertList>> certList_ {};
      shared_ptr<int32_t> count_ {};
    };

    virtual bool empty() const override { return this->certificateListModel_ == nullptr
        && this->requestId_ == nullptr; };
    // certificateListModel Field Functions 
    bool hasCertificateListModel() const { return this->certificateListModel_ != nullptr;};
    void deleteCertificateListModel() { this->certificateListModel_ = nullptr;};
    inline const DescribeVsCertificateListResponseBody::CertificateListModel & getCertificateListModel() const { DARABONBA_PTR_GET_CONST(certificateListModel_, DescribeVsCertificateListResponseBody::CertificateListModel) };
    inline DescribeVsCertificateListResponseBody::CertificateListModel getCertificateListModel() { DARABONBA_PTR_GET(certificateListModel_, DescribeVsCertificateListResponseBody::CertificateListModel) };
    inline DescribeVsCertificateListResponseBody& setCertificateListModel(const DescribeVsCertificateListResponseBody::CertificateListModel & certificateListModel) { DARABONBA_PTR_SET_VALUE(certificateListModel_, certificateListModel) };
    inline DescribeVsCertificateListResponseBody& setCertificateListModel(DescribeVsCertificateListResponseBody::CertificateListModel && certificateListModel) { DARABONBA_PTR_SET_RVALUE(certificateListModel_, certificateListModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsCertificateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeVsCertificateListResponseBody::CertificateListModel> certificateListModel_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
