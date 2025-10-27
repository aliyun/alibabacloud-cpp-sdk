// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYCRONITEMRESPONSEBODYPROPERTYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYCRONITEMRESPONSEBODYPROPERTYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyCronItemResponseBodyPropertyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyCronItemResponseBodyPropertyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyCronItemResponseBodyPropertyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribePropertyCronItemResponseBodyPropertyItems() = default ;
    DescribePropertyCronItemResponseBodyPropertyItems(const DescribePropertyCronItemResponseBodyPropertyItems &) = default ;
    DescribePropertyCronItemResponseBodyPropertyItems(DescribePropertyCronItemResponseBodyPropertyItems &&) = default ;
    DescribePropertyCronItemResponseBodyPropertyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyCronItemResponseBodyPropertyItems() = default ;
    DescribePropertyCronItemResponseBodyPropertyItems& operator=(const DescribePropertyCronItemResponseBodyPropertyItems &) = default ;
    DescribePropertyCronItemResponseBodyPropertyItems& operator=(DescribePropertyCronItemResponseBodyPropertyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->source_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribePropertyCronItemResponseBodyPropertyItems& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribePropertyCronItemResponseBodyPropertyItems& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The number of servers on which the scheduled task is run.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The path to the scheduled task.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
