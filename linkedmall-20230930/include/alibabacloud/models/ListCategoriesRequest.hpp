// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATEGORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCATEGORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CategoryListQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ListCategoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCategoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListCategoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListCategoriesRequest() = default ;
    ListCategoriesRequest(const ListCategoriesRequest &) = default ;
    ListCategoriesRequest(ListCategoriesRequest &&) = default ;
    ListCategoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCategoriesRequest() = default ;
    ListCategoriesRequest& operator=(const ListCategoriesRequest &) = default ;
    ListCategoriesRequest& operator=(ListCategoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CategoryListQuery & getBody() const { DARABONBA_PTR_GET_CONST(body_, CategoryListQuery) };
    inline CategoryListQuery getBody() { DARABONBA_PTR_GET(body_, CategoryListQuery) };
    inline ListCategoriesRequest& setBody(const CategoryListQuery & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListCategoriesRequest& setBody(CategoryListQuery && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<CategoryListQuery> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
