// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONCATEGORIESRESPONSEBODYNORMALIZATIONCATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONCATEGORIESRESPONSEBODYNORMALIZATIONCATEGORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListNormalizationCategoriesResponseBodyNormalizationCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationCategoriesResponseBodyNormalizationCategories& obj) { 
      DARABONBA_PTR_TO_JSON(NormalizationCategoryId, normalizationCategoryId_);
      DARABONBA_PTR_TO_JSON(NormalizationCategoryName, normalizationCategoryName_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationCategoriesResponseBodyNormalizationCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(NormalizationCategoryId, normalizationCategoryId_);
      DARABONBA_PTR_FROM_JSON(NormalizationCategoryName, normalizationCategoryName_);
    };
    ListNormalizationCategoriesResponseBodyNormalizationCategories() = default ;
    ListNormalizationCategoriesResponseBodyNormalizationCategories(const ListNormalizationCategoriesResponseBodyNormalizationCategories &) = default ;
    ListNormalizationCategoriesResponseBodyNormalizationCategories(ListNormalizationCategoriesResponseBodyNormalizationCategories &&) = default ;
    ListNormalizationCategoriesResponseBodyNormalizationCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationCategoriesResponseBodyNormalizationCategories() = default ;
    ListNormalizationCategoriesResponseBodyNormalizationCategories& operator=(const ListNormalizationCategoriesResponseBodyNormalizationCategories &) = default ;
    ListNormalizationCategoriesResponseBodyNormalizationCategories& operator=(ListNormalizationCategoriesResponseBodyNormalizationCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->normalizationCategoryId_ == nullptr
        && return this->normalizationCategoryName_ == nullptr; };
    // normalizationCategoryId Field Functions 
    bool hasNormalizationCategoryId() const { return this->normalizationCategoryId_ != nullptr;};
    void deleteNormalizationCategoryId() { this->normalizationCategoryId_ = nullptr;};
    inline string normalizationCategoryId() const { DARABONBA_PTR_GET_DEFAULT(normalizationCategoryId_, "") };
    inline ListNormalizationCategoriesResponseBodyNormalizationCategories& setNormalizationCategoryId(string normalizationCategoryId) { DARABONBA_PTR_SET_VALUE(normalizationCategoryId_, normalizationCategoryId) };


    // normalizationCategoryName Field Functions 
    bool hasNormalizationCategoryName() const { return this->normalizationCategoryName_ != nullptr;};
    void deleteNormalizationCategoryName() { this->normalizationCategoryName_ = nullptr;};
    inline string normalizationCategoryName() const { DARABONBA_PTR_GET_DEFAULT(normalizationCategoryName_, "") };
    inline ListNormalizationCategoriesResponseBodyNormalizationCategories& setNormalizationCategoryName(string normalizationCategoryName) { DARABONBA_PTR_SET_VALUE(normalizationCategoryName_, normalizationCategoryName) };


  protected:
    std::shared_ptr<string> normalizationCategoryId_ = nullptr;
    std::shared_ptr<string> normalizationCategoryName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
