// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMDOMAININPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMDOMAININPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CertConfig.hpp>
#include <alibabacloud/models/TLSConfig.hpp>
#include <alibabacloud/models/WAFConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateCustomDomainInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomDomainInput& obj) { 
      DARABONBA_PTR_TO_JSON(applicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(certConfig, certConfig_);
      DARABONBA_PTR_TO_JSON(domainName, domainName_);
      DARABONBA_PTR_TO_JSON(keepFullPath, keepFullPath_);
      DARABONBA_PTR_TO_JSON(namespaceID, namespaceID_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(tlsConfig, tlsConfig_);
      DARABONBA_PTR_TO_JSON(wafConfig, wafConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomDomainInput& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(certConfig, certConfig_);
      DARABONBA_PTR_FROM_JSON(domainName, domainName_);
      DARABONBA_PTR_FROM_JSON(keepFullPath, keepFullPath_);
      DARABONBA_PTR_FROM_JSON(namespaceID, namespaceID_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(tlsConfig, tlsConfig_);
      DARABONBA_PTR_FROM_JSON(wafConfig, wafConfig_);
    };
    CreateCustomDomainInput() = default ;
    CreateCustomDomainInput(const CreateCustomDomainInput &) = default ;
    CreateCustomDomainInput(CreateCustomDomainInput &&) = default ;
    CreateCustomDomainInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomDomainInput() = default ;
    CreateCustomDomainInput& operator=(const CreateCustomDomainInput &) = default ;
    CreateCustomDomainInput& operator=(CreateCustomDomainInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->certConfig_ == nullptr && this->domainName_ == nullptr && this->keepFullPath_ == nullptr && this->namespaceID_ == nullptr && this->protocol_ == nullptr
        && this->tlsConfig_ == nullptr && this->wafConfig_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline CreateCustomDomainInput& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // certConfig Field Functions 
    bool hasCertConfig() const { return this->certConfig_ != nullptr;};
    void deleteCertConfig() { this->certConfig_ = nullptr;};
    inline const CertConfig & getCertConfig() const { DARABONBA_PTR_GET_CONST(certConfig_, CertConfig) };
    inline CertConfig getCertConfig() { DARABONBA_PTR_GET(certConfig_, CertConfig) };
    inline CreateCustomDomainInput& setCertConfig(const CertConfig & certConfig) { DARABONBA_PTR_SET_VALUE(certConfig_, certConfig) };
    inline CreateCustomDomainInput& setCertConfig(CertConfig && certConfig) { DARABONBA_PTR_SET_RVALUE(certConfig_, certConfig) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateCustomDomainInput& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // keepFullPath Field Functions 
    bool hasKeepFullPath() const { return this->keepFullPath_ != nullptr;};
    void deleteKeepFullPath() { this->keepFullPath_ = nullptr;};
    inline bool getKeepFullPath() const { DARABONBA_PTR_GET_DEFAULT(keepFullPath_, false) };
    inline CreateCustomDomainInput& setKeepFullPath(bool keepFullPath) { DARABONBA_PTR_SET_VALUE(keepFullPath_, keepFullPath) };


    // namespaceID Field Functions 
    bool hasNamespaceID() const { return this->namespaceID_ != nullptr;};
    void deleteNamespaceID() { this->namespaceID_ = nullptr;};
    inline string getNamespaceID() const { DARABONBA_PTR_GET_DEFAULT(namespaceID_, "") };
    inline CreateCustomDomainInput& setNamespaceID(string namespaceID) { DARABONBA_PTR_SET_VALUE(namespaceID_, namespaceID) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateCustomDomainInput& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // tlsConfig Field Functions 
    bool hasTlsConfig() const { return this->tlsConfig_ != nullptr;};
    void deleteTlsConfig() { this->tlsConfig_ = nullptr;};
    inline const TLSConfig & getTlsConfig() const { DARABONBA_PTR_GET_CONST(tlsConfig_, TLSConfig) };
    inline TLSConfig getTlsConfig() { DARABONBA_PTR_GET(tlsConfig_, TLSConfig) };
    inline CreateCustomDomainInput& setTlsConfig(const TLSConfig & tlsConfig) { DARABONBA_PTR_SET_VALUE(tlsConfig_, tlsConfig) };
    inline CreateCustomDomainInput& setTlsConfig(TLSConfig && tlsConfig) { DARABONBA_PTR_SET_RVALUE(tlsConfig_, tlsConfig) };


    // wafConfig Field Functions 
    bool hasWafConfig() const { return this->wafConfig_ != nullptr;};
    void deleteWafConfig() { this->wafConfig_ = nullptr;};
    inline const WAFConfig & getWafConfig() const { DARABONBA_PTR_GET_CONST(wafConfig_, WAFConfig) };
    inline WAFConfig getWafConfig() { DARABONBA_PTR_GET(wafConfig_, WAFConfig) };
    inline CreateCustomDomainInput& setWafConfig(const WAFConfig & wafConfig) { DARABONBA_PTR_SET_VALUE(wafConfig_, wafConfig) };
    inline CreateCustomDomainInput& setWafConfig(WAFConfig && wafConfig) { DARABONBA_PTR_SET_RVALUE(wafConfig_, wafConfig) };


  protected:
    shared_ptr<string> applicationName_ {};
    shared_ptr<CertConfig> certConfig_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<bool> keepFullPath_ {};
    shared_ptr<string> namespaceID_ {};
    shared_ptr<string> protocol_ {};
    shared_ptr<TLSConfig> tlsConfig_ {};
    shared_ptr<WAFConfig> wafConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
