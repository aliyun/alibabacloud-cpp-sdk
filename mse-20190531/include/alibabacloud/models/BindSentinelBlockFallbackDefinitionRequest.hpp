// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDSENTINELBLOCKFALLBACKDEFINITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDSENTINELBLOCKFALLBACKDEFINITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class BindSentinelBlockFallbackDefinitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindSentinelBlockFallbackDefinitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(FallbackId, fallbackId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, BindSentinelBlockFallbackDefinitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(FallbackId, fallbackId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    BindSentinelBlockFallbackDefinitionRequest() = default ;
    BindSentinelBlockFallbackDefinitionRequest(const BindSentinelBlockFallbackDefinitionRequest &) = default ;
    BindSentinelBlockFallbackDefinitionRequest(BindSentinelBlockFallbackDefinitionRequest &&) = default ;
    BindSentinelBlockFallbackDefinitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindSentinelBlockFallbackDefinitionRequest() = default ;
    BindSentinelBlockFallbackDefinitionRequest& operator=(const BindSentinelBlockFallbackDefinitionRequest &) = default ;
    BindSentinelBlockFallbackDefinitionRequest& operator=(BindSentinelBlockFallbackDefinitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->appName_ == nullptr && return this->fallbackId_ == nullptr && return this->namespace_ == nullptr && return this->resource_ == nullptr && return this->targetType_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline BindSentinelBlockFallbackDefinitionRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline BindSentinelBlockFallbackDefinitionRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // fallbackId Field Functions 
    bool hasFallbackId() const { return this->fallbackId_ != nullptr;};
    void deleteFallbackId() { this->fallbackId_ = nullptr;};
    inline int64_t fallbackId() const { DARABONBA_PTR_GET_DEFAULT(fallbackId_, 0L) };
    inline BindSentinelBlockFallbackDefinitionRequest& setFallbackId(int64_t fallbackId) { DARABONBA_PTR_SET_VALUE(fallbackId_, fallbackId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BindSentinelBlockFallbackDefinitionRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline BindSentinelBlockFallbackDefinitionRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline BindSentinelBlockFallbackDefinitionRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The name of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // Behavior ID. 0:the default behavior.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> fallbackId_ = nullptr;
    // The microservice namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // Interface Name: The resource to which the rule applies. It must match the interface name in the console\\"s interface details.
    // 
    // This parameter is required.
    std::shared_ptr<string> resource_ = nullptr;
    // Target rule type.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
