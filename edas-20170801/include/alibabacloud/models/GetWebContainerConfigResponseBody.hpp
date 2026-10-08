// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWEBCONTAINERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWEBCONTAINERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetWebContainerConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWebContainerConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WebContainerConfig, webContainerConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetWebContainerConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WebContainerConfig, webContainerConfig_);
    };
    GetWebContainerConfigResponseBody() = default ;
    GetWebContainerConfigResponseBody(const GetWebContainerConfigResponseBody &) = default ;
    GetWebContainerConfigResponseBody(GetWebContainerConfigResponseBody &&) = default ;
    GetWebContainerConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWebContainerConfigResponseBody() = default ;
    GetWebContainerConfigResponseBody& operator=(const GetWebContainerConfigResponseBody &) = default ;
    GetWebContainerConfigResponseBody& operator=(GetWebContainerConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WebContainerConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WebContainerConfig& obj) { 
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
      friend void from_json(const Darabonba::Json& j, WebContainerConfig& obj) { 
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
      WebContainerConfig() = default ;
      WebContainerConfig(const WebContainerConfig &) = default ;
      WebContainerConfig(WebContainerConfig &&) = default ;
      WebContainerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WebContainerConfig() = default ;
      WebContainerConfig& operator=(const WebContainerConfig &) = default ;
      WebContainerConfig& operator=(WebContainerConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contextInputType_ == nullptr
        && this->contextPath_ == nullptr && this->httpPort_ == nullptr && this->maxThreads_ == nullptr && this->serverXml_ == nullptr && this->uriEncoding_ == nullptr
        && this->useAdvancedServerXml_ == nullptr && this->useBodyEncoding_ == nullptr && this->useDefaultConfig_ == nullptr; };
      // contextInputType Field Functions 
      bool hasContextInputType() const { return this->contextInputType_ != nullptr;};
      void deleteContextInputType() { this->contextInputType_ = nullptr;};
      inline string getContextInputType() const { DARABONBA_PTR_GET_DEFAULT(contextInputType_, "") };
      inline WebContainerConfig& setContextInputType(string contextInputType) { DARABONBA_PTR_SET_VALUE(contextInputType_, contextInputType) };


      // contextPath Field Functions 
      bool hasContextPath() const { return this->contextPath_ != nullptr;};
      void deleteContextPath() { this->contextPath_ = nullptr;};
      inline string getContextPath() const { DARABONBA_PTR_GET_DEFAULT(contextPath_, "") };
      inline WebContainerConfig& setContextPath(string contextPath) { DARABONBA_PTR_SET_VALUE(contextPath_, contextPath) };


      // httpPort Field Functions 
      bool hasHttpPort() const { return this->httpPort_ != nullptr;};
      void deleteHttpPort() { this->httpPort_ = nullptr;};
      inline int32_t getHttpPort() const { DARABONBA_PTR_GET_DEFAULT(httpPort_, 0) };
      inline WebContainerConfig& setHttpPort(int32_t httpPort) { DARABONBA_PTR_SET_VALUE(httpPort_, httpPort) };


      // maxThreads Field Functions 
      bool hasMaxThreads() const { return this->maxThreads_ != nullptr;};
      void deleteMaxThreads() { this->maxThreads_ = nullptr;};
      inline int32_t getMaxThreads() const { DARABONBA_PTR_GET_DEFAULT(maxThreads_, 0) };
      inline WebContainerConfig& setMaxThreads(int32_t maxThreads) { DARABONBA_PTR_SET_VALUE(maxThreads_, maxThreads) };


      // serverXml Field Functions 
      bool hasServerXml() const { return this->serverXml_ != nullptr;};
      void deleteServerXml() { this->serverXml_ = nullptr;};
      inline string getServerXml() const { DARABONBA_PTR_GET_DEFAULT(serverXml_, "") };
      inline WebContainerConfig& setServerXml(string serverXml) { DARABONBA_PTR_SET_VALUE(serverXml_, serverXml) };


      // uriEncoding Field Functions 
      bool hasUriEncoding() const { return this->uriEncoding_ != nullptr;};
      void deleteUriEncoding() { this->uriEncoding_ = nullptr;};
      inline string getUriEncoding() const { DARABONBA_PTR_GET_DEFAULT(uriEncoding_, "") };
      inline WebContainerConfig& setUriEncoding(string uriEncoding) { DARABONBA_PTR_SET_VALUE(uriEncoding_, uriEncoding) };


      // useAdvancedServerXml Field Functions 
      bool hasUseAdvancedServerXml() const { return this->useAdvancedServerXml_ != nullptr;};
      void deleteUseAdvancedServerXml() { this->useAdvancedServerXml_ = nullptr;};
      inline bool getUseAdvancedServerXml() const { DARABONBA_PTR_GET_DEFAULT(useAdvancedServerXml_, false) };
      inline WebContainerConfig& setUseAdvancedServerXml(bool useAdvancedServerXml) { DARABONBA_PTR_SET_VALUE(useAdvancedServerXml_, useAdvancedServerXml) };


      // useBodyEncoding Field Functions 
      bool hasUseBodyEncoding() const { return this->useBodyEncoding_ != nullptr;};
      void deleteUseBodyEncoding() { this->useBodyEncoding_ = nullptr;};
      inline bool getUseBodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(useBodyEncoding_, false) };
      inline WebContainerConfig& setUseBodyEncoding(bool useBodyEncoding) { DARABONBA_PTR_SET_VALUE(useBodyEncoding_, useBodyEncoding) };


      // useDefaultConfig Field Functions 
      bool hasUseDefaultConfig() const { return this->useDefaultConfig_ != nullptr;};
      void deleteUseDefaultConfig() { this->useDefaultConfig_ = nullptr;};
      inline bool getUseDefaultConfig() const { DARABONBA_PTR_GET_DEFAULT(useDefaultConfig_, false) };
      inline WebContainerConfig& setUseDefaultConfig(bool useDefaultConfig) { DARABONBA_PTR_SET_VALUE(useDefaultConfig_, useDefaultConfig) };


    protected:
      // The type of the context path.
      shared_ptr<string> contextInputType_ {};
      // The context path.
      shared_ptr<string> contextPath_ {};
      // The HTTP service port.
      shared_ptr<int32_t> httpPort_ {};
      // The maximum number of threads.
      shared_ptr<int32_t> maxThreads_ {};
      // The content of the server.xml file customized by using advanced configurations.
      shared_ptr<string> serverXml_ {};
      // The URI encoding scheme.
      shared_ptr<string> uriEncoding_ {};
      // Indicates whether advanced configurations are used to customize the server.xml file.
      shared_ptr<bool> useAdvancedServerXml_ {};
      // Indicates whether the encoding scheme specified in the request body is used for uniform resource identifier (URI) query parameters.
      shared_ptr<bool> useBodyEncoding_ {};
      // Indicates whether the default configurations are used.
      shared_ptr<bool> useDefaultConfig_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->webContainerConfig_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetWebContainerConfigResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWebContainerConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWebContainerConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // webContainerConfig Field Functions 
    bool hasWebContainerConfig() const { return this->webContainerConfig_ != nullptr;};
    void deleteWebContainerConfig() { this->webContainerConfig_ = nullptr;};
    inline const GetWebContainerConfigResponseBody::WebContainerConfig & getWebContainerConfig() const { DARABONBA_PTR_GET_CONST(webContainerConfig_, GetWebContainerConfigResponseBody::WebContainerConfig) };
    inline GetWebContainerConfigResponseBody::WebContainerConfig getWebContainerConfig() { DARABONBA_PTR_GET(webContainerConfig_, GetWebContainerConfigResponseBody::WebContainerConfig) };
    inline GetWebContainerConfigResponseBody& setWebContainerConfig(const GetWebContainerConfigResponseBody::WebContainerConfig & webContainerConfig) { DARABONBA_PTR_SET_VALUE(webContainerConfig_, webContainerConfig) };
    inline GetWebContainerConfigResponseBody& setWebContainerConfig(GetWebContainerConfigResponseBody::WebContainerConfig && webContainerConfig) { DARABONBA_PTR_SET_RVALUE(webContainerConfig_, webContainerConfig) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The Tomcat configurations of the application.
    shared_ptr<GetWebContainerConfigResponseBody::WebContainerConfig> webContainerConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
