// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONSRESPONSEBODYCOMPONENTGROUPSITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONSRESPONSEBODYCOMPONENTGROUPSITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeAddonsResponseBodyComponentGroupsItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonsResponseBodyComponentGroupsItems& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonsResponseBodyComponentGroupsItems& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    DescribeAddonsResponseBodyComponentGroupsItems() = default ;
    DescribeAddonsResponseBodyComponentGroupsItems(const DescribeAddonsResponseBodyComponentGroupsItems &) = default ;
    DescribeAddonsResponseBodyComponentGroupsItems(DescribeAddonsResponseBodyComponentGroupsItems &&) = default ;
    DescribeAddonsResponseBodyComponentGroupsItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonsResponseBodyComponentGroupsItems() = default ;
    DescribeAddonsResponseBodyComponentGroupsItems& operator=(const DescribeAddonsResponseBodyComponentGroupsItems &) = default ;
    DescribeAddonsResponseBodyComponentGroupsItems& operator=(DescribeAddonsResponseBodyComponentGroupsItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAddonsResponseBodyComponentGroupsItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the component.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
