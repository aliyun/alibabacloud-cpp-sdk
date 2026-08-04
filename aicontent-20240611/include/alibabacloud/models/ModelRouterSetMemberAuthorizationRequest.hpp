// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERSETMEMBERAUTHORIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERSETMEMBERAUTHORIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterSetMemberAuthorizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterSetMemberAuthorizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(allowedModelGroupConfig, allowedModelGroupConfig_);
      DARABONBA_PTR_TO_JSON(allowedModels, allowedModels_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterSetMemberAuthorizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(allowedModelGroupConfig, allowedModelGroupConfig_);
      DARABONBA_PTR_FROM_JSON(allowedModels, allowedModels_);
    };
    ModelRouterSetMemberAuthorizationRequest() = default ;
    ModelRouterSetMemberAuthorizationRequest(const ModelRouterSetMemberAuthorizationRequest &) = default ;
    ModelRouterSetMemberAuthorizationRequest(ModelRouterSetMemberAuthorizationRequest &&) = default ;
    ModelRouterSetMemberAuthorizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterSetMemberAuthorizationRequest() = default ;
    ModelRouterSetMemberAuthorizationRequest& operator=(const ModelRouterSetMemberAuthorizationRequest &) = default ;
    ModelRouterSetMemberAuthorizationRequest& operator=(ModelRouterSetMemberAuthorizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedModelGroupConfig_ == nullptr
        && this->allowedModels_ == nullptr; };
    // allowedModelGroupConfig Field Functions 
    bool hasAllowedModelGroupConfig() const { return this->allowedModelGroupConfig_ != nullptr;};
    void deleteAllowedModelGroupConfig() { this->allowedModelGroupConfig_ = nullptr;};
    inline string getAllowedModelGroupConfig() const { DARABONBA_PTR_GET_DEFAULT(allowedModelGroupConfig_, "") };
    inline ModelRouterSetMemberAuthorizationRequest& setAllowedModelGroupConfig(string allowedModelGroupConfig) { DARABONBA_PTR_SET_VALUE(allowedModelGroupConfig_, allowedModelGroupConfig) };


    // allowedModels Field Functions 
    bool hasAllowedModels() const { return this->allowedModels_ != nullptr;};
    void deleteAllowedModels() { this->allowedModels_ = nullptr;};
    inline string getAllowedModels() const { DARABONBA_PTR_GET_DEFAULT(allowedModels_, "") };
    inline ModelRouterSetMemberAuthorizationRequest& setAllowedModels(string allowedModels) { DARABONBA_PTR_SET_VALUE(allowedModels_, allowedModels) };


  protected:
    // The authorization configuration (JSON string, overwrite mode): {"model_ids":[...],"group_ids":["mg_xxx"]}. The internal key names use a fixed underscore style and are not converted to the camelCase convention used by the API. If this field is specified together with allowedModels, this field takes precedence.
    shared_ptr<string> allowedModelGroupConfig_ {};
    // The legacy authorization field (comma-separated numeric model IDs). This field is retained during the canary release of group-based authorization: tenants that have not enabled the grouping feature continue to use this field. If this field is specified together with allowedModelGroupConfig, the latter takes precedence.
    shared_ptr<string> allowedModels_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
