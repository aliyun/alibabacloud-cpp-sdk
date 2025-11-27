// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODYCONFIGINFOCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODYCONFIGINFOCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRenderingInstanceResponseBodyConfigInfoConfigurationAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeRenderingInstanceResponseBodyConfigInfoConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenderingInstanceResponseBodyConfigInfoConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenderingInstanceResponseBodyConfigInfoConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
    };
    DescribeRenderingInstanceResponseBodyConfigInfoConfiguration() = default ;
    DescribeRenderingInstanceResponseBodyConfigInfoConfiguration(const DescribeRenderingInstanceResponseBodyConfigInfoConfiguration &) = default ;
    DescribeRenderingInstanceResponseBodyConfigInfoConfiguration(DescribeRenderingInstanceResponseBodyConfigInfoConfiguration &&) = default ;
    DescribeRenderingInstanceResponseBodyConfigInfoConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenderingInstanceResponseBodyConfigInfoConfiguration() = default ;
    DescribeRenderingInstanceResponseBodyConfigInfoConfiguration& operator=(const DescribeRenderingInstanceResponseBodyConfigInfoConfiguration &) = default ;
    DescribeRenderingInstanceResponseBodyConfigInfoConfiguration& operator=(DescribeRenderingInstanceResponseBodyConfigInfoConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->moduleName_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<Models::DescribeRenderingInstanceResponseBodyConfigInfoConfigurationAttributes> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<Models::DescribeRenderingInstanceResponseBodyConfigInfoConfigurationAttributes>) };
    inline vector<Models::DescribeRenderingInstanceResponseBodyConfigInfoConfigurationAttributes> attributes() { DARABONBA_PTR_GET(attributes_, vector<Models::DescribeRenderingInstanceResponseBodyConfigInfoConfigurationAttributes>) };
    inline DescribeRenderingInstanceResponseBodyConfigInfoConfiguration& setAttributes(const vector<Models::DescribeRenderingInstanceResponseBodyConfigInfoConfigurationAttributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline DescribeRenderingInstanceResponseBodyConfigInfoConfiguration& setAttributes(vector<Models::DescribeRenderingInstanceResponseBodyConfigInfoConfigurationAttributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline DescribeRenderingInstanceResponseBodyConfigInfoConfiguration& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


  protected:
    std::shared_ptr<vector<Models::DescribeRenderingInstanceResponseBodyConfigInfoConfigurationAttributes>> attributes_ = nullptr;
    std::shared_ptr<string> moduleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
