// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCECONFIGURATIONREQUESTCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCECONFIGURATIONREQUESTCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeRenderingInstanceConfigurationRequestConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenderingInstanceConfigurationRequestConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeNames, attributeNames_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenderingInstanceConfigurationRequestConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeNames, attributeNames_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
    };
    DescribeRenderingInstanceConfigurationRequestConfiguration() = default ;
    DescribeRenderingInstanceConfigurationRequestConfiguration(const DescribeRenderingInstanceConfigurationRequestConfiguration &) = default ;
    DescribeRenderingInstanceConfigurationRequestConfiguration(DescribeRenderingInstanceConfigurationRequestConfiguration &&) = default ;
    DescribeRenderingInstanceConfigurationRequestConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenderingInstanceConfigurationRequestConfiguration() = default ;
    DescribeRenderingInstanceConfigurationRequestConfiguration& operator=(const DescribeRenderingInstanceConfigurationRequestConfiguration &) = default ;
    DescribeRenderingInstanceConfigurationRequestConfiguration& operator=(DescribeRenderingInstanceConfigurationRequestConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributeNames_ == nullptr
        && return this->moduleName_ == nullptr; };
    // attributeNames Field Functions 
    bool hasAttributeNames() const { return this->attributeNames_ != nullptr;};
    void deleteAttributeNames() { this->attributeNames_ = nullptr;};
    inline const vector<string> & attributeNames() const { DARABONBA_PTR_GET_CONST(attributeNames_, vector<string>) };
    inline vector<string> attributeNames() { DARABONBA_PTR_GET(attributeNames_, vector<string>) };
    inline DescribeRenderingInstanceConfigurationRequestConfiguration& setAttributeNames(const vector<string> & attributeNames) { DARABONBA_PTR_SET_VALUE(attributeNames_, attributeNames) };
    inline DescribeRenderingInstanceConfigurationRequestConfiguration& setAttributeNames(vector<string> && attributeNames) { DARABONBA_PTR_SET_RVALUE(attributeNames_, attributeNames) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline DescribeRenderingInstanceConfigurationRequestConfiguration& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


  protected:
    std::shared_ptr<vector<string>> attributeNames_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> moduleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
