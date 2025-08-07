// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICECATEGORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICECATEGORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceCategoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceCategoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceCategoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListServiceCategoriesResponseBody() = default ;
    ListServiceCategoriesResponseBody(const ListServiceCategoriesResponseBody &) = default ;
    ListServiceCategoriesResponseBody(ListServiceCategoriesResponseBody &&) = default ;
    ListServiceCategoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceCategoriesResponseBody() = default ;
    ListServiceCategoriesResponseBody& operator=(const ListServiceCategoriesResponseBody &) = default ;
    ListServiceCategoriesResponseBody& operator=(ListServiceCategoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categories_ != nullptr
        && this->requestId_ != nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<string> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
    inline vector<string> categories() { DARABONBA_PTR_GET(categories_, vector<string>) };
    inline ListServiceCategoriesResponseBody& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline ListServiceCategoriesResponseBody& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceCategoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The category list of the service.
    std::shared_ptr<vector<string>> categories_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
