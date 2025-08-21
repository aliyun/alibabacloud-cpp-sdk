// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCESETTINGSRESPONSEBODYSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCESETTINGSRESPONSEBODYSETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeRenderingInstanceSettingsResponseBodySettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenderingInstanceSettingsResponseBodySettings& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeName, attributeName_);
      DARABONBA_PTR_TO_JSON(AttributeValue, attributeValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenderingInstanceSettingsResponseBodySettings& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeName, attributeName_);
      DARABONBA_PTR_FROM_JSON(AttributeValue, attributeValue_);
    };
    DescribeRenderingInstanceSettingsResponseBodySettings() = default ;
    DescribeRenderingInstanceSettingsResponseBodySettings(const DescribeRenderingInstanceSettingsResponseBodySettings &) = default ;
    DescribeRenderingInstanceSettingsResponseBodySettings(DescribeRenderingInstanceSettingsResponseBodySettings &&) = default ;
    DescribeRenderingInstanceSettingsResponseBodySettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenderingInstanceSettingsResponseBodySettings() = default ;
    DescribeRenderingInstanceSettingsResponseBodySettings& operator=(const DescribeRenderingInstanceSettingsResponseBodySettings &) = default ;
    DescribeRenderingInstanceSettingsResponseBodySettings& operator=(DescribeRenderingInstanceSettingsResponseBodySettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributeName_ != nullptr
        && this->attributeValue_ != nullptr; };
    // attributeName Field Functions 
    bool hasAttributeName() const { return this->attributeName_ != nullptr;};
    void deleteAttributeName() { this->attributeName_ = nullptr;};
    inline string attributeName() const { DARABONBA_PTR_GET_DEFAULT(attributeName_, "") };
    inline DescribeRenderingInstanceSettingsResponseBodySettings& setAttributeName(string attributeName) { DARABONBA_PTR_SET_VALUE(attributeName_, attributeName) };


    // attributeValue Field Functions 
    bool hasAttributeValue() const { return this->attributeValue_ != nullptr;};
    void deleteAttributeValue() { this->attributeValue_ = nullptr;};
    inline string attributeValue() const { DARABONBA_PTR_GET_DEFAULT(attributeValue_, "") };
    inline DescribeRenderingInstanceSettingsResponseBodySettings& setAttributeValue(string attributeValue) { DARABONBA_PTR_SET_VALUE(attributeValue_, attributeValue) };


  protected:
    std::shared_ptr<string> attributeName_ = nullptr;
    std::shared_ptr<string> attributeValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
