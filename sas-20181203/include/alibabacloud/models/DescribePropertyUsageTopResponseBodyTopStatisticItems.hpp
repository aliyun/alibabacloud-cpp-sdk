// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSAGETOPRESPONSEBODYTOPSTATISTICITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSAGETOPRESPONSEBODYTOPSTATISTICITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyUsageTopResponseBodyTopStatisticItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyUsageTopResponseBodyTopStatisticItems& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyUsageTopResponseBodyTopStatisticItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribePropertyUsageTopResponseBodyTopStatisticItems() = default ;
    DescribePropertyUsageTopResponseBodyTopStatisticItems(const DescribePropertyUsageTopResponseBodyTopStatisticItems &) = default ;
    DescribePropertyUsageTopResponseBodyTopStatisticItems(DescribePropertyUsageTopResponseBodyTopStatisticItems &&) = default ;
    DescribePropertyUsageTopResponseBodyTopStatisticItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyUsageTopResponseBodyTopStatisticItems() = default ;
    DescribePropertyUsageTopResponseBodyTopStatisticItems& operator=(const DescribePropertyUsageTopResponseBodyTopStatisticItems &) = default ;
    DescribePropertyUsageTopResponseBodyTopStatisticItems& operator=(DescribePropertyUsageTopResponseBodyTopStatisticItems &&) = default ;
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
    inline DescribePropertyUsageTopResponseBodyTopStatisticItems& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePropertyUsageTopResponseBodyTopStatisticItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The quantity.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The statistical item.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
