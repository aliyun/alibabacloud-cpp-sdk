// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMPERSONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMPERSONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCustomPersonsResponseBodyCategories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomPersonsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomPersonsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomPersonsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCustomPersonsResponseBody() = default ;
    ListCustomPersonsResponseBody(const ListCustomPersonsResponseBody &) = default ;
    ListCustomPersonsResponseBody(ListCustomPersonsResponseBody &&) = default ;
    ListCustomPersonsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomPersonsResponseBody() = default ;
    ListCustomPersonsResponseBody& operator=(const ListCustomPersonsResponseBody &) = default ;
    ListCustomPersonsResponseBody& operator=(ListCustomPersonsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categories_ == nullptr
        && return this->requestId_ == nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const ListCustomPersonsResponseBodyCategories & categories() const { DARABONBA_PTR_GET_CONST(categories_, ListCustomPersonsResponseBodyCategories) };
    inline ListCustomPersonsResponseBodyCategories categories() { DARABONBA_PTR_GET(categories_, ListCustomPersonsResponseBodyCategories) };
    inline ListCustomPersonsResponseBody& setCategories(const ListCustomPersonsResponseBodyCategories & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline ListCustomPersonsResponseBody& setCategories(ListCustomPersonsResponseBodyCategories && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomPersonsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The array of the figure libraries.
    std::shared_ptr<ListCustomPersonsResponseBodyCategories> categories_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
