// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERUSERSSHRINKREQUESTPROPERTYKEYVALUEFILTERPARAM_HPP_
#define ALIBABACLOUD_MODELS_FILTERUSERSSHRINKREQUESTPROPERTYKEYVALUEFILTERPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class FilterUsersShrinkRequestPropertyKeyValueFilterParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilterUsersShrinkRequestPropertyKeyValueFilterParam& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyKey, propertyKey_);
      DARABONBA_PTR_TO_JSON(PropertyValues, propertyValues_);
    };
    friend void from_json(const Darabonba::Json& j, FilterUsersShrinkRequestPropertyKeyValueFilterParam& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyKey, propertyKey_);
      DARABONBA_PTR_FROM_JSON(PropertyValues, propertyValues_);
    };
    FilterUsersShrinkRequestPropertyKeyValueFilterParam() = default ;
    FilterUsersShrinkRequestPropertyKeyValueFilterParam(const FilterUsersShrinkRequestPropertyKeyValueFilterParam &) = default ;
    FilterUsersShrinkRequestPropertyKeyValueFilterParam(FilterUsersShrinkRequestPropertyKeyValueFilterParam &&) = default ;
    FilterUsersShrinkRequestPropertyKeyValueFilterParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilterUsersShrinkRequestPropertyKeyValueFilterParam() = default ;
    FilterUsersShrinkRequestPropertyKeyValueFilterParam& operator=(const FilterUsersShrinkRequestPropertyKeyValueFilterParam &) = default ;
    FilterUsersShrinkRequestPropertyKeyValueFilterParam& operator=(FilterUsersShrinkRequestPropertyKeyValueFilterParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->propertyKey_ != nullptr
        && this->propertyValues_ != nullptr; };
    // propertyKey Field Functions 
    bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
    void deletePropertyKey() { this->propertyKey_ = nullptr;};
    inline string propertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
    inline FilterUsersShrinkRequestPropertyKeyValueFilterParam& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


    // propertyValues Field Functions 
    bool hasPropertyValues() const { return this->propertyValues_ != nullptr;};
    void deletePropertyValues() { this->propertyValues_ = nullptr;};
    inline string propertyValues() const { DARABONBA_PTR_GET_DEFAULT(propertyValues_, "") };
    inline FilterUsersShrinkRequestPropertyKeyValueFilterParam& setPropertyValues(string propertyValues) { DARABONBA_PTR_SET_VALUE(propertyValues_, propertyValues) };


  protected:
    // The property name.
    std::shared_ptr<string> propertyKey_ = nullptr;
    // The property values.
    std::shared_ptr<string> propertyValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
