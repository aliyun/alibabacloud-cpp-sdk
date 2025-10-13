// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWEBAPPLICATIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEWEBAPPLICATIONINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RevisionConfig.hpp>
#include <alibabacloud/models/WebNetworkConfig.hpp>
#include <alibabacloud/models/WebScalingConfig.hpp>
#include <alibabacloud/models/WebTrafficConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateWebApplicationInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWebApplicationInput& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RevisionConfig, revisionConfig_);
      DARABONBA_PTR_TO_JSON(WebNetworkConfig, webNetworkConfig_);
      DARABONBA_PTR_TO_JSON(WebScalingConfig, webScalingConfig_);
      DARABONBA_PTR_TO_JSON(WebTrafficConfig, webTrafficConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWebApplicationInput& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RevisionConfig, revisionConfig_);
      DARABONBA_PTR_FROM_JSON(WebNetworkConfig, webNetworkConfig_);
      DARABONBA_PTR_FROM_JSON(WebScalingConfig, webScalingConfig_);
      DARABONBA_PTR_FROM_JSON(WebTrafficConfig, webTrafficConfig_);
    };
    CreateWebApplicationInput() = default ;
    CreateWebApplicationInput(const CreateWebApplicationInput &) = default ;
    CreateWebApplicationInput(CreateWebApplicationInput &&) = default ;
    CreateWebApplicationInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWebApplicationInput() = default ;
    CreateWebApplicationInput& operator=(const CreateWebApplicationInput &) = default ;
    CreateWebApplicationInput& operator=(CreateWebApplicationInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && return this->description_ == nullptr && return this->revisionConfig_ == nullptr && return this->webNetworkConfig_ == nullptr && return this->webScalingConfig_ == nullptr && return this->webTrafficConfig_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline CreateWebApplicationInput& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateWebApplicationInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // revisionConfig Field Functions 
    bool hasRevisionConfig() const { return this->revisionConfig_ != nullptr;};
    void deleteRevisionConfig() { this->revisionConfig_ = nullptr;};
    inline const RevisionConfig & revisionConfig() const { DARABONBA_PTR_GET_CONST(revisionConfig_, RevisionConfig) };
    inline RevisionConfig revisionConfig() { DARABONBA_PTR_GET(revisionConfig_, RevisionConfig) };
    inline CreateWebApplicationInput& setRevisionConfig(const RevisionConfig & revisionConfig) { DARABONBA_PTR_SET_VALUE(revisionConfig_, revisionConfig) };
    inline CreateWebApplicationInput& setRevisionConfig(RevisionConfig && revisionConfig) { DARABONBA_PTR_SET_RVALUE(revisionConfig_, revisionConfig) };


    // webNetworkConfig Field Functions 
    bool hasWebNetworkConfig() const { return this->webNetworkConfig_ != nullptr;};
    void deleteWebNetworkConfig() { this->webNetworkConfig_ = nullptr;};
    inline const WebNetworkConfig & webNetworkConfig() const { DARABONBA_PTR_GET_CONST(webNetworkConfig_, WebNetworkConfig) };
    inline WebNetworkConfig webNetworkConfig() { DARABONBA_PTR_GET(webNetworkConfig_, WebNetworkConfig) };
    inline CreateWebApplicationInput& setWebNetworkConfig(const WebNetworkConfig & webNetworkConfig) { DARABONBA_PTR_SET_VALUE(webNetworkConfig_, webNetworkConfig) };
    inline CreateWebApplicationInput& setWebNetworkConfig(WebNetworkConfig && webNetworkConfig) { DARABONBA_PTR_SET_RVALUE(webNetworkConfig_, webNetworkConfig) };


    // webScalingConfig Field Functions 
    bool hasWebScalingConfig() const { return this->webScalingConfig_ != nullptr;};
    void deleteWebScalingConfig() { this->webScalingConfig_ = nullptr;};
    inline const WebScalingConfig & webScalingConfig() const { DARABONBA_PTR_GET_CONST(webScalingConfig_, WebScalingConfig) };
    inline WebScalingConfig webScalingConfig() { DARABONBA_PTR_GET(webScalingConfig_, WebScalingConfig) };
    inline CreateWebApplicationInput& setWebScalingConfig(const WebScalingConfig & webScalingConfig) { DARABONBA_PTR_SET_VALUE(webScalingConfig_, webScalingConfig) };
    inline CreateWebApplicationInput& setWebScalingConfig(WebScalingConfig && webScalingConfig) { DARABONBA_PTR_SET_RVALUE(webScalingConfig_, webScalingConfig) };


    // webTrafficConfig Field Functions 
    bool hasWebTrafficConfig() const { return this->webTrafficConfig_ != nullptr;};
    void deleteWebTrafficConfig() { this->webTrafficConfig_ = nullptr;};
    inline const WebTrafficConfig & webTrafficConfig() const { DARABONBA_PTR_GET_CONST(webTrafficConfig_, WebTrafficConfig) };
    inline WebTrafficConfig webTrafficConfig() { DARABONBA_PTR_GET(webTrafficConfig_, WebTrafficConfig) };
    inline CreateWebApplicationInput& setWebTrafficConfig(const WebTrafficConfig & webTrafficConfig) { DARABONBA_PTR_SET_VALUE(webTrafficConfig_, webTrafficConfig) };
    inline CreateWebApplicationInput& setWebTrafficConfig(WebTrafficConfig && webTrafficConfig) { DARABONBA_PTR_SET_RVALUE(webTrafficConfig_, webTrafficConfig) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<RevisionConfig> revisionConfig_ = nullptr;
    std::shared_ptr<WebNetworkConfig> webNetworkConfig_ = nullptr;
    std::shared_ptr<WebScalingConfig> webScalingConfig_ = nullptr;
    std::shared_ptr<WebTrafficConfig> webTrafficConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
