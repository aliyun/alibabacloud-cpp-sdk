// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCategoryResponseBodyCategories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCategoryResponseBody() = default ;
    ListCategoryResponseBody(const ListCategoryResponseBody &) = default ;
    ListCategoryResponseBody(ListCategoryResponseBody &&) = default ;
    ListCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCategoryResponseBody() = default ;
    ListCategoryResponseBody& operator=(const ListCategoryResponseBody &) = default ;
    ListCategoryResponseBody& operator=(ListCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categories_ != nullptr
        && this->requestId_ != nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<ListCategoryResponseBodyCategories> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<ListCategoryResponseBodyCategories>) };
    inline vector<ListCategoryResponseBodyCategories> categories() { DARABONBA_PTR_GET(categories_, vector<ListCategoryResponseBodyCategories>) };
    inline ListCategoryResponseBody& setCategories(const vector<ListCategoryResponseBodyCategories> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline ListCategoryResponseBody& setCategories(vector<ListCategoryResponseBodyCategories> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListCategoryResponseBodyCategories>> categories_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
