// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CERTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CERTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CertConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CertConfig& obj) { 
      DARABONBA_PTR_TO_JSON(certName, certName_);
      DARABONBA_PTR_TO_JSON(certificate, certificate_);
      DARABONBA_PTR_TO_JSON(privateKey, privateKey_);
    };
    friend void from_json(const Darabonba::Json& j, CertConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(certName, certName_);
      DARABONBA_PTR_FROM_JSON(certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(privateKey, privateKey_);
    };
    CertConfig() = default ;
    CertConfig(const CertConfig &) = default ;
    CertConfig(CertConfig &&) = default ;
    CertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CertConfig() = default ;
    CertConfig& operator=(const CertConfig &) = default ;
    CertConfig& operator=(CertConfig &&) = default ;
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
    inline CertConfig& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string certificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline CertConfig& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string privateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline CertConfig& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> certName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> certificate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> privateKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
