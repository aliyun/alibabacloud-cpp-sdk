// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELPROVIDERTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELPROVIDERTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class UpdateModelProviderTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelProviderTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, configShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableWuyingProxy, enableWuyingProxy_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProviderTemplateId, providerTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelProviderTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, configShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableWuyingProxy, enableWuyingProxy_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProviderTemplateId, providerTemplateId_);
    };
    UpdateModelProviderTemplateShrinkRequest() = default ;
    UpdateModelProviderTemplateShrinkRequest(const UpdateModelProviderTemplateShrinkRequest &) = default ;
    UpdateModelProviderTemplateShrinkRequest(UpdateModelProviderTemplateShrinkRequest &&) = default ;
    UpdateModelProviderTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelProviderTemplateShrinkRequest() = default ;
    UpdateModelProviderTemplateShrinkRequest& operator=(const UpdateModelProviderTemplateShrinkRequest &) = default ;
    UpdateModelProviderTemplateShrinkRequest& operator=(UpdateModelProviderTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configShrink_ == nullptr
        && this->description_ == nullptr && this->enableWuyingProxy_ == nullptr && this->name_ == nullptr && this->providerTemplateId_ == nullptr; };
    // configShrink Field Functions 
    bool hasConfigShrink() const { return this->configShrink_ != nullptr;};
    void deleteConfigShrink() { this->configShrink_ = nullptr;};
    inline string getConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(configShrink_, "") };
    inline UpdateModelProviderTemplateShrinkRequest& setConfigShrink(string configShrink) { DARABONBA_PTR_SET_VALUE(configShrink_, configShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateModelProviderTemplateShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableWuyingProxy Field Functions 
    bool hasEnableWuyingProxy() const { return this->enableWuyingProxy_ != nullptr;};
    void deleteEnableWuyingProxy() { this->enableWuyingProxy_ = nullptr;};
    inline bool getEnableWuyingProxy() const { DARABONBA_PTR_GET_DEFAULT(enableWuyingProxy_, false) };
    inline UpdateModelProviderTemplateShrinkRequest& setEnableWuyingProxy(bool enableWuyingProxy) { DARABONBA_PTR_SET_VALUE(enableWuyingProxy_, enableWuyingProxy) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateModelProviderTemplateShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // providerTemplateId Field Functions 
    bool hasProviderTemplateId() const { return this->providerTemplateId_ != nullptr;};
    void deleteProviderTemplateId() { this->providerTemplateId_ = nullptr;};
    inline string getProviderTemplateId() const { DARABONBA_PTR_GET_DEFAULT(providerTemplateId_, "") };
    inline UpdateModelProviderTemplateShrinkRequest& setProviderTemplateId(string providerTemplateId) { DARABONBA_PTR_SET_VALUE(providerTemplateId_, providerTemplateId) };


  protected:
    // The model provider configuration.
    shared_ptr<string> configShrink_ {};
    // The description of the model provider template.
    shared_ptr<string> description_ {};
    // Specifies whether to enable the Wuying security gateway proxy.
    shared_ptr<bool> enableWuyingProxy_ {};
    // The name of the model provider template.
    shared_ptr<string> name_ {};
    // The ID of the model provider template.
    // 
    // This parameter is required.
    shared_ptr<string> providerTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
