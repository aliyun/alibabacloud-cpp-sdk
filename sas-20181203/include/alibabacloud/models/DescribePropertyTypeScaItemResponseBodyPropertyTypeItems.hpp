// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYTYPESCAITEMRESPONSEBODYPROPERTYTYPEITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYTYPESCAITEMRESPONSEBODYPROPERTYTYPEITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyTypeScaItemResponseBodyPropertyTypeItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyTypeScaItemResponseBodyPropertyTypeItems& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyTypeScaItemResponseBodyPropertyTypeItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribePropertyTypeScaItemResponseBodyPropertyTypeItems() = default ;
    DescribePropertyTypeScaItemResponseBodyPropertyTypeItems(const DescribePropertyTypeScaItemResponseBodyPropertyTypeItems &) = default ;
    DescribePropertyTypeScaItemResponseBodyPropertyTypeItems(DescribePropertyTypeScaItemResponseBodyPropertyTypeItems &&) = default ;
    DescribePropertyTypeScaItemResponseBodyPropertyTypeItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyTypeScaItemResponseBodyPropertyTypeItems() = default ;
    DescribePropertyTypeScaItemResponseBodyPropertyTypeItems& operator=(const DescribePropertyTypeScaItemResponseBodyPropertyTypeItems &) = default ;
    DescribePropertyTypeScaItemResponseBodyPropertyTypeItems& operator=(DescribePropertyTypeScaItemResponseBodyPropertyTypeItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->type_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePropertyTypeScaItemResponseBodyPropertyTypeItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribePropertyTypeScaItemResponseBodyPropertyTypeItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the middleware type.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the middleware. Valid values:
    // 
    // *   **system_service**: system service
    // *   **software_library**: software library
    // *   **docker_component**: container component
    // *   **database**: database
    // *   **web_container**: web container
    // *   **jar**: JAR package
    // *   **web_framework**: web framework
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
