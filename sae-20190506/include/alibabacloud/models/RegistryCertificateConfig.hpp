// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTRYCERTIFICATECONFIG_HPP_
#define ALIBABACLOUD_MODELS_REGISTRYCERTIFICATECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class RegistryCertificateConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegistryCertificateConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CertBase64, certBase64_);
      DARABONBA_PTR_TO_JSON(Insecure, insecure_);
    };
    friend void from_json(const Darabonba::Json& j, RegistryCertificateConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CertBase64, certBase64_);
      DARABONBA_PTR_FROM_JSON(Insecure, insecure_);
    };
    RegistryCertificateConfig() = default ;
    RegistryCertificateConfig(const RegistryCertificateConfig &) = default ;
    RegistryCertificateConfig(RegistryCertificateConfig &&) = default ;
    RegistryCertificateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegistryCertificateConfig() = default ;
    RegistryCertificateConfig& operator=(const RegistryCertificateConfig &) = default ;
    RegistryCertificateConfig& operator=(RegistryCertificateConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certBase64_ == nullptr
        && return this->insecure_ == nullptr; };
    // certBase64 Field Functions 
    bool hasCertBase64() const { return this->certBase64_ != nullptr;};
    void deleteCertBase64() { this->certBase64_ = nullptr;};
    inline string certBase64() const { DARABONBA_PTR_GET_DEFAULT(certBase64_, "") };
    inline RegistryCertificateConfig& setCertBase64(string certBase64) { DARABONBA_PTR_SET_VALUE(certBase64_, certBase64) };


    // insecure Field Functions 
    bool hasInsecure() const { return this->insecure_ != nullptr;};
    void deleteInsecure() { this->insecure_ = nullptr;};
    inline bool insecure() const { DARABONBA_PTR_GET_DEFAULT(insecure_, false) };
    inline RegistryCertificateConfig& setInsecure(bool insecure) { DARABONBA_PTR_SET_VALUE(insecure_, insecure) };


  protected:
    std::shared_ptr<string> certBase64_ = nullptr;
    std::shared_ptr<bool> insecure_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
