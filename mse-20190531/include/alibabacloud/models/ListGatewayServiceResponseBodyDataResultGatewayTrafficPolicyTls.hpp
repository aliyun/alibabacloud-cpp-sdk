// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODYDATARESULTGATEWAYTRAFFICPOLICYTLS_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODYDATARESULTGATEWAYTRAFFICPOLICYTLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls& obj) { 
      DARABONBA_PTR_TO_JSON(CaCertContent, caCertContent_);
      DARABONBA_PTR_TO_JSON(CaCertId, caCertId_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Sni, sni_);
      DARABONBA_PTR_TO_JSON(SubjectAltNames, subjectAltNames_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls& obj) { 
      DARABONBA_PTR_FROM_JSON(CaCertContent, caCertContent_);
      DARABONBA_PTR_FROM_JSON(CaCertId, caCertId_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Sni, sni_);
      DARABONBA_PTR_FROM_JSON(SubjectAltNames, subjectAltNames_);
    };
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls() = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls(const ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls &) = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls(ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls &&) = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls() = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls& operator=(const ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls &) = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls& operator=(ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->caCertContent_ != nullptr
        && this->caCertId_ != nullptr && this->certId_ != nullptr && this->mode_ != nullptr && this->sni_ != nullptr && this->subjectAltNames_ != nullptr; };
    // caCertContent Field Functions 
    bool hasCaCertContent() const { return this->caCertContent_ != nullptr;};
    void deleteCaCertContent() { this->caCertContent_ = nullptr;};
    inline string caCertContent() const { DARABONBA_PTR_GET_DEFAULT(caCertContent_, "") };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls& setCaCertContent(string caCertContent) { DARABONBA_PTR_SET_VALUE(caCertContent_, caCertContent) };


    // caCertId Field Functions 
    bool hasCaCertId() const { return this->caCertId_ != nullptr;};
    void deleteCaCertId() { this->caCertId_ = nullptr;};
    inline string caCertId() const { DARABONBA_PTR_GET_DEFAULT(caCertId_, "") };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls& setCaCertId(string caCertId) { DARABONBA_PTR_SET_VALUE(caCertId_, caCertId) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // sni Field Functions 
    bool hasSni() const { return this->sni_ != nullptr;};
    void deleteSni() { this->sni_ = nullptr;};
    inline string sni() const { DARABONBA_PTR_GET_DEFAULT(sni_, "") };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls& setSni(string sni) { DARABONBA_PTR_SET_VALUE(sni_, sni) };


    // subjectAltNames Field Functions 
    bool hasSubjectAltNames() const { return this->subjectAltNames_ != nullptr;};
    void deleteSubjectAltNames() { this->subjectAltNames_ = nullptr;};
    inline const vector<string> & subjectAltNames() const { DARABONBA_PTR_GET_CONST(subjectAltNames_, vector<string>) };
    inline vector<string> subjectAltNames() { DARABONBA_PTR_GET(subjectAltNames_, vector<string>) };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls& setSubjectAltNames(const vector<string> & subjectAltNames) { DARABONBA_PTR_SET_VALUE(subjectAltNames_, subjectAltNames) };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls& setSubjectAltNames(vector<string> && subjectAltNames) { DARABONBA_PTR_SET_RVALUE(subjectAltNames_, subjectAltNames) };


  protected:
    // The public key of the CA certificate .
    std::shared_ptr<string> caCertContent_ = nullptr;
    // The ID of the certification authority (CA) certificate.
    std::shared_ptr<string> caCertId_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<string> certId_ = nullptr;
    // The TLS mode.
    // 
    // *   DISABLE
    // *   SIMPLE
    // *   MUTUAL
    // *   ISTIO_MUTUAL
    std::shared_ptr<string> mode_ = nullptr;
    // The Server Name Indication (SNI) value.
    std::shared_ptr<string> sni_ = nullptr;
    // The array of subject aliases.
    std::shared_ptr<vector<string>> subjectAltNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
