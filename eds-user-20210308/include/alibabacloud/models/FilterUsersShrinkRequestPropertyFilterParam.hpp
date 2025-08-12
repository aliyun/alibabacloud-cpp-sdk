// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERUSERSSHRINKREQUESTPROPERTYFILTERPARAM_HPP_
#define ALIBABACLOUD_MODELS_FILTERUSERSSHRINKREQUESTPROPERTYFILTERPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class FilterUsersShrinkRequestPropertyFilterParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilterUsersShrinkRequestPropertyFilterParam& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_TO_JSON(PropertyValueIds, propertyValueIds_);
    };
    friend void from_json(const Darabonba::Json& j, FilterUsersShrinkRequestPropertyFilterParam& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_FROM_JSON(PropertyValueIds, propertyValueIds_);
    };
    FilterUsersShrinkRequestPropertyFilterParam() = default ;
    FilterUsersShrinkRequestPropertyFilterParam(const FilterUsersShrinkRequestPropertyFilterParam &) = default ;
    FilterUsersShrinkRequestPropertyFilterParam(FilterUsersShrinkRequestPropertyFilterParam &&) = default ;
    FilterUsersShrinkRequestPropertyFilterParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilterUsersShrinkRequestPropertyFilterParam() = default ;
    FilterUsersShrinkRequestPropertyFilterParam& operator=(const FilterUsersShrinkRequestPropertyFilterParam &) = default ;
    FilterUsersShrinkRequestPropertyFilterParam& operator=(FilterUsersShrinkRequestPropertyFilterParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->propertyId_ != nullptr
        && this->propertyValueIds_ != nullptr; };
    // propertyId Field Functions 
    bool hasPropertyId() const { return this->propertyId_ != nullptr;};
    void deletePropertyId() { this->propertyId_ = nullptr;};
    inline int64_t propertyId() const { DARABONBA_PTR_GET_DEFAULT(propertyId_, 0L) };
    inline FilterUsersShrinkRequestPropertyFilterParam& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


    // propertyValueIds Field Functions 
    bool hasPropertyValueIds() const { return this->propertyValueIds_ != nullptr;};
    void deletePropertyValueIds() { this->propertyValueIds_ = nullptr;};
    inline string propertyValueIds() const { DARABONBA_PTR_GET_DEFAULT(propertyValueIds_, "") };
    inline FilterUsersShrinkRequestPropertyFilterParam& setPropertyValueIds(string propertyValueIds) { DARABONBA_PTR_SET_VALUE(propertyValueIds_, propertyValueIds) };


  protected:
    // The ID of the property.
    std::shared_ptr<int64_t> propertyId_ = nullptr;
    // The IDs of the property values.
    std::shared_ptr<string> propertyValueIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
