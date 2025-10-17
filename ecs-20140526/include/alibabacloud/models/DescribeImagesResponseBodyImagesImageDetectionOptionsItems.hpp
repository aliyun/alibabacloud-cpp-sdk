// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGESIMAGEDETECTIONOPTIONSITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGESIMAGEDETECTIONOPTIONSITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagesResponseBodyImagesImageDetectionOptionsItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagesResponseBodyImagesImageDetectionOptionsItems& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagesResponseBodyImagesImageDetectionOptionsItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
    };
    DescribeImagesResponseBodyImagesImageDetectionOptionsItems() = default ;
    DescribeImagesResponseBodyImagesImageDetectionOptionsItems(const DescribeImagesResponseBodyImagesImageDetectionOptionsItems &) = default ;
    DescribeImagesResponseBodyImagesImageDetectionOptionsItems(DescribeImagesResponseBodyImagesImageDetectionOptionsItems &&) = default ;
    DescribeImagesResponseBodyImagesImageDetectionOptionsItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagesResponseBodyImagesImageDetectionOptionsItems() = default ;
    DescribeImagesResponseBodyImagesImageDetectionOptionsItems& operator=(const DescribeImagesResponseBodyImagesImageDetectionOptionsItems &) = default ;
    DescribeImagesResponseBodyImagesImageDetectionOptionsItems& operator=(DescribeImagesResponseBodyImagesImageDetectionOptionsItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->item_ == nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<Models::DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<Models::DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem>) };
    inline vector<Models::DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem> item() { DARABONBA_PTR_GET(item_, vector<Models::DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem>) };
    inline DescribeImagesResponseBodyImagesImageDetectionOptionsItems& setItem(const vector<Models::DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline DescribeImagesResponseBodyImagesImageDetectionOptionsItems& setItem(vector<Models::DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


  protected:
    std::shared_ptr<vector<Models::DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem>> item_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
