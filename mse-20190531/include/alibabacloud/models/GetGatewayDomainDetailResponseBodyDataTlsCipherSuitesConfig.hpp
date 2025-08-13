// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYDOMAINDETAILRESPONSEBODYDATATLSCIPHERSUITESCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYDOMAINDETAILRESPONSEBODYDATATLSCIPHERSUITESCONFIG_HPP_
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
  class GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(TlsCipherSuites, tlsCipherSuites_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(TlsCipherSuites, tlsCipherSuites_);
    };
    GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig() = default ;
    GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig(const GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig &) = default ;
    GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig(GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig &&) = default ;
    GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig() = default ;
    GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig& operator=(const GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig &) = default ;
    GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig& operator=(GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configType_ != nullptr
        && this->tlsCipherSuites_ != nullptr; };
    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // tlsCipherSuites Field Functions 
    bool hasTlsCipherSuites() const { return this->tlsCipherSuites_ != nullptr;};
    void deleteTlsCipherSuites() { this->tlsCipherSuites_ = nullptr;};
    inline const vector<string> & tlsCipherSuites() const { DARABONBA_PTR_GET_CONST(tlsCipherSuites_, vector<string>) };
    inline vector<string> tlsCipherSuites() { DARABONBA_PTR_GET(tlsCipherSuites_, vector<string>) };
    inline GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig& setTlsCipherSuites(const vector<string> & tlsCipherSuites) { DARABONBA_PTR_SET_VALUE(tlsCipherSuites_, tlsCipherSuites) };
    inline GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig& setTlsCipherSuites(vector<string> && tlsCipherSuites) { DARABONBA_PTR_SET_RVALUE(tlsCipherSuites_, tlsCipherSuites) };


  protected:
    std::shared_ptr<string> configType_ = nullptr;
    std::shared_ptr<vector<string>> tlsCipherSuites_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
