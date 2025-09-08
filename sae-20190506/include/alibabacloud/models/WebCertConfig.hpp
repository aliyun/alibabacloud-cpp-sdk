// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBCERTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_WEBCERTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class WebCertConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebCertConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
    };
    friend void from_json(const Darabonba::Json& j, WebCertConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
    };
    WebCertConfig() = default ;
    WebCertConfig(const WebCertConfig &) = default ;
    WebCertConfig(WebCertConfig &&) = default ;
    WebCertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebCertConfig() = default ;
    WebCertConfig& operator=(const WebCertConfig &) = default ;
    WebCertConfig& operator=(WebCertConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certName_ != nullptr
        && this->certificate_ != nullptr && this->privateKey_ != nullptr; };
    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline WebCertConfig& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string certificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline WebCertConfig& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string privateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline WebCertConfig& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


  protected:
    std::shared_ptr<string> certName_ = nullptr;
    std::shared_ptr<string> certificate_ = nullptr;
    std::shared_ptr<string> privateKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
