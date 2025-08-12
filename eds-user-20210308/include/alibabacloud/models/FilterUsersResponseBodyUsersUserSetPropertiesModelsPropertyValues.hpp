// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERUSERSRESPONSEBODYUSERSUSERSETPROPERTIESMODELSPROPERTYVALUES_HPP_
#define ALIBABACLOUD_MODELS_FILTERUSERSRESPONSEBODYUSERSUSERSETPROPERTIESMODELSPROPERTYVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
      DARABONBA_PTR_TO_JSON(PropertyValueId, propertyValueId_);
    };
    friend void from_json(const Darabonba::Json& j, FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
      DARABONBA_PTR_FROM_JSON(PropertyValueId, propertyValueId_);
    };
    FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues() = default ;
    FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues(const FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues &) = default ;
    FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues(FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues &&) = default ;
    FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues() = default ;
    FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues& operator=(const FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues &) = default ;
    FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues& operator=(FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->propertyValue_ != nullptr
        && this->propertyValueId_ != nullptr; };
    // propertyValue Field Functions 
    bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
    void deletePropertyValue() { this->propertyValue_ = nullptr;};
    inline string propertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
    inline FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


    // propertyValueId Field Functions 
    bool hasPropertyValueId() const { return this->propertyValueId_ != nullptr;};
    void deletePropertyValueId() { this->propertyValueId_ = nullptr;};
    inline int64_t propertyValueId() const { DARABONBA_PTR_GET_DEFAULT(propertyValueId_, 0L) };
    inline FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues& setPropertyValueId(int64_t propertyValueId) { DARABONBA_PTR_SET_VALUE(propertyValueId_, propertyValueId) };


  protected:
    // The property value.
    std::shared_ptr<string> propertyValue_ = nullptr;
    // The ID of the property value.
    std::shared_ptr<int64_t> propertyValueId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
