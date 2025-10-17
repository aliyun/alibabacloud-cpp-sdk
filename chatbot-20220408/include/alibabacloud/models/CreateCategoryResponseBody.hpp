// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCategoryResponseBodyCategory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCategoryResponseBody() = default ;
    CreateCategoryResponseBody(const CreateCategoryResponseBody &) = default ;
    CreateCategoryResponseBody(CreateCategoryResponseBody &&) = default ;
    CreateCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCategoryResponseBody() = default ;
    CreateCategoryResponseBody& operator=(const CreateCategoryResponseBody &) = default ;
    CreateCategoryResponseBody& operator=(CreateCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->requestId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline const CreateCategoryResponseBodyCategory & category() const { DARABONBA_PTR_GET_CONST(category_, CreateCategoryResponseBodyCategory) };
    inline CreateCategoryResponseBodyCategory category() { DARABONBA_PTR_GET(category_, CreateCategoryResponseBodyCategory) };
    inline CreateCategoryResponseBody& setCategory(const CreateCategoryResponseBodyCategory & category) { DARABONBA_PTR_SET_VALUE(category_, category) };
    inline CreateCategoryResponseBody& setCategory(CreateCategoryResponseBodyCategory && category) { DARABONBA_PTR_SET_RVALUE(category_, category) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CreateCategoryResponseBodyCategory> category_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
