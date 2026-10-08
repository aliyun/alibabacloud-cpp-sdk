// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTAINERCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTAINERCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetContainerConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContainerConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ContainerConfiguration, containerConfiguration_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetContainerConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ContainerConfiguration, containerConfiguration_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetContainerConfigurationResponseBody() = default ;
    GetContainerConfigurationResponseBody(const GetContainerConfigurationResponseBody &) = default ;
    GetContainerConfigurationResponseBody(GetContainerConfigurationResponseBody &&) = default ;
    GetContainerConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContainerConfigurationResponseBody() = default ;
    GetContainerConfigurationResponseBody& operator=(const GetContainerConfigurationResponseBody &) = default ;
    GetContainerConfigurationResponseBody& operator=(GetContainerConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ContainerConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContainerConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(ContextPath, contextPath_);
        DARABONBA_PTR_TO_JSON(HttpPort, httpPort_);
        DARABONBA_PTR_TO_JSON(MaxThreads, maxThreads_);
        DARABONBA_PTR_TO_JSON(URIEncoding, URIEncoding_);
        DARABONBA_PTR_TO_JSON(UseBodyEncoding, useBodyEncoding_);
      };
      friend void from_json(const Darabonba::Json& j, ContainerConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(ContextPath, contextPath_);
        DARABONBA_PTR_FROM_JSON(HttpPort, httpPort_);
        DARABONBA_PTR_FROM_JSON(MaxThreads, maxThreads_);
        DARABONBA_PTR_FROM_JSON(URIEncoding, URIEncoding_);
        DARABONBA_PTR_FROM_JSON(UseBodyEncoding, useBodyEncoding_);
      };
      ContainerConfiguration() = default ;
      ContainerConfiguration(const ContainerConfiguration &) = default ;
      ContainerConfiguration(ContainerConfiguration &&) = default ;
      ContainerConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContainerConfiguration() = default ;
      ContainerConfiguration& operator=(const ContainerConfiguration &) = default ;
      ContainerConfiguration& operator=(ContainerConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contextPath_ == nullptr
        && this->httpPort_ == nullptr && this->maxThreads_ == nullptr && this->URIEncoding_ == nullptr && this->useBodyEncoding_ == nullptr; };
      // contextPath Field Functions 
      bool hasContextPath() const { return this->contextPath_ != nullptr;};
      void deleteContextPath() { this->contextPath_ = nullptr;};
      inline string getContextPath() const { DARABONBA_PTR_GET_DEFAULT(contextPath_, "") };
      inline ContainerConfiguration& setContextPath(string contextPath) { DARABONBA_PTR_SET_VALUE(contextPath_, contextPath) };


      // httpPort Field Functions 
      bool hasHttpPort() const { return this->httpPort_ != nullptr;};
      void deleteHttpPort() { this->httpPort_ = nullptr;};
      inline int32_t getHttpPort() const { DARABONBA_PTR_GET_DEFAULT(httpPort_, 0) };
      inline ContainerConfiguration& setHttpPort(int32_t httpPort) { DARABONBA_PTR_SET_VALUE(httpPort_, httpPort) };


      // maxThreads Field Functions 
      bool hasMaxThreads() const { return this->maxThreads_ != nullptr;};
      void deleteMaxThreads() { this->maxThreads_ = nullptr;};
      inline int32_t getMaxThreads() const { DARABONBA_PTR_GET_DEFAULT(maxThreads_, 0) };
      inline ContainerConfiguration& setMaxThreads(int32_t maxThreads) { DARABONBA_PTR_SET_VALUE(maxThreads_, maxThreads) };


      // URIEncoding Field Functions 
      bool hasURIEncoding() const { return this->URIEncoding_ != nullptr;};
      void deleteURIEncoding() { this->URIEncoding_ = nullptr;};
      inline string getURIEncoding() const { DARABONBA_PTR_GET_DEFAULT(URIEncoding_, "") };
      inline ContainerConfiguration& setURIEncoding(string URIEncoding) { DARABONBA_PTR_SET_VALUE(URIEncoding_, URIEncoding) };


      // useBodyEncoding Field Functions 
      bool hasUseBodyEncoding() const { return this->useBodyEncoding_ != nullptr;};
      void deleteUseBodyEncoding() { this->useBodyEncoding_ = nullptr;};
      inline bool getUseBodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(useBodyEncoding_, false) };
      inline ContainerConfiguration& setUseBodyEncoding(bool useBodyEncoding) { DARABONBA_PTR_SET_VALUE(useBodyEncoding_, useBodyEncoding) };


    protected:
      // The context path of the Tomcat container.
      shared_ptr<string> contextPath_ {};
      // The application port number for the Tomcat container. The value specified in the application configuration is returned.
      shared_ptr<int32_t> httpPort_ {};
      // The maximum number of threads in the Tomcat container.
      // 
      // - If no instance group is specified, the configuration of the application is returned.
      // 
      // - If no application is specified, the default configuration is returned.
      shared_ptr<int32_t> maxThreads_ {};
      // The Uniform Resource Identifier (URI) encoding scheme. Valid values: ISO-8859-1, GBK, GB2312, and UTF-8.
      // 
      // - If no instance group is specified, the configuration of the application is returned.
      // 
      // - If no application is specified, the default configuration is returned.
      shared_ptr<string> URIEncoding_ {};
      // Indicates whether useBodyEncodingForURI is enabled in the Tomcat container.
      // 
      // - If no instance group is specified, the configuration of the application is returned.
      // 
      // - If no application is specified, the default configuration is returned.
      shared_ptr<bool> useBodyEncoding_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->containerConfiguration_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetContainerConfigurationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // containerConfiguration Field Functions 
    bool hasContainerConfiguration() const { return this->containerConfiguration_ != nullptr;};
    void deleteContainerConfiguration() { this->containerConfiguration_ = nullptr;};
    inline const GetContainerConfigurationResponseBody::ContainerConfiguration & getContainerConfiguration() const { DARABONBA_PTR_GET_CONST(containerConfiguration_, GetContainerConfigurationResponseBody::ContainerConfiguration) };
    inline GetContainerConfigurationResponseBody::ContainerConfiguration getContainerConfiguration() { DARABONBA_PTR_GET(containerConfiguration_, GetContainerConfigurationResponseBody::ContainerConfiguration) };
    inline GetContainerConfigurationResponseBody& setContainerConfiguration(const GetContainerConfigurationResponseBody::ContainerConfiguration & containerConfiguration) { DARABONBA_PTR_SET_VALUE(containerConfiguration_, containerConfiguration) };
    inline GetContainerConfigurationResponseBody& setContainerConfiguration(GetContainerConfigurationResponseBody::ContainerConfiguration && containerConfiguration) { DARABONBA_PTR_SET_RVALUE(containerConfiguration_, containerConfiguration) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetContainerConfigurationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetContainerConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The Tomcat configuration.
    shared_ptr<GetContainerConfigurationResponseBody::ContainerConfiguration> containerConfiguration_ {};
    // The message returned for the request.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
