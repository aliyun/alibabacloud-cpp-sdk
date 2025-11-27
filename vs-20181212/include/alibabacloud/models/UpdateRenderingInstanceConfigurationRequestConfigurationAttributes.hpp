// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCECONFIGURATIONREQUESTCONFIGURATIONATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCECONFIGURATIONREQUESTCONFIGURATIONATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UpdateRenderingInstanceConfigurationRequestConfigurationAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRenderingInstanceConfigurationRequestConfigurationAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRenderingInstanceConfigurationRequestConfigurationAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Value, value_);
    };
    UpdateRenderingInstanceConfigurationRequestConfigurationAttributes() = default ;
    UpdateRenderingInstanceConfigurationRequestConfigurationAttributes(const UpdateRenderingInstanceConfigurationRequestConfigurationAttributes &) = default ;
    UpdateRenderingInstanceConfigurationRequestConfigurationAttributes(UpdateRenderingInstanceConfigurationRequestConfigurationAttributes &&) = default ;
    UpdateRenderingInstanceConfigurationRequestConfigurationAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRenderingInstanceConfigurationRequestConfigurationAttributes() = default ;
    UpdateRenderingInstanceConfigurationRequestConfigurationAttributes& operator=(const UpdateRenderingInstanceConfigurationRequestConfigurationAttributes &) = default ;
    UpdateRenderingInstanceConfigurationRequestConfigurationAttributes& operator=(UpdateRenderingInstanceConfigurationRequestConfigurationAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateRenderingInstanceConfigurationRequestConfigurationAttributes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline UpdateRenderingInstanceConfigurationRequestConfigurationAttributes& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline UpdateRenderingInstanceConfigurationRequestConfigurationAttributes& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
