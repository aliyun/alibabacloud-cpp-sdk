// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONVARIABLES4FAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONVARIABLES4FAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetApplicationVariables4FailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationVariables4FailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Attribute, attribute_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(PlaceHolder, placeHolder_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Variable, variable_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationVariables4FailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(PlaceHolder, placeHolder_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Variable, variable_);
    };
    GetApplicationVariables4FailResponseBodyData() = default ;
    GetApplicationVariables4FailResponseBodyData(const GetApplicationVariables4FailResponseBodyData &) = default ;
    GetApplicationVariables4FailResponseBodyData(GetApplicationVariables4FailResponseBodyData &&) = default ;
    GetApplicationVariables4FailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationVariables4FailResponseBodyData() = default ;
    GetApplicationVariables4FailResponseBodyData& operator=(const GetApplicationVariables4FailResponseBodyData &) = default ;
    GetApplicationVariables4FailResponseBodyData& operator=(GetApplicationVariables4FailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attribute_ == nullptr
        && return this->defaultValue_ == nullptr && return this->placeHolder_ == nullptr && return this->region_ == nullptr && return this->value_ == nullptr && return this->variable_ == nullptr; };
    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline string attribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
    inline GetApplicationVariables4FailResponseBodyData& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline GetApplicationVariables4FailResponseBodyData& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // placeHolder Field Functions 
    bool hasPlaceHolder() const { return this->placeHolder_ != nullptr;};
    void deletePlaceHolder() { this->placeHolder_ = nullptr;};
    inline string placeHolder() const { DARABONBA_PTR_GET_DEFAULT(placeHolder_, "") };
    inline GetApplicationVariables4FailResponseBodyData& setPlaceHolder(string placeHolder) { DARABONBA_PTR_SET_VALUE(placeHolder_, placeHolder) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetApplicationVariables4FailResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetApplicationVariables4FailResponseBodyData& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // variable Field Functions 
    bool hasVariable() const { return this->variable_ != nullptr;};
    void deleteVariable() { this->variable_ = nullptr;};
    inline string variable() const { DARABONBA_PTR_GET_DEFAULT(variable_, "") };
    inline GetApplicationVariables4FailResponseBodyData& setVariable(string variable) { DARABONBA_PTR_SET_VALUE(variable_, variable) };


  protected:
    std::shared_ptr<string> attribute_ = nullptr;
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> placeHolder_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<string> variable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
