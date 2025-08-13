// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPMESSAGEQUEUEROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPMESSAGEQUEUEROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetAppMessageQueueRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppMessageQueueRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppMessageQueueRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    GetAppMessageQueueRouteRequest() = default ;
    GetAppMessageQueueRouteRequest(const GetAppMessageQueueRouteRequest &) = default ;
    GetAppMessageQueueRouteRequest(GetAppMessageQueueRouteRequest &&) = default ;
    GetAppMessageQueueRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppMessageQueueRouteRequest() = default ;
    GetAppMessageQueueRouteRequest& operator=(const GetAppMessageQueueRouteRequest &) = default ;
    GetAppMessageQueueRouteRequest& operator=(GetAppMessageQueueRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->appId_ != nullptr && this->appName_ != nullptr && this->namespace_ != nullptr && this->region_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetAppMessageQueueRouteRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetAppMessageQueueRouteRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetAppMessageQueueRouteRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetAppMessageQueueRouteRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetAppMessageQueueRouteRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The name of the Microservices Engine (MSE) namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The region where the instance resides. Examples:
    // 
    // *   `cn-hangzhou`: China (Hangzhou)
    // *   `cn-beijing`: China (Beijing)
    // *   `cn-shanghai`: China (Shanghai)
    // *   `cn-zhangjiakou`: China (Zhangjiakou)
    // *   `cn-shenzhen`: China (Shenzhen)
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
