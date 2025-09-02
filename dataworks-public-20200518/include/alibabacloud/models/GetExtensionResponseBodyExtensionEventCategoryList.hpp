// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXTENSIONRESPONSEBODYEXTENSIONEVENTCATEGORYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETEXTENSIONRESPONSEBODYEXTENSIONEVENTCATEGORYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetExtensionResponseBodyExtensionEventCategoryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExtensionResponseBodyExtensionEventCategoryList& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryCode, categoryCode_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
    };
    friend void from_json(const Darabonba::Json& j, GetExtensionResponseBodyExtensionEventCategoryList& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryCode, categoryCode_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
    };
    GetExtensionResponseBodyExtensionEventCategoryList() = default ;
    GetExtensionResponseBodyExtensionEventCategoryList(const GetExtensionResponseBodyExtensionEventCategoryList &) = default ;
    GetExtensionResponseBodyExtensionEventCategoryList(GetExtensionResponseBodyExtensionEventCategoryList &&) = default ;
    GetExtensionResponseBodyExtensionEventCategoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExtensionResponseBodyExtensionEventCategoryList() = default ;
    GetExtensionResponseBodyExtensionEventCategoryList& operator=(const GetExtensionResponseBodyExtensionEventCategoryList &) = default ;
    GetExtensionResponseBodyExtensionEventCategoryList& operator=(GetExtensionResponseBodyExtensionEventCategoryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryCode_ != nullptr
        && this->categoryName_ != nullptr; };
    // categoryCode Field Functions 
    bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
    void deleteCategoryCode() { this->categoryCode_ = nullptr;};
    inline string categoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, "") };
    inline GetExtensionResponseBodyExtensionEventCategoryList& setCategoryCode(string categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline GetExtensionResponseBodyExtensionEventCategoryList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


  protected:
    // The code of the event type.
    std::shared_ptr<string> categoryCode_ = nullptr;
    // The name of the event type.
    std::shared_ptr<string> categoryName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
