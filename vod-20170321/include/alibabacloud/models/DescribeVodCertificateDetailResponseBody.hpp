// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODCERTIFICATEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODCERTIFICATEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodCertificateDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodCertificateDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cert, cert_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodCertificateDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cert, cert_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodCertificateDetailResponseBody() = default ;
    DescribeVodCertificateDetailResponseBody(const DescribeVodCertificateDetailResponseBody &) = default ;
    DescribeVodCertificateDetailResponseBody(DescribeVodCertificateDetailResponseBody &&) = default ;
    DescribeVodCertificateDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodCertificateDetailResponseBody() = default ;
    DescribeVodCertificateDetailResponseBody& operator=(const DescribeVodCertificateDetailResponseBody &) = default ;
    DescribeVodCertificateDetailResponseBody& operator=(DescribeVodCertificateDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cert_ != nullptr
        && this->certId_ != nullptr && this->certName_ != nullptr && this->key_ != nullptr && this->requestId_ != nullptr; };
    // cert Field Functions 
    bool hasCert() const { return this->cert_ != nullptr;};
    void deleteCert() { this->cert_ = nullptr;};
    inline string cert() const { DARABONBA_PTR_GET_DEFAULT(cert_, "") };
    inline DescribeVodCertificateDetailResponseBody& setCert(string cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline DescribeVodCertificateDetailResponseBody& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeVodCertificateDetailResponseBody& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeVodCertificateDetailResponseBody& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodCertificateDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> cert_ = nullptr;
    std::shared_ptr<int64_t> certId_ = nullptr;
    std::shared_ptr<string> certName_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
