// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTAINERCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTAINERCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateContainerConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContainerConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ContextPath, contextPath_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HttpPort, httpPort_);
      DARABONBA_PTR_TO_JSON(MaxThreads, maxThreads_);
      DARABONBA_PTR_TO_JSON(URIEncoding, URIEncoding_);
      DARABONBA_PTR_TO_JSON(UseBodyEncoding, useBodyEncoding_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContainerConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ContextPath, contextPath_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HttpPort, httpPort_);
      DARABONBA_PTR_FROM_JSON(MaxThreads, maxThreads_);
      DARABONBA_PTR_FROM_JSON(URIEncoding, URIEncoding_);
      DARABONBA_PTR_FROM_JSON(UseBodyEncoding, useBodyEncoding_);
    };
    UpdateContainerConfigurationRequest() = default ;
    UpdateContainerConfigurationRequest(const UpdateContainerConfigurationRequest &) = default ;
    UpdateContainerConfigurationRequest(UpdateContainerConfigurationRequest &&) = default ;
    UpdateContainerConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContainerConfigurationRequest() = default ;
    UpdateContainerConfigurationRequest& operator=(const UpdateContainerConfigurationRequest &) = default ;
    UpdateContainerConfigurationRequest& operator=(UpdateContainerConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->contextPath_ == nullptr && return this->groupId_ == nullptr && return this->httpPort_ == nullptr && return this->maxThreads_ == nullptr && return this->URIEncoding_ == nullptr
        && return this->useBodyEncoding_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateContainerConfigurationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // contextPath Field Functions 
    bool hasContextPath() const { return this->contextPath_ != nullptr;};
    void deleteContextPath() { this->contextPath_ = nullptr;};
    inline string contextPath() const { DARABONBA_PTR_GET_DEFAULT(contextPath_, "") };
    inline UpdateContainerConfigurationRequest& setContextPath(string contextPath) { DARABONBA_PTR_SET_VALUE(contextPath_, contextPath) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateContainerConfigurationRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // httpPort Field Functions 
    bool hasHttpPort() const { return this->httpPort_ != nullptr;};
    void deleteHttpPort() { this->httpPort_ = nullptr;};
    inline int32_t httpPort() const { DARABONBA_PTR_GET_DEFAULT(httpPort_, 0) };
    inline UpdateContainerConfigurationRequest& setHttpPort(int32_t httpPort) { DARABONBA_PTR_SET_VALUE(httpPort_, httpPort) };


    // maxThreads Field Functions 
    bool hasMaxThreads() const { return this->maxThreads_ != nullptr;};
    void deleteMaxThreads() { this->maxThreads_ = nullptr;};
    inline int32_t maxThreads() const { DARABONBA_PTR_GET_DEFAULT(maxThreads_, 0) };
    inline UpdateContainerConfigurationRequest& setMaxThreads(int32_t maxThreads) { DARABONBA_PTR_SET_VALUE(maxThreads_, maxThreads) };


    // URIEncoding Field Functions 
    bool hasURIEncoding() const { return this->URIEncoding_ != nullptr;};
    void deleteURIEncoding() { this->URIEncoding_ = nullptr;};
    inline string URIEncoding() const { DARABONBA_PTR_GET_DEFAULT(URIEncoding_, "") };
    inline UpdateContainerConfigurationRequest& setURIEncoding(string URIEncoding) { DARABONBA_PTR_SET_VALUE(URIEncoding_, URIEncoding) };


    // useBodyEncoding Field Functions 
    bool hasUseBodyEncoding() const { return this->useBodyEncoding_ != nullptr;};
    void deleteUseBodyEncoding() { this->useBodyEncoding_ = nullptr;};
    inline bool useBodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(useBodyEncoding_, false) };
    inline UpdateContainerConfigurationRequest& setUseBodyEncoding(bool useBodyEncoding) { DARABONBA_PTR_SET_VALUE(useBodyEncoding_, useBodyEncoding) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The context path of the Tomcat container. The context path can be an empty string, a null WAR package name, a root directory, or other custom non-empty strings. It can contain letters, digits, hyphens (-), and underscores (_). Take note of the following items:
    // 
    // *   If this parameter is not specified when you configure the application instance group, the configuration of the application is applied.
    // *   If this parameter is not specified when you configure the Tomcat container for an application, the root directory `/` is used.
    std::shared_ptr<string> contextPath_ = nullptr;
    // The ID of the application instance group.
    // 
    // *   If an ID is specified, this operation configures the Tomcat container for the specified application instance group.
    // *   If you set this parameter to "", this operation configures the Tomcat container for the application.
    std::shared_ptr<string> groupId_ = nullptr;
    // The application port number for the Tomcat container. Take note of the following items:
    // 
    // *   If this parameter is not specified when you configure the application instance group, the configuration of the application is applied.
    // *   If this parameter is not specified when you configure the application, the default port 8080 is applied.
    std::shared_ptr<int32_t> httpPort_ = nullptr;
    // The maximum number of threads. Take note of the following items:
    // 
    // *   If this parameter is not specified when you configure the application instance group, the configuration of the application is applied.
    // *   If this parameter is not specified when you configure the application, the default value 250 is applied.
    std::shared_ptr<int32_t> maxThreads_ = nullptr;
    // The uniform resource identifier (URI) encoding scheme. Valid values: ISO-8859-1, GBK, GB2312, and UTF-8. Take note of the following items:
    // 
    // *   If this parameter is not specified when you configure the application instance group, the configuration of the application is applied.
    // *   If this parameter is not specified when you configure the application, the default URI encoding scheme in the Tomcat container is applied.
    std::shared_ptr<string> URIEncoding_ = nullptr;
    // Specifies whether to use the encoding scheme specified in the request body for URI query parameters. Take note of the following items:
    // 
    // *   If this parameter is not specified when you configure the application instance group, the configuration of the application is applied.
    // *   If this parameter is not specified when you configure the application, the default value false is applied.
    std::shared_ptr<bool> useBodyEncoding_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
