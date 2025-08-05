// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TLSCIPHERSUITESCONFIG_HPP_
#define ALIBABACLOUD_MODELS_TLSCIPHERSUITESCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TlsCipherSuitesConfigTlsCipherSuite.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class TlsCipherSuitesConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TlsCipherSuitesConfig& obj) { 
      DARABONBA_PTR_TO_JSON(configType, configType_);
      DARABONBA_PTR_TO_JSON(tlsCipherSuite, tlsCipherSuite_);
    };
    friend void from_json(const Darabonba::Json& j, TlsCipherSuitesConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(configType, configType_);
      DARABONBA_PTR_FROM_JSON(tlsCipherSuite, tlsCipherSuite_);
    };
    TlsCipherSuitesConfig() = default ;
    TlsCipherSuitesConfig(const TlsCipherSuitesConfig &) = default ;
    TlsCipherSuitesConfig(TlsCipherSuitesConfig &&) = default ;
    TlsCipherSuitesConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TlsCipherSuitesConfig() = default ;
    TlsCipherSuitesConfig& operator=(const TlsCipherSuitesConfig &) = default ;
    TlsCipherSuitesConfig& operator=(TlsCipherSuitesConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configType_ != nullptr
        && this->tlsCipherSuite_ != nullptr; };
    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline TlsCipherSuitesConfig& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // tlsCipherSuite Field Functions 
    bool hasTlsCipherSuite() const { return this->tlsCipherSuite_ != nullptr;};
    void deleteTlsCipherSuite() { this->tlsCipherSuite_ = nullptr;};
    inline const vector<TlsCipherSuitesConfigTlsCipherSuite> & tlsCipherSuite() const { DARABONBA_PTR_GET_CONST(tlsCipherSuite_, vector<TlsCipherSuitesConfigTlsCipherSuite>) };
    inline vector<TlsCipherSuitesConfigTlsCipherSuite> tlsCipherSuite() { DARABONBA_PTR_GET(tlsCipherSuite_, vector<TlsCipherSuitesConfigTlsCipherSuite>) };
    inline TlsCipherSuitesConfig& setTlsCipherSuite(const vector<TlsCipherSuitesConfigTlsCipherSuite> & tlsCipherSuite) { DARABONBA_PTR_SET_VALUE(tlsCipherSuite_, tlsCipherSuite) };
    inline TlsCipherSuitesConfig& setTlsCipherSuite(vector<TlsCipherSuitesConfigTlsCipherSuite> && tlsCipherSuite) { DARABONBA_PTR_SET_RVALUE(tlsCipherSuite_, tlsCipherSuite) };


  protected:
    std::shared_ptr<string> configType_ = nullptr;
    std::shared_ptr<vector<TlsCipherSuitesConfigTlsCipherSuite>> tlsCipherSuite_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
