// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTAINER_HPP_
#define ALIBABACLOUD_MODELS_CONTAINER_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ImageRegistryConfig.hpp>
#include <alibabacloud/models/MetricsCollectConfig.hpp>
#include <alibabacloud/models/ContainerResources.hpp>
#include <alibabacloud/models/SLSCollectConfigs.hpp>
#include <alibabacloud/models/StartupProbe.hpp>
#include <alibabacloud/models/WebNASConfig.hpp>
#include <alibabacloud/models/WebOSSConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class Container : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Container& obj) { 
      DARABONBA_PTR_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(ImageRegistryConfig, imageRegistryConfig_);
      DARABONBA_PTR_TO_JSON(MetricsCollectConfig, metricsCollectConfig_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RequestConcurrency, requestConcurrency_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(SLSCollectConfigs, SLSCollectConfigs_);
      DARABONBA_PTR_TO_JSON(StartupProbe, startupProbe_);
      DARABONBA_PTR_TO_JSON(WebNASConfig, webNASConfig_);
      DARABONBA_PTR_TO_JSON(WebOSSConfig, webOSSConfig_);
    };
    friend void from_json(const Darabonba::Json& j, Container& obj) { 
      DARABONBA_PTR_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(ImageRegistryConfig, imageRegistryConfig_);
      DARABONBA_PTR_FROM_JSON(MetricsCollectConfig, metricsCollectConfig_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RequestConcurrency, requestConcurrency_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(SLSCollectConfigs, SLSCollectConfigs_);
      DARABONBA_PTR_FROM_JSON(StartupProbe, startupProbe_);
      DARABONBA_PTR_FROM_JSON(WebNASConfig, webNASConfig_);
      DARABONBA_PTR_FROM_JSON(WebOSSConfig, webOSSConfig_);
    };
    Container() = default ;
    Container(const Container &) = default ;
    Container(Container &&) = default ;
    Container(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Container() = default ;
    Container& operator=(const Container &) = default ;
    Container& operator=(Container &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->args_ == nullptr
        && this->command_ == nullptr && this->environmentVariables_ == nullptr && this->image_ == nullptr && this->imageRegistryConfig_ == nullptr && this->metricsCollectConfig_ == nullptr
        && this->port_ == nullptr && this->requestConcurrency_ == nullptr && this->requestTimeout_ == nullptr && this->resources_ == nullptr && this->SLSCollectConfigs_ == nullptr
        && this->startupProbe_ == nullptr && this->webNASConfig_ == nullptr && this->webOSSConfig_ == nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline string getArgs() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
    inline Container& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline Container& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline Container& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline Container& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline Container& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imageRegistryConfig Field Functions 
    bool hasImageRegistryConfig() const { return this->imageRegistryConfig_ != nullptr;};
    void deleteImageRegistryConfig() { this->imageRegistryConfig_ = nullptr;};
    inline const ImageRegistryConfig & getImageRegistryConfig() const { DARABONBA_PTR_GET_CONST(imageRegistryConfig_, ImageRegistryConfig) };
    inline ImageRegistryConfig getImageRegistryConfig() { DARABONBA_PTR_GET(imageRegistryConfig_, ImageRegistryConfig) };
    inline Container& setImageRegistryConfig(const ImageRegistryConfig & imageRegistryConfig) { DARABONBA_PTR_SET_VALUE(imageRegistryConfig_, imageRegistryConfig) };
    inline Container& setImageRegistryConfig(ImageRegistryConfig && imageRegistryConfig) { DARABONBA_PTR_SET_RVALUE(imageRegistryConfig_, imageRegistryConfig) };


    // metricsCollectConfig Field Functions 
    bool hasMetricsCollectConfig() const { return this->metricsCollectConfig_ != nullptr;};
    void deleteMetricsCollectConfig() { this->metricsCollectConfig_ = nullptr;};
    inline const MetricsCollectConfig & getMetricsCollectConfig() const { DARABONBA_PTR_GET_CONST(metricsCollectConfig_, MetricsCollectConfig) };
    inline MetricsCollectConfig getMetricsCollectConfig() { DARABONBA_PTR_GET(metricsCollectConfig_, MetricsCollectConfig) };
    inline Container& setMetricsCollectConfig(const MetricsCollectConfig & metricsCollectConfig) { DARABONBA_PTR_SET_VALUE(metricsCollectConfig_, metricsCollectConfig) };
    inline Container& setMetricsCollectConfig(MetricsCollectConfig && metricsCollectConfig) { DARABONBA_PTR_SET_RVALUE(metricsCollectConfig_, metricsCollectConfig) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline Container& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // requestConcurrency Field Functions 
    bool hasRequestConcurrency() const { return this->requestConcurrency_ != nullptr;};
    void deleteRequestConcurrency() { this->requestConcurrency_ = nullptr;};
    inline int32_t getRequestConcurrency() const { DARABONBA_PTR_GET_DEFAULT(requestConcurrency_, 0) };
    inline Container& setRequestConcurrency(int32_t requestConcurrency) { DARABONBA_PTR_SET_VALUE(requestConcurrency_, requestConcurrency) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t getRequestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline Container& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const ContainerResources & getResources() const { DARABONBA_PTR_GET_CONST(resources_, ContainerResources) };
    inline ContainerResources getResources() { DARABONBA_PTR_GET(resources_, ContainerResources) };
    inline Container& setResources(const ContainerResources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline Container& setResources(ContainerResources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // SLSCollectConfigs Field Functions 
    bool hasSLSCollectConfigs() const { return this->SLSCollectConfigs_ != nullptr;};
    void deleteSLSCollectConfigs() { this->SLSCollectConfigs_ = nullptr;};
    inline const SLSCollectConfigs & getSLSCollectConfigs() const { DARABONBA_PTR_GET_CONST(SLSCollectConfigs_, SLSCollectConfigs) };
    inline SLSCollectConfigs getSLSCollectConfigs() { DARABONBA_PTR_GET(SLSCollectConfigs_, SLSCollectConfigs) };
    inline Container& setSLSCollectConfigs(const SLSCollectConfigs & SLSCollectConfigs) { DARABONBA_PTR_SET_VALUE(SLSCollectConfigs_, SLSCollectConfigs) };
    inline Container& setSLSCollectConfigs(SLSCollectConfigs && SLSCollectConfigs) { DARABONBA_PTR_SET_RVALUE(SLSCollectConfigs_, SLSCollectConfigs) };


    // startupProbe Field Functions 
    bool hasStartupProbe() const { return this->startupProbe_ != nullptr;};
    void deleteStartupProbe() { this->startupProbe_ = nullptr;};
    inline const StartupProbe & getStartupProbe() const { DARABONBA_PTR_GET_CONST(startupProbe_, StartupProbe) };
    inline StartupProbe getStartupProbe() { DARABONBA_PTR_GET(startupProbe_, StartupProbe) };
    inline Container& setStartupProbe(const StartupProbe & startupProbe) { DARABONBA_PTR_SET_VALUE(startupProbe_, startupProbe) };
    inline Container& setStartupProbe(StartupProbe && startupProbe) { DARABONBA_PTR_SET_RVALUE(startupProbe_, startupProbe) };


    // webNASConfig Field Functions 
    bool hasWebNASConfig() const { return this->webNASConfig_ != nullptr;};
    void deleteWebNASConfig() { this->webNASConfig_ = nullptr;};
    inline const WebNASConfig & getWebNASConfig() const { DARABONBA_PTR_GET_CONST(webNASConfig_, WebNASConfig) };
    inline WebNASConfig getWebNASConfig() { DARABONBA_PTR_GET(webNASConfig_, WebNASConfig) };
    inline Container& setWebNASConfig(const WebNASConfig & webNASConfig) { DARABONBA_PTR_SET_VALUE(webNASConfig_, webNASConfig) };
    inline Container& setWebNASConfig(WebNASConfig && webNASConfig) { DARABONBA_PTR_SET_RVALUE(webNASConfig_, webNASConfig) };


    // webOSSConfig Field Functions 
    bool hasWebOSSConfig() const { return this->webOSSConfig_ != nullptr;};
    void deleteWebOSSConfig() { this->webOSSConfig_ = nullptr;};
    inline const WebOSSConfig & getWebOSSConfig() const { DARABONBA_PTR_GET_CONST(webOSSConfig_, WebOSSConfig) };
    inline WebOSSConfig getWebOSSConfig() { DARABONBA_PTR_GET(webOSSConfig_, WebOSSConfig) };
    inline Container& setWebOSSConfig(const WebOSSConfig & webOSSConfig) { DARABONBA_PTR_SET_VALUE(webOSSConfig_, webOSSConfig) };
    inline Container& setWebOSSConfig(WebOSSConfig && webOSSConfig) { DARABONBA_PTR_SET_RVALUE(webOSSConfig_, webOSSConfig) };


  protected:
    shared_ptr<string> args_ {};
    shared_ptr<string> command_ {};
    shared_ptr<map<string, string>> environmentVariables_ {};
    // This parameter is required.
    shared_ptr<string> image_ {};
    shared_ptr<ImageRegistryConfig> imageRegistryConfig_ {};
    shared_ptr<MetricsCollectConfig> metricsCollectConfig_ {};
    shared_ptr<int32_t> port_ {};
    shared_ptr<int32_t> requestConcurrency_ {};
    shared_ptr<int32_t> requestTimeout_ {};
    // This parameter is required.
    shared_ptr<ContainerResources> resources_ {};
    shared_ptr<SLSCollectConfigs> SLSCollectConfigs_ {};
    shared_ptr<StartupProbe> startupProbe_ {};
    shared_ptr<WebNASConfig> webNASConfig_ {};
    shared_ptr<WebOSSConfig> webOSSConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
