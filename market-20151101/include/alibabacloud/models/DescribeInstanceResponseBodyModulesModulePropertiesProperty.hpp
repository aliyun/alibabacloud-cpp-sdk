// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYMODULESMODULEPROPERTIESPROPERTY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYMODULESMODULEPROPERTIESPROPERTY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeInstanceResponseBodyModulesModulePropertiesProperty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBodyModulesModulePropertiesProperty& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayUnit, displayUnit_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PropertyValues, propertyValues_);
      DARABONBA_PTR_TO_JSON(ShowType, showType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBodyModulesModulePropertiesProperty& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayUnit, displayUnit_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PropertyValues, propertyValues_);
      DARABONBA_PTR_FROM_JSON(ShowType, showType_);
    };
    DescribeInstanceResponseBodyModulesModulePropertiesProperty() = default ;
    DescribeInstanceResponseBodyModulesModulePropertiesProperty(const DescribeInstanceResponseBodyModulesModulePropertiesProperty &) = default ;
    DescribeInstanceResponseBodyModulesModulePropertiesProperty(DescribeInstanceResponseBodyModulesModulePropertiesProperty &&) = default ;
    DescribeInstanceResponseBodyModulesModulePropertiesProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBodyModulesModulePropertiesProperty() = default ;
    DescribeInstanceResponseBodyModulesModulePropertiesProperty& operator=(const DescribeInstanceResponseBodyModulesModulePropertiesProperty &) = default ;
    DescribeInstanceResponseBodyModulesModulePropertiesProperty& operator=(DescribeInstanceResponseBodyModulesModulePropertiesProperty &&) = default ;
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
    inline DescribeInstanceResponseBodyModulesModulePropertiesProperty& setDisplayUnit(string displayUnit) { DARABONBA_PTR_SET_VALUE(displayUnit_, displayUnit) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeInstanceResponseBodyModulesModulePropertiesProperty& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeInstanceResponseBodyModulesModulePropertiesProperty& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // propertyValues Field Functions 
    bool hasPropertyValues() const { return this->propertyValues_ != nullptr;};
    void deletePropertyValues() { this->propertyValues_ = nullptr;};
    inline const Models::DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues & propertyValues() const { DARABONBA_PTR_GET_CONST(propertyValues_, Models::DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues) };
    inline Models::DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues propertyValues() { DARABONBA_PTR_GET(propertyValues_, Models::DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues) };
    inline DescribeInstanceResponseBodyModulesModulePropertiesProperty& setPropertyValues(const Models::DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues & propertyValues) { DARABONBA_PTR_SET_VALUE(propertyValues_, propertyValues) };
    inline DescribeInstanceResponseBodyModulesModulePropertiesProperty& setPropertyValues(Models::DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues && propertyValues) { DARABONBA_PTR_SET_RVALUE(propertyValues_, propertyValues) };


    // showType Field Functions 
    bool hasShowType() const { return this->showType_ != nullptr;};
    void deleteShowType() { this->showType_ = nullptr;};
    inline string showType() const { DARABONBA_PTR_GET_DEFAULT(showType_, "") };
    inline DescribeInstanceResponseBodyModulesModulePropertiesProperty& setShowType(string showType) { DARABONBA_PTR_SET_VALUE(showType_, showType) };


  protected:
    std::shared_ptr<string> displayUnit_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues> propertyValues_ = nullptr;
    std::shared_ptr<string> showType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
