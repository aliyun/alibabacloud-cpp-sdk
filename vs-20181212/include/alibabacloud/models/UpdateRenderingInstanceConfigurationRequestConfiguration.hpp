// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCECONFIGURATIONREQUESTCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCECONFIGURATIONREQUESTCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRenderingInstanceConfigurationRequestConfigurationAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UpdateRenderingInstanceConfigurationRequestConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRenderingInstanceConfigurationRequestConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRenderingInstanceConfigurationRequestConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
    };
    UpdateRenderingInstanceConfigurationRequestConfiguration() = default ;
    UpdateRenderingInstanceConfigurationRequestConfiguration(const UpdateRenderingInstanceConfigurationRequestConfiguration &) = default ;
    UpdateRenderingInstanceConfigurationRequestConfiguration(UpdateRenderingInstanceConfigurationRequestConfiguration &&) = default ;
    UpdateRenderingInstanceConfigurationRequestConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRenderingInstanceConfigurationRequestConfiguration() = default ;
    UpdateRenderingInstanceConfigurationRequestConfiguration& operator=(const UpdateRenderingInstanceConfigurationRequestConfiguration &) = default ;
    UpdateRenderingInstanceConfigurationRequestConfiguration& operator=(UpdateRenderingInstanceConfigurationRequestConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->moduleName_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<Models::UpdateRenderingInstanceConfigurationRequestConfigurationAttributes> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<Models::UpdateRenderingInstanceConfigurationRequestConfigurationAttributes>) };
    inline vector<Models::UpdateRenderingInstanceConfigurationRequestConfigurationAttributes> attributes() { DARABONBA_PTR_GET(attributes_, vector<Models::UpdateRenderingInstanceConfigurationRequestConfigurationAttributes>) };
    inline UpdateRenderingInstanceConfigurationRequestConfiguration& setAttributes(const vector<Models::UpdateRenderingInstanceConfigurationRequestConfigurationAttributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline UpdateRenderingInstanceConfigurationRequestConfiguration& setAttributes(vector<Models::UpdateRenderingInstanceConfigurationRequestConfigurationAttributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline UpdateRenderingInstanceConfigurationRequestConfiguration& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::UpdateRenderingInstanceConfigurationRequestConfigurationAttributes>> attributes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> moduleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
