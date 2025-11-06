// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESENTINELBLOCKFALLBACKDEFINITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESENTINELBLOCKFALLBACKDEFINITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateSentinelBlockFallbackDefinitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSentinelBlockFallbackDefinitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(FallbackBehavior, fallbackBehavior_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceClassification, resourceClassification_);
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSentinelBlockFallbackDefinitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(FallbackBehavior, fallbackBehavior_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceClassification, resourceClassification_);
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    CreateSentinelBlockFallbackDefinitionRequest() = default ;
    CreateSentinelBlockFallbackDefinitionRequest(const CreateSentinelBlockFallbackDefinitionRequest &) = default ;
    CreateSentinelBlockFallbackDefinitionRequest(CreateSentinelBlockFallbackDefinitionRequest &&) = default ;
    CreateSentinelBlockFallbackDefinitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSentinelBlockFallbackDefinitionRequest() = default ;
    CreateSentinelBlockFallbackDefinitionRequest& operator=(const CreateSentinelBlockFallbackDefinitionRequest &) = default ;
    CreateSentinelBlockFallbackDefinitionRequest& operator=(CreateSentinelBlockFallbackDefinitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->appId_ == nullptr && return this->appName_ == nullptr && return this->fallbackBehavior_ == nullptr && return this->language_ == nullptr && return this->name_ == nullptr
        && return this->namespace_ == nullptr && return this->regionId_ == nullptr && return this->resourceClassification_ == nullptr && return this->scenario_ == nullptr && return this->source_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateSentinelBlockFallbackDefinitionRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateSentinelBlockFallbackDefinitionRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateSentinelBlockFallbackDefinitionRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // fallbackBehavior Field Functions 
    bool hasFallbackBehavior() const { return this->fallbackBehavior_ != nullptr;};
    void deleteFallbackBehavior() { this->fallbackBehavior_ = nullptr;};
    inline string fallbackBehavior() const { DARABONBA_PTR_GET_DEFAULT(fallbackBehavior_, "") };
    inline CreateSentinelBlockFallbackDefinitionRequest& setFallbackBehavior(string fallbackBehavior) { DARABONBA_PTR_SET_VALUE(fallbackBehavior_, fallbackBehavior) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateSentinelBlockFallbackDefinitionRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSentinelBlockFallbackDefinitionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateSentinelBlockFallbackDefinitionRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSentinelBlockFallbackDefinitionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceClassification Field Functions 
    bool hasResourceClassification() const { return this->resourceClassification_ != nullptr;};
    void deleteResourceClassification() { this->resourceClassification_ = nullptr;};
    inline int32_t resourceClassification() const { DARABONBA_PTR_GET_DEFAULT(resourceClassification_, 0) };
    inline CreateSentinelBlockFallbackDefinitionRequest& setResourceClassification(int32_t resourceClassification) { DARABONBA_PTR_SET_VALUE(resourceClassification_, resourceClassification) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string scenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline CreateSentinelBlockFallbackDefinitionRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateSentinelBlockFallbackDefinitionRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> fallbackBehavior_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int32_t> resourceClassification_ = nullptr;
    std::shared_ptr<string> scenario_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
