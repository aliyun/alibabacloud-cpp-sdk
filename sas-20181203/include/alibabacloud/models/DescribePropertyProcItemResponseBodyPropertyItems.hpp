// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPROCITEMRESPONSEBODYPROPERTYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPROCITEMRESPONSEBODYPROPERTYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyProcItemResponseBodyPropertyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyProcItemResponseBodyPropertyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyProcItemResponseBodyPropertyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribePropertyProcItemResponseBodyPropertyItems() = default ;
    DescribePropertyProcItemResponseBodyPropertyItems(const DescribePropertyProcItemResponseBodyPropertyItems &) = default ;
    DescribePropertyProcItemResponseBodyPropertyItems(DescribePropertyProcItemResponseBodyPropertyItems &&) = default ;
    DescribePropertyProcItemResponseBodyPropertyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyProcItemResponseBodyPropertyItems() = default ;
    DescribePropertyProcItemResponseBodyPropertyItems& operator=(const DescribePropertyProcItemResponseBodyPropertyItems &) = default ;
    DescribePropertyProcItemResponseBodyPropertyItems& operator=(DescribePropertyProcItemResponseBodyPropertyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->name_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribePropertyProcItemResponseBodyPropertyItems& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePropertyProcItemResponseBodyPropertyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The number of servers on which the process runs.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The name of the process.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
