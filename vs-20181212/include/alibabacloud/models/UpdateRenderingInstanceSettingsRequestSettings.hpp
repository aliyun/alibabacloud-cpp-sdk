// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCESETTINGSREQUESTSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCESETTINGSREQUESTSETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UpdateRenderingInstanceSettingsRequestSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRenderingInstanceSettingsRequestSettings& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeName, attributeName_);
      DARABONBA_PTR_TO_JSON(AttributeValue, attributeValue_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRenderingInstanceSettingsRequestSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeName, attributeName_);
      DARABONBA_PTR_FROM_JSON(AttributeValue, attributeValue_);
    };
    UpdateRenderingInstanceSettingsRequestSettings() = default ;
    UpdateRenderingInstanceSettingsRequestSettings(const UpdateRenderingInstanceSettingsRequestSettings &) = default ;
    UpdateRenderingInstanceSettingsRequestSettings(UpdateRenderingInstanceSettingsRequestSettings &&) = default ;
    UpdateRenderingInstanceSettingsRequestSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRenderingInstanceSettingsRequestSettings() = default ;
    UpdateRenderingInstanceSettingsRequestSettings& operator=(const UpdateRenderingInstanceSettingsRequestSettings &) = default ;
    UpdateRenderingInstanceSettingsRequestSettings& operator=(UpdateRenderingInstanceSettingsRequestSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributeName_ == nullptr
        && return this->attributeValue_ == nullptr; };
    // attributeName Field Functions 
    bool hasAttributeName() const { return this->attributeName_ != nullptr;};
    void deleteAttributeName() { this->attributeName_ = nullptr;};
    inline string attributeName() const { DARABONBA_PTR_GET_DEFAULT(attributeName_, "") };
    inline UpdateRenderingInstanceSettingsRequestSettings& setAttributeName(string attributeName) { DARABONBA_PTR_SET_VALUE(attributeName_, attributeName) };


    // attributeValue Field Functions 
    bool hasAttributeValue() const { return this->attributeValue_ != nullptr;};
    void deleteAttributeValue() { this->attributeValue_ = nullptr;};
    inline string attributeValue() const { DARABONBA_PTR_GET_DEFAULT(attributeValue_, "") };
    inline UpdateRenderingInstanceSettingsRequestSettings& setAttributeValue(string attributeValue) { DARABONBA_PTR_SET_VALUE(attributeValue_, attributeValue) };


  protected:
    std::shared_ptr<string> attributeName_ = nullptr;
    std::shared_ptr<string> attributeValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
