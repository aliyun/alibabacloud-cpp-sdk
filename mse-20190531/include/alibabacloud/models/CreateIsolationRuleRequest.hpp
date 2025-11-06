// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEISOLATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEISOLATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateIsolationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIsolationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(LimitApp, limitApp_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIsolationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(LimitApp, limitApp_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    CreateIsolationRuleRequest() = default ;
    CreateIsolationRuleRequest(const CreateIsolationRuleRequest &) = default ;
    CreateIsolationRuleRequest(CreateIsolationRuleRequest &&) = default ;
    CreateIsolationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIsolationRuleRequest() = default ;
    CreateIsolationRuleRequest& operator=(const CreateIsolationRuleRequest &) = default ;
    CreateIsolationRuleRequest& operator=(CreateIsolationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->appId_ == nullptr && return this->appName_ == nullptr && return this->enable_ == nullptr && return this->limitApp_ == nullptr && return this->namespace_ == nullptr
        && return this->regionId_ == nullptr && return this->resource_ == nullptr && return this->threshold_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateIsolationRuleRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateIsolationRuleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateIsolationRuleRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateIsolationRuleRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // limitApp Field Functions 
    bool hasLimitApp() const { return this->limitApp_ != nullptr;};
    void deleteLimitApp() { this->limitApp_ = nullptr;};
    inline string limitApp() const { DARABONBA_PTR_GET_DEFAULT(limitApp_, "") };
    inline CreateIsolationRuleRequest& setLimitApp(string limitApp) { DARABONBA_PTR_SET_VALUE(limitApp_, limitApp) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateIsolationRuleRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateIsolationRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline CreateIsolationRuleRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline CreateIsolationRuleRequest& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> limitApp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resource_ = nullptr;
    // This parameter is required.
    std::shared_ptr<float> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
