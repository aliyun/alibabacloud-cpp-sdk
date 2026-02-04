// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINBYCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINBYCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainByCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainByCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Exact, exact_);
      DARABONBA_PTR_TO_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_TO_JSON(SSLStatus, SSLStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainByCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Exact, exact_);
      DARABONBA_PTR_FROM_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_FROM_JSON(SSLStatus, SSLStatus_);
    };
    DescribeDcdnDomainByCertificateRequest() = default ;
    DescribeDcdnDomainByCertificateRequest(const DescribeDcdnDomainByCertificateRequest &) = default ;
    DescribeDcdnDomainByCertificateRequest(DescribeDcdnDomainByCertificateRequest &&) = default ;
    DescribeDcdnDomainByCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainByCertificateRequest() = default ;
    DescribeDcdnDomainByCertificateRequest& operator=(const DescribeDcdnDomainByCertificateRequest &) = default ;
    DescribeDcdnDomainByCertificateRequest& operator=(DescribeDcdnDomainByCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exact_ == nullptr
        && this->SSLPub_ == nullptr && this->SSLStatus_ == nullptr; };
    // exact Field Functions 
    bool hasExact() const { return this->exact_ != nullptr;};
    void deleteExact() { this->exact_ = nullptr;};
    inline bool getExact() const { DARABONBA_PTR_GET_DEFAULT(exact_, false) };
    inline DescribeDcdnDomainByCertificateRequest& setExact(bool exact) { DARABONBA_PTR_SET_VALUE(exact_, exact) };


    // SSLPub Field Functions 
    bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
    void deleteSSLPub() { this->SSLPub_ = nullptr;};
    inline string getSSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
    inline DescribeDcdnDomainByCertificateRequest& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


    // SSLStatus Field Functions 
    bool hasSSLStatus() const { return this->SSLStatus_ != nullptr;};
    void deleteSSLStatus() { this->SSLStatus_ = nullptr;};
    inline bool getSSLStatus() const { DARABONBA_PTR_GET_DEFAULT(SSLStatus_, false) };
    inline DescribeDcdnDomainByCertificateRequest& setSSLStatus(bool SSLStatus) { DARABONBA_PTR_SET_VALUE(SSLStatus_, SSLStatus) };


  protected:
    // Specifies whether the domain name list to return matches the SSL certificate.
    // - **true**: The domain name list matches the SSL certificate.
    // - **false**: The domain name list does not match the SSL certificate.
    shared_ptr<bool> exact_ {};
    // The public key of the certificate.
    // 
    // You must use Base64 encoding schemes and then the encodeURIComponent method to encode the public key. PEM files are supported.
    // 
    // This parameter is required.
    shared_ptr<string> SSLPub_ {};
    // Specifies whether the domain name list to return contains only domain names with HTTPS enabled or disabled.
    // 
    // *   true: The list contains only domain names with HTTPS enabled.
    // *   false: The list contains only domain names with HTTPS disabled.
    shared_ptr<bool> SSLStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
