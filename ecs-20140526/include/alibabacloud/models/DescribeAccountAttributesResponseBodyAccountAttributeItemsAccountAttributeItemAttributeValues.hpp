// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTATTRIBUTESRESPONSEBODYACCOUNTATTRIBUTEITEMSACCOUNTATTRIBUTEITEMATTRIBUTEVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTATTRIBUTESRESPONSEBODYACCOUNTATTRIBUTEITEMSACCOUNTATTRIBUTEITEMATTRIBUTEVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValuesValueItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues& obj) { 
      DARABONBA_PTR_TO_JSON(ValueItem, valueItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues& obj) { 
      DARABONBA_PTR_FROM_JSON(ValueItem, valueItem_);
    };
    DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues() = default ;
    DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues(const DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues &) = default ;
    DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues(DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues &&) = default ;
    DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues() = default ;
    DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues& operator=(const DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues &) = default ;
    DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues& operator=(DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->valueItem_ == nullptr; };
    // valueItem Field Functions 
    bool hasValueItem() const { return this->valueItem_ != nullptr;};
    void deleteValueItem() { this->valueItem_ = nullptr;};
    inline const vector<Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValuesValueItem> & valueItem() const { DARABONBA_PTR_GET_CONST(valueItem_, vector<Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValuesValueItem>) };
    inline vector<Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValuesValueItem> valueItem() { DARABONBA_PTR_GET(valueItem_, vector<Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValuesValueItem>) };
    inline DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues& setValueItem(const vector<Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValuesValueItem> & valueItem) { DARABONBA_PTR_SET_VALUE(valueItem_, valueItem) };
    inline DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues& setValueItem(vector<Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValuesValueItem> && valueItem) { DARABONBA_PTR_SET_RVALUE(valueItem_, valueItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValuesValueItem>> valueItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
