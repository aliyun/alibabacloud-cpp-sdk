// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCAITEMRESPONSEBODYPROPERTYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCAITEMRESPONSEBODYPROPERTYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyScaItemResponseBodyPropertyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyScaItemResponseBodyPropertyItems& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TypeDisplay, typeDisplay_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyScaItemResponseBodyPropertyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TypeDisplay, typeDisplay_);
    };
    DescribePropertyScaItemResponseBodyPropertyItems() = default ;
    DescribePropertyScaItemResponseBodyPropertyItems(const DescribePropertyScaItemResponseBodyPropertyItems &) = default ;
    DescribePropertyScaItemResponseBodyPropertyItems(DescribePropertyScaItemResponseBodyPropertyItems &&) = default ;
    DescribePropertyScaItemResponseBodyPropertyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyScaItemResponseBodyPropertyItems() = default ;
    DescribePropertyScaItemResponseBodyPropertyItems& operator=(const DescribePropertyScaItemResponseBodyPropertyItems &) = default ;
    DescribePropertyScaItemResponseBodyPropertyItems& operator=(DescribePropertyScaItemResponseBodyPropertyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && return this->count_ == nullptr && return this->name_ == nullptr && return this->typeDisplay_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribePropertyScaItemResponseBodyPropertyItems& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribePropertyScaItemResponseBodyPropertyItems& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePropertyScaItemResponseBodyPropertyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // typeDisplay Field Functions 
    bool hasTypeDisplay() const { return this->typeDisplay_ != nullptr;};
    void deleteTypeDisplay() { this->typeDisplay_ = nullptr;};
    inline string typeDisplay() const { DARABONBA_PTR_GET_DEFAULT(typeDisplay_, "") };
    inline DescribePropertyScaItemResponseBodyPropertyItems& setTypeDisplay(string typeDisplay) { DARABONBA_PTR_SET_VALUE(typeDisplay_, typeDisplay) };


  protected:
    // The type of the middleware, database, or web service. Valid values:
    // 
    // *   **system_service**: system service
    // *   **software_library**: software library
    // *   **docker_component**: container component
    // *   **database**: database
    // *   **web_container**: web container
    // *   **jar**: JAR package
    // *   **web_framework**: web framework
    std::shared_ptr<string> bizType_ = nullptr;
    // The number of servers on which the middleware is run.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The name of the middleware.
    std::shared_ptr<string> name_ = nullptr;
    // The display name of the middleware type.
    std::shared_ptr<string> typeDisplay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
