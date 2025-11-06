// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYTAGPOLICIESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYTAGPOLICIESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ApplyTagPoliciesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyTagPoliciesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Rules, rulesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyTagPoliciesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Rules, rulesShrink_);
    };
    ApplyTagPoliciesShrinkRequest() = default ;
    ApplyTagPoliciesShrinkRequest(const ApplyTagPoliciesShrinkRequest &) = default ;
    ApplyTagPoliciesShrinkRequest(ApplyTagPoliciesShrinkRequest &&) = default ;
    ApplyTagPoliciesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyTagPoliciesShrinkRequest() = default ;
    ApplyTagPoliciesShrinkRequest& operator=(const ApplyTagPoliciesShrinkRequest &) = default ;
    ApplyTagPoliciesShrinkRequest& operator=(ApplyTagPoliciesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->appId_ == nullptr && return this->appName_ == nullptr && return this->enable_ == nullptr && return this->namespace_ == nullptr && return this->namespaceId_ == nullptr
        && return this->region_ == nullptr && return this->rulesShrink_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ApplyTagPoliciesShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ApplyTagPoliciesShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ApplyTagPoliciesShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ApplyTagPoliciesShrinkRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ApplyTagPoliciesShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ApplyTagPoliciesShrinkRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ApplyTagPoliciesShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // rulesShrink Field Functions 
    bool hasRulesShrink() const { return this->rulesShrink_ != nullptr;};
    void deleteRulesShrink() { this->rulesShrink_ = nullptr;};
    inline string rulesShrink() const { DARABONBA_PTR_GET_DEFAULT(rulesShrink_, "") };
    inline ApplyTagPoliciesShrinkRequest& setRulesShrink(string rulesShrink) { DARABONBA_PTR_SET_VALUE(rulesShrink_, rulesShrink) };


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
    // Specifies whether to enable the routing rule.
    std::shared_ptr<bool> enable_ = nullptr;
    // The Microservices Engine (MSE) namespace to which the application belongs.
    std::shared_ptr<string> namespace_ = nullptr;
    // Optional. The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The details of the routing rule.
    std::shared_ptr<string> rulesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
