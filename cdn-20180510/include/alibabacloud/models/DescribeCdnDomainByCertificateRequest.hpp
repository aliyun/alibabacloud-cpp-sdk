// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINBYCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINBYCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainByCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainByCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Exact, exact_);
      DARABONBA_PTR_TO_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_TO_JSON(SSLStatus, SSLStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainByCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Exact, exact_);
      DARABONBA_PTR_FROM_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_FROM_JSON(SSLStatus, SSLStatus_);
    };
    DescribeCdnDomainByCertificateRequest() = default ;
    DescribeCdnDomainByCertificateRequest(const DescribeCdnDomainByCertificateRequest &) = default ;
    DescribeCdnDomainByCertificateRequest(DescribeCdnDomainByCertificateRequest &&) = default ;
    DescribeCdnDomainByCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainByCertificateRequest() = default ;
    DescribeCdnDomainByCertificateRequest& operator=(const DescribeCdnDomainByCertificateRequest &) = default ;
    DescribeCdnDomainByCertificateRequest& operator=(DescribeCdnDomainByCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exact_ == nullptr
        && return this->SSLPub_ == nullptr && return this->SSLStatus_ == nullptr; };
    // exact Field Functions 
    bool hasExact() const { return this->exact_ != nullptr;};
    void deleteExact() { this->exact_ = nullptr;};
    inline bool exact() const { DARABONBA_PTR_GET_DEFAULT(exact_, false) };
    inline DescribeCdnDomainByCertificateRequest& setExact(bool exact) { DARABONBA_PTR_SET_VALUE(exact_, exact) };


    // SSLPub Field Functions 
    bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
    void deleteSSLPub() { this->SSLPub_ = nullptr;};
    inline string SSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
    inline DescribeCdnDomainByCertificateRequest& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


    // SSLStatus Field Functions 
    bool hasSSLStatus() const { return this->SSLStatus_ != nullptr;};
    void deleteSSLStatus() { this->SSLStatus_ = nullptr;};
    inline bool SSLStatus() const { DARABONBA_PTR_GET_DEFAULT(SSLStatus_, false) };
    inline DescribeCdnDomainByCertificateRequest& setSSLStatus(bool SSLStatus) { DARABONBA_PTR_SET_VALUE(SSLStatus_, SSLStatus) };


  protected:
    // Specifies whether the domain name list to return match the SSL certificate.
    // 
    // *   true: The domain name list match the SSL certificate.
    // *   false: The domain name list do not match the SSL certificate.
    std::shared_ptr<bool> exact_ = nullptr;
    // The public key of the SSL certificate. You must encode the public key in Base64 and then call the encodeURIComponent function to encode the public key again.
    // 
    // The public key must be in the PEM format.
    // 
    // This parameter is required.
    std::shared_ptr<string> SSLPub_ = nullptr;
    // Specifies whether the domain name list to return contains only domain names with HTTPS enabled or disabled.
    // 
    // *   true: The domain name list contains only domain names with HTTPS enabled.
    // *   false: The domain name list contains only domain names with HTTPS disabled.
    std::shared_ptr<bool> SSLStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
