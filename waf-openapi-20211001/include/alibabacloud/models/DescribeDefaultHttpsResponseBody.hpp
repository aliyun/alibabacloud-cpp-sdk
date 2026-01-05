// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFAULTHTTPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFAULTHTTPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefaultHttpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefaultHttpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultHttps, defaultHttps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefaultHttpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultHttps, defaultHttps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDefaultHttpsResponseBody() = default ;
    DescribeDefaultHttpsResponseBody(const DescribeDefaultHttpsResponseBody &) = default ;
    DescribeDefaultHttpsResponseBody(DescribeDefaultHttpsResponseBody &&) = default ;
    DescribeDefaultHttpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefaultHttpsResponseBody() = default ;
    DescribeDefaultHttpsResponseBody& operator=(const DescribeDefaultHttpsResponseBody &) = default ;
    DescribeDefaultHttpsResponseBody& operator=(DescribeDefaultHttpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DefaultHttps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultHttps& obj) { 
        DARABONBA_PTR_TO_JSON(CertId, certId_);
        DARABONBA_PTR_TO_JSON(CipherSuite, cipherSuite_);
        DARABONBA_PTR_TO_JSON(CustomCiphers, customCiphers_);
        DARABONBA_PTR_TO_JSON(EnableTLSv3, enableTLSv3_);
        DARABONBA_PTR_TO_JSON(TLSVersion, TLSVersion_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultHttps& obj) { 
        DARABONBA_PTR_FROM_JSON(CertId, certId_);
        DARABONBA_PTR_FROM_JSON(CipherSuite, cipherSuite_);
        DARABONBA_PTR_FROM_JSON(CustomCiphers, customCiphers_);
        DARABONBA_PTR_FROM_JSON(EnableTLSv3, enableTLSv3_);
        DARABONBA_PTR_FROM_JSON(TLSVersion, TLSVersion_);
      };
      DefaultHttps() = default ;
      DefaultHttps(const DefaultHttps &) = default ;
      DefaultHttps(DefaultHttps &&) = default ;
      DefaultHttps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultHttps() = default ;
      DefaultHttps& operator=(const DefaultHttps &) = default ;
      DefaultHttps& operator=(DefaultHttps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certId_ == nullptr
        && this->cipherSuite_ == nullptr && this->customCiphers_ == nullptr && this->enableTLSv3_ == nullptr && this->TLSVersion_ == nullptr; };
      // certId Field Functions 
      bool hasCertId() const { return this->certId_ != nullptr;};
      void deleteCertId() { this->certId_ = nullptr;};
      inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
      inline DefaultHttps& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


      // cipherSuite Field Functions 
      bool hasCipherSuite() const { return this->cipherSuite_ != nullptr;};
      void deleteCipherSuite() { this->cipherSuite_ = nullptr;};
      inline string getCipherSuite() const { DARABONBA_PTR_GET_DEFAULT(cipherSuite_, "") };
      inline DefaultHttps& setCipherSuite(string cipherSuite) { DARABONBA_PTR_SET_VALUE(cipherSuite_, cipherSuite) };


      // customCiphers Field Functions 
      bool hasCustomCiphers() const { return this->customCiphers_ != nullptr;};
      void deleteCustomCiphers() { this->customCiphers_ = nullptr;};
      inline string getCustomCiphers() const { DARABONBA_PTR_GET_DEFAULT(customCiphers_, "") };
      inline DefaultHttps& setCustomCiphers(string customCiphers) { DARABONBA_PTR_SET_VALUE(customCiphers_, customCiphers) };


      // enableTLSv3 Field Functions 
      bool hasEnableTLSv3() const { return this->enableTLSv3_ != nullptr;};
      void deleteEnableTLSv3() { this->enableTLSv3_ = nullptr;};
      inline bool getEnableTLSv3() const { DARABONBA_PTR_GET_DEFAULT(enableTLSv3_, false) };
      inline DefaultHttps& setEnableTLSv3(bool enableTLSv3) { DARABONBA_PTR_SET_VALUE(enableTLSv3_, enableTLSv3) };


      // TLSVersion Field Functions 
      bool hasTLSVersion() const { return this->TLSVersion_ != nullptr;};
      void deleteTLSVersion() { this->TLSVersion_ = nullptr;};
      inline string getTLSVersion() const { DARABONBA_PTR_GET_DEFAULT(TLSVersion_, "") };
      inline DefaultHttps& setTLSVersion(string TLSVersion) { DARABONBA_PTR_SET_VALUE(TLSVersion_, TLSVersion) };


    protected:
      // The certificate ID.
      shared_ptr<string> certId_ {};
      // The type of the cipher suites. Valid values:
      // 
      // *   **1**: all cipher suites.
      // *   **2**: strong cipher suites.
      // *   **99**: custom cipher suites.
      shared_ptr<string> cipherSuite_ {};
      // The custom cipher suite.
      shared_ptr<string> customCiphers_ {};
      // Indicates whether TLS 1.3 is supported. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> enableTLSv3_ {};
      // The version of the TLS protocol. Valid values:
      // 
      // *   **tlsv1**
      // *   **tlsv1.1**
      // *   **tlsv1.2**
      shared_ptr<string> TLSVersion_ {};
    };

    virtual bool empty() const override { return this->defaultHttps_ == nullptr
        && this->requestId_ == nullptr; };
    // defaultHttps Field Functions 
    bool hasDefaultHttps() const { return this->defaultHttps_ != nullptr;};
    void deleteDefaultHttps() { this->defaultHttps_ = nullptr;};
    inline const DescribeDefaultHttpsResponseBody::DefaultHttps & getDefaultHttps() const { DARABONBA_PTR_GET_CONST(defaultHttps_, DescribeDefaultHttpsResponseBody::DefaultHttps) };
    inline DescribeDefaultHttpsResponseBody::DefaultHttps getDefaultHttps() { DARABONBA_PTR_GET(defaultHttps_, DescribeDefaultHttpsResponseBody::DefaultHttps) };
    inline DescribeDefaultHttpsResponseBody& setDefaultHttps(const DescribeDefaultHttpsResponseBody::DefaultHttps & defaultHttps) { DARABONBA_PTR_SET_VALUE(defaultHttps_, defaultHttps) };
    inline DescribeDefaultHttpsResponseBody& setDefaultHttps(DescribeDefaultHttpsResponseBody::DefaultHttps && defaultHttps) { DARABONBA_PTR_SET_RVALUE(defaultHttps_, defaultHttps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefaultHttpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The default SSL and TLS settings.
    shared_ptr<DescribeDefaultHttpsResponseBody::DefaultHttps> defaultHttps_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
