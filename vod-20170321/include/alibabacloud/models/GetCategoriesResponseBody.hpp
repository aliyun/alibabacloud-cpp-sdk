// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATEGORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCATEGORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCategoriesResponseBodyCategory.hpp>
#include <alibabacloud/models/GetCategoriesResponseBodySubCategories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetCategoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCategoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubCategories, subCategories_);
      DARABONBA_PTR_TO_JSON(SubTotal, subTotal_);
    };
    friend void from_json(const Darabonba::Json& j, GetCategoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubCategories, subCategories_);
      DARABONBA_PTR_FROM_JSON(SubTotal, subTotal_);
    };
    GetCategoriesResponseBody() = default ;
    GetCategoriesResponseBody(const GetCategoriesResponseBody &) = default ;
    GetCategoriesResponseBody(GetCategoriesResponseBody &&) = default ;
    GetCategoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCategoriesResponseBody() = default ;
    GetCategoriesResponseBody& operator=(const GetCategoriesResponseBody &) = default ;
    GetCategoriesResponseBody& operator=(GetCategoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->requestId_ == nullptr && return this->subCategories_ == nullptr && return this->subTotal_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline const GetCategoriesResponseBodyCategory & category() const { DARABONBA_PTR_GET_CONST(category_, GetCategoriesResponseBodyCategory) };
    inline GetCategoriesResponseBodyCategory category() { DARABONBA_PTR_GET(category_, GetCategoriesResponseBodyCategory) };
    inline GetCategoriesResponseBody& setCategory(const GetCategoriesResponseBodyCategory & category) { DARABONBA_PTR_SET_VALUE(category_, category) };
    inline GetCategoriesResponseBody& setCategory(GetCategoriesResponseBodyCategory && category) { DARABONBA_PTR_SET_RVALUE(category_, category) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCategoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subCategories Field Functions 
    bool hasSubCategories() const { return this->subCategories_ != nullptr;};
    void deleteSubCategories() { this->subCategories_ = nullptr;};
    inline const GetCategoriesResponseBodySubCategories & subCategories() const { DARABONBA_PTR_GET_CONST(subCategories_, GetCategoriesResponseBodySubCategories) };
    inline GetCategoriesResponseBodySubCategories subCategories() { DARABONBA_PTR_GET(subCategories_, GetCategoriesResponseBodySubCategories) };
    inline GetCategoriesResponseBody& setSubCategories(const GetCategoriesResponseBodySubCategories & subCategories) { DARABONBA_PTR_SET_VALUE(subCategories_, subCategories) };
    inline GetCategoriesResponseBody& setSubCategories(GetCategoriesResponseBodySubCategories && subCategories) { DARABONBA_PTR_SET_RVALUE(subCategories_, subCategories) };


    // subTotal Field Functions 
    bool hasSubTotal() const { return this->subTotal_ != nullptr;};
    void deleteSubTotal() { this->subTotal_ = nullptr;};
    inline int64_t subTotal() const { DARABONBA_PTR_GET_DEFAULT(subTotal_, 0L) };
    inline GetCategoriesResponseBody& setSubTotal(int64_t subTotal) { DARABONBA_PTR_SET_VALUE(subTotal_, subTotal) };


  protected:
    // The information about the category.
    std::shared_ptr<GetCategoriesResponseBodyCategory> category_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the subcategory.
    std::shared_ptr<GetCategoriesResponseBodySubCategories> subCategories_ = nullptr;
    // The total number of subcategories.
    std::shared_ptr<int64_t> subTotal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
