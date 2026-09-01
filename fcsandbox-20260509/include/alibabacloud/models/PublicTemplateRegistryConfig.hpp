// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICTEMPLATEREGISTRYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PUBLICTEMPLATEREGISTRYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublicTemplateRegistryNetworkConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class PublicTemplateRegistryConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicTemplateRegistryConfig& obj) { 
      DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
    };
    friend void from_json(const Darabonba::Json& j, PublicTemplateRegistryConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
    };
    PublicTemplateRegistryConfig() = default ;
    PublicTemplateRegistryConfig(const PublicTemplateRegistryConfig &) = default ;
    PublicTemplateRegistryConfig(PublicTemplateRegistryConfig &&) = default ;
    PublicTemplateRegistryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicTemplateRegistryConfig() = default ;
    PublicTemplateRegistryConfig& operator=(const PublicTemplateRegistryConfig &) = default ;
    PublicTemplateRegistryConfig& operator=(PublicTemplateRegistryConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkConfig_ == nullptr; };
    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const PublicTemplateRegistryNetworkConfig & getNetworkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, PublicTemplateRegistryNetworkConfig) };
    inline PublicTemplateRegistryNetworkConfig getNetworkConfig() { DARABONBA_PTR_GET(networkConfig_, PublicTemplateRegistryNetworkConfig) };
    inline PublicTemplateRegistryConfig& setNetworkConfig(const PublicTemplateRegistryNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline PublicTemplateRegistryConfig& setNetworkConfig(PublicTemplateRegistryNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


  protected:
    shared_ptr<PublicTemplateRegistryNetworkConfig> networkConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
