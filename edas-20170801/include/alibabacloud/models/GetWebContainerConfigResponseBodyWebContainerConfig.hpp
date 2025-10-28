// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWEBCONTAINERCONFIGRESPONSEBODYWEBCONTAINERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETWEBCONTAINERCONFIGRESPONSEBODYWEBCONTAINERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetWebContainerConfigResponseBodyWebContainerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWebContainerConfigResponseBodyWebContainerConfig& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetWebContainerConfigResponseBodyWebContainerConfig& obj) { 
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
    GetWebContainerConfigResponseBodyWebContainerConfig() = default ;
    GetWebContainerConfigResponseBodyWebContainerConfig(const GetWebContainerConfigResponseBodyWebContainerConfig &) = default ;
    GetWebContainerConfigResponseBodyWebContainerConfig(GetWebContainerConfigResponseBodyWebContainerConfig &&) = default ;
    GetWebContainerConfigResponseBodyWebContainerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWebContainerConfigResponseBodyWebContainerConfig() = default ;
    GetWebContainerConfigResponseBodyWebContainerConfig& operator=(const GetWebContainerConfigResponseBodyWebContainerConfig &) = default ;
    GetWebContainerConfigResponseBodyWebContainerConfig& operator=(GetWebContainerConfigResponseBodyWebContainerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contextInputType_ == nullptr
        && return this->contextPath_ == nullptr && return this->httpPort_ == nullptr && return this->maxThreads_ == nullptr && return this->serverXml_ == nullptr && return this->uriEncoding_ == nullptr
        && return this->useAdvancedServerXml_ == nullptr && return this->useBodyEncoding_ == nullptr && return this->useDefaultConfig_ == nullptr; };
    // contextInputType Field Functions 
    bool hasContextInputType() const { return this->contextInputType_ != nullptr;};
    void deleteContextInputType() { this->contextInputType_ = nullptr;};
    inline string contextInputType() const { DARABONBA_PTR_GET_DEFAULT(contextInputType_, "") };
    inline GetWebContainerConfigResponseBodyWebContainerConfig& setContextInputType(string contextInputType) { DARABONBA_PTR_SET_VALUE(contextInputType_, contextInputType) };


    // contextPath Field Functions 
    bool hasContextPath() const { return this->contextPath_ != nullptr;};
    void deleteContextPath() { this->contextPath_ = nullptr;};
    inline string contextPath() const { DARABONBA_PTR_GET_DEFAULT(contextPath_, "") };
    inline GetWebContainerConfigResponseBodyWebContainerConfig& setContextPath(string contextPath) { DARABONBA_PTR_SET_VALUE(contextPath_, contextPath) };


    // httpPort Field Functions 
    bool hasHttpPort() const { return this->httpPort_ != nullptr;};
    void deleteHttpPort() { this->httpPort_ = nullptr;};
    inline int32_t httpPort() const { DARABONBA_PTR_GET_DEFAULT(httpPort_, 0) };
    inline GetWebContainerConfigResponseBodyWebContainerConfig& setHttpPort(int32_t httpPort) { DARABONBA_PTR_SET_VALUE(httpPort_, httpPort) };


    // maxThreads Field Functions 
    bool hasMaxThreads() const { return this->maxThreads_ != nullptr;};
    void deleteMaxThreads() { this->maxThreads_ = nullptr;};
    inline int32_t maxThreads() const { DARABONBA_PTR_GET_DEFAULT(maxThreads_, 0) };
    inline GetWebContainerConfigResponseBodyWebContainerConfig& setMaxThreads(int32_t maxThreads) { DARABONBA_PTR_SET_VALUE(maxThreads_, maxThreads) };


    // serverXml Field Functions 
    bool hasServerXml() const { return this->serverXml_ != nullptr;};
    void deleteServerXml() { this->serverXml_ = nullptr;};
    inline string serverXml() const { DARABONBA_PTR_GET_DEFAULT(serverXml_, "") };
    inline GetWebContainerConfigResponseBodyWebContainerConfig& setServerXml(string serverXml) { DARABONBA_PTR_SET_VALUE(serverXml_, serverXml) };


    // uriEncoding Field Functions 
    bool hasUriEncoding() const { return this->uriEncoding_ != nullptr;};
    void deleteUriEncoding() { this->uriEncoding_ = nullptr;};
    inline string uriEncoding() const { DARABONBA_PTR_GET_DEFAULT(uriEncoding_, "") };
    inline GetWebContainerConfigResponseBodyWebContainerConfig& setUriEncoding(string uriEncoding) { DARABONBA_PTR_SET_VALUE(uriEncoding_, uriEncoding) };


    // useAdvancedServerXml Field Functions 
    bool hasUseAdvancedServerXml() const { return this->useAdvancedServerXml_ != nullptr;};
    void deleteUseAdvancedServerXml() { this->useAdvancedServerXml_ = nullptr;};
    inline bool useAdvancedServerXml() const { DARABONBA_PTR_GET_DEFAULT(useAdvancedServerXml_, false) };
    inline GetWebContainerConfigResponseBodyWebContainerConfig& setUseAdvancedServerXml(bool useAdvancedServerXml) { DARABONBA_PTR_SET_VALUE(useAdvancedServerXml_, useAdvancedServerXml) };


    // useBodyEncoding Field Functions 
    bool hasUseBodyEncoding() const { return this->useBodyEncoding_ != nullptr;};
    void deleteUseBodyEncoding() { this->useBodyEncoding_ = nullptr;};
    inline bool useBodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(useBodyEncoding_, false) };
    inline GetWebContainerConfigResponseBodyWebContainerConfig& setUseBodyEncoding(bool useBodyEncoding) { DARABONBA_PTR_SET_VALUE(useBodyEncoding_, useBodyEncoding) };


    // useDefaultConfig Field Functions 
    bool hasUseDefaultConfig() const { return this->useDefaultConfig_ != nullptr;};
    void deleteUseDefaultConfig() { this->useDefaultConfig_ = nullptr;};
    inline bool useDefaultConfig() const { DARABONBA_PTR_GET_DEFAULT(useDefaultConfig_, false) };
    inline GetWebContainerConfigResponseBodyWebContainerConfig& setUseDefaultConfig(bool useDefaultConfig) { DARABONBA_PTR_SET_VALUE(useDefaultConfig_, useDefaultConfig) };


  protected:
    // The type of the context path.
    std::shared_ptr<string> contextInputType_ = nullptr;
    // The context path.
    std::shared_ptr<string> contextPath_ = nullptr;
    // The HTTP service port.
    std::shared_ptr<int32_t> httpPort_ = nullptr;
    // The maximum number of threads.
    std::shared_ptr<int32_t> maxThreads_ = nullptr;
    // The content of the server.xml file customized by using advanced configurations.
    std::shared_ptr<string> serverXml_ = nullptr;
    // The URI encoding scheme.
    std::shared_ptr<string> uriEncoding_ = nullptr;
    // Indicates whether advanced configurations are used to customize the server.xml file.
    std::shared_ptr<bool> useAdvancedServerXml_ = nullptr;
    // Indicates whether the encoding scheme specified in the request body is used for uniform resource identifier (URI) query parameters.
    std::shared_ptr<bool> useBodyEncoding_ = nullptr;
    // Indicates whether the default configurations are used.
    std::shared_ptr<bool> useDefaultConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
