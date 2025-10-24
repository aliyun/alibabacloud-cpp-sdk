// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFAULTHTTPSRESPONSEBODYDEFAULTHTTPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFAULTHTTPSRESPONSEBODYDEFAULTHTTPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefaultHttpsResponseBodyDefaultHttps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefaultHttpsResponseBodyDefaultHttps& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_TO_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_TO_JSON(EnableTLSv3, enableTLSv3_);
      DARABONBA_PTR_TO_JSON(TLSVersion, TLSVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefaultHttpsResponseBodyDefaultHttps& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_FROM_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_FROM_JSON(EnableTLSv3, enableTLSv3_);
      DARABONBA_PTR_FROM_JSON(TLSVersion, TLSVersion_);
    };
    DescribeDefaultHttpsResponseBodyDefaultHttps() = default ;
    DescribeDefaultHttpsResponseBodyDefaultHttps(const DescribeDefaultHttpsResponseBodyDefaultHttps &) = default ;
    DescribeDefaultHttpsResponseBodyDefaultHttps(DescribeDefaultHttpsResponseBodyDefaultHttps &&) = default ;
    DescribeDefaultHttpsResponseBodyDefaultHttps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefaultHttpsResponseBodyDefaultHttps() = default ;
    DescribeDefaultHttpsResponseBodyDefaultHttps& operator=(const DescribeDefaultHttpsResponseBodyDefaultHttps &) = default ;
    DescribeDefaultHttpsResponseBodyDefaultHttps& operator=(DescribeDefaultHttpsResponseBodyDefaultHttps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certId_ == nullptr
        && return this->cipherSuite_ == nullptr && return this->customCiphers_ == nullptr && return this->enableTLSv3_ == nullptr && return this->TLSVersion_ == nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline DescribeDefaultHttpsResponseBodyDefaultHttps& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // cipherSuite Field Functions 
    bool hasCipherSuite() const { return this->cipherSuite_ != nullptr;};
    void deleteCipherSuite() { this->cipherSuite_ = nullptr;};
    inline string cipherSuite() const { DARABONBA_PTR_GET_DEFAULT(cipherSuite_, "") };
    inline DescribeDefaultHttpsResponseBodyDefaultHttps& setCipherSuite(string cipherSuite) { DARABONBA_PTR_SET_VALUE(cipherSuite_, cipherSuite) };


    // customCiphers Field Functions 
    bool hasCustomCiphers() const { return this->customCiphers_ != nullptr;};
    void deleteCustomCiphers() { this->customCiphers_ = nullptr;};
    inline string customCiphers() const { DARABONBA_PTR_GET_DEFAULT(customCiphers_, "") };
    inline DescribeDefaultHttpsResponseBodyDefaultHttps& setCustomCiphers(string customCiphers) { DARABONBA_PTR_SET_VALUE(customCiphers_, customCiphers) };


    // enableTLSv3 Field Functions 
    bool hasEnableTLSv3() const { return this->enableTLSv3_ != nullptr;};
    void deleteEnableTLSv3() { this->enableTLSv3_ = nullptr;};
    inline bool enableTLSv3() const { DARABONBA_PTR_GET_DEFAULT(enableTLSv3_, false) };
    inline DescribeDefaultHttpsResponseBodyDefaultHttps& setEnableTLSv3(bool enableTLSv3) { DARABONBA_PTR_SET_VALUE(enableTLSv3_, enableTLSv3) };


    // TLSVersion Field Functions 
    bool hasTLSVersion() const { return this->TLSVersion_ != nullptr;};
    void deleteTLSVersion() { this->TLSVersion_ = nullptr;};
    inline string TLSVersion() const { DARABONBA_PTR_GET_DEFAULT(TLSVersion_, "") };
    inline DescribeDefaultHttpsResponseBodyDefaultHttps& setTLSVersion(string TLSVersion) { DARABONBA_PTR_SET_VALUE(TLSVersion_, TLSVersion) };


  protected:
    // The certificate ID.
    std::shared_ptr<string> certId_ = nullptr;
    // The type of the cipher suites. Valid values:
    // 
    // *   **1**: all cipher suites.
    // *   **2**: strong cipher suites.
    // *   **99**: custom cipher suites.
    std::shared_ptr<string> cipherSuite_ = nullptr;
    // The custom cipher suite.
    std::shared_ptr<string> customCiphers_ = nullptr;
    // Indicates whether TLS 1.3 is supported. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableTLSv3_ = nullptr;
    // The version of the TLS protocol. Valid values:
    // 
    // *   **tlsv1**
    // *   **tlsv1.1**
    // *   **tlsv1.2**
    std::shared_ptr<string> TLSVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
