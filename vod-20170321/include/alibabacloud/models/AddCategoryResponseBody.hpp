// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddCategoryResponseBodyCategory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddCategoryResponseBody() = default ;
    AddCategoryResponseBody(const AddCategoryResponseBody &) = default ;
    AddCategoryResponseBody(AddCategoryResponseBody &&) = default ;
    AddCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCategoryResponseBody() = default ;
    AddCategoryResponseBody& operator=(const AddCategoryResponseBody &) = default ;
    AddCategoryResponseBody& operator=(AddCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->requestId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline const AddCategoryResponseBodyCategory & category() const { DARABONBA_PTR_GET_CONST(category_, AddCategoryResponseBodyCategory) };
    inline AddCategoryResponseBodyCategory category() { DARABONBA_PTR_GET(category_, AddCategoryResponseBodyCategory) };
    inline AddCategoryResponseBody& setCategory(const AddCategoryResponseBodyCategory & category) { DARABONBA_PTR_SET_VALUE(category_, category) };
    inline AddCategoryResponseBody& setCategory(AddCategoryResponseBodyCategory && category) { DARABONBA_PTR_SET_RVALUE(category_, category) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the category.
    std::shared_ptr<AddCategoryResponseBodyCategory> category_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
