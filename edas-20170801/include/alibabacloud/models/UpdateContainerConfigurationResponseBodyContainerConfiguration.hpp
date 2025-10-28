// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTAINERCONFIGURATIONRESPONSEBODYCONTAINERCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTAINERCONFIGURATIONRESPONSEBODYCONTAINERCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateContainerConfigurationResponseBodyContainerConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContainerConfigurationResponseBodyContainerConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(ContextPath, contextPath_);
      DARABONBA_PTR_TO_JSON(HttpPort, httpPort_);
      DARABONBA_PTR_TO_JSON(MaxThreads, maxThreads_);
      DARABONBA_PTR_TO_JSON(URIEncoding, URIEncoding_);
      DARABONBA_PTR_TO_JSON(UseBodyEncoding, useBodyEncoding_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContainerConfigurationResponseBodyContainerConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(ContextPath, contextPath_);
      DARABONBA_PTR_FROM_JSON(HttpPort, httpPort_);
      DARABONBA_PTR_FROM_JSON(MaxThreads, maxThreads_);
      DARABONBA_PTR_FROM_JSON(URIEncoding, URIEncoding_);
      DARABONBA_PTR_FROM_JSON(UseBodyEncoding, useBodyEncoding_);
    };
    UpdateContainerConfigurationResponseBodyContainerConfiguration() = default ;
    UpdateContainerConfigurationResponseBodyContainerConfiguration(const UpdateContainerConfigurationResponseBodyContainerConfiguration &) = default ;
    UpdateContainerConfigurationResponseBodyContainerConfiguration(UpdateContainerConfigurationResponseBodyContainerConfiguration &&) = default ;
    UpdateContainerConfigurationResponseBodyContainerConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContainerConfigurationResponseBodyContainerConfiguration() = default ;
    UpdateContainerConfigurationResponseBodyContainerConfiguration& operator=(const UpdateContainerConfigurationResponseBodyContainerConfiguration &) = default ;
    UpdateContainerConfigurationResponseBodyContainerConfiguration& operator=(UpdateContainerConfigurationResponseBodyContainerConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contextPath_ == nullptr
        && return this->httpPort_ == nullptr && return this->maxThreads_ == nullptr && return this->URIEncoding_ == nullptr && return this->useBodyEncoding_ == nullptr; };
    // contextPath Field Functions 
    bool hasContextPath() const { return this->contextPath_ != nullptr;};
    void deleteContextPath() { this->contextPath_ = nullptr;};
    inline string contextPath() const { DARABONBA_PTR_GET_DEFAULT(contextPath_, "") };
    inline UpdateContainerConfigurationResponseBodyContainerConfiguration& setContextPath(string contextPath) { DARABONBA_PTR_SET_VALUE(contextPath_, contextPath) };


    // httpPort Field Functions 
    bool hasHttpPort() const { return this->httpPort_ != nullptr;};
    void deleteHttpPort() { this->httpPort_ = nullptr;};
    inline int32_t httpPort() const { DARABONBA_PTR_GET_DEFAULT(httpPort_, 0) };
    inline UpdateContainerConfigurationResponseBodyContainerConfiguration& setHttpPort(int32_t httpPort) { DARABONBA_PTR_SET_VALUE(httpPort_, httpPort) };


    // maxThreads Field Functions 
    bool hasMaxThreads() const { return this->maxThreads_ != nullptr;};
    void deleteMaxThreads() { this->maxThreads_ = nullptr;};
    inline int32_t maxThreads() const { DARABONBA_PTR_GET_DEFAULT(maxThreads_, 0) };
    inline UpdateContainerConfigurationResponseBodyContainerConfiguration& setMaxThreads(int32_t maxThreads) { DARABONBA_PTR_SET_VALUE(maxThreads_, maxThreads) };


    // URIEncoding Field Functions 
    bool hasURIEncoding() const { return this->URIEncoding_ != nullptr;};
    void deleteURIEncoding() { this->URIEncoding_ = nullptr;};
    inline string URIEncoding() const { DARABONBA_PTR_GET_DEFAULT(URIEncoding_, "") };
    inline UpdateContainerConfigurationResponseBodyContainerConfiguration& setURIEncoding(string URIEncoding) { DARABONBA_PTR_SET_VALUE(URIEncoding_, URIEncoding) };


    // useBodyEncoding Field Functions 
    bool hasUseBodyEncoding() const { return this->useBodyEncoding_ != nullptr;};
    void deleteUseBodyEncoding() { this->useBodyEncoding_ = nullptr;};
    inline bool useBodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(useBodyEncoding_, false) };
    inline UpdateContainerConfigurationResponseBodyContainerConfiguration& setUseBodyEncoding(bool useBodyEncoding) { DARABONBA_PTR_SET_VALUE(useBodyEncoding_, useBodyEncoding) };


  protected:
    // The context path of the Tomcat container.
    std::shared_ptr<string> contextPath_ = nullptr;
    // The application port number for the Tomcat container.
    std::shared_ptr<int32_t> httpPort_ = nullptr;
    // The maximum number of threads.
    std::shared_ptr<int32_t> maxThreads_ = nullptr;
    // The URI encoding scheme. Valid values: ISO-8859-1, GBK, GB2312, and UTF-8.
    std::shared_ptr<string> URIEncoding_ = nullptr;
    // Indicates whether useBodyEncodingForURI is enabled.
    std::shared_ptr<bool> useBodyEncoding_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
