// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMDOMAININPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMDOMAININPUT_HPP_
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
  class UpdateCustomDomainInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomDomainInput& obj) { 
      DARABONBA_PTR_TO_JSON(applicationID, applicationID_);
      DARABONBA_PTR_TO_JSON(applicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(certConfig, certConfig_);
      DARABONBA_PTR_TO_JSON(keepFullPath, keepFullPath_);
      DARABONBA_PTR_TO_JSON(namespaceID, namespaceID_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(tlsConfig, tlsConfig_);
      DARABONBA_PTR_TO_JSON(wafConfig, wafConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomDomainInput& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationID, applicationID_);
      DARABONBA_PTR_FROM_JSON(applicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(certConfig, certConfig_);
      DARABONBA_PTR_FROM_JSON(keepFullPath, keepFullPath_);
      DARABONBA_PTR_FROM_JSON(namespaceID, namespaceID_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(tlsConfig, tlsConfig_);
      DARABONBA_PTR_FROM_JSON(wafConfig, wafConfig_);
    };
    UpdateCustomDomainInput() = default ;
    UpdateCustomDomainInput(const UpdateCustomDomainInput &) = default ;
    UpdateCustomDomainInput(UpdateCustomDomainInput &&) = default ;
    UpdateCustomDomainInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomDomainInput() = default ;
    UpdateCustomDomainInput& operator=(const UpdateCustomDomainInput &) = default ;
    UpdateCustomDomainInput& operator=(UpdateCustomDomainInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationID_ == nullptr
        && return this->applicationName_ == nullptr && return this->certConfig_ == nullptr && return this->keepFullPath_ == nullptr && return this->namespaceID_ == nullptr && return this->protocol_ == nullptr
        && return this->tlsConfig_ == nullptr && return this->wafConfig_ == nullptr; };
    // applicationID Field Functions 
    bool hasApplicationID() const { return this->applicationID_ != nullptr;};
    void deleteApplicationID() { this->applicationID_ = nullptr;};
    inline string applicationID() const { DARABONBA_PTR_GET_DEFAULT(applicationID_, "") };
    inline UpdateCustomDomainInput& setApplicationID(string applicationID) { DARABONBA_PTR_SET_VALUE(applicationID_, applicationID) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline UpdateCustomDomainInput& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // certConfig Field Functions 
    bool hasCertConfig() const { return this->certConfig_ != nullptr;};
    void deleteCertConfig() { this->certConfig_ = nullptr;};
    inline const CertConfig & certConfig() const { DARABONBA_PTR_GET_CONST(certConfig_, CertConfig) };
    inline CertConfig certConfig() { DARABONBA_PTR_GET(certConfig_, CertConfig) };
    inline UpdateCustomDomainInput& setCertConfig(const CertConfig & certConfig) { DARABONBA_PTR_SET_VALUE(certConfig_, certConfig) };
    inline UpdateCustomDomainInput& setCertConfig(CertConfig && certConfig) { DARABONBA_PTR_SET_RVALUE(certConfig_, certConfig) };


    // keepFullPath Field Functions 
    bool hasKeepFullPath() const { return this->keepFullPath_ != nullptr;};
    void deleteKeepFullPath() { this->keepFullPath_ = nullptr;};
    inline bool keepFullPath() const { DARABONBA_PTR_GET_DEFAULT(keepFullPath_, false) };
    inline UpdateCustomDomainInput& setKeepFullPath(bool keepFullPath) { DARABONBA_PTR_SET_VALUE(keepFullPath_, keepFullPath) };


    // namespaceID Field Functions 
    bool hasNamespaceID() const { return this->namespaceID_ != nullptr;};
    void deleteNamespaceID() { this->namespaceID_ = nullptr;};
    inline string namespaceID() const { DARABONBA_PTR_GET_DEFAULT(namespaceID_, "") };
    inline UpdateCustomDomainInput& setNamespaceID(string namespaceID) { DARABONBA_PTR_SET_VALUE(namespaceID_, namespaceID) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateCustomDomainInput& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // tlsConfig Field Functions 
    bool hasTlsConfig() const { return this->tlsConfig_ != nullptr;};
    void deleteTlsConfig() { this->tlsConfig_ = nullptr;};
    inline const TLSConfig & tlsConfig() const { DARABONBA_PTR_GET_CONST(tlsConfig_, TLSConfig) };
    inline TLSConfig tlsConfig() { DARABONBA_PTR_GET(tlsConfig_, TLSConfig) };
    inline UpdateCustomDomainInput& setTlsConfig(const TLSConfig & tlsConfig) { DARABONBA_PTR_SET_VALUE(tlsConfig_, tlsConfig) };
    inline UpdateCustomDomainInput& setTlsConfig(TLSConfig && tlsConfig) { DARABONBA_PTR_SET_RVALUE(tlsConfig_, tlsConfig) };


    // wafConfig Field Functions 
    bool hasWafConfig() const { return this->wafConfig_ != nullptr;};
    void deleteWafConfig() { this->wafConfig_ = nullptr;};
    inline const WAFConfig & wafConfig() const { DARABONBA_PTR_GET_CONST(wafConfig_, WAFConfig) };
    inline WAFConfig wafConfig() { DARABONBA_PTR_GET(wafConfig_, WAFConfig) };
    inline UpdateCustomDomainInput& setWafConfig(const WAFConfig & wafConfig) { DARABONBA_PTR_SET_VALUE(wafConfig_, wafConfig) };
    inline UpdateCustomDomainInput& setWafConfig(WAFConfig && wafConfig) { DARABONBA_PTR_SET_RVALUE(wafConfig_, wafConfig) };


  protected:
    std::shared_ptr<string> applicationID_ = nullptr;
    std::shared_ptr<string> applicationName_ = nullptr;
    std::shared_ptr<CertConfig> certConfig_ = nullptr;
    std::shared_ptr<bool> keepFullPath_ = nullptr;
    std::shared_ptr<string> namespaceID_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<TLSConfig> tlsConfig_ = nullptr;
    std::shared_ptr<WAFConfig> wafConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
