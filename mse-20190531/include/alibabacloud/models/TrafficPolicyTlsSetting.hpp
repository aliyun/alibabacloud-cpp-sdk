// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAFFICPOLICYTLSSETTING_HPP_
#define ALIBABACLOUD_MODELS_TRAFFICPOLICYTLSSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class TrafficPolicyTlsSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrafficPolicyTlsSetting& obj) { 
      DARABONBA_PTR_TO_JSON(CaCertContent, caCertContent_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(Sni, sni_);
      DARABONBA_PTR_TO_JSON(TlsMode, tlsMode_);
    };
    friend void from_json(const Darabonba::Json& j, TrafficPolicyTlsSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(CaCertContent, caCertContent_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(Sni, sni_);
      DARABONBA_PTR_FROM_JSON(TlsMode, tlsMode_);
    };
    TrafficPolicyTlsSetting() = default ;
    TrafficPolicyTlsSetting(const TrafficPolicyTlsSetting &) = default ;
    TrafficPolicyTlsSetting(TrafficPolicyTlsSetting &&) = default ;
    TrafficPolicyTlsSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrafficPolicyTlsSetting() = default ;
    TrafficPolicyTlsSetting& operator=(const TrafficPolicyTlsSetting &) = default ;
    TrafficPolicyTlsSetting& operator=(TrafficPolicyTlsSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->caCertContent_ != nullptr
        && this->certId_ != nullptr && this->sni_ != nullptr && this->tlsMode_ != nullptr; };
    // caCertContent Field Functions 
    bool hasCaCertContent() const { return this->caCertContent_ != nullptr;};
    void deleteCaCertContent() { this->caCertContent_ = nullptr;};
    inline string caCertContent() const { DARABONBA_PTR_GET_DEFAULT(caCertContent_, "") };
    inline TrafficPolicyTlsSetting& setCaCertContent(string caCertContent) { DARABONBA_PTR_SET_VALUE(caCertContent_, caCertContent) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline TrafficPolicyTlsSetting& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // sni Field Functions 
    bool hasSni() const { return this->sni_ != nullptr;};
    void deleteSni() { this->sni_ = nullptr;};
    inline string sni() const { DARABONBA_PTR_GET_DEFAULT(sni_, "") };
    inline TrafficPolicyTlsSetting& setSni(string sni) { DARABONBA_PTR_SET_VALUE(sni_, sni) };


    // tlsMode Field Functions 
    bool hasTlsMode() const { return this->tlsMode_ != nullptr;};
    void deleteTlsMode() { this->tlsMode_ = nullptr;};
    inline string tlsMode() const { DARABONBA_PTR_GET_DEFAULT(tlsMode_, "") };
    inline TrafficPolicyTlsSetting& setTlsMode(string tlsMode) { DARABONBA_PTR_SET_VALUE(tlsMode_, tlsMode) };


  protected:
    std::shared_ptr<string> caCertContent_ = nullptr;
    std::shared_ptr<string> certId_ = nullptr;
    std::shared_ptr<string> sni_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tlsMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
