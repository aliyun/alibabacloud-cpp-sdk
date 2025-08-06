// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSYSTEMPROPERTYTEMPLATEREQUESTSYSTEMPROPERTYINFOCUSTOMPROPERTYINFOS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSYSTEMPROPERTYTEMPLATEREQUESTSYSTEMPROPERTYINFOCUSTOMPROPERTYINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyName, propertyName_);
      DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyName, propertyName_);
      DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
    };
    ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos() = default ;
    ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos(const ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos &) = default ;
    ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos(ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos &&) = default ;
    ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos() = default ;
    ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos& operator=(const ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos &) = default ;
    ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos& operator=(ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->propertyName_ != nullptr
        && this->propertyValue_ != nullptr; };
    // propertyName Field Functions 
    bool hasPropertyName() const { return this->propertyName_ != nullptr;};
    void deletePropertyName() { this->propertyName_ = nullptr;};
    inline string propertyName() const { DARABONBA_PTR_GET_DEFAULT(propertyName_, "") };
    inline ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos& setPropertyName(string propertyName) { DARABONBA_PTR_SET_VALUE(propertyName_, propertyName) };


    // propertyValue Field Functions 
    bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
    void deletePropertyValue() { this->propertyValue_ = nullptr;};
    inline string propertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
    inline ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


  protected:
    std::shared_ptr<string> propertyName_ = nullptr;
    std::shared_ptr<string> propertyValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
