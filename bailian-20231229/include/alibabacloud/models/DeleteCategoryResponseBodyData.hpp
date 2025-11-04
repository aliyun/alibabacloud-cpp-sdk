// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECATEGORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETECATEGORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class DeleteCategoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCategoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCategoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
    };
    DeleteCategoryResponseBodyData() = default ;
    DeleteCategoryResponseBodyData(const DeleteCategoryResponseBodyData &) = default ;
    DeleteCategoryResponseBodyData(DeleteCategoryResponseBodyData &&) = default ;
    DeleteCategoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCategoryResponseBodyData() = default ;
    DeleteCategoryResponseBodyData& operator=(const DeleteCategoryResponseBodyData &) = default ;
    DeleteCategoryResponseBodyData& operator=(DeleteCategoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline DeleteCategoryResponseBodyData& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


  protected:
    std::shared_ptr<string> categoryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
