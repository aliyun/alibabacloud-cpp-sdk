// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBALBUMREQUESTQUERYSUBSCRIPTIONALBUMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBALBUMREQUESTQUERYSUBSCRIPTIONALBUMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSubAlbumRequestQuerySubscriptionAlbumRequestPage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListSubAlbumRequestQuerySubscriptionAlbumRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubAlbumRequestQuerySubscriptionAlbumRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlbumId, albumId_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubAlbumRequestQuerySubscriptionAlbumRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbumId, albumId_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListSubAlbumRequestQuerySubscriptionAlbumRequest() = default ;
    ListSubAlbumRequestQuerySubscriptionAlbumRequest(const ListSubAlbumRequestQuerySubscriptionAlbumRequest &) = default ;
    ListSubAlbumRequestQuerySubscriptionAlbumRequest(ListSubAlbumRequestQuerySubscriptionAlbumRequest &&) = default ;
    ListSubAlbumRequestQuerySubscriptionAlbumRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubAlbumRequestQuerySubscriptionAlbumRequest() = default ;
    ListSubAlbumRequestQuerySubscriptionAlbumRequest& operator=(const ListSubAlbumRequestQuerySubscriptionAlbumRequest &) = default ;
    ListSubAlbumRequestQuerySubscriptionAlbumRequest& operator=(ListSubAlbumRequestQuerySubscriptionAlbumRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->albumId_ != nullptr
        && this->categoryId_ != nullptr && this->page_ != nullptr && this->title_ != nullptr; };
    // albumId Field Functions 
    bool hasAlbumId() const { return this->albumId_ != nullptr;};
    void deleteAlbumId() { this->albumId_ = nullptr;};
    inline string albumId() const { DARABONBA_PTR_GET_DEFAULT(albumId_, "") };
    inline ListSubAlbumRequestQuerySubscriptionAlbumRequest& setAlbumId(string albumId) { DARABONBA_PTR_SET_VALUE(albumId_, albumId) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int32_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
    inline ListSubAlbumRequestQuerySubscriptionAlbumRequest& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const Models::ListSubAlbumRequestQuerySubscriptionAlbumRequestPage & page() const { DARABONBA_PTR_GET_CONST(page_, Models::ListSubAlbumRequestQuerySubscriptionAlbumRequestPage) };
    inline Models::ListSubAlbumRequestQuerySubscriptionAlbumRequestPage page() { DARABONBA_PTR_GET(page_, Models::ListSubAlbumRequestQuerySubscriptionAlbumRequestPage) };
    inline ListSubAlbumRequestQuerySubscriptionAlbumRequest& setPage(const Models::ListSubAlbumRequestQuerySubscriptionAlbumRequestPage & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListSubAlbumRequestQuerySubscriptionAlbumRequest& setPage(Models::ListSubAlbumRequestQuerySubscriptionAlbumRequestPage && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListSubAlbumRequestQuerySubscriptionAlbumRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> albumId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> categoryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::ListSubAlbumRequestQuerySubscriptionAlbumRequestPage> page_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
