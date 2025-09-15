// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERCERTIFICATEDETAILRESPONSEBODYCERTCHAIN_HPP_
#define ALIBABACLOUD_MODELS_GETUSERCERTIFICATEDETAILRESPONSEBODYCERTCHAIN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetUserCertificateDetailResponseBodyCertChain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserCertificateDetailResponseBodyCertChain& obj) { 
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(IssuerCommonName, issuerCommonName_);
      DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_TO_JSON(RemainDay, remainDay_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserCertificateDetailResponseBodyCertChain& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(IssuerCommonName, issuerCommonName_);
      DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_FROM_JSON(RemainDay, remainDay_);
    };
    GetUserCertificateDetailResponseBodyCertChain() = default ;
    GetUserCertificateDetailResponseBodyCertChain(const GetUserCertificateDetailResponseBodyCertChain &) = default ;
    GetUserCertificateDetailResponseBodyCertChain(GetUserCertificateDetailResponseBodyCertChain &&) = default ;
    GetUserCertificateDetailResponseBodyCertChain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserCertificateDetailResponseBodyCertChain() = default ;
    GetUserCertificateDetailResponseBodyCertChain& operator=(const GetUserCertificateDetailResponseBodyCertChain &) = default ;
    GetUserCertificateDetailResponseBodyCertChain& operator=(GetUserCertificateDetailResponseBodyCertChain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonName_ != nullptr
        && this->issuerCommonName_ != nullptr && this->notAfter_ != nullptr && this->notBefore_ != nullptr && this->remainDay_ != nullptr; };
    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline GetUserCertificateDetailResponseBodyCertChain& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // issuerCommonName Field Functions 
    bool hasIssuerCommonName() const { return this->issuerCommonName_ != nullptr;};
    void deleteIssuerCommonName() { this->issuerCommonName_ = nullptr;};
    inline string issuerCommonName() const { DARABONBA_PTR_GET_DEFAULT(issuerCommonName_, "") };
    inline GetUserCertificateDetailResponseBodyCertChain& setIssuerCommonName(string issuerCommonName) { DARABONBA_PTR_SET_VALUE(issuerCommonName_, issuerCommonName) };


    // notAfter Field Functions 
    bool hasNotAfter() const { return this->notAfter_ != nullptr;};
    void deleteNotAfter() { this->notAfter_ = nullptr;};
    inline int64_t notAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, 0L) };
    inline GetUserCertificateDetailResponseBodyCertChain& setNotAfter(int64_t notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline int64_t notBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, 0L) };
    inline GetUserCertificateDetailResponseBodyCertChain& setNotBefore(int64_t notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // remainDay Field Functions 
    bool hasRemainDay() const { return this->remainDay_ != nullptr;};
    void deleteRemainDay() { this->remainDay_ = nullptr;};
    inline int32_t remainDay() const { DARABONBA_PTR_GET_DEFAULT(remainDay_, 0) };
    inline GetUserCertificateDetailResponseBodyCertChain& setRemainDay(int32_t remainDay) { DARABONBA_PTR_SET_VALUE(remainDay_, remainDay) };


  protected:
    // The common name of the certificate.
    std::shared_ptr<string> commonName_ = nullptr;
    // The common name of the issuer.
    std::shared_ptr<string> issuerCommonName_ = nullptr;
    // The end of the validity period of the certificate.
    std::shared_ptr<int64_t> notAfter_ = nullptr;
    // The beginning of the validity period of the certificate.
    std::shared_ptr<int64_t> notBefore_ = nullptr;
    // The remaining days of the certificate validity period.
    std::shared_ptr<int32_t> remainDay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
