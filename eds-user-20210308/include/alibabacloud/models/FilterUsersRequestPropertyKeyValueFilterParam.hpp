// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERUSERSREQUESTPROPERTYKEYVALUEFILTERPARAM_HPP_
#define ALIBABACLOUD_MODELS_FILTERUSERSREQUESTPROPERTYKEYVALUEFILTERPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class FilterUsersRequestPropertyKeyValueFilterParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilterUsersRequestPropertyKeyValueFilterParam& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyKey, propertyKey_);
      DARABONBA_PTR_TO_JSON(PropertyValues, propertyValues_);
    };
    friend void from_json(const Darabonba::Json& j, FilterUsersRequestPropertyKeyValueFilterParam& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyKey, propertyKey_);
      DARABONBA_PTR_FROM_JSON(PropertyValues, propertyValues_);
    };
    FilterUsersRequestPropertyKeyValueFilterParam() = default ;
    FilterUsersRequestPropertyKeyValueFilterParam(const FilterUsersRequestPropertyKeyValueFilterParam &) = default ;
    FilterUsersRequestPropertyKeyValueFilterParam(FilterUsersRequestPropertyKeyValueFilterParam &&) = default ;
    FilterUsersRequestPropertyKeyValueFilterParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilterUsersRequestPropertyKeyValueFilterParam() = default ;
    FilterUsersRequestPropertyKeyValueFilterParam& operator=(const FilterUsersRequestPropertyKeyValueFilterParam &) = default ;
    FilterUsersRequestPropertyKeyValueFilterParam& operator=(FilterUsersRequestPropertyKeyValueFilterParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->propertyKey_ == nullptr
        && return this->propertyValues_ == nullptr; };
    // propertyKey Field Functions 
    bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
    void deletePropertyKey() { this->propertyKey_ = nullptr;};
    inline string propertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
    inline FilterUsersRequestPropertyKeyValueFilterParam& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


    // propertyValues Field Functions 
    bool hasPropertyValues() const { return this->propertyValues_ != nullptr;};
    void deletePropertyValues() { this->propertyValues_ = nullptr;};
    inline string propertyValues() const { DARABONBA_PTR_GET_DEFAULT(propertyValues_, "") };
    inline FilterUsersRequestPropertyKeyValueFilterParam& setPropertyValues(string propertyValues) { DARABONBA_PTR_SET_VALUE(propertyValues_, propertyValues) };


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
