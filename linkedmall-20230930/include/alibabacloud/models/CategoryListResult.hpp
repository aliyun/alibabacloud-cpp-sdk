// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATEGORYLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_CATEGORYLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Category.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class CategoryListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CategoryListResult& obj) { 
      DARABONBA_PTR_TO_JSON(categories, categories_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CategoryListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(categories, categories_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CategoryListResult() = default ;
    CategoryListResult(const CategoryListResult &) = default ;
    CategoryListResult(CategoryListResult &&) = default ;
    CategoryListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CategoryListResult() = default ;
    CategoryListResult& operator=(const CategoryListResult &) = default ;
    CategoryListResult& operator=(CategoryListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categories_ == nullptr
        && this->requestId_ == nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<Category> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<Category>) };
    inline vector<Category> getCategories() { DARABONBA_PTR_GET(categories_, vector<Category>) };
    inline CategoryListResult& setCategories(const vector<Category> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline CategoryListResult& setCategories(vector<Category> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CategoryListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<Category>> categories_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
