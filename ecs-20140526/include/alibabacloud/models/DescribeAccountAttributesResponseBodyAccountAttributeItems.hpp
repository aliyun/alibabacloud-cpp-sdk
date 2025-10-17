// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTATTRIBUTESRESPONSEBODYACCOUNTATTRIBUTEITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTATTRIBUTESRESPONSEBODYACCOUNTATTRIBUTEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAccountAttributesResponseBodyAccountAttributeItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountAttributesResponseBodyAccountAttributeItems& obj) { 
      DARABONBA_PTR_TO_JSON(AccountAttributeItem, accountAttributeItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountAttributesResponseBodyAccountAttributeItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountAttributeItem, accountAttributeItem_);
    };
    DescribeAccountAttributesResponseBodyAccountAttributeItems() = default ;
    DescribeAccountAttributesResponseBodyAccountAttributeItems(const DescribeAccountAttributesResponseBodyAccountAttributeItems &) = default ;
    DescribeAccountAttributesResponseBodyAccountAttributeItems(DescribeAccountAttributesResponseBodyAccountAttributeItems &&) = default ;
    DescribeAccountAttributesResponseBodyAccountAttributeItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountAttributesResponseBodyAccountAttributeItems() = default ;
    DescribeAccountAttributesResponseBodyAccountAttributeItems& operator=(const DescribeAccountAttributesResponseBodyAccountAttributeItems &) = default ;
    DescribeAccountAttributesResponseBodyAccountAttributeItems& operator=(DescribeAccountAttributesResponseBodyAccountAttributeItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountAttributeItem_ == nullptr; };
    // accountAttributeItem Field Functions 
    bool hasAccountAttributeItem() const { return this->accountAttributeItem_ != nullptr;};
    void deleteAccountAttributeItem() { this->accountAttributeItem_ = nullptr;};
    inline const vector<Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem> & accountAttributeItem() const { DARABONBA_PTR_GET_CONST(accountAttributeItem_, vector<Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem>) };
    inline vector<Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem> accountAttributeItem() { DARABONBA_PTR_GET(accountAttributeItem_, vector<Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem>) };
    inline DescribeAccountAttributesResponseBodyAccountAttributeItems& setAccountAttributeItem(const vector<Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem> & accountAttributeItem) { DARABONBA_PTR_SET_VALUE(accountAttributeItem_, accountAttributeItem) };
    inline DescribeAccountAttributesResponseBodyAccountAttributeItems& setAccountAttributeItem(vector<Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem> && accountAttributeItem) { DARABONBA_PTR_SET_RVALUE(accountAttributeItem_, accountAttributeItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem>> accountAttributeItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
