// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONALBUMCATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONALBUMCATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListSubscriptionAlbumCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubscriptionAlbumCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubscriptionAlbumCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
    };
    ListSubscriptionAlbumCategoryRequest() = default ;
    ListSubscriptionAlbumCategoryRequest(const ListSubscriptionAlbumCategoryRequest &) = default ;
    ListSubscriptionAlbumCategoryRequest(ListSubscriptionAlbumCategoryRequest &&) = default ;
    ListSubscriptionAlbumCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubscriptionAlbumCategoryRequest() = default ;
    ListSubscriptionAlbumCategoryRequest& operator=(const ListSubscriptionAlbumCategoryRequest &) = default ;
    ListSubscriptionAlbumCategoryRequest& operator=(ListSubscriptionAlbumCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryName_ != nullptr; };
    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline ListSubscriptionAlbumCategoryRequest& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


  protected:
    std::shared_ptr<string> categoryName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
