// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETVSDOMAINCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETVSDOMAINCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class SetVsDomainCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetVsDomainCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ForceSet, forceSet_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SSLPri, SSLPri_);
      DARABONBA_PTR_TO_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_TO_JSON(SSLPub, SSLPub_);
    };
    friend void from_json(const Darabonba::Json& j, SetVsDomainCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ForceSet, forceSet_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SSLPri, SSLPri_);
      DARABONBA_PTR_FROM_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_FROM_JSON(SSLPub, SSLPub_);
    };
    SetVsDomainCertificateRequest() = default ;
    SetVsDomainCertificateRequest(const SetVsDomainCertificateRequest &) = default ;
    SetVsDomainCertificateRequest(SetVsDomainCertificateRequest &&) = default ;
    SetVsDomainCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetVsDomainCertificateRequest() = default ;
    SetVsDomainCertificateRequest& operator=(const SetVsDomainCertificateRequest &) = default ;
    SetVsDomainCertificateRequest& operator=(SetVsDomainCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certName_ != nullptr
        && this->certType_ != nullptr && this->domainName_ != nullptr && this->forceSet_ != nullptr && this->ownerId_ != nullptr && this->region_ != nullptr
        && this->SSLPri_ != nullptr && this->SSLProtocol_ != nullptr && this->SSLPub_ != nullptr; };
    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline SetVsDomainCertificateRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline SetVsDomainCertificateRequest& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetVsDomainCertificateRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // forceSet Field Functions 
    bool hasForceSet() const { return this->forceSet_ != nullptr;};
    void deleteForceSet() { this->forceSet_ = nullptr;};
    inline string forceSet() const { DARABONBA_PTR_GET_DEFAULT(forceSet_, "") };
    inline SetVsDomainCertificateRequest& setForceSet(string forceSet) { DARABONBA_PTR_SET_VALUE(forceSet_, forceSet) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetVsDomainCertificateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline SetVsDomainCertificateRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // SSLPri Field Functions 
    bool hasSSLPri() const { return this->SSLPri_ != nullptr;};
    void deleteSSLPri() { this->SSLPri_ = nullptr;};
    inline string SSLPri() const { DARABONBA_PTR_GET_DEFAULT(SSLPri_, "") };
    inline SetVsDomainCertificateRequest& setSSLPri(string SSLPri) { DARABONBA_PTR_SET_VALUE(SSLPri_, SSLPri) };


    // SSLProtocol Field Functions 
    bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
    void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
    inline string SSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
    inline SetVsDomainCertificateRequest& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


    // SSLPub Field Functions 
    bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
    void deleteSSLPub() { this->SSLPub_ = nullptr;};
    inline string SSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
    inline SetVsDomainCertificateRequest& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


  protected:
    std::shared_ptr<string> certName_ = nullptr;
    std::shared_ptr<string> certType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> forceSet_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> SSLPri_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> SSLProtocol_ = nullptr;
    std::shared_ptr<string> SSLPub_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
