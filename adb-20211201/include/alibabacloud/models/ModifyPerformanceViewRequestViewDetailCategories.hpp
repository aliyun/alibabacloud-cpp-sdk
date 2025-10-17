// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPERFORMANCEVIEWREQUESTVIEWDETAILCATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPERFORMANCEVIEWREQUESTVIEWDETAILCATEGORIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyPerformanceViewRequestViewDetailCategoriesKeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyPerformanceViewRequestViewDetailCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPerformanceViewRequestViewDetailCategories& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Keys, keys_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPerformanceViewRequestViewDetailCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
    };
    ModifyPerformanceViewRequestViewDetailCategories() = default ;
    ModifyPerformanceViewRequestViewDetailCategories(const ModifyPerformanceViewRequestViewDetailCategories &) = default ;
    ModifyPerformanceViewRequestViewDetailCategories(ModifyPerformanceViewRequestViewDetailCategories &&) = default ;
    ModifyPerformanceViewRequestViewDetailCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPerformanceViewRequestViewDetailCategories() = default ;
    ModifyPerformanceViewRequestViewDetailCategories& operator=(const ModifyPerformanceViewRequestViewDetailCategories &) = default ;
    ModifyPerformanceViewRequestViewDetailCategories& operator=(ModifyPerformanceViewRequestViewDetailCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->keys_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyPerformanceViewRequestViewDetailCategories& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const vector<Models::ModifyPerformanceViewRequestViewDetailCategoriesKeys> & keys() const { DARABONBA_PTR_GET_CONST(keys_, vector<Models::ModifyPerformanceViewRequestViewDetailCategoriesKeys>) };
    inline vector<Models::ModifyPerformanceViewRequestViewDetailCategoriesKeys> keys() { DARABONBA_PTR_GET(keys_, vector<Models::ModifyPerformanceViewRequestViewDetailCategoriesKeys>) };
    inline ModifyPerformanceViewRequestViewDetailCategories& setKeys(const vector<Models::ModifyPerformanceViewRequestViewDetailCategoriesKeys> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline ModifyPerformanceViewRequestViewDetailCategories& setKeys(vector<Models::ModifyPerformanceViewRequestViewDetailCategoriesKeys> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


  protected:
    // The name of the metric category. Valid values:
    // 
    // *   **Node**
    // *   **DiskData**
    // *   **WorkLoad**
    // *   **ResourceGroup**
    std::shared_ptr<string> category_ = nullptr;
    // The metrics.
    std::shared_ptr<vector<Models::ModifyPerformanceViewRequestViewDetailCategoriesKeys>> keys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
