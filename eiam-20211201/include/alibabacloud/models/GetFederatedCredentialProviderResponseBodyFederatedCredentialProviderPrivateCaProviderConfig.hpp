// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEDERATEDCREDENTIALPROVIDERRESPONSEBODYFEDERATEDCREDENTIALPROVIDERPRIVATECAPROVIDERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETFEDERATEDCREDENTIALPROVIDERRESPONSEBODYFEDERATEDCREDENTIALPROVIDERPRIVATECAPROVIDERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Certificates, certificates_);
      DARABONBA_PTR_TO_JSON(TrustAnchorSource, trustAnchorSource_);
      DARABONBA_PTR_TO_JSON(TrustCondition, trustCondition_);
    };
    friend void from_json(const Darabonba::Json& j, GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(TrustAnchorSource, trustAnchorSource_);
      DARABONBA_PTR_FROM_JSON(TrustCondition, trustCondition_);
    };
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig() = default ;
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig(const GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig &) = default ;
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig(GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig &&) = default ;
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig() = default ;
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig& operator=(const GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig &) = default ;
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig& operator=(GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificates_ == nullptr
        && return this->trustAnchorSource_ == nullptr && return this->trustCondition_ == nullptr; };
    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates> & certificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates>) };
    inline vector<Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates> certificates() { DARABONBA_PTR_GET(certificates_, vector<Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates>) };
    inline GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig& setCertificates(const vector<Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig& setCertificates(vector<Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // trustAnchorSource Field Functions 
    bool hasTrustAnchorSource() const { return this->trustAnchorSource_ != nullptr;};
    void deleteTrustAnchorSource() { this->trustAnchorSource_ = nullptr;};
    inline string trustAnchorSource() const { DARABONBA_PTR_GET_DEFAULT(trustAnchorSource_, "") };
    inline GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig& setTrustAnchorSource(string trustAnchorSource) { DARABONBA_PTR_SET_VALUE(trustAnchorSource_, trustAnchorSource) };


    // trustCondition Field Functions 
    bool hasTrustCondition() const { return this->trustCondition_ != nullptr;};
    void deleteTrustCondition() { this->trustCondition_ = nullptr;};
    inline string trustCondition() const { DARABONBA_PTR_GET_DEFAULT(trustCondition_, "") };
    inline GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfig& setTrustCondition(string trustCondition) { DARABONBA_PTR_SET_VALUE(trustCondition_, trustCondition) };


  protected:
    // Root证书
    std::shared_ptr<vector<Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates>> certificates_ = nullptr;
    // Root证书获取方式
    std::shared_ptr<string> trustAnchorSource_ = nullptr;
    // Root证书的默认条件
    std::shared_ptr<string> trustCondition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
