// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPCATEGORIESRESPONSEBODYMONITORGROUPCATEGORIESMONITORGROUPCATEGORY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPCATEGORIESRESPONSEBODYMONITORGROUPCATEGORIESMONITORGROUPCATEGORY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategoryCategoryItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryItem, categoryItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryItem, categoryItem_);
    };
    DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory() = default ;
    DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory(const DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory &) = default ;
    DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory(DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory &&) = default ;
    DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory() = default ;
    DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory& operator=(const DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory &) = default ;
    DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory& operator=(DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryItem_ != nullptr; };
    // categoryItem Field Functions 
    bool hasCategoryItem() const { return this->categoryItem_ != nullptr;};
    void deleteCategoryItem() { this->categoryItem_ = nullptr;};
    inline const vector<Models::DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategoryCategoryItem> & categoryItem() const { DARABONBA_PTR_GET_CONST(categoryItem_, vector<Models::DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategoryCategoryItem>) };
    inline vector<Models::DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategoryCategoryItem> categoryItem() { DARABONBA_PTR_GET(categoryItem_, vector<Models::DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategoryCategoryItem>) };
    inline DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory& setCategoryItem(const vector<Models::DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategoryCategoryItem> & categoryItem) { DARABONBA_PTR_SET_VALUE(categoryItem_, categoryItem) };
    inline DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory& setCategoryItem(vector<Models::DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategoryCategoryItem> && categoryItem) { DARABONBA_PTR_SET_RVALUE(categoryItem_, categoryItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategoryCategoryItem>> categoryItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
