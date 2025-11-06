// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYDOMAINREQUESTTLSCIPHERSUITESCONFIGJSON_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYDOMAINREQUESTTLSCIPHERSUITESCONFIGJSON_HPP_
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
  class UpdateGatewayDomainRequestTlsCipherSuitesConfigJSON : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayDomainRequestTlsCipherSuitesConfigJSON& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(TlsCipherSuites, tlsCipherSuites_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayDomainRequestTlsCipherSuitesConfigJSON& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(TlsCipherSuites, tlsCipherSuites_);
    };
    UpdateGatewayDomainRequestTlsCipherSuitesConfigJSON() = default ;
    UpdateGatewayDomainRequestTlsCipherSuitesConfigJSON(const UpdateGatewayDomainRequestTlsCipherSuitesConfigJSON &) = default ;
    UpdateGatewayDomainRequestTlsCipherSuitesConfigJSON(UpdateGatewayDomainRequestTlsCipherSuitesConfigJSON &&) = default ;
    UpdateGatewayDomainRequestTlsCipherSuitesConfigJSON(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayDomainRequestTlsCipherSuitesConfigJSON() = default ;
    UpdateGatewayDomainRequestTlsCipherSuitesConfigJSON& operator=(const UpdateGatewayDomainRequestTlsCipherSuitesConfigJSON &) = default ;
    UpdateGatewayDomainRequestTlsCipherSuitesConfigJSON& operator=(UpdateGatewayDomainRequestTlsCipherSuitesConfigJSON &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configType_ == nullptr
        && return this->tlsCipherSuites_ == nullptr; };
    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline UpdateGatewayDomainRequestTlsCipherSuitesConfigJSON& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // tlsCipherSuites Field Functions 
    bool hasTlsCipherSuites() const { return this->tlsCipherSuites_ != nullptr;};
    void deleteTlsCipherSuites() { this->tlsCipherSuites_ = nullptr;};
    inline const vector<string> & tlsCipherSuites() const { DARABONBA_PTR_GET_CONST(tlsCipherSuites_, vector<string>) };
    inline vector<string> tlsCipherSuites() { DARABONBA_PTR_GET(tlsCipherSuites_, vector<string>) };
    inline UpdateGatewayDomainRequestTlsCipherSuitesConfigJSON& setTlsCipherSuites(const vector<string> & tlsCipherSuites) { DARABONBA_PTR_SET_VALUE(tlsCipherSuites_, tlsCipherSuites) };
    inline UpdateGatewayDomainRequestTlsCipherSuitesConfigJSON& setTlsCipherSuites(vector<string> && tlsCipherSuites) { DARABONBA_PTR_SET_RVALUE(tlsCipherSuites_, tlsCipherSuites) };


  protected:
    std::shared_ptr<string> configType_ = nullptr;
    std::shared_ptr<vector<string>> tlsCipherSuites_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
