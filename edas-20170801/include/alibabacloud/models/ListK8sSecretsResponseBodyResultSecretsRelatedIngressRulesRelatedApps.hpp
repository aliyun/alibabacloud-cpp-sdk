// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SSECRETSRESPONSEBODYRESULTSECRETSRELATEDINGRESSRULESRELATEDAPPS_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SSECRETSRESPONSEBODYRESULTSECRETSRELATEDINGRESSRULESRELATEDAPPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
    };
    ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps() = default ;
    ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps(const ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps &) = default ;
    ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps(ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps &&) = default ;
    ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps() = default ;
    ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps& operator=(const ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps &) = default ;
    ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps& operator=(ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the EDAS application.
    std::shared_ptr<string> appName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
