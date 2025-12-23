// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHEVENTRESPONSEBODYCATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_PATCHEVENTRESPONSEBODYCATEGORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class PatchEventResponseBodyCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchEventResponseBodyCategories& obj) { 
      DARABONBA_PTR_TO_JSON(categoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
    };
    friend void from_json(const Darabonba::Json& j, PatchEventResponseBodyCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(categoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
    };
    PatchEventResponseBodyCategories() = default ;
    PatchEventResponseBodyCategories(const PatchEventResponseBodyCategories &) = default ;
    PatchEventResponseBodyCategories(PatchEventResponseBodyCategories &&) = default ;
    PatchEventResponseBodyCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchEventResponseBodyCategories() = default ;
    PatchEventResponseBodyCategories& operator=(const PatchEventResponseBodyCategories &) = default ;
    PatchEventResponseBodyCategories& operator=(PatchEventResponseBodyCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->displayName_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline PatchEventResponseBodyCategories& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline PatchEventResponseBodyCategories& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


  protected:
    std::shared_ptr<string> categoryId_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
