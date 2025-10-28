// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPCONFIGWEBCONTAINERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_APPCONFIGWEBCONTAINERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AppConfigWebContainerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppConfigWebContainerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorType, connectorType_);
      DARABONBA_PTR_TO_JSON(ContextInputType, contextInputType_);
      DARABONBA_PTR_TO_JSON(ContextPath, contextPath_);
      DARABONBA_PTR_TO_JSON(HttpPort, httpPort_);
      DARABONBA_PTR_TO_JSON(MaxThreads, maxThreads_);
      DARABONBA_PTR_TO_JSON(ServerXml, serverXml_);
      DARABONBA_PTR_TO_JSON(UriEncoding, uriEncoding_);
      DARABONBA_PTR_TO_JSON(UseAdvancedServerXml, useAdvancedServerXml_);
      DARABONBA_PTR_TO_JSON(UseBodyEncoding, useBodyEncoding_);
      DARABONBA_PTR_TO_JSON(UseDefaultConfig, useDefaultConfig_);
    };
    friend void from_json(const Darabonba::Json& j, AppConfigWebContainerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorType, connectorType_);
      DARABONBA_PTR_FROM_JSON(ContextInputType, contextInputType_);
      DARABONBA_PTR_FROM_JSON(ContextPath, contextPath_);
      DARABONBA_PTR_FROM_JSON(HttpPort, httpPort_);
      DARABONBA_PTR_FROM_JSON(MaxThreads, maxThreads_);
      DARABONBA_PTR_FROM_JSON(ServerXml, serverXml_);
      DARABONBA_PTR_FROM_JSON(UriEncoding, uriEncoding_);
      DARABONBA_PTR_FROM_JSON(UseAdvancedServerXml, useAdvancedServerXml_);
      DARABONBA_PTR_FROM_JSON(UseBodyEncoding, useBodyEncoding_);
      DARABONBA_PTR_FROM_JSON(UseDefaultConfig, useDefaultConfig_);
    };
    AppConfigWebContainerConfig() = default ;
    AppConfigWebContainerConfig(const AppConfigWebContainerConfig &) = default ;
    AppConfigWebContainerConfig(AppConfigWebContainerConfig &&) = default ;
    AppConfigWebContainerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppConfigWebContainerConfig() = default ;
    AppConfigWebContainerConfig& operator=(const AppConfigWebContainerConfig &) = default ;
    AppConfigWebContainerConfig& operator=(AppConfigWebContainerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectorType_ == nullptr
        && return this->contextInputType_ == nullptr && return this->contextPath_ == nullptr && return this->httpPort_ == nullptr && return this->maxThreads_ == nullptr && return this->serverXml_ == nullptr
        && return this->uriEncoding_ == nullptr && return this->useAdvancedServerXml_ == nullptr && return this->useBodyEncoding_ == nullptr && return this->useDefaultConfig_ == nullptr; };
    // connectorType Field Functions 
    bool hasConnectorType() const { return this->connectorType_ != nullptr;};
    void deleteConnectorType() { this->connectorType_ = nullptr;};
    inline string connectorType() const { DARABONBA_PTR_GET_DEFAULT(connectorType_, "") };
    inline AppConfigWebContainerConfig& setConnectorType(string connectorType) { DARABONBA_PTR_SET_VALUE(connectorType_, connectorType) };


    // contextInputType Field Functions 
    bool hasContextInputType() const { return this->contextInputType_ != nullptr;};
    void deleteContextInputType() { this->contextInputType_ = nullptr;};
    inline string contextInputType() const { DARABONBA_PTR_GET_DEFAULT(contextInputType_, "") };
    inline AppConfigWebContainerConfig& setContextInputType(string contextInputType) { DARABONBA_PTR_SET_VALUE(contextInputType_, contextInputType) };


    // contextPath Field Functions 
    bool hasContextPath() const { return this->contextPath_ != nullptr;};
    void deleteContextPath() { this->contextPath_ = nullptr;};
    inline string contextPath() const { DARABONBA_PTR_GET_DEFAULT(contextPath_, "") };
    inline AppConfigWebContainerConfig& setContextPath(string contextPath) { DARABONBA_PTR_SET_VALUE(contextPath_, contextPath) };


    // httpPort Field Functions 
    bool hasHttpPort() const { return this->httpPort_ != nullptr;};
    void deleteHttpPort() { this->httpPort_ = nullptr;};
    inline int64_t httpPort() const { DARABONBA_PTR_GET_DEFAULT(httpPort_, 0L) };
    inline AppConfigWebContainerConfig& setHttpPort(int64_t httpPort) { DARABONBA_PTR_SET_VALUE(httpPort_, httpPort) };


    // maxThreads Field Functions 
    bool hasMaxThreads() const { return this->maxThreads_ != nullptr;};
    void deleteMaxThreads() { this->maxThreads_ = nullptr;};
    inline int64_t maxThreads() const { DARABONBA_PTR_GET_DEFAULT(maxThreads_, 0L) };
    inline AppConfigWebContainerConfig& setMaxThreads(int64_t maxThreads) { DARABONBA_PTR_SET_VALUE(maxThreads_, maxThreads) };


    // serverXml Field Functions 
    bool hasServerXml() const { return this->serverXml_ != nullptr;};
    void deleteServerXml() { this->serverXml_ = nullptr;};
    inline string serverXml() const { DARABONBA_PTR_GET_DEFAULT(serverXml_, "") };
    inline AppConfigWebContainerConfig& setServerXml(string serverXml) { DARABONBA_PTR_SET_VALUE(serverXml_, serverXml) };


    // uriEncoding Field Functions 
    bool hasUriEncoding() const { return this->uriEncoding_ != nullptr;};
    void deleteUriEncoding() { this->uriEncoding_ = nullptr;};
    inline string uriEncoding() const { DARABONBA_PTR_GET_DEFAULT(uriEncoding_, "") };
    inline AppConfigWebContainerConfig& setUriEncoding(string uriEncoding) { DARABONBA_PTR_SET_VALUE(uriEncoding_, uriEncoding) };


    // useAdvancedServerXml Field Functions 
    bool hasUseAdvancedServerXml() const { return this->useAdvancedServerXml_ != nullptr;};
    void deleteUseAdvancedServerXml() { this->useAdvancedServerXml_ = nullptr;};
    inline bool useAdvancedServerXml() const { DARABONBA_PTR_GET_DEFAULT(useAdvancedServerXml_, false) };
    inline AppConfigWebContainerConfig& setUseAdvancedServerXml(bool useAdvancedServerXml) { DARABONBA_PTR_SET_VALUE(useAdvancedServerXml_, useAdvancedServerXml) };


    // useBodyEncoding Field Functions 
    bool hasUseBodyEncoding() const { return this->useBodyEncoding_ != nullptr;};
    void deleteUseBodyEncoding() { this->useBodyEncoding_ = nullptr;};
    inline bool useBodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(useBodyEncoding_, false) };
    inline AppConfigWebContainerConfig& setUseBodyEncoding(bool useBodyEncoding) { DARABONBA_PTR_SET_VALUE(useBodyEncoding_, useBodyEncoding) };


    // useDefaultConfig Field Functions 
    bool hasUseDefaultConfig() const { return this->useDefaultConfig_ != nullptr;};
    void deleteUseDefaultConfig() { this->useDefaultConfig_ = nullptr;};
    inline bool useDefaultConfig() const { DARABONBA_PTR_GET_DEFAULT(useDefaultConfig_, false) };
    inline AppConfigWebContainerConfig& setUseDefaultConfig(bool useDefaultConfig) { DARABONBA_PTR_SET_VALUE(useDefaultConfig_, useDefaultConfig) };


  protected:
    std::shared_ptr<string> connectorType_ = nullptr;
    std::shared_ptr<string> contextInputType_ = nullptr;
    std::shared_ptr<string> contextPath_ = nullptr;
    std::shared_ptr<int64_t> httpPort_ = nullptr;
    std::shared_ptr<int64_t> maxThreads_ = nullptr;
    std::shared_ptr<string> serverXml_ = nullptr;
    std::shared_ptr<string> uriEncoding_ = nullptr;
    std::shared_ptr<bool> useAdvancedServerXml_ = nullptr;
    std::shared_ptr<bool> useBodyEncoding_ = nullptr;
    std::shared_ptr<bool> useDefaultConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
