// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUSPRODUCTSKUMODULESMODULEPROPERTIESPROPERTY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUSPRODUCTSKUMODULESMODULEPROPERTIESPROPERTY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayUnit, displayUnit_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PropertyValues, propertyValues_);
      DARABONBA_PTR_TO_JSON(ShowType, showType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayUnit, displayUnit_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PropertyValues, propertyValues_);
      DARABONBA_PTR_FROM_JSON(ShowType, showType_);
    };
    DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty() = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty(const DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty &) = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty(DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty &&) = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty() = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty& operator=(const DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty &) = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty& operator=(DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayUnit_ != nullptr
        && this->key_ != nullptr && this->name_ != nullptr && this->propertyValues_ != nullptr && this->showType_ != nullptr; };
    // displayUnit Field Functions 
    bool hasDisplayUnit() const { return this->displayUnit_ != nullptr;};
    void deleteDisplayUnit() { this->displayUnit_ = nullptr;};
    inline string displayUnit() const { DARABONBA_PTR_GET_DEFAULT(displayUnit_, "") };
    inline DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty& setDisplayUnit(string displayUnit) { DARABONBA_PTR_SET_VALUE(displayUnit_, displayUnit) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // propertyValues Field Functions 
    bool hasPropertyValues() const { return this->propertyValues_ != nullptr;};
    void deletePropertyValues() { this->propertyValues_ = nullptr;};
    inline const Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues & propertyValues() const { DARABONBA_PTR_GET_CONST(propertyValues_, Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues) };
    inline Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues propertyValues() { DARABONBA_PTR_GET(propertyValues_, Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues) };
    inline DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty& setPropertyValues(const Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues & propertyValues) { DARABONBA_PTR_SET_VALUE(propertyValues_, propertyValues) };
    inline DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty& setPropertyValues(Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues && propertyValues) { DARABONBA_PTR_SET_RVALUE(propertyValues_, propertyValues) };


    // showType Field Functions 
    bool hasShowType() const { return this->showType_ != nullptr;};
    void deleteShowType() { this->showType_ = nullptr;};
    inline string showType() const { DARABONBA_PTR_GET_DEFAULT(showType_, "") };
    inline DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty& setShowType(string showType) { DARABONBA_PTR_SET_VALUE(showType_, showType) };


  protected:
    std::shared_ptr<string> displayUnit_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues> propertyValues_ = nullptr;
    std::shared_ptr<string> showType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
