// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLASSIFYCOMMODITYRESPONSEBODYDATACATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_CLASSIFYCOMMODITYRESPONSEBODYDATACATEGORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Goodstech20191230
{
namespace Models
{
  class ClassifyCommodityResponseBodyDataCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClassifyCommodityResponseBodyDataCategories& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(Score, score_);
    };
    friend void from_json(const Darabonba::Json& j, ClassifyCommodityResponseBodyDataCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
    };
    ClassifyCommodityResponseBodyDataCategories() = default ;
    ClassifyCommodityResponseBodyDataCategories(const ClassifyCommodityResponseBodyDataCategories &) = default ;
    ClassifyCommodityResponseBodyDataCategories(ClassifyCommodityResponseBodyDataCategories &&) = default ;
    ClassifyCommodityResponseBodyDataCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClassifyCommodityResponseBodyDataCategories() = default ;
    ClassifyCommodityResponseBodyDataCategories& operator=(const ClassifyCommodityResponseBodyDataCategories &) = default ;
    ClassifyCommodityResponseBodyDataCategories& operator=(ClassifyCommodityResponseBodyDataCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryId_ != nullptr
        && this->categoryName_ != nullptr && this->score_ != nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline ClassifyCommodityResponseBodyDataCategories& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline ClassifyCommodityResponseBodyDataCategories& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline ClassifyCommodityResponseBodyDataCategories& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


  protected:
    std::shared_ptr<string> categoryId_ = nullptr;
    std::shared_ptr<string> categoryName_ = nullptr;
    std::shared_ptr<float> score_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Goodstech20191230
#endif
