// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEMOCATEGORY_HPP_
#define ALIBABACLOUD_MODELS_DEMOCATEGORY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DemoCategory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class DemoCategory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DemoCategory& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryCode, categoryCode_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(SubCategories, subCategories_);
    };
    friend void from_json(const Darabonba::Json& j, DemoCategory& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryCode, categoryCode_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(SubCategories, subCategories_);
    };
    DemoCategory() = default ;
    DemoCategory(const DemoCategory &) = default ;
    DemoCategory(DemoCategory &&) = default ;
    DemoCategory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DemoCategory() = default ;
    DemoCategory& operator=(const DemoCategory &) = default ;
    DemoCategory& operator=(DemoCategory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryCode_ != nullptr
        && this->categoryName_ != nullptr && this->order_ != nullptr && this->subCategories_ != nullptr; };
    // categoryCode Field Functions 
    bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
    void deleteCategoryCode() { this->categoryCode_ = nullptr;};
    inline string categoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, "") };
    inline DemoCategory& setCategoryCode(string categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline DemoCategory& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int64_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0L) };
    inline DemoCategory& setOrder(int64_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // subCategories Field Functions 
    bool hasSubCategories() const { return this->subCategories_ != nullptr;};
    void deleteSubCategories() { this->subCategories_ = nullptr;};
    inline const vector<DemoCategory> & subCategories() const { DARABONBA_PTR_GET_CONST(subCategories_, vector<DemoCategory>) };
    inline vector<DemoCategory> subCategories() { DARABONBA_PTR_GET(subCategories_, vector<DemoCategory>) };
    inline DemoCategory& setSubCategories(const vector<DemoCategory> & subCategories) { DARABONBA_PTR_SET_VALUE(subCategories_, subCategories) };
    inline DemoCategory& setSubCategories(vector<DemoCategory> && subCategories) { DARABONBA_PTR_SET_RVALUE(subCategories_, subCategories) };


  protected:
    std::shared_ptr<string> categoryCode_ = nullptr;
    std::shared_ptr<string> categoryName_ = nullptr;
    std::shared_ptr<int64_t> order_ = nullptr;
    std::shared_ptr<vector<DemoCategory>> subCategories_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
