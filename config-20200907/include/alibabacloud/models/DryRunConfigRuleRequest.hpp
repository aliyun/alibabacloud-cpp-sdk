// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRYRUNCONFIGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DRYRUNCONFIGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DryRunConfigRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DryRunConfigRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigurationItem, configurationItem_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DryRunConfigRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigurationItem, configurationItem_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DryRunConfigRuleRequest() = default ;
    DryRunConfigRuleRequest(const DryRunConfigRuleRequest &) = default ;
    DryRunConfigRuleRequest(DryRunConfigRuleRequest &&) = default ;
    DryRunConfigRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DryRunConfigRuleRequest() = default ;
    DryRunConfigRuleRequest& operator=(const DryRunConfigRuleRequest &) = default ;
    DryRunConfigRuleRequest& operator=(DryRunConfigRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configurationItem_ == nullptr
        && return this->resourceType_ == nullptr; };
    // configurationItem Field Functions 
    bool hasConfigurationItem() const { return this->configurationItem_ != nullptr;};
    void deleteConfigurationItem() { this->configurationItem_ = nullptr;};
    inline string configurationItem() const { DARABONBA_PTR_GET_DEFAULT(configurationItem_, "") };
    inline DryRunConfigRuleRequest& setConfigurationItem(string configurationItem) { DARABONBA_PTR_SET_VALUE(configurationItem_, configurationItem) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DryRunConfigRuleRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<string> configurationItem_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
