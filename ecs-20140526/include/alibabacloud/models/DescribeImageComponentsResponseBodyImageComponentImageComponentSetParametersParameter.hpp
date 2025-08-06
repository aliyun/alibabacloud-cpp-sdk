// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGECOMPONENTSRESPONSEBODYIMAGECOMPONENTIMAGECOMPONENTSETPARAMETERSPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGECOMPONENTSRESPONSEBODYIMAGECOMPONENTIMAGECOMPONENTSETPARAMETERSPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter() = default ;
    DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter(const DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter &) = default ;
    DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter(DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter &&) = default ;
    DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter() = default ;
    DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter& operator=(const DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter &) = default ;
    DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter& operator=(DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultValue_ != nullptr
        && this->name_ != nullptr && this->type_ != nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The default value of the parameter.
    std::shared_ptr<string> defaultValue_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the parameter.
    // 
    // Valid values:
    // 
    // *   String
    // *   Number
    // *   Boolean
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
